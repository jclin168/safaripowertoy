//
//  safari3_override.m
//  SafariPowerToy
//
//  Created by Lin Jian-Cheng on 11/21/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//
// Revision 1.0
//   11/21/2007 by jclin:
//         Using mach_override for Safari 3 in 10.4.11

#import <Cocoa/Cocoa.h>
#import <objc/objc.h>
#import <objc/objc-runtime.h>
#import <WebKit/WebKit.h>
#import "SafariPowerToy.h"
#import "safari3_override.h"
#import "mach_override.h"
#import "char-map/char-map.h"
#import "WebTextRendererExt.h"

typedef unsigned short	UChar;

//==================================================================================
BOOL ConvertUChar( UChar * buf, int nLen )
{
	enum Glyph_E glyph_status = [SafariPowerToy getForGlyph_SafariPowerToy];
	const struct char_map_s * ch_map = NULL;
	int i;
	for( i = 0; i < nLen; i++ )
	{
		if( buf[i] <= 0xff )
			continue;
		if( eTraditional == glyph_status )
			ch_map = simp2trad_lookup( (char *)&buf[i], 2 );
		else
			ch_map = trad2simp_lookup( (char *)&buf[i], 2 );
		if( ch_map != NULL )
			break;
	}
	
	if( ch_map == NULL )
		return FALSE;
	
	while( TRUE )
	{
		if( ch_map != NULL )
		{
			const UChar * ch = (UChar *)(ch_map->dst);
			buf[i] = *ch;
		}
		ch_map = NULL;
		i++;
		if( i >= nLen )
			break;
		if( buf[i] <= 0xff )
			continue;
		if( eTraditional == glyph_status )
			ch_map = simp2trad_lookup( (char *)&buf[i], 2 );
		else
			ch_map = trad2simp_lookup( (char *)&buf[i], 2 );
	}
	return TRUE;
}

//==================================================================================

struct TextRun {
	UChar * m_characters;
	int	m_len;
};

// void Font::drawText(GraphicsContext* context, const TextRun& run, const TextStyle& style, const FloatPoint& point, int from, int to) const
// C++ member function prototype to C-style
//  1. artificial parameter in the first one is Font *
//  2. view references as pointers
typedef void (*Font_drawText_Proc)(void*, void*, void*, void*, void*, int, int );

static Font_drawText_Proc gReentry_Font_drawText = NULL;

void Font_drawText( void* font, void* context, TextRun* run, void* style, void* point, int from, int to )
{
	enum Glyph_E glyph_status = [SafariPowerToy getForGlyph_SafariPowerToy];
	if( eOriginal == glyph_status ) {
		gReentry_Font_drawText( font, context, run, style, point, from, to );
		return;
	}
	
	int len = run->m_len;
	UChar characters[ len ];
	memcpy( characters, run->m_characters, sizeof(UChar)*len );
	if( ConvertUChar( characters, len ) ) {
		TextRun new_run;
		new_run.m_characters = characters;
		new_run.m_len = len;
		gReentry_Font_drawText( font, context, &new_run, style, point, from, to );
	}
	else {
		gReentry_Font_drawText( font, context, run, style, point, from, to );
	}
}

extern BOOL IsObjC2;

@class WebCoreViewFactory;
static void* Get_Font_drawText_Addr()
{
	unsigned long _now_WebCoreViewFactory_sharedFactory = 0;
	if( IsObjC2 == NO ) {
		// 10.4.x
		_now_WebCoreViewFactory_sharedFactory = (unsigned long) [WebCoreViewFactory methodFor:@selector(sharedFactory)];
	}
	else {
		// 10.5.x
		Method method = class_getClassMethod(NSClassFromString( @"WebCoreViewFactory"), 
																@selector(sharedFactory));

		_now_WebCoreViewFactory_sharedFactory = (unsigned long)method_getImplementation(method);
	}
	if( 0 == _now_WebCoreViewFactory_sharedFactory )
		return NULL;
	unsigned long addr_len = 0;
	unsigned long test_addr = _now_WebCoreViewFactory_sharedFactory + 4;
	const unsigned char _code_Font_drawText[] = "\x7c\x08\x02\xa6\x2f\x89\xff\xff";
	while( addr_len < 0x200000 ) {
		addr_len += 4;
		test_addr += 4;
		if( memcmp( (void*)test_addr, _code_Font_drawText, 8 ) == 0 )
			return (void*)test_addr;
	}
	
	return NULL;

#if 0
#ifdef MAC_OS_X_VERSION_10_5
	const unsigned char _code_Font_drawText[] = "\x7c\x08\x02\xa6\x2f\x89\xff\xff";
	const unsigned long _orig_Font_drawText = 0x10f9d0; // 0x10f050
	const unsigned long _orig_WebCoreViewFactory_sharedFactory = 0xb460;	// 0xaf40
	const unsigned long diff = _orig_Font_drawText - _orig_WebCoreViewFactory_sharedFactory;
	Method method = class_getClassMethod(NSClassFromString( @"WebCoreViewFactory"), 
	                                                        @selector(sharedFactory));

	unsigned long _now_WebCoreViewFactory_sharedFactory = (unsigned long)method_getImplementation(method);
	//unsigned long _now_WebCoreViewFactory_sharedFactory = (unsigned long) \
	    class_getMethodImplementation_stret( NSClassFromString(@"WebCoreViewFactory"), \
		                               @selector(sharedFactory));
#else if defined(MAC_OS_X_VERSION_10_4)
	const unsigned long _orig_Font_drawText = 0x95f3c010;
	const unsigned long _orig_WebCoreViewFactory_sharedFactory = 0x95e3e9a0;
	const unsigned long diff = _orig_Font_drawText - _orig_WebCoreViewFactory_sharedFactory;
	unsigned long _now_WebCoreViewFactory_sharedFactory = (unsigned long) \
		[WebCoreViewFactory methodFor:@selector(sharedFactory)];
#endif
#endif
	return NULL;
}

int Safari3_Override()
{
	static BOOL bInit = NO;
	if( bInit == YES )
		return 0;
	
	void * ptr = Get_Font_drawText_Addr();
	if( NULL == ptr )
		return -1;
	kern_return_t err = mach_override_ptr( ptr,
										   (void*)&Font_drawText,
										   (void**)&gReentry_Font_drawText );
	bInit = YES;
	return err;
}

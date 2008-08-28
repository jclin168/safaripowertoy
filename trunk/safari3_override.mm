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

#import <mach-o/loader.h>
#import <mach-o/nlist.h>
#import <mach-o/fat.h>
#import <mach/mach.h>

#import <Cocoa/Cocoa.h>
#import <objc/objc.h>
#import <objc/objc-runtime.h>
#import <WebKit/WebKit.h>
#import "SafariPowerToy.h"
#import "safari3_override.h"
#import "mach_override.h"
#import "char-map/char-map.h"
#import "WebTextRendererExt.h"

#import <fcntl.h>
#import <unistd.h>
#import <sys/types.h>
#import <sys/stat.h>
#import <sys/mman.h>

typedef unsigned short	UChar;
static BOOL find_symbol(unsigned long &ulWebCoreViewFactory_sharedFactory,
						unsigned long &ulWebCoreFontDrawText);

//==================================================================================
BOOL ConvertUChar( UChar * buf, int nLen )
{
	enum Glyph_E glyph_status = [SafariPowerToy getForGlyph_SafariPowerToy];
	const struct char_map_s * ch_map = NULL;
	unsigned int ret_len =0;
	unsigned remain_len = nLen * sizeof(UChar);
	while(remain_len>0)
	{
		if( *buf > 0xff ) {
			if( eTraditional == glyph_status )
				ch_map = simp2trad_lookup_all((char *)buf, &ret_len, remain_len);
			else
				ch_map = trad2simp_lookup_all((char *)buf, &ret_len, remain_len);
			if( ch_map != NULL )
				break;
		}
		remain_len -= 2;
		buf++;
	}
	
	if( ch_map == NULL )
		return FALSE;
	
	while( TRUE )
	{
		if( ch_map != NULL ) {
			memcpy((void*)buf, (void*)(ch_map->dst), ret_len);
			remain_len -= ret_len;
			buf += (ret_len>>1);
		}
		else {
			remain_len -= 2;
			buf ++;
		}
		ch_map = NULL;
		if(remain_len<=0 || *buf == 0x0)
			break;
		if( *buf <= 0xff )
			continue;
		if( eTraditional == glyph_status )
			ch_map = simp2trad_lookup_all((char *)buf, &ret_len, remain_len);
		else
			ch_map = trad2simp_lookup_all((char *)buf, &ret_len, remain_len);
	}
	return TRUE;
}

//==================================================================================

struct TextRun {
	UChar * m_characters;
	int	m_len;
};

// void Font::drawText(GraphicsContext* context, const TextRun& run, const FloatPoint& point, int from, int to) const
// C++ member function prototype to C-style
//  1. artificial parameter in the first one is Font *
//  2. view references as pointers
typedef void (*Font_drawText_Proc)(void*, void*, void*, void*, int, int );

static Font_drawText_Proc gReentry_Font_drawText = NULL;

void Font_drawText( void* font, void* context, TextRun* run, void* point, int from, int to )
{
	enum Glyph_E glyph_status = [SafariPowerToy getForGlyph_SafariPowerToy];
	if( eOriginal == glyph_status ) {
		gReentry_Font_drawText( font, context, run, point, from, to );
		return;
	}
	
	int len = run->m_len;
	UChar characters[ len ];
	int total_len = sizeof(UChar)*len;
	memcpy( characters, run->m_characters, total_len );
	if( ConvertUChar( characters, len ) ) {
		UChar characters_orig[ len ];
		memcpy( characters_orig, run->m_characters, total_len );
		memcpy( run->m_characters, characters, total_len);
#if 0
		for(int i = 0; i < len; i++ ) {
			fprintf(stderr, "%04x ", characters_orig[i] );
		}
		fprintf(stderr, "\n");
		for(int i = 0; i < len; i++ ) {
			fprintf(stderr, "%04x ", characters[i] );
		}
		fprintf(stderr, "\n");
#endif
		gReentry_Font_drawText( font, context, run, point, from, to );
		memcpy( run->m_characters, characters_orig, total_len);
	}
	else {
		gReentry_Font_drawText( font, context, run, point, from, to );
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
	
	unsigned long ulSymWebCoreViewFactory_sharedFactory = 0;
	unsigned long ulSymWebCoreFont_drawText = 0;
	if( find_symbol(ulSymWebCoreViewFactory_sharedFactory, ulSymWebCoreFont_drawText))
	{
		unsigned long base_addr = _now_WebCoreViewFactory_sharedFactory - ulSymWebCoreViewFactory_sharedFactory;
		return (void*)(ulSymWebCoreFont_drawText + base_addr);
	}
	return NULL;
}

int Safari3_Override()
{
	static BOOL bInit = NO;
	if( bInit == YES )
		return 0;
	
	void * ptr = Get_Font_drawText_Addr();
	NSLog( @"Get_Font_drawText = %x", ptr );
	if( NULL == ptr )
		return -1;
	kern_return_t err = mach_override_ptr( ptr,
										   (void*)&Font_drawText,
										   (void**)&gReentry_Font_drawText );
	bInit = YES;
	return err;
}

#define SWAP_INT32( b, n )	(b ? OSSwapInt32(n) : n)
static char * get_fat_mach_header(char *addr, cpu_type_t cpu_type)
{
	struct fat_header* fat_hdr;
	struct mach_header* mach_hdr;
	struct fat_arch *arch;
	int arch_idx;
	BOOL swap_fat = NO;
	
	fat_hdr = (struct fat_header*)addr;
	swap_fat = fat_hdr->magic != FAT_MAGIC;
	if( swap_fat && fat_hdr->magic != FAT_CIGAM ) {
		mach_hdr = (struct mach_header*)addr;
		if( mach_hdr->magic != MH_MAGIC && mach_hdr->magic != MH_CIGAM ) {
			NSLog(@"No valid arch found");
			return NULL;
		}
		return addr;
	}
	
	int num_archs = SWAP_INT32(swap_fat, fat_hdr->nfat_arch);
	arch = (struct fat_arch*)&fat_hdr[1];
	for( arch_idx = 0; arch_idx < num_archs; ++arch_idx, ++arch) {
		mach_hdr = (struct mach_header*)(addr + SWAP_INT32(swap_fat, arch->offset));
		
		if(mach_hdr->magic != MH_MAGIC && mach_hdr->magic != MH_CIGAM )
			continue;
		
		cpu_type_t type = SWAP_INT32(swap_fat, arch->cputype);
		unsigned int mask = SWAP_INT32(swap_fat, CPU_ARCH_MASK);
		if((type & mask) == cpu_type)
			return (char *)mach_hdr;		
	}
	NSLog(@"No valid arch found");
	return NULL;
}

static BOOL find_symbol(unsigned long &ulWebCoreViewFactory_sharedFactory, unsigned long &ulWebCoreFontDrawText)
{
	int fd;
	unsigned long size;
	char *addr;
	struct symtab_command* st;
	static const char * WebCore = "/System/Library/Frameworks/WebKit.framework/Frameworks/WebCore.framework/WebCore";

	if( (fd = open( WebCore, O_RDONLY, 0 )) < 0 ) {
		NSLog(@"%s is not found", WebCore );
		return FALSE;
	}
	
	size = lseek(fd, 0, SEEK_END);
		
	addr = (char*)mmap((void*)0, (size_t)size, PROT_READ, MAP_FILE | MAP_PRIVATE, fd, 0);
	if(addr == (char*)-1 ) {
		NSLog(@"Cannot mmap: %s", strerror(errno));
		NSLog(@"fd=%d size=%d", fd, size);
		close(fd);
		return FALSE;
	}
	
#if defined(__i386__)
	addr = get_fat_mach_header(addr, CPU_TYPE_I386);
#endif
#if defined(__ppc__) || defined(__POWERPC__)
	addr = get_fat_mach_header(addr, CPU_TYPE_POWERPC);
#endif
	
	if(NULL == addr )
		return FALSE;
	
	struct mach_header* mh = (struct mach_header*)addr;
	struct load_command *lc = (struct load_command*)((char *)addr + sizeof(mach_header));
	
	for( int i = 0; i < mh->ncmds; i++ ) {
		if(lc->cmd == LC_SYMTAB)
			st = (struct symtab_command*)lc;
		lc = (struct load_command*)((char *)lc + lc->cmdsize);
	}
	
	if( NULL==st ) {
		NSLog(@"No symbol table found");
		return FALSE;
	}
	
	struct nlist * symtab = (struct nlist *)((char *)addr +st->symoff);
	char *strtab = addr + st->stroff;
	int strsize = st->strsize;
	
	BOOL bFound1 = FALSE;
	BOOL bFound2 = FALSE;
	static const char * sym_WebCoreFontdrawText = "__ZNK7WebCore4Font8drawTextEPNS_15GraphicsContextERKNS_7TextRunERKNS_10FloatPointEii";
	static const char * sym_webCoreViewFactory = "+[WebCoreViewFactory sharedFactory]";
	for( int i =  0; i < st->nsyms; i++ ) {
		if(symtab[i].n_un.n_strx <= 0 || symtab[i].n_un.n_strx > strsize )
			continue;
		char *name = symtab[i].n_un.n_strx + strtab;
		if(strcmp(name, sym_WebCoreFontdrawText)==0) {
			bFound2 = TRUE;
			ulWebCoreFontDrawText = (unsigned long)symtab[i].n_value;
		}
		else if(strcmp(name, sym_webCoreViewFactory)==0) {
			bFound1 = TRUE;
			ulWebCoreViewFactory_sharedFactory = (unsigned long)symtab[i].n_value;
		}
		if( bFound1 && bFound2 )
			break;
	}
		
	if( -1 == munmap(addr,size) ) {
		NSLog(@"unable to munmap: %s", strerror(errno));
	}
	close(fd);
	return bFound1 && bFound2;
}



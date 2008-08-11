/*
 *  NSStringExt.m
 *
 *  GNU General Public License
 *  
 *  SafariPowerToy is copyright (C) 2006 jclin (jiancheng@gmail.com)
 *  
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version 2
 *  of the License, or (at your option) any later version.
 *  
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#import "NSStringExt.h"
#import "WebTextRendererExt.h"
#import "../char-map/char-map.h"

BOOL ConvertNSString( NSString * aString, NSString ** dst )
{
	enum Glyph_E glyph_status = [NSObject getForGlyph_SafariPowerToy];
	if( eOriginal == glyph_status )
		return FALSE;
	if( nil == aString || nil == dst )
		return FALSE;
	int i, nLen = [aString length];
	
	unichar buf[nLen];
	[aString getCharacters:buf];
	
	const struct char_map_s * ch_map = NULL;
	char ch[2];
	for( i = 0; i < nLen; i++ )
	{
		if( buf[i] <= 0xff )
			continue;
#if defined(__ppc__) || defined(__POWERPC__)
		if( glyph_status == eTraditional )
			ch_map = simp2trad_lookup( (char *)&buf[i], 2 );
		else
			ch_map = trad2simp_lookup( (char *)&buf[i], 2 );
#endif
#if defined(__i386__)
		ch[0] = (buf[i]>>8) & 0xff;
		ch[1] = buf[i] & 0xff;
		if( eTraditional == glyph_status )
			ch_map = simp2trad_lookup( (char *)ch, 2 );
		else
			ch_map = trad2simp_lookup( (char *)ch, 2 );
#endif
		if( ch_map != NULL )
			break;
	}
	
	if( ch_map == NULL )
		return FALSE;
	
	while( TRUE )
	{
		if( ch_map != NULL ) {
#if defined(__ppc__) || defined(__POWERPC__)
			const UChar * ch = (UChar *)(ch_map->dst);
			buf[i] = *ch;
#endif
#if defined(__i386__)
			buf[i] = (((unichar)ch_map->dst[0]) << 8) | (ch_map->dst[1] & 0xff);
#endif
		}
		ch_map = NULL;
		i++;
		if( i >= nLen )
			break;
		if( buf[i] <= 0xff )
			continue;
#if defined(__ppc__) || defined(__POWERPC__)
		if( eTraditional == glyph_status )
			ch_map = simp2trad_lookup( (char *)&buf[i], 2 );
		else
			ch_map = trad2simp_lookup( (char *)&buf[i], 2 );		
#endif
#if defined(__i386__)
		ch[0] = (buf[i]>>8) & 0xff;
		ch[1] = buf[i] & 0xff;
		if( eTraditional == glyph_status )
			ch_map = simp2trad_lookup( (char *)ch, 2 );
		else
			ch_map = trad2simp_lookup( (char *)ch, 2 );
#endif
	}
	
	*dst = [[[NSString alloc] initWithCharacters:buf length:nLen] autorelease];
	[*dst retain];
	return TRUE;
}
//=========================================================================================
@interface NSControl (SafariPowerToy)
- (void)setStringValue_hack:(NSString *)aString;
@end

@implementation NSControl (SafariPowerToy)
- (void)setStringValue_hack:(NSString *)aString
{
//	NSLog(@"NSControl %@", aString);
	NSString * newStr;
	if( ConvertNSString( aString, &newStr ) == FALSE )
	{
		[self setStringValue_hack:aString];
		return;
	}
	[newStr autorelease];
	[self setStringValue_hack:newStr];
}
@end
//=========================================================================================

@interface NSButton (SafariPowerToy)
- (void)setTitle_hack:(NSString *)aString;
@end

@implementation NSButton (SafariPowerToy)
- (void)setTitle_hack:(NSString *)aString
{
//	NSLog(@"NSButton %@", aString);
	NSString * newStr;
	if( ConvertNSString( aString, &newStr ) == FALSE )
	{
		[self setTitle_hack:aString];
		return;
	}
	[newStr autorelease];
	[self setTitle_hack:newStr];
}
@end
//=========================================================================================

@interface NSCell (SafariPowerToy)
- (void)setStringValue_hack:(NSString *)aString;
@end

@implementation NSCell (SafariPowerToy)
- (void)setStringValue_hack:(NSString *)aString
{
//	NSLog(@"NSCell setStringValue %@", aString);
	NSString * newStr;
	if( ConvertNSString( aString, &newStr ) == FALSE )
	{
		[self setStringValue_hack:aString];
		return;
	}
	[newStr autorelease];
	[self setStringValue_hack:newStr];
}

@end

@implementation NSString (WebKitExtras)
- (void)_web_drawAtPoint_hack:(NSPoint)point font:(NSFont *)font textColor:(NSColor *)textColor
{
	NSString * newStr;
	if( ConvertNSString( self, &newStr ) == FALSE )
	{
		[self _web_drawAtPoint_hack:point font:font textColor:textColor];
		return;
	}
	[newStr _web_drawAtPoint_hack:point font:font textColor:textColor];
	[newStr dealloc];
}
@end
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
	int nLen = [aString length];
	
	unichar buf[nLen];
	[aString getCharacters:buf];
	
	const struct char_map_s * ch_map = NULL;
	unichar *buf_ptr = buf;
	int remain_len = nLen*sizeof(unichar);
	unsigned int ret_len;
	while(remain_len > 0)
	{
		if( *buf_ptr > 0xff ) {
			if( eTraditional == glyph_status )
				ch_map = simp2trad_lookup_all((char *)buf_ptr, &ret_len, remain_len);
			else
				ch_map = trad2simp_lookup_all((char *)buf_ptr, &ret_len, remain_len);
			if( ch_map != NULL )
				break;
		}
		remain_len-=2;
		buf_ptr++;
	}
	
	if( ch_map == NULL )
		return FALSE;
	
	while( TRUE )
	{
		if( ch_map != NULL ) {
			memcpy((void*)buf_ptr, (void*)(ch_map->dst), ret_len);
			remain_len -= ret_len;
			buf_ptr += (ret_len>>1);
		}
		else {
			remain_len -= 2;
			buf_ptr ++;
		}
		ch_map = NULL;
		if(remain_len < 0 || *buf_ptr == 0x00 )
			break;
		if( *buf_ptr <= 0xff )
			continue;
		if( eTraditional == glyph_status )
			ch_map = simp2trad_lookup_all((char *)buf_ptr, &ret_len, remain_len);
		else
			ch_map = trad2simp_lookup_all((char *)buf_ptr, &ret_len, remain_len);
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
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
#import "SafariPowerToy.h"
#import "WebTextRendererExt.h"
#import "char-map/char-map.h"

@implementation NSString (SafariPowerToy)

- (void)drawAtPoint_hack:(NSPoint)aPoint withAttributes:(NSDictionary *)attributes
{
	enum Glyph_E glyph_status = [NSObject getForGlyph_SafariPowerToy];
	if( glyph_status == eOriginal )
	{
		[self drawAtPoint_hack:aPoint withAttributes:attributes];
		return;
	}
	
	int i, nLen = [self length];
	
	unichar buf[nLen];
	[self getCharacters:buf];
	
	BOOL found;
	const struct char_map_s * ch_map = NULL;
	for( i = 0; i < nLen; i++ )
	{
		if( buf[i] <= 0xff )
			continue;
		if( glyph_status == eTraditional )
			ch_map = simp2trad_lookup( (char *)&buf[i], 2 );
		else
			ch_map = trad2simp_lookup( (char *)&buf[i], 2 );
		if( ch_map != NULL )
		{
			found = TRUE;
			break;
		}
	}
	
	if( !found || ch_map == NULL )
	{
		[self drawAtPoint_hack:aPoint withAttributes:attributes];
		return;
	}

	while( TRUE )
	{
		if( ch_map != NULL )
		{
			const unichar * ch = (unichar *)(ch_map->dst);
			buf[i] = *ch;
			ch_map = NULL;
		}
		i++;
		if( i >= nLen )
			break;
		if( buf[i] <= 0xff )
			continue;
		if( glyph_status == eTraditional )
			ch_map = simp2trad_lookup( (char *)&buf[i], 2 );
		else
			ch_map = trad2simp_lookup( (char *)&buf[i], 2 );
	}
	
	NSString * newStr = [[NSString alloc] initWithCharacters:buf length:nLen];
	[newStr drawAtPoint_hack:aPoint withAttributes:attributes];
	[newStr dealloc];
}

/*
- (void)getCharacters_hack:(unichar *)buf
{
	int i, nLen = [self length];
	[self getCharacters_hack:buf];
	
	for( i = 0; i < nLen; i++ )
	{
		if( buf[i] <= 0xff )
			continue;
		const char * ch_map = simp2trad_lookup( (char *)&buf[i], 2 );
		if( ch_map != NULL )
		{
			unichar ch = ch_map[0] << 8 | ch_map[1];
			buf[i] = ch;
		}
	}
}
*/
@end

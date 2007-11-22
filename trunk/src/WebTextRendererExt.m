/*
 *  WebTextRendererExt.m
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

#import "WebTextRendererExt.h"
#import "../char-map/char-map.h"

@implementation NSObject (SafariPowerToy)

enum Glyph_E glyph_status = eOriginal;

+ (enum Glyph_E)getForGlyph_SafariPowerToy
{
	return glyph_status;
}

+ (void)setForGlyph_SafariPowerToy:(enum Glyph_E)glyph
{
	glyph_status = glyph;
}

- (void)drawRun_hack:(const WebCoreTextRun *)run style:(const WebCoreTextStyle *)style geometry:(const WebCoreTextGeometry *)geometry
{
	NSString * aString = [NSString stringWithCharacters:(unichar *)run->characters
													   length:run->length];
	NSString * newStr;
	if( ConvertNSString( aString, &newStr ) == FALSE )
	{
		[self drawRun_hack:run style:style geometry:geometry];
		return;
	}
	[newStr autorelease];
	UniChar buf[ run->length+1 ];
	[newStr getCharacters:(unichar *)buf];
		
	struct WebCoreTextRun newRun;
	newRun.length = run->length;
	newRun.from = run->from;
	newRun.to = run->to;
	newRun.characters = buf;
	[self drawRun_hack:&newRun style:style geometry:geometry];
}

@end

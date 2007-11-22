/*
 *  SafariPowerToy.h
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
 
enum Glyph_E { eOriginal, eTraditional, eSimplified };

@interface SafariPowerToy : NSObject
{
    IBOutlet id SafariPowerToyMenu;
    IBOutlet id AboutPanel;
    IBOutlet id GlyphPanel;
    IBOutlet id buttonOriginal;
    IBOutlet id buttonTraditional;
    IBOutlet id buttonSimplified;
	enum Glyph_E tempGlyph;
}
- (IBAction)menuAbout:(id)sender;
- (IBAction)menuGlyph:(id)sender;
- (IBAction)performGlyphSet:(id)sender;
- (IBAction)radioGlyphOriginal:(id)sender;
- (IBAction)radioGlyphTraditional:(id)sender;
- (IBAction)radioGlyphSimplified:(id)sender;
@end

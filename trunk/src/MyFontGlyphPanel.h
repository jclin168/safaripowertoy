/* MyFontGlyphPanel */

#import <Cocoa/Cocoa.h>

@interface MyFontGlyphPanel : NSPanel
{
}
- (IBAction)glyphUsingOriginal:(id)sender;
- (IBAction)glyphUsingSimp:(id)sender;
- (IBAction)glyphUsingTrad:(id)sender;
- (IBAction)setForGlyph:(id)sender;
@end

/*
 *  SafariPowerToy.m
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

// Revision 1.0
//   11/21/2007 by jclin:
//         Support Safari 3
//   xx/xx/2006 by jclin:
//         Initial source code

#import <Cocoa/Cocoa.h>
#import "SafariPowerToy.h"
#import "WebTextRendererExt.h"
#import "WebBackForwardListExt.h"
#import </usr/include/objc/objc-class.h>
#import "MethodSwizzling.h"
#import "safari3_override.h"

extern int gPageCacheSize;
@implementation SafariPowerToy

#define SAFARI_IDENTIFIER @"com.apple.Safari"
#define DASHBOARD_IDENTIFIER @"com.apple.dashboard.client"
#define SHIIRA_IDENTIFIER @"jp.hmdt.shiira"
#define SAFARI_POWERTOY_PLIST @"~/Library/Preferences/org.jclin.SafariPowerToy.plist"

-(void)restoreSetting
{
	NSDictionary *dict;
	NSData *data;
	NSString *error;
	NSString *path = SAFARI_POWERTOY_PLIST;
	path = [path stringByExpandingTildeInPath];
	data = [NSData dataWithContentsOfFile:path];
	if( !data )
		return;
	dict = [NSPropertyListSerialization propertyListFromData:data
											mutabilityOption:kCFPropertyListMutableContainers
													  format:NULL
											errorDescription:&error];
	if(!dict)
		return;
	id value = [dict valueForKey:@"GlyphMode"];
	tempGlyph = [value intValue];
	if( tempGlyph != eTraditional && tempGlyph != eSimplified )
		tempGlyph = eOriginal;
	[NSObject setForGlyph_SafariPowerToy:tempGlyph];
}

-(void)saveSetting
{
	NSMutableDictionary *dict = nil;
	NSData *data;
	NSString *error;
	NSString *path = SAFARI_POWERTOY_PLIST;
	path = [path stringByExpandingTildeInPath];
	data = [NSData dataWithContentsOfFile:path];
	if( data )
	{
		dict = [NSPropertyListSerialization propertyListFromData:data
												mutabilityOption:NSPropertyListImmutable
														  format:NULL
												errorDescription:&error];
	}
	if( nil == dict )
		dict = [NSMutableDictionary dictionary];
	int mode = [NSObject getForGlyph_SafariPowerToy];
	[dict setValue:[NSNumber numberWithInt:mode] forKey:@"GlyphMode"];
	data = [NSPropertyListSerialization dataFromPropertyList:dict
													  format:NSPropertyListXMLFormat_v1_0
											errorDescription:&error];
	[data writeToFile:path atomically:YES];
}

-(BOOL)isTargetApplication
{
	NSString* identifier = [[NSBundle mainBundle] bundleIdentifier];
	return ([identifier isEqualToString:SAFARI_IDENTIFIER] ||
			[identifier isEqualToString:SHIIRA_IDENTIFIER]);
}

-(void)awakeFromNib
{
	NSLog(@"awakeFromNib was called.");
	
	[SafariPowerToyMenu setTitle:@"SafariPowerToy"];
	id menuItem = [[[NSMenuItem alloc] initWithTitle:@"SafariPowerToy"
											  action:nil
									   keyEquivalent:@""] autorelease];
	[menuItem setSubmenu:SafariPowerToyMenu];
	id viewMenu = [[[NSApp mainMenu] itemAtIndex:3] submenu];
	if( viewMenu )
		[viewMenu addItem:menuItem];
}

-(BOOL)setupMenu
{
	BOOL result = YES;	
	result &= [NSBundle loadNibNamed:@"SafariPowerToy.nib" owner:self];
	return result;
}

/*
 *    From 10.4.11, Safari's WebKit support. Define SAFARI3
 */
#define SAFARI3
-(id)init
{
	if( (self = [super init]) && [self isTargetApplication] )
	{
		if( ![self setupMenu] )
			self = nil;
		else
		{
			int err;
#ifdef SAFARI2
			err = MethodSwizzle( NSClassFromString(@"WebTextRenderer"), @selector(drawRun:style:geometry:),
								 @selector(drawRun_hack:style:geometry:) );
			if( err )
				NSLog( @"error while swizzling [WebTextRender drawRun:style:geometry:]" );
#endif
#ifdef SAFARI3
			err = Safari3_Override();
			if( err )
				NSLog( @"error while using mach_override for functions" );
#endif
			
			err = MethodSwizzle( NSClassFromString(@"NSButton"), @selector(setTitle:),
								 @selector(setTitle_hack:) );
			if( err )
				NSLog( @"error while swizzling [NSButton setTitle:]" );
			err = MethodSwizzle( NSClassFromString(@"NSControl"), @selector(setStringValue:),
								 @selector(setStringValue_hack:) );
			if( err )
				NSLog( @"error while swizzling [NSControl setStringValue:]" );
			err = MethodSwizzle( NSClassFromString(@"NSCell"), @selector(setStringValue:),
								 @selector(setStringValue_hack:) );
			if( err )
				NSLog( @"error while swizzling [NSCell setStringValue:]" );
			err = MethodSwizzle( NSClassFromString(@"NSComboBox"), @selector(setStringValue:),
								 @selector(setStringValue_hack:) );
			if( err )
				NSLog( @"error while swizzling [NSComboBox setStringValue:]" );
			/*
			err = MethodSwizzle( NSClassFromString(@"WebBackForwardList"), @selector(addItem:),
								 @selector(addItem_hack:) );
			if( err )
				NSLog( @"error while swizzling [WebBackForwardList addItem:]" );
			err = MethodSwizzle( NSClassFromString(@"NSURLRequest"), @selector(initWithURL:),
								 @selector(initWithURL_hack:) );
			if( err )
				NSLog( @"error while swizzling [NSURLRequest initWithURL:]" );
			*/
			[self restoreSetting];
			NSLog( @"SafariPowerToy is loaded" );
		}
	}
	else
		self = nil;
	
#if 0
	NSString* identifier = [[NSBundle mainBundle] bundleIdentifier];
	if([identifier isEqualToString:DASHBOARD_IDENTIFIER])
	{
		id cache = [NSURLCache sharedURLCache];
		[cache setDiskCapacity:1024*1024];
		[cache setMemoryCapacity:512*1024];
		//disable back/forward cache for dashboard
		gPageCacheSize = 0;
		NSLog( @"set dashboard cache to mem:512K, disk:1024K" );
	}
	else if([identifier isEqualToString:SAFARI_IDENTIFIER])
	{
		id cache = [NSURLCache sharedURLCache];
		[cache setDiskCapacity:32*1024*1024];
		[cache setMemoryCapacity:8*1024*1024];
		//limit back/forward cache for Safari
		gPageCacheSize = 1;
		NSLog( @"set safari cache to mem:8M, disk:32M" );
	}
#endif
	
	return self;
}
/*
+ (void) load
{
	if( ![[[NSBundle mainBundle] bundleIdentifier] isEqualTo:@"com.apple.Safari"])
		return;
	[[NSNotificationCenter defaultCenter] addObserver:self
											 selector:@selector(applicationDidFinishLaunching:)
												 name:NSApplicationDidFinishLaunchingNotification object:nil];
	[NSObject setForGlyph_SafariPowerToy:eSimplified];
}

+ (void) applicationDidFinishLaunching:(NSNotification *)aNotification 
{
	int err;
	err = MethodSwizzle( NSClassFromString(@"NSString"), @selector(drawInRect:withAttributes:),
						 @selector(drawInRect_hack:withAttributes:) );
	if( err )
		NSLog( @"error while swizzling [NSString drawInRect:withAttributes:]" );	
	NSLog( @"SafariPowerToy is loaded" );
}
*/

- (IBAction)menuAbout:(id)sender
{
    if ( !AboutPanel )
		[NSBundle loadNibNamed:@"AboutPanel" owner:self];
    
    [AboutPanel makeKeyAndOrderFront:sender];
}

- (IBAction)menuGlyph:(id)sender
{
    if ( !GlyphPanel )
		[NSBundle loadNibNamed:@"GlyphPanel" owner:self];
    
	if( tempGlyph == eTraditional )
		[buttonTraditional performClick:sender];
	else if( tempGlyph == eSimplified )
		[buttonSimplified performClick:sender];
	else
		[buttonOriginal performClick:sender];
    [GlyphPanel makeKeyAndOrderFront:sender];
}

- (IBAction)performGlyphSet:(id)sender
{
	[NSObject setForGlyph_SafariPowerToy:tempGlyph];
	[GlyphPanel close];
	[self saveSetting];
}

- (IBAction)radioGlyphOriginal:(id)sender
{
	NSLog( @"Using Original" );
	tempGlyph = eOriginal;
}

- (IBAction)radioGlyphTraditional:(id)sender
{
	NSLog( @"Using Traditional" );
	tempGlyph = eTraditional;
}

- (IBAction)radioGlyphSimplified:(id)sender
{
	NSLog( @"Using Simplified" );
	tempGlyph = eSimplified;
}


@end
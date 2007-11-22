//
//  WebBackForwardListExt.h
//  SafariPowerToy
//
//  Created by Lin Jian-Cheng on 12/10/06.
//  Copyright 2006 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <WebKit/WebBackForwardList.h>

@interface WebBackForwardList (SafariPowerToy)
- (void)addItem_hack:(WebHistoryItem *)item;

@end

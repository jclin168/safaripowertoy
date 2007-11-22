//
//  WebBackForwardListExt.m
//  SafariPowerToy
//
//  Created by Lin Jian-Cheng on 12/10/06.
//  Copyright 2006 __MyCompanyName__. All rights reserved.
//

#import "WebBackForwardListExt.h"

int gPageCacheSize = 2;

@implementation WebBackForwardList (SafariPowerToy)

- (void)addItem_hack:(WebHistoryItem *)item
{
	if( [self pageCacheSize] > gPageCacheSize )
		[self setPageCacheSize:gPageCacheSize];
	[self addItem_hack:item];
}

@end

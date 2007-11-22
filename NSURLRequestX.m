//
//  NSURLRequestX.m
//  SafariPowerToy
//
//  Created by Lin Jian-Cheng on 9/21/06.
//  Copyright 2006 __MyCompanyName__. All rights reserved.
//

#import "NSURLRequestX.h"

@implementation NSURLRequest (SafariPowerToy)

#define MAX_SUFFIX    9
static NSString * suffix[] = {
	@".htm", @".js", @".css", @".jpg", @".png", @".gif", @".swf", @".jpe", @".jpeg"
};

- (id)initWithURL_hack:(NSURL *)theURL
{
	NSString * str = [theURL absoluteString];
	NSLog(@"URL %@", str );
	return [self initWithURL_hack:theURL];
	/*
	NSRange range;
	int i = 0;
	do
	{
		range = [str rangeOfString:suffix[i] options:NSCaseInsensitiveSearch];
		i++;
	} while( range.location == NSNotFound && i < MAX_SUFFIX);

	if( range.location == NSNotFound )
		return [self initWithURL_hack:theURL];
	return [self initWithURL:theURL cachePolicy:NSURLRequestReturnCacheDataElseLoad timeoutInterval:60];
	*/
}

@end

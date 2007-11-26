#import <objc/objc.h>
#import <objc/objc-runtime.h>
#import "MethodSwizzling.h"

// lifted from: http://www.cocoadev.com/index.pl?MethodSwizzling
// changed method to return error code
int MethodSwizzle(Class aClass, SEL orig_sel, SEL alt_sel)
{
    Method orig_method = nil, alt_method = nil;

    // First, look for the methods
    orig_method = class_getInstanceMethod(aClass, orig_sel);
    alt_method  = class_getInstanceMethod(aClass, alt_sel);

    // If both are found, swizzle them
    if ((orig_method != nil) && (alt_method != nil))
    {
		method_exchangeImplementations( orig_method, alt_method );
	/*
        char *temp1;
        IMP temp2;

        temp1 = orig_method->method_types;
        orig_method->method_types = alt_method->method_types;
        alt_method->method_types = temp1;

        temp2 = orig_method->method_imp;
        orig_method->method_imp = alt_method->method_imp;
        alt_method->method_imp = temp2;
	*/
	return 0;
    }
    // error
    return 1;
}
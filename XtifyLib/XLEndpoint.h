//
//  XLEndpoint.h
//  XtifyPush
//
//  Created by Jeremy Buchman on 7/28/14.
//
//

#import <Foundation/Foundation.h>

@interface XLEndpoint : NSObject

+ (instancetype) get;
- (void) setEuropeanEndpoint;
- (void) setAmericanEndpoint;
@end

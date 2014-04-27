//
//  JJJUtil.h
//  JJJ
//
//  Created by Jovito Royeca on 11/19/13.
//  Copyright (c) 2013 Jovito Royeca. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JJJUtil : NSObject

+ (BOOL) string:(NSString *)string containsString:(NSString*)x;
+ (BOOL) isEmptyString:(NSString*)string;
+ (BOOL) isAlphaStart:(NSString*)string;
+ (NSString*) arrayToString:(NSArray*)arr;
+ (NSString*) toUTF8:(NSString*)string;
+ (NSString*) toASCII:(NSString*)string;
+ (NSString*) trim:(NSString*)string;
+ (NSString*) superScriptOf:(NSString*)string;
+ (NSString*) subScriptOf:(NSString*)string;
+ (NSString*) formatInterval: (NSTimeInterval) interval;
+ (NSArray*) alphabetWithWildcard;

@end
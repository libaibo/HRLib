//
//  HRMath.h
//  test
//
//  Created by Alex on 16/8/29.
//  Copyright © 2016年 li. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface HRMath : NSObject

//MARK:Base64
+ (NSString *)Base64_StringFromData:(NSData *)theData;
+ (NSString *)Base64_stringFromString:(NSString *)string;

//MARK:MD5
+ (NSString *)md5FromString:(NSString*)str;
@end

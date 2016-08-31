//
//  HREnv.h
//  test
//
//  Created by Alex on 16/8/30.
//  Copyright © 2016年 li. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HREnv : NSObject

//bundle version
+ (NSString *)getAppVersion;

//当前手机IP
+ (NSString *)currentIP;

//当前Wi-Fi的SSID:iOS 9 可以使用新的 Network Extension 框架（需要和苹果申请）
+ (NSString *)currentWifiSSID;
@end

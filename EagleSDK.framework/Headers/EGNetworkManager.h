//
//  EGNetworkManager.h
//  EagleSDK
//
//  Created by 顾新生 on 2018/3/14.
//
//  网络状态管理
typedef NS_ENUM(NSInteger, EGNetworkReachabilityStatus) {
    EGNetworkReachabilityStatusUnknown          = -1,
    EGNetworkReachabilityStatusNotReachable     = 0,
    EGNetworkReachabilityStatusReachableViaWWAN = 1,
    EGNetworkReachabilityStatusReachableViaWiFi = 2,
};
#define EGNetworkReachabilityStatus_Change_Channel @"com.linkstec.egnetworkmanager.egnetworkreachabilityStatus"
#import <Foundation/Foundation.h>

@interface EGNetworkManager : NSObject
@property (readonly, nonatomic, assign) EGNetworkReachabilityStatus networkReachabilityStatus;

+(instancetype)manager;
-(void)listenNetwork;

@end

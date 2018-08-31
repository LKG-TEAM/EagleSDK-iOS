//
//  EGSDKLoader.h
//  EagleSDK
//
//  Created by 顾新生 on 2018/3/14.
//

#import <Foundation/Foundation.h>
#import "EGModuleManager.h"

@interface EGSDKLoader : NSObject
+(void)loadSDKWithOptions:(NSDictionary *)launchOptions;
+(void)loadSDKWithOptions:(NSDictionary *)launchOptions debug:(BOOL)isDebug;

+(void)prepare;
+(void)prepareWithOptions:(NSDictionary *)launchOptions mode:(EGModuleMode)mode;
+(instancetype)loader;
@property(nonatomic,assign)BOOL isDebug;

@end

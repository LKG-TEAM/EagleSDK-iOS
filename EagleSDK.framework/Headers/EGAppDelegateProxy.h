//
//  EGAppDelegateProxy.h
//  ib
//
//  Created by 顾新生 on 2018/4/19.
//  Copyright © 2018年 guxinsheng. All rights reserved.
//
#define Proxy(class)        [EGAppDelegateProxy proxyWithTargetClass:(class)]

#import <Foundation/Foundation.h>
@class EGAppDelegateProxy;
static EGAppDelegateProxy *defaultProxy;

@interface EGAppDelegateProxy : NSProxy<UIApplicationDelegate>
@property(nonatomic,strong)id<UIApplicationDelegate> target;

+(NSString *)proxyWithTargetClass:(Class)targetClass;
-(instancetype)init;
+(instancetype)getDefault;
@end

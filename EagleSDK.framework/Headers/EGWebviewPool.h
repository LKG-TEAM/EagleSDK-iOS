//
//  EGWebviewPool.h
//  EagleSDK
//
//  Created by 顾新生 on 2018/4/25.
//

#import <Foundation/Foundation.h>

@interface EGWebviewPool : NSObject
+(instancetype)shared;
-(void)setupPool;
-(WKWebView *)instanceFromPool;

@end

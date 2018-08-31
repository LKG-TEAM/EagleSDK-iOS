//
//  WKWebView+Pool.h
//  EagleSDK
//
//  Created by 顾新生 on 2018/4/25.
//

#import <WebKit/WebKit.h>

@interface WKWebView (Pool)
+(WKWebView *)getPooledInstance;
@property(nonatomic,copy)NSString *extraPath;
@property(nonatomic,copy)NSString *stateJSON;
-(void)setExtraPath:(NSString *)extraPath withState:(NSString *)state withSearch:(NSString *)search withCallback:(NSString *)callback;
@end

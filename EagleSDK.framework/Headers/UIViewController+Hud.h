//
//  UIViewController+Hud.h
//  EagleSDK
//
//  Created by 顾新生 on 2018/3/28.
//

#import <UIKit/UIKit.h>

@interface UIViewController (Hud)
-(void)showHUDWithMsg:(NSString *)msg;
-(void)showHUDWithMsg:(NSString *)msg duration:(CGFloat)duration;

-(void)showInfoHUDWithMsg:(NSString *)msg;
-(void)showInfoHUDWithMsg:(NSString *)msg duration:(CGFloat)duration;

-(void)hideHUDWithComplete:(void(^)(void))completeBlk;
-(void)hideHUD;

-(void)showError:(NSString *)msg;
-(void)showSucces:(NSString *)msg;


+(void)showHUDWithMsg:(NSString *)msg;
+(void)showHUDWithMsg:(NSString *)msg duration:(CGFloat)duration;

+(void)showInfoHUDWithMsg:(NSString *)msg;
+(void)showInfoHUDWithMsg:(NSString *)msg duration:(CGFloat)duration;

+(void)hideHUDWithComplete:(void(^)(void))completeBlk;
+(void)hideHUD;

+(void)showError:(NSString *)msg;
+(void)showSucces:(NSString *)msg;

@end

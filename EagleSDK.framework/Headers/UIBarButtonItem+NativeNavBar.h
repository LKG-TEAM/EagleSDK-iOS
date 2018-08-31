//
//  UIBarButtonItem+NativeNavBar.h
//  EagleSDK
//
//  Created by 顾新生 on 2018/8/20.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (NativeNavBar)
- (instancetype)initWithImage:(nullable UIImage *)image style:(UIBarButtonItemStyle)style target:(nullable id)target bind:(NSString *)targetId;
- (instancetype)initWithImage:(nullable UIImage *)image landscapeImagePhone:(nullable UIImage *)landscapeImagePhone style:(UIBarButtonItemStyle)style target:(nullable id)target  bind:(NSString *)targetId NS_AVAILABLE_IOS(5_0);
- (instancetype)initWithTitle:(nullable NSString *)title style:(UIBarButtonItemStyle)style target:(nullable id)target  bind:(NSString *)targetId;
- (instancetype)initWithBarButtonSystemItem:(UIBarButtonSystemItem)systemItem target:(nullable id)target bind:(NSString *)targetId;
-(instancetype)initWithCustomView:(UIView *)customView bind:(NSString *)targetId;

@property(nonatomic,copy)NSString *targetId;

/** targetObj为执行方法的对象 */
@property(nonatomic,strong)id targetObj;

@property(nonatomic,copy,readonly)NSString *clickChannel;
@end

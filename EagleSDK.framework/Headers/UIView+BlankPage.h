//
//  UIView+BlankPage.h
//  EagleSDK
//
//  Created by 顾新生 on 2018/5/30.
//

#import <UIKit/UIKit.h>

@interface UIView (BlankPage)
- (void)configBlankPage:(EGBlankPageType)blankPageType hasData:(BOOL)hasData hasError:(BOOL)hasError reloadButtonBlock:(void(^)(id sender))block customButtonBlock:(void(^)(UIButton *sender))customButtonBlock;
-(void)setBlankPageWithStatusCode:(NSInteger)statusCode hasData:(BOOL)hasData hasError:(BOOL)hasError reloadButtonBlock:(void(^)(id sender))block customButtonBlock:(void(^)(UIButton *sender))customButtonBlock;
@end

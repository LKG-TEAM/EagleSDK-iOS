//
//  UINavigationItem+LeftItem.h
//  EagleSDK
//
//  Created by 顾新生 on 2018/3/29.
//



@interface UINavigationItem (LeftItem)
@property(nonatomic,weak)UIViewController *containerVC;
-(void)eg_setLeftBarButtonItem:(UIBarButtonItem *)leftItem;
@end

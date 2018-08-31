//
//  EGAutoNavItem_Module.h
//  Pods
//
//  Created by 顾新生 on 2018/2/9.
//

#import <EagleSDK/EagleSDK.h>
#import <EagleSDK/EGPopView.h>
@import UIKit;

@protocol EGAutoNavItemProtocol <NSObject>

@optional

#pragma mark -- PopView
// PopView宽度
- (CGFloat)eg_popContentWidth;
// PopView单个item的高度
- (CGFloat)eg_popItemHeight;
// PopView箭头的point
- (CGPoint)eg_popPoint;
// PopView(如果不满意EGAutoNavItem内的popView样式，可以调用该方法重写)
- (EGPopView *)eg_popView;

#pragma mark -- Item
// Item的字体
- (UIFont *)eg_itemFont:(NSUInteger)row;
// Item的字体颜色
- (UIColor *)eg_itemTextColor:(NSUInteger)row;
// Item icon的大小
- (CGFloat)eg_itemIconSize:(NSUInteger)row;
// Item icon的颜色
- (UIColor *)eg_itemIconColor:(NSUInteger)row;
// Item的背景颜色
- (UIColor *)eg_itemBackgroudColor:(NSUInteger)row;
// Item的分割线颜色
- (UIColor *)eg_itemLineColor:(NSUInteger)row;
// Item的分割线高度
- (CGFloat)eg_itemLineHeight:(NSUInteger)row;

#pragma mark -- NavItem
// NavItem的大小
- (CGFloat)eg_navItemSize;
// NavItem的颜色
- (UIColor *)eg_navItemColor;
// NavItem的字体
- (UIFont *)eg_navItemFont;

#pragma mark -- Actions
// item的点击事件
- (void)eg_itemClickedAtRow:(NSUInteger)row;
// navItem的点击事件
- (void)eg_navItemClickedAtIndex:(NSUInteger)index;

@end

@interface EGAutoNavItem_Module : EGModule<EGModuleExport>

// 初始化
- (void)initAutoNavItemWithSelf:(NSObject *)delegate;
// 设置菜单
- (void)setMenus:(NSArray *)menus;

@end

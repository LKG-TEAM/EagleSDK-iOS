//
//  Eagle_ macros.h
//  Eagle
//
//  Created by 潘涛 on 2017/10/23.
//  Copyright © 2017年 pantao. All rights reserved.
//

#ifndef EGMacros_h
#define EGMacros_h

/**********************************extern*****************************************/
#ifndef EG_EXTERN
#define EG_EXTERN extern
#endif
/**********************************LOG*****************************************/
#ifdef DEBUG  //调试阶段
#define EGLog(...)  NSLog(__VA_ARGS__)
#else //发布阶段
#define EGLog(...)
#endif
/**********************************LOG*****************************************/

/**********************************weak、strong*****************************************/
#define eg_weakify( x ) \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wshadow\"") \
autoreleasepool{} __weak __typeof__(x) __weak_##x##__ = x; \
_Pragma("clang diagnostic pop")

#define eg_strongify( x ) \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wshadow\"") \
try{} @finally{} __typeof__(x) x = __weak_##x##__; \
_Pragma("clang diagnostic pop")
/**********************************weak、strong*****************************************/

/**********************************EGSize*****************************************/
struct EGSize {
    BOOL usePercent;// YES -- 使用百分比布局，反之使用固定值布局
    CGFloat horizontal;
    CGFloat vertical;
    CGFloat width;
    CGFloat height;
};
typedef struct CG_BOXABLE EGSize EGSize;

//CG_EXTERN const CGSize EGSizeZero
//CG_AVAILABLE_STARTING(__MAC_10_0, __IPHONE_2_0);

CG_INLINE EGSize EGSizeMake(BOOL usePercent,
                              CGFloat horizontal,
                              CGFloat vertical,
                              CGFloat width,
                              CGFloat height);

CG_INLINE EGSize
EGSizeMake(BOOL usePercent,
           CGFloat horizontal,
           CGFloat vertical,
           CGFloat width,
           CGFloat height)
{
    EGSize size; size.usePercent = usePercent; size.horizontal = horizontal; size.vertical = vertical; size.width = width; size.height = height; return size;
}
/**********************************EGSize*****************************************/

/**********************************random*****************************************/
#define random(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)/255.0]
#define randomColor random(arc4random_uniform(256), arc4random_uniform(256), arc4random_uniform(256), arc4random_uniform(256))
/**********************************random*****************************************/

// UIScreen width.
#define kScreenWidth          [UIScreen mainScreen].bounds.size.width
// UIScreen height.
#define kScreenHeight         [UIScreen mainScreen].bounds.size.height
// iPhone X
#define kIPhoneX              (kScreenWidth == 375.f && kScreenHeight == 812.f ? YES : NO)
// Status bar height.
#define kStatusBarHeight      (kIPhoneX ? 44.f : 20.f)
// navigation bar height.
#define kNavigationHeight     44.f

#pragma mark -- framework bundle
#define IB_Resource_Bundle(x)   [NSBundle bundleWithPath:[[NSBundle bundleForClass:[self class]] pathForResource:(x) ofType:@"bundle"]]

#pragma mark -- IPhoneX
#define IS_IPHONEX  (CGSizeEqualToSize([UIScreen mainScreen].bounds.size, CGSizeMake(812, 375))||CGSizeEqualToSize([UIScreen mainScreen].bounds.size, CGSizeMake(375, 812)))

#pragma mark -- App.json Parse
#define AppParams                       [UIApplication sharedApplication].appParams
#define KeyPath_App                     @"nativeapp"
#define KeyPath_App_URLS                @"nativeapp.urls"
#define KeyPath_App_Type                @"nativeapp.type"
#define KeyPath_App_Extra               @"nativeapp.extra"
#define KeyPath_App_Extra_Type          @"nativeapp.extra.type"
#define KeyPath_App_Extra_Style         @"nativeapp.extra.style"
#define KeyPath_App_Extra_Params        @"nativeapp.extra.extraParams"

#define KeyPath_WebApp                  @"webapp"

#define KeyPath_Config                  @"configurations"
#define KeyPath_Config_Bugly            @"configurations.bugly"
#define KeyPath_Config_Share            @"configurations.shareSDK"
#define KeyPath_Config_Platforms        @"configurations.shareSDK.platforms"

#define KeyPath(pathA,pathB)            ([NSString stringWithFormat:@"%@.%@",(pathA),(pathB)])

#define EGDEBUG                         ([EGSDKLoader loader].isDebug)

#pragma mark -- Settings.json KeyPath
#define _MakeKeyPath(...)               ([NSString makeKeyPath:@[__VA_ARGS__]])

/*
 * 读取平台配置的settings.json文件
 * 使用方法：EGSettings_ValueOf(@"key1",@"key2",...)
 * 入参按照json中keyPath(@"key1.key2")路径输入当前字段
 */
#define EGSettings_ValueOf(...)         ([[UIApplication sharedApplication]valueForKeyPathInSettings:(_MakeKeyPath(__VA_ARGS__))])


/* 获取web模块的baseURL */
#define WebModule_BaseURL(webModuleName)    ([EGProvider getBaseURLWithModuleName:(webModuleName)])

#endif /* EGMacros_h */

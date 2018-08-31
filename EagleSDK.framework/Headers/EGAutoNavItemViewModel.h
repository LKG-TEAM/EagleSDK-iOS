//
//  EGAutoNavItemViewModel.h
//  EGAutoNavItem
//
//  Created by 顾新生 on 2018/2/9.
//

#import <Foundation/Foundation.h>
#import <EagleSDK/EagleSDK.h>

typedef void (^ParseCallBack)(BOOL justAdd, NSArray * _Nonnull result);

@interface EGAutoNavItemViewModel : EGViewModel<EGViewModel>

- (void)parseMenus:(NSArray *_Nonnull)menus parseCallback:(ParseCallBack _Nullable )parseCallback;

@end

//
//  Eagle.h
//  eagle
//
//  Created by 潘涛 on 2017/10/12.
//  Copyright © 2017年 pantao. All rights reserved.
//

#ifndef Eagle_h
#define Eagle_h

#import <Availability.h>

#ifndef __IPHONE_8_0
#warning "This project uses features only available in iOS SDK 8.0 and later."
#endif

#ifdef __OBJC__
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#endif

#import "EGMacros.h"
#import <objc/runtime.h>
#import <sys/sysctl.h>
#import <mach/mach.h>
#import "EGComponentDefine.h"

#pragma mark -- SDK Loader
#import "EGSDKLoader.h"
#import "EGRouter.h"
#import "EGAppDelegateProxy.h"


#pragma mark -- Provider
#import "EGProvider.h"
#import "EGProviderRouter.h"

#pragma mark -- NavigationVC

#import "UIViewController+EGRootNavigationController.h"
#import "EGRootNavigationController.h"

#pragma mark -- Router
#import "EGRouterManager.h"


#pragma mark -- Module
#import "EGModuleManager.h"
#import "EGRouterManager+Module.h"
#import "NSObject+Service.h"

#pragma mark -- Component
#import "EGComponent.h"// 组件
#import "UIViewController+EGComponent.h"

#pragma mark -- EventBus

#import "NSObject+EventBus.h"
#import "EGEventBus.h"

#pragma mark -- Skin

#import "EGKitManager.h"
#import "EGView.h"
#import "EGButton.h"

#pragma mark -- Networking

#import "EGNetwork.h"
#import "EGNetworkManager.h"
#import "EGHttpSessionManager.h"
#import "EGBaseRequest.h"
#import "EGBatchRequest.h"
#import "EGRequest.h"

#pragma mark -- ZipArchive

#import "EGSanboxFile.h"
#import "EGFileManager.h"
#import "EGFileWrapper.h"
#import "EGFileDefines.h"

#pragma mark -- WebKit

#import "NSURLProtocol+WKWebVIew.h"
#import "WebComponent.h"
#import "EGURLProtocol.h"
#import "NSObject+WebComponent.h"
#import "EGWebViewController.h"
#import "EGWebComponentBaseViewModel.h"
#import "WKProcessPool+SharedProcessPool.h"
#import "EGWebviewPool.h"
#import "WKWebView+Pool.h"
#import "WKWebViewJavascriptBridge.h"
#import "EGTabBarManager.h"
#import "WebComponentSettingViewController.h"
#import "EGWebComponentHistory.h"
#import "UIBarButtonItem+NativeNavBar.h"
#import "UIViewController+NativeNavBar.h"
#import "UIApplication+Preload.h"


#pragma mark -- App Frame
#import "EGNaviSlideApp.h"
#import "UIApplication+NaviSlideApp.h"
#import "EGNaviSlideLeftMenuViewController.h"

#import "EGSinglePageApp.h"
#import "UIApplication+SinglePageApp.h"

#pragma mark -- MVVM

#import "NSObject+EGBind.h"
#import "EGViewModel.h"
#import "UIBarButtonItem+EGBarButtonItem.h"
#import "UIButton+EGButton.h"
#import "UIDatePicker+EGDatePicker.h"
#import "UIGestureRecognizer+EGGestureRecognizer.h"
#import "UIRefreshControl+EGRefreshControl.h"
#import "UISegmentedControl+EGSegmentedControl.h"
#import "UISlider+EGSlider.h"
#import "UIStepper+EGStepper.h"
#import "UISwitch+EGSwitch.h"
#import "UITableViewCell+EGTableViewCell.h"
#import "UITextField+EGTextField.h"
#import "UITextView+EGTextView.h"

#pragma mark --catagory
#import "UIImage+Color.h"
#import "UIButton+Radius.h"
#import "UIImageView+Radius.h"
#import "UILabel+Radius.h"
#import "NSString+EGUtil.h"
#import "NSObject+EGMediator.h"
#import "UIApplication+Config.h"
#import "UIButton+IconFont.h"
#import "EGModule+Resource.h"
#import "UIViewController+Hud.h"
#import "UINavigationItem+LeftItem.h"
#import "EGURL+Extension.h"
#import "UIApplication+App.h"
#import "NSInvocation+Proxy.h"
#import "UIViewController+BlankPage.h"
#import "UIView+BlankPage.h"
#import "EGComponent+Xib.h"
#import "UIButton+RoundCorner.h"
#import "NSString+DateHelper.h"
#import "UIImage+Font.h"
#import "NSString+SafeBase64.h"

#pragma mark -- Hex
#import "UIColor+EGHex.h"

#pragma mark --Search Controller
#import "EGSearchHeaderProtocol.h"
#import "EGSearchHeaderDefault.h"
#import "EGSearchViewController.h"

#pragma mark -- MVVM
#import "EGComponentJsonParser.h"
#import "EGVCJsonBuilderManager.h"
#import "UIViewController+ViewModel.h"
#import "EGComponent+JSONInject.h"

#pragma mark -- ModalMenu
#import "EGModalMenu.h"

#pragma mark -- EGChainKit

#import "EGChainKitHeader.h"

#pragma mark -- GuideView
#import "hDisplayView.h"

#import "EGPopView.h"

#import "EGAutoNavItem.h"

#pragma mark -- EGURL
#import "EGURL.h"

#pragma mark -- EGUserSession
#import "EGUserSession.h"

#pragma mark -- Third
#import <AFNetworking/AFNetworking.h>
#import <ReactiveObjC/ReactiveObjC.h>

#pragma mark -- EGEncryption
#import "NSString+MD5.h"
#import "NSString+DES.h"
#import "GTMBase64.h"

#endif /* Eagle_h */

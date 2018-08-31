//
//  WebComponent.h
//  EG
//
//  Created by 顾新生 on 2017/11/2.
//  Copyright © 2017年 pantao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WKWebViewJavascriptBridge.h"
#import "EGComponent.h"
#import "EGEventBus.h"
#import "NSURLProtocol+WKWebVIew.h"
#import "EGComponentJsonParser.h"
#define EGW_OpenURL_Channel @"EGW_OpenURL_Channel"

#pragma mark -- Internal JS Call Native Methods
#define EGWGetSystemInfoHandler     @"_getSystemInfo_"
#define EGWGetNetworkTypeHandler    @"_getNetworkType_"
#define EGWGetAppVersionHandler     @"_getAppVersion_"
#define EGWGenerateQRCodeHandler    @"_generateQRCode_"
#define EGWOpenQRCodeHandler        @"_openQRCode_"
#define EGWOpenAlbumHandler         @"_openAlbum_"
#define EGWOpenCameraHandler        @"_openCamera_"
#define EGWGetLocationInfoHandler   @"_getLocationInfo_"
#define EGWCloseWindowHandler       @"_closeWindow_"
#define EGWOpenWindowHandler        @"_openWindow_"
#define EGWSetNavBarStyleHandler    @"_setNavBarStyle_"
#define EGWSetOptionMenuHandler     @"_setOptionMenu_"
#define EGWFetchDataHandler         @"_fetchData_"
#define EGWGoBackHandler            @"_goBack_"
#define EGWOnHistroyChangeHandler   @"_onHistoryChange_"
#define EGWLogHandler               @"_log_"
#define EGSetNavigationBarHandler   @"_setNavigationBar_"
#define EGHistoryCallbackHandler    @"_historyCallback_"

@protocol WebComponentDelegate;
@protocol WebComponent<WebComponentDelegate>

@property(nonatomic,strong)NSURL *loadURL;
@property(nonatomic,strong)NSArray *handlers;

-(void)setupNavi:(NSString *)routePath option:(NSDictionary *)option;

@end

@protocol WebComponentDelegate<NSObject>

/**
 js Call native 事件处理

 @param handler handler名称
 @param data 传入数据
 @param callback js回调
 */
@required
-(void)navtiveCall:(NSString *)handler data:(id)data callBack:(TopicResultBlock)callback;



/**
 
 native Call js 结果回调

 @param handler handler名称
 @param responseData 返回数据
 */
@optional
-(void)jsCallback:(NSString *)handler response:(id)responseData;

@optional
/**
 url拦截调用

 @param handler handler名称
 @param msg 信息
 */
-(void)urlCall:(NSString *)handler params:(NSArray *)params msg:(id)msg;




@end

@interface WebComponent : EGComponent<EGComponentJSONDataSourceInjectable>
@property(nonatomic,weak)NSObject<WebComponentDelegate> *webDelegate;
@property(nonatomic,strong)NSURL *loadURL;
@property(nonatomic,copy)NSString *mimeType;

/**
 WebComponent的识别id，唯一，默认是自己的hash值
 */
@property(nonatomic,copy)NSString *identifier;
@property(nonatomic,strong)WKWebView *_webView;

-(void)addTarget:(NSObject<WebComponentDelegate> *)webDelegate andIdentifier:(NSString *)identifier;
-(void)addHandlers:(NSArray *)handlers withTarget:(id<WebComponentDelegate>)delegate;
-(void)callJSHandler:(NSString *)handler from:(id)target options:(id)options complete:(TopicBlock)completeBlock;
-(void)goBackWithData:(id)data;
-(void)goBack;

-(void)setFullScreen:(BOOL)flag;


/**
 Check the object is this webview;

 @param object Object
 @return BOOL ==
 */
-(BOOL)isEqualWebView:(id)object;
- (void)reloadWithCurrentVM;

@property(nonatomic,strong)NSMutableDictionary *jsonDataSource;

@end



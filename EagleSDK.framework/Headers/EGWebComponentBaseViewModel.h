//
//  EGWebComponentBaseViewModel.h
//  EagleSDK
//
//  Created by 顾新生 on 2018/2/12.
//

typedef TopicResultBlock JSCallBack;
typedef void(^JSCallNativeBlock)(NSString *handler,id data,JSCallBack callback);
#define EGW_InternalHandler_ImageCompressRatio   1.0
#define CODE_SUCCESS    200
#define CODE_NOTFOUND   404
#define CODE_FAIL   500

#import <EagleSDK/EagleSDK.h>
#import "EGViewModel.h"

@interface EGWebComponentBaseViewModel : EGViewModel<WebComponent>

@property(nonatomic,assign,readonly)BOOL tabBarHidden;

@property(nonatomic,strong)NSURL *loadURL;
@property(nonatomic,strong)NSArray *handlers;
-(void)jsCallNativeForUndefinedHandler:(NSString *)handler data:(id)data callBack:(JSCallBack)callback;

@end

@interface EGWebComponentInternalHandler:NSObject

+(instancetype)handlerWithTarget:(EGViewModel *)target;
-(JSCallNativeBlock)_getSystemInfo_;
-(JSCallNativeBlock)_getNetworkType_;
-(JSCallNativeBlock)_getAppVersion_;
-(JSCallNativeBlock)_generateQRCode_;
-(JSCallNativeBlock)_openQRCode_;
-(JSCallNativeBlock)_openAlbum_;
-(JSCallNativeBlock)_openCamera_;
-(JSCallNativeBlock)_getLocationInfo_;

/**
 需要页面传值的情况，此方法只对原生控制器跳转出来的Webview控制器可以实现页面传值。
 Webview内部页面跳转传值，需要js去实现，原生不做支持。
 
 @return Block
 */
-(JSCallNativeBlock)_closeWindow_;

/**
 需要页面传值的情况，此方法只对原生控制器跳转出来的Webview控制器可以实现页面传值。
 Webview内部页面跳转传值，需要js去实现，原生不做支持。
 
 @return Block
 */
-(JSCallNativeBlock)_openWindow_;
-(JSCallNativeBlock)_setNavBarStyle_;
-(JSCallNativeBlock)_setOptionMenu_;

/**
 网络请求

 @return Block
 */
-(JSCallNativeBlock)_fetchData_;


/**
 history goBack

 @return Block
 */
-(JSCallNativeBlock)_goBack_;



/**
 History change linstener

 @return Block
 */
-(JSCallNativeBlock)_onHistoryChange_;


/**
 js call native log

 @return Block
 */
-(JSCallNativeBlock)_log_;
@end


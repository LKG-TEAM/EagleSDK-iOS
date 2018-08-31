//
//  UIViewController+BlankPage.h
//  EagleSDK
//
//  Created by 顾新生 on 2018/5/4.
//
//   Error 4xx, 5xx

//Bad request 400
//The request had bad syntax or was inherently impossible to be satisfied.

//Unauthorized 401
//The parameter to this message gives a specification of authorization schemes which are acceptable. The client should retry the request with a suitable Authorization header.

//PaymentRequired 402
//The parameter to this message gives a specification of charging schemes acceptable. The client may retry the request with a suitable ChargeTo header.

//Forbidden 403
//The request is for something forbidden. Authorization will not help.

//Not found 404
//The server has not found anything matching the URI given
//
//Internal Error 500
//The server encountered an unexpected condition which prevented it from fulfilling the request.
//
//Not implemented 501
//The server does not support the facility required.
//
//Service temporarily overloaded 502 (TO BE DISCUSSED)

//Gateway timeout 503 (TO BE DISCUSSED)
//This is equivalent to Internal Error 500, but in the case of a server which is in turn accessing some other service, this indicates that the respose from the other service did not return within a time that the gateway was prepared to wait. As from the point of view of the clientand the HTTP transaction the other service is hidden within the server, this maybe treated identically to Internal error 500, but has more diagnostic value.



typedef NS_ENUM(NSUInteger, EGBlankPageType) {
    EGBlankPageTypeDefault = 0,               // 默认空白页
    EGBlankPageTypeAuthFail,                  // 登录认证失效，请去登录
    EGBlankPageTypeResourceNotFound,          // 资源没有找到，404错误
    EGBlankPageTypeUnknownError,              // http未知错误
    EGBlankPageTypeProtocolNotFound,          // 协议没有找到，业务异常
    EGBlankPageTypeLoadFail,                  // 资源加载失败
    EGBlankPageTypeRequestTimeout,            // 请求超时
    EGBlankPageTypeStatusCode400=400,           //Bad request 400
    EGBlankPageTypeStatusCode401=401,           //Unauthorized 401
    EGBlankPageTypeStatusCode402=402,           //PaymentRequired 402
    EGBlankPageTypeStatusCode403=403,           //Forbidden 403
    EGBlankPageTypeStatusCode404=404,           //Not found 404
    EGBlankPageTypeStatusCode500=500,           //Internal Error 500
    EGBlankPageTypeStatusCode501=501,           //Not implemented 501
    EGBlankPageTypeStatusCode502=502,           //Service temporarily overloaded 502
    EGBlankPageTypeStatusCode503=503            //Gateway timeout 503
};
#import <UIKit/UIKit.h>
@interface EGBlankPageView : UIView

@property (nonatomic, strong) UIImageView *blankSceneImageView;     // 定义不同场景对应的场景图片(设计上通过枚举类型来加载不同的图片图层)
@property (nonatomic, strong) UILabel *tipLabel;                    // 定义不同场景对应的提示文字
@property (nonatomic, strong) void(^reloadButtonBlock)(id sender);  // 重新加载按钮触发的块函数引用
@property (nonatomic, strong) void(^customButtonBlock)(UIButton * sender);  // 自定义按钮触发的块函数引用
@property (strong, nonatomic) UIButton *reloadButton;               // 重新加载按钮

@property (strong, nonatomic) UIButton *customButton;               // 自定义功能按钮

/**
 *  根据不同的场景显示不同的BlankPage视图
 *
 *  @param blankPageType 空白页枚举类型，可自由在上方进行扩展
 *  @param hasData       通讯层有无获取到数据
 *  @param hasError      通讯层是否发生非业务异常或错误
 *  @param btnBlock      空白页中按钮所触发的块函数，没有可不定义
 */
- (void)configWithType:(EGBlankPageType)blankPageType
               hasData:(BOOL)hasData
              hasError:(BOOL)hasError
     reloadButtonBlock:(void(^)(id sender))btnBlock
     customButtonBlock:(void(^)(UIButton *sender))customButtonBlock;
@end


@class EGBlankPageView;
@interface UIViewController (BlankPage)

@property(nonatomic,strong)EGBlankPageView *blankPageView;
- (void)configBlankPage:(EGBlankPageType)blankPageType hasData:(BOOL)hasData hasError:(BOOL)hasError reloadButtonBlock:(void(^)(id sender))block customButtonBlock:(void(^)(UIButton *sender))customButtonBlock;
-(void)setBlankPageWithStatusCode:(NSInteger)statusCode hasData:(BOOL)hasData hasError:(BOOL)hasError reloadButtonBlock:(void(^)(id sender))block customButtonBlock:(void(^)(UIButton *sender))customButtonBlock;
@end



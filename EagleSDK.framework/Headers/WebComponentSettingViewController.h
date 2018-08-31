//
//  WebComponentSettingViewController.h
//  EagleSDK
//
//  Created by 顾新生 on 2018/7/6.
//
typedef NS_ENUM(NSInteger,WebComponentSettingSectionCellType) {
    WebComponentSettingSectionCellTypeSwitch,
    WebComponentSettingSectionCellTypeButton,
    WebComponentSettingSectionCellTypeCheckmark
};
typedef void(^AddCompleteHandler)(NSURL *url);
typedef void(^WebComponentSettingCallback) (BOOL isVConsoleOn,BOOL isRefreshOn,NSURL *reloadURL);
#import <UIKit/UIKit.h>

@interface WebComponentSettingViewController : UIViewController
@property(nonatomic,strong)NSMutableDictionary *jsonDataSource;
@property(nonatomic,copy)NSString *identifier;
@property(nonatomic,copy)WebComponentSettingCallback callback;
@end

@interface WebComponentSettingSectionCell : UITableViewCell
@property(nonatomic,assign)WebComponentSettingSectionCellType type;
@property(nonatomic,strong)UISwitch *switchView;
@property(nonatomic,strong)UIButton *cellButton;
@property(nonatomic,strong)UIButton *checkBtn;
-(void)configureWithData:(NSMutableDictionary *)dict;
-(instancetype)initWithStyle:(UITableViewCellStyle)style type:(WebComponentSettingSectionCellType)type reuseIdentifier:(NSString *)reuseIdentifier;
@end

@interface WebComponentSettingAddViewController : UIViewController
@property(nonatomic,copy)AddCompleteHandler completeHandler;
@property(nonatomic,strong)NSURL *url;

@end


@interface WebComponentSettingPopMenu : UIView
+(void)show;
+(void)hide;
+(instancetype)sharedInstance;

@end
@interface WebComponentSettingPopInputMenu : WebComponentSettingPopMenu
+(void)showWithText:(NSString *)text;
@end

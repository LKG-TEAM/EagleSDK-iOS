//
//  UIApplication+Config.h
//  EagleSDK
//
//  Created by 顾新生 on 2018/3/9.
//

#import <UIKit/UIKit.h>

@interface UIApplication (Config)
    
/**   Params from app.json   */
@property(nonatomic,strong)NSDictionary *appParams;
/**   Params from settings.json   */
@property(nonatomic,strong)NSDictionary *settingParams;
/**   Fontname import   */
@property(nonatomic,copy)NSString *fontName;

/**   Confiuration Params from app.json   */
-(NSDictionary *)configurations;

@property (nonatomic, strong) NSDictionary *urlParams;

/**
 Read Settings.json with keyPath

 @param keyPath keyPath
 @return value
 */
-(id)valueForKeyPathInSettings:(NSString *)keyPath;
@end

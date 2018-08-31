//
//  EGProvider.h
//  EagleSDK
//
//  Created by 顾新生 on 2018/4/16.
//
typedef NS_ENUM(NSInteger,EGProviderOpenURLActionType) {
    EGProviderOpenURLActionTypeDefault=0,
    EGProviderOpenURLActionTypeOptions,
    EGProviderOpenURLActionTypeSource
};
typedef BOOL(^EGProviderOpenURLAction)(UIApplication *application,NSURL *url,NSDictionary<UIApplicationOpenURLOptionsKey,id> *options,NSString *sourceApplication,id annotation);

#import <Foundation/Foundation.h>

/*  This is an super class of provider service.
 *  To use provider,you must add methods to catagories.
 */
@interface EGProvider : NSObject<UIApplicationDelegate>
@property(nonatomic,strong)NSMutableDictionary *moduleProviders;
+(instancetype)defaultProvider;

+(NSString *)getBaseURLWithModuleName:(NSString *)moduleName;

/**
 Regist actions for UIApplicationDelegate methods openURL.

 @param type Which openURL method called.
 @param actionBlock Action block.Params passed in block may be nil according to type.
 */
+(void)registOpenURL:(EGProviderOpenURLActionType)type action:(EGProviderOpenURLAction)actionBlock;


/**
 For dev.
 Change ViewController.json at runtime

 @param vcClazz vcClazz
 @param value value
 @param keyPath keyPath
 */
+(void)updateVCJSONWithClass:(Class)vcClazz withValue:(id)value forKeyPath:(NSString *)keyPath;

@end

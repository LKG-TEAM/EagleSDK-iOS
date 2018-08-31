//
//  EGModuleManager.h
//  EagleSDK
//
//  Created by 顾新生 on 2018/2/7.
//
#define RegistModule() +(void)load{\
[super load];\
}

#define RegistService(module,service) +(void)load{\
[super load];\
[[EGModuleManager manager]registService:self name:(service) inModule:(module)];\
}


#define EGModuleRouter(module)     ([[EGModuleManager manager]moduleRouter:(module)])
#define EGModuleHashRouter(module,vcRoute)         ([[EGModuleManager manager]hashRoute:(module) hashValue:(vcRoute)])

// 获取所在模块下的bundle
#define EGModule_Bundle(bundleName) [NSBundle bundleWithPath:[[NSBundle bundleForClass:[self class]] pathForResource:bundleName ofType:@"bundle"]]

typedef NS_ENUM(NSInteger,EGModuleMode) {
    EGModuleModeDev,
    EGModuleModeProduction
};

typedef NS_ENUM(NSInteger,EGModuleType) {
    EGModuleTypeNative,
    EGModuleTypeWeb,
    EGModuleTypeUnknown
};

#import <Foundation/Foundation.h>
#import "NSObject+EventBus.h"
#import "NSObject+Service.h"
#import "EGRequest.h"
#pragma mark ----------------EGModuleService Protocol-----------------
@class EGProviderRouter;
@protocol EGService<NSObject>

@required

/**
 Service must implement this method.
 When call a service, all requests related with instance with call this method.

 @param params Input params.
 @param resultHandler Result callback.
 */
-(void)onCallWithParams:(id)params resultHandler:(ServiceCallback)resultHandler;


@end


#pragma mark ----------------EGModuleExport Protocol-----------------
@protocol EGModuleExport<NSObject>

+(NSString *)mainRoute;

@optional


/**
 Set Moduel default entrance

 @return An array contains all route export.
 */
+(NSArray *)exportDefault;

@optional
/**
 Set Module export services
 
 @return An array contains all public services.
 */
+(NSArray *)exportService;


@optional

/**
 If want to enable to start app from a module router,implement this method.

 @return An instance that let keywindow load as rootviewcontroller.
 */
+(UIViewController *)exportAppLoader;

@optional
/**
 If want to add a provider with router,implement this method.
 
 */
+(void)registProviderRouter:(EGProviderRouter *)router;


/**
 Do some jobs to initialize module when app did finish lauch.
 */
//+(void)moduleInitializeWithOptions:(NSDictionary *)launchOptions;

+(void)moduleInitializeWithOptions:(NSDictionary *)launchOptions mode:(id)mode;
@end

#pragma mark ----------------EGModule-----------------
/**
 Module define.
 */
@interface EGModule:NSObject

@property(nonatomic,copy)NSString *moduleName;
+(instancetype)shared;
+ (void)moduleInitializeWithOptions:(NSDictionary *)launchOptions mode:(id)mode;
@end


#pragma mark ----------------EGModuleManager-----------------
/**
 Manager all modules that add to app.
 */
@interface EGModuleManager : NSObject


+(instancetype)manager;
-(NSArray<Class> *)moduleList;

-(EGModuleType)moduleTypeWithURL:(NSString *)moduleURL;

-(void)registModule:(Class)moduleClass;


-(NSString *)moduleRouter:(NSString *)module;


/**
 Make a hash url.
 Like: eagle://module/IBCustomer/#!/IBCustomerDetailViewController

 @param module ModuleName
 @param vcRoute Controller to add route
 @return Hash URL
 */
-(NSString *)hashRoute:(NSString *)module hashValue:(NSString *)vcRoute;


/**
 ViewController regist router in module.

 @param module Module
 @param vcClazz ViewController class.
 @param router ViewController defined route.
 */
-(void)regitstModuleRouter:(NSString *)module vc:(Class)vcClazz router:(NSString *)router;

-(NSString *)routeInModule:(NSString *)module vc:(NSString *)vcClassName;


/**
 Find module that viewcontroller in.

 @param vcClassName ViewController className.
 @return Module name.
 */
-(NSString *)moduleForVC:(NSString *)vcClassName;


-(NSString *)moduleWithName:(NSString *)lowercaseName;

-(void)bindViewModel:(Class)vmClazz forVC:(NSString *)vcClazz inModule:(NSString *)module;

-(Class)viewModelClassForVC:(NSString *)vcClazz;
-(NSArray<Class> *)viewModelArrayForVC:(NSString *)vcClazz;

#pragma mark -- service
-(void)registService:(Class)clazz name:(NSString *)serviceName inModule:(NSString *)module;
-(NSString *)getService:(NSString *)serviceName inModule:(NSString *)module;
-(void)connect:(NSString *)moduleService params:(NSDictionary *)params resultHandler:(ServiceCallback)resultHandler;
@end

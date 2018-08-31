//
//  EGVCJsonBuilderManager.h
//  EagleSDK
//
//  Created by 顾新生 on 19/12/2017.
//

#import <Foundation/Foundation.h>

@interface EGVCJsonBuilderManager : NSObject
+(instancetype)manager;
-(void)build:(UIViewController *)vc;
-(void)updateVCJSONWithClass:(NSString *)vcClazz withValue:(id)value forKeyPath:(NSString *)keyPath;
@end
@interface EGVCJsonBuilder : NSObject
-(void)buildWithVC:(UIViewController *)vc options:(NSDictionary *)options;
- (void)buildWithVC:(UIViewController *)vc options:(NSDictionary *)options webOptions:(NSDictionary *)webOptions;

@end

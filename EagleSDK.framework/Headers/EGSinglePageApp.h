//
//  EGSinglePageApp.h
//  EagleSDK
//
//  Created by 顾新生 on 2018/6/1.
//

#import <Foundation/Foundation.h>

@interface EGSinglePageApp : NSObject
+(EGSinglePageApp *(^)(NSArray *routes))parseRoutes;
-(void(^)(void))engineStart;
@end

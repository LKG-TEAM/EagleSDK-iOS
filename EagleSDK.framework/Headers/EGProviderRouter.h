//
//  EGProviderRouter.h
//  EagleSDK
//
//  Created by 顾新生 on 2018/4/16.
//

#import <Foundation/Foundation.h>

@interface EGProviderRouter : NSObject
-(void)addRouter:(NSString *)router withSelector:(SEL)sel;
@end

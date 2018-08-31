//
//  EGURL+Extension.h
//  EagleSDK
//
//  Created by 顾新生 on 2018/4/11.
//

#import <EagleSDK/EagleSDK.h>
#import "EGURL.h"
@interface EGURL (Extension)
-(void)addParams:(NSDictionary *)params;
-(NSString *)getViewControllerName;
@end

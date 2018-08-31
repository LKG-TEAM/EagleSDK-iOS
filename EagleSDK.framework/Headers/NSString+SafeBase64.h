//
//  NSString+SafeBase64.h
//  EagleSDK
//
//  Created by 顾新生 on 2018/8/30.
//

#import <Foundation/Foundation.h>

@interface NSString (SafeBase64)
-(NSString *)encodeSafeBase64;
-(NSString *)decodeSafeBase64;
@end

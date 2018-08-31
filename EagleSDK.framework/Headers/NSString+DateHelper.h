//
//  NSString+DateHelper.h
//  EagleSDK
//
//  Created by 顾新生 on 2018/6/10.
//

#import <Foundation/Foundation.h>

@interface NSString (DateHelper)


/**
    时间转换
    超过两天以上   yyyy-MM-dd HH:mm:ss
    昨天         昨天HH:mm:ss
    今天         x小时前
 @param timeStamp 时间戳，单位:秒
 @return 描述字符串
 */
+ (NSString *)stringWithTimeStamp:(NSTimeInterval)timeStamp;
@end

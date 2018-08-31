//
//  EGWebComponentHistory.h
//  EagleSDK
//
//  Created by 顾新生 on 2018/7/25.
//

#import <Foundation/Foundation.h>
@class EGWebComponentHistoryHref;
@interface EGWebComponentHistory : NSObject
@property(nonatomic,copy)NSString *action;
@property(nonatomic,strong)NSArray<EGWebComponentHistoryHref *> *entries;
@property(nonatomic,assign)NSUInteger index;
@property(nonatomic,assign)NSUInteger length;
@property(nonatomic,strong)EGWebComponentHistoryHref *location;
+(instancetype)historyWithDict:(NSDictionary *)dict;
@end
@interface EGWebComponentHistoryHref : NSObject
@property(nonatomic,copy)NSString *hashValue;
@property(nonatomic,copy)NSString *key;
@property(nonatomic,copy)NSString *pathname;
@property(nonatomic,copy)NSString *search;
+(instancetype)hrefWithDict:(NSDictionary *)dict;

@end


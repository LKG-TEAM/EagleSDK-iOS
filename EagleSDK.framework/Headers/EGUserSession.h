//
//  EGUserSession.h
//  EagleSDK
//
//  Created by 顾新生 on 2018/5/8.
//

#define EGUserSession_UserInfo_Key  @"EGUserSession_UserInfo_Key"
#define EGUserSession_Cookie_Channel  @"EGUserSession_Cookie_Channel"

#import <Foundation/Foundation.h>

@interface EGUserSession : NSObject
+(instancetype)currentSession;
-(NSDictionary *)getUserFromSession;

-(NSDictionary *)getUserInfo;
-(void)saveUserInfo:(NSDictionary *)userInfo;

-(id)getCookieFromSession;
-(void)saveCookie:(EGBaseRequest *)request;
+(void)clearSession;

@end

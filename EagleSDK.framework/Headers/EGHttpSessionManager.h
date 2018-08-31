//
//  EGHttpSessionManager.h
//  EagleSDK
//
//  Created by 顾新生 on 2018/4/10.
//

#import <Foundation/Foundation.h>

@interface EGHttpSessionManager : NSObject
+ (instancetype)manager;

- (void)GET:(NSString *)URLString parameters:(nullable id)parameters
   progress:(nullable void (^)(NSProgress *downloadProgress))downloadProgress
    success:(nullable void (^)(NSURLSessionTask *task, id _Nullable responseObject))success
    failure:(nullable void (^)(NSURLSessionTask * _Nullable task, NSError *error))failure;

- (void)POST:(NSString *)URLString parameters:(nullable id)parameters
    progress:(nullable void (^)(NSProgress *uploadProgress))uploadProgress
     success:(nullable void (^)(NSURLSessionTask *task, id _Nullable responseObject))success
     failure:(nullable void (^)(NSURLSessionTask * _Nullable task, NSError *error))failure;

//Silent request without svprogress show.
- (void)silentGET:(NSString *)URLString parameters:(nullable id)parameters
         progress:(nullable void (^)(NSProgress *downloadProgress))downloadProgress
          success:(nullable void (^)(NSURLSessionTask *task, id _Nullable responseObject))success
          failure:(nullable void (^)(NSURLSessionTask * _Nullable task, NSError *error))failure;

- (void)silentPOST:(NSString *)URLString parameters:(nullable id)parameters
          progress:(nullable void (^)(NSProgress *uploadProgress))uploadProgress
           success:(nullable void (^)(NSURLSessionTask *task, id _Nullable responseObject))success
           failure:(nullable void (^)(NSURLSessionTask * _Nullable task, NSError *error))failure;

- (EGHttpSessionManager *(^)(EGRequestSerializerType type))requestSerializerType;
- (EGHttpSessionManager *(^)(EGResponseSerializerType type))responseSerializerType;
- (EGHttpSessionManager *(^)(NSDictionary<NSString *,NSString *> *requestHeaderFieldValue))requestHeaderFieldValueDictionary;

@end

@interface EGHttpRequest:EGBaseRequest
-(instancetype)initWithURL:(id)url;
-(void)setRequestParams:(id)params;
-(void)setRequestMethod:(NSString *)method;
-(void)setRequestSerializerType:(EGRequestSerializerType)requestSerializerType;
-(void)setResponseSerializerType:(EGResponseSerializerType)responseSerializerType;
-(void)setRequestHeaderFieldValueDictionary:(NSDictionary<NSString *,NSString *> *)requestHeaderFieldValueDictionary;
@end



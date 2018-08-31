//
//  NSString+DES.h
//  EagleSDK
//
//  Created by pantao on 2018/8/6.
//

#import <Foundation/Foundation.h>

@interface NSString (DES)

//加密方法
+ (NSString *)encryptUseDES:(NSString *)plainText key:(NSString *)key;
//解密方法
+ (NSString *)decryptUseDES:(NSString *)cipherText key:(NSString *)key;

@end

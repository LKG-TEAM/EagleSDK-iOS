//
//  EGComponent+Xib.h
//  EagleSDK
//
//  Created by 顾新生 on 2018/5/8.
//

#import <EagleSDK/EagleSDK.h>

@interface EGComponent (Xib)
-(UIView *)loadNibFor:(Class)clazzName inModule:(NSString *)moduleName;
-(UIView *)loadNibWithName:(NSString *)nibName forClass:(Class)clazzName inModule:(NSString *)moduleName;

@end

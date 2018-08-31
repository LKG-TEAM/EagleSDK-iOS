//
//  WKProcessPool+SharedProcessPool.h
//  EagleSDK
//
//  Created by 顾新生 on 2018/4/25.
//

#import <WebKit/WebKit.h>
/*! A WKProcessPool object represents a pool of web content processes.
 The process pool associated with a web view is specified by its web view
 configuration. Each web view is given its own web content process until an
 implementation-defined process limit is reached; after that, web views
 with the same process pool end up sharing web content processes.
 */
@interface WKProcessPool (SharedProcessPool)
+ (instancetype)sharedProcessPool;
@end

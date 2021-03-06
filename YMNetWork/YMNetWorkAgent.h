//
//  YMNetWorkAgent.h
//  YMNetWork
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class YMBaseRequest;

@interface YMNetWorkAgent : NSObject
// 不可用
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new  NS_UNAVAILABLE;
// 单例
+ (YMNetWorkAgent *)sharedInstance;

- (void)addRequest:(YMBaseRequest *)request;
// 暂未加此功能
- (void)removeRequest:(YMBaseRequest *)request;
@end

NS_ASSUME_NONNULL_END

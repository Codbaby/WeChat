//
//  MsSocketManager.h
//  WeChat
//
//  Created by Morgen on 2019/10/30.
//  Copyright © 2019 Morgen. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class MsSocketManager;
@protocol MsSocketManagerDelegate <NSObject>

- (void)socket:(MsSocketManager *)sock didConnectToHost:(NSString *)host port:(uint16_t)port;
- (void)socketDidDisconnect:(MsSocketManager *)sock withError:(NSError *)err;
- (void)socket:(MsSocketManager *)sock didReadData:(NSData *)data withTag:(long)tag;

@end

@interface MsSocketManager : NSObject

@property (nonatomic, weak) id<MsSocketManagerDelegate> delegate;
+ (instancetype)sharedInstance;
- (void)onCreate;

// 确保连接
- (void)makeSureConnect;
// 发送数据
- (void)writeData:(NSData *)data withTimeout:(NSTimeInterval)timeout tag:(long)tag;

@end

NS_ASSUME_NONNULL_END

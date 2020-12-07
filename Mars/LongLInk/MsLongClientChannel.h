//
//  MsLongClientChannel.h
//  WeChat
//
//  Created by Morgen on 2019/10/30.
//  Copyright © 2019 Morgen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MsSocketManager.h"
#import "MsModelHeader.h"
#import "MsBuffer.h"

NS_ASSUME_NONNULL_BEGIN

@class MsLongClientChannel;
@protocol MsLongClientChannelDelegate <NSObject>
// 通道打开
- (void)longClientChannelDidOpened:(MsLongClientChannel *)longClientChannel;
// 通道关闭
- (void)longClientChannelDidClosed:(MsLongClientChannel *)longClientChannel;
// 收到数据
- (void)longClientChannel:(MsLongClientChannel *)longClientChannel didReceivedRecord:(MsBuffer *)buffer;
@end

@interface MsLongClientChannel : NSObject <MsSocketManagerDelegate>

@property (nonatomic, weak) id<MsLongClientChannelDelegate> delegate;
+ (instancetype)sharedInstance;
- (void)onCreate;
- (void)initialize;

- (void)doHandShakeLoop;
- (void)doInit;
- (void)doSendClientHello;
- (void)doReceiveServerHello;
- (void)doReceiveCertificateVerify;
- (void)doReceiveNewSessionTicket;
- (void)doReceiveServerFinished;
- (void)doSendClientFinished;
- (void)doComplete;

- (void)writeMsgToSendBuffer:(MsModel *)model addHash:(BOOL)isAdd;
- (void)receive:(NSData *)data;
- (void)doReceiveRecord:(MsBuffer *)buffer;

- (void)send:(MsBuffer *)buffer;

@end

NS_ASSUME_NONNULL_END

//
//  MsShortClientChannel.h
//  WeChat
//
//  Created by Morgen on 2019/10/30.
//  Copyright © 2019 Morgen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MsTask.h"
#import "MsBuffer.h"

NS_ASSUME_NONNULL_BEGIN

@class MsShortClientChannel;
@protocol MsShortClientChannelDelegate <NSObject>

// 收到数据
- (void)shortClientChannel:(MsShortClientChannel *)shortClientChannel didReceivedRecord:(MsBuffer *)buffer;

@end

@interface MsShortClientChannel : NSObject

@property (nonatomic, weak) id<MsShortClientChannelDelegate> delegate;
@property (nonatomic, strong) MsTask *task;
- (instancetype)initWithDelegate:(id<MsShortClientChannelDelegate>)delegate task:(MsTask *)task;

- (void)initialize;

- (void)doHandShakeLoop;
- (void)doInit;
- (void)doSendClientHello;
- (void)doSendEncryptedExtensions;
- (void)doSendEarlyAppData;
- (void)doSendAlert;
- (void)doReceiveServerHello;
- (void)doReceiveServerFinished;
- (void)doReceiveEarlyAppData;
- (void)doReceiveAlert;
- (void)doComplete;

- (void)writeMsgToSendBuffer:(MsModel *)model addHash:(BOOL)isAdd;

- (void)send:(MsBuffer *)buffer;

- (void)TestSend:(MsBuffer *)buffer;

@end

NS_ASSUME_NONNULL_END

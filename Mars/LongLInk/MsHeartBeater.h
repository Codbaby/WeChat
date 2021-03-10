//
//  MsHeartBeater.h
//  WeChat
//
//  Created by Morgen on 2019/11/1.
//  Copyright © 2019 Morgen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MsBuffer.h"

NS_ASSUME_NONNULL_BEGIN

@protocol MsHeartBeaterDelegate <NSObject>
- (void)doSendSmartHeartBeat:(MsBuffer *)buffer;
@end

@interface MsHeartBeater : NSObject

@property (nonatomic, weak) id<MsHeartBeaterDelegate> delegate;

- (void)start;
- (void)stop;

- (void)sendSmartHeartBeat;
- (void)receiveSmartHeartBeat:(MsBuffer *)buffer;

- (void)TestTeceiveSmartHeartBeat:(MsBuffer *)buffer;

@end

NS_ASSUME_NONNULL_END

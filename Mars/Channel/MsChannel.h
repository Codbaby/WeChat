//
//  MsChannel.h
//  WeChat
//
//  Created by Morgen on 2019/10/30.
//  Copyright © 2019 Morgen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MsBuffer.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(uint8_t, MsChannelType) {
    MsChannelTypeNone = 0,
    MsChannelTypeLong = 2,
    MsChannelTypeShort = 3,
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};

@protocol MsChannelDelegate <NSObject>

- (void)doReceiveRecord:(MsBuffer *)buffer;

- (void)doSendToPeer:(NSData *)data;

@end

@interface MsChannel : NSObject

@property (nonatomic, weak) id<MsChannelDelegate> delegate;
@property (nonatomic, assign) MsChannelType type;
- (instancetype)initWithType:(MsChannelType)type;

- (void)buildWriteBuffer:(MsBuffer *)buffer;
- (void)sendToPeer;

- (void)receive:(NSData *)data;

// 更新密钥
- (void)updateConnectionCipherState:(NSData *)expand;

// 更新Writer密钥
- (void)updateWriterConnectionCipherState:(NSData *)expand;
// 更新reader密钥
- (void)updateReaderConnectionCipherState:(NSData *)expand;

// 测试
- (void)TestUpdateReaderConnectionCipherState:(NSData *)expand;

@end

NS_ASSUME_NONNULL_END

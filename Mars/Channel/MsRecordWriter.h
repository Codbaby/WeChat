//
//  MsRecordWriter.h
//  WeChat
//
//  Created by Morgen on 2019/10/30.
//  Copyright © 2019 Morgen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MsConnectionCipherState.h"
#import "MsBuffer.h"

NS_ASSUME_NONNULL_BEGIN

@class MsRecordWriter;
@protocol MsRecordWriterDelegate <NSObject>
- (void)recordWriter:(MsRecordWriter *)recordWriter didWrite:(MsBuffer *)buffer;
@end

@interface MsRecordWriter : NSObject

@property (nonatomic, weak) id<MsRecordWriterDelegate> delegate;
@property (nonatomic, strong) MsConnectionCipherState *connectionCipherState;

- (void)write:(MsBuffer *)buffer;
- (void)writePayload:(MsBuffer *)buffer;

@end

NS_ASSUME_NONNULL_END

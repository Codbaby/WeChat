//
//  MsRecordReader.h
//  WeChat
//
//  Created by Morgen on 2019/10/30.
//  Copyright © 2019 Morgen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MsConnectionCipherState.h"
#import "MsBuffer.h"

NS_ASSUME_NONNULL_BEGIN

@class MsRecordReader;
@protocol MsRecordReaderDelegate <NSObject>

- (void)recordReader:(MsRecordReader *)MsRecordReader didRead:(MsBuffer *)buffer;

@end

@interface MsRecordReader : NSObject

@property (nonatomic, weak) id<MsRecordReaderDelegate> delegate;
@property (nonatomic, strong) MsConnectionCipherState *connectionCipherState;

- (void)received:(NSData *)data;
//- (BOOL)isReadToEnd;
//- (void)getNextRecord;
- (void)decryptRecord:(MsBuffer *)buffer;

@end

NS_ASSUME_NONNULL_END

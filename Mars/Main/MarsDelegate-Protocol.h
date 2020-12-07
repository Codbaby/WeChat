//
//  MarsDelegate-Protocol.h
//  WeChat
//
//  Created by Morgen on 2019/10/30.
//  Copyright © 2019 Morgen. All rights reserved.
//

#ifndef MarsDelegate_Protocol_h
#define MarsDelegate_Protocol_h

#import "MsTask.h"

@protocol MarsDelegate <NSObject>

- (BOOL)onLongLinkOpened;

// 服务端推送
- (void)OnPushWithCmdid:(NSInteger)cmdid opcode:(NSUInteger)opcode data:(NSData *)data;

// 任务
- (NSData *)onRequest2BufferWithTaskID:(NSInteger)taskid;
- (NSInteger)onBuffer2ResponseWithTaskID:(NSInteger)taskid ResponseData:(NSData *)data;
- (NSInteger)onTaskEndWithTaskID:(NSInteger)taskid errType:(NSInteger)errType errCode:(NSInteger)errCode;

@end

#endif /* MarsDelegate_Protocol_h */

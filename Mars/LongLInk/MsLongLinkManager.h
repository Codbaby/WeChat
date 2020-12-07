//
//  MsLongLinkManager.h
//  WeChat
//
//  Created by Morgen on 2019/10/29.
//  Copyright © 2019 Morgen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MarsDelegate-Protocol.h"
#import "MsBuffer.h"

NS_ASSUME_NONNULL_BEGIN

@interface MsLongLinkManager : NSObject

// 初始化
+ (instancetype)sharedInstance;
- (void)onCreate;

// 开启服务
- (void)run;

// 任务系统
@property (nonatomic, weak) id<MarsDelegate> delegate;
- (void)startTask:(MsTask *)task;
- (void)handleTaskBuffer:(MsBuffer *)buffer;
- (void)endTask:(MsTask *)task;

- (void)send:(MsBuffer *)buffer;

- (void)stopSmartHeartBeat;

@end

NS_ASSUME_NONNULL_END

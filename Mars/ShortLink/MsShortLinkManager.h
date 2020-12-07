//
//  MsShortLinkManager.h
//  WeChat
//
//  Created by Morgen on 2019/10/29.
//  Copyright © 2019 Morgen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MarsDelegate-Protocol.h"
#import "MsBuffer.h"

NS_ASSUME_NONNULL_BEGIN

@interface MsShortLinkManager : NSObject

// 初始化
+ (instancetype)sharedInstance;
- (void)onCreate;

- (void)run;

// 任务系统
@property (nonatomic, weak) id<MarsDelegate> delegate;
- (void)startTask:(MsTask *)task;
- (void)endTask:(MsTask *)task buffer:(MsBuffer *)buffer;

@end

NS_ASSUME_NONNULL_END

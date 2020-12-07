//
//  Mars.h
//  WeChat
//
//  Created by Morgen on 2019/10/29.
//  Copyright © 2019 Morgen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MarsDelegate-Protocol.h"

NS_ASSUME_NONNULL_BEGIN

@class MsTask;
@interface Mars : NSObject

@property (nonatomic, weak) id<MarsDelegate> delegate;

+ (instancetype)sharedInstance;
- (void)onCreate;
- (void)setClientVersion:(uint16_t)clientVersion;
- (void)setLonglinkIP:(NSString *)ip port:(uint16_t)port;
- (void)setShortlinkURL:(NSString *)url;
- (void)start;

- (void)startTask:(MsTask *)task;

- (void)stopSmartHeartBeat;

@end

NS_ASSUME_NONNULL_END

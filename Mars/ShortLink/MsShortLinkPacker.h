//
//  MsShortLinkPacker.h
//  WeChat
//
//  Created by Morgen on 2019/11/8.
//  Copyright © 2019 Morgen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MsBuffer.h"

NS_ASSUME_NONNULL_BEGIN

@interface MsShortLinkPacker : NSObject

- (void)pack:(MsBuffer *)buffer;
- (void)unpack:(MsBuffer *)buffer;

@end

NS_ASSUME_NONNULL_END

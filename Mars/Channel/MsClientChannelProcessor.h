//
//  MsClientChannelProcessor.h
//  WeChat
//
//  Created by Morgen on 2019/10/30.
//  Copyright © 2019 Morgen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MsModelHeader.h"
#import "MsHandShakeState.h"

NS_ASSUME_NONNULL_BEGIN

@protocol MsClientChannelProcessorDelegate <NSObject>



@end

@interface MsClientChannelProcessor : NSObject

@property (nonatomic, weak) id<MsClientChannelProcessorDelegate> delegate;

// long
- (ClientHello *)createClientHello:(MsHandShakeState *)handShakeState;
- (void)processServerHello:(ServerHello *)serverHello handShakeState:(MsHandShakeState *)handShakeState;
- (void)processCertificateVerify:(CertificateVerify *)certificateVerify handShakeState:(MsHandShakeState *)handShakeState;
- (void)processNewSessionTicket:(NewSessionTicket *)newSessionTicket handShakeState:(MsHandShakeState *)handShakeState;
- (void)processServerFinished:(Finished *)serverFinished handShakeState:(MsHandShakeState *)handShakeState;
- (Finished *)createClientFinished:(MsHandShakeState *)handShakeState;

// short
- (EncryptedExtensions *)createEncryptedExtensions:(MsHandShakeState *)handShakeState;

@end

NS_ASSUME_NONNULL_END

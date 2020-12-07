//
//  MsHandShakeState.h
//  WeChat
//
//  Created by Msrgen on 2019/10/30.
//  Copyright © 2019 Msrgen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MsBuffer.h"
#import "MsModelHeader.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, MsCipherSuiteType) {
    MsCipherSuiteType_TLS_NULL_WITH_NULL_NULL =                 0x0000,
    /* Addenda from rfc 5289  Elliptic Curve Cipher Suites with
       SHA-256/384 and AES Galois Counter Msde (GCM) */
    MsCipherSuiteType_TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256 = 0xC02B,
    
    /* RFC 5487 - PSK with SHA-256/384 and AES GCM */
    MsCipherSuiteType_TLS_PSK_WITH_AES_128_GCM_SHA256 =         0x00A8,
};

typedef NS_ENUM(NSInteger, MsHandShakeModeType) {
    MsHandShakeModeType_None = 0,
    MsHandShakeModeType_1_RTT_PSK,
    MsHandShakeModeType_1_RTT_ECDH,
    MsHandShakeModeType_0_RTT_PSK,
};

typedef NS_ENUM(NSInteger, MsHandShakeStageType) {
    MsHandShakeStageTypeNone = 0,
    MsHandShakeStageTypeDoInit,
    MsHandShakeStageTypeDoSendClientHello,
    MsHandShakeStageTypeDoSendEncryptedExtensions,
    MsHandShakeStageTypeDoSendEarlyAppData,
    MsHandShakeStageTypeDoSendAlert,
    MsHandShakeStageTypeDoReceiveServerHello,
    MsHandShakeStageTypeDoReceiveCertificateVerify,
    MsHandShakeStageTypeDoReceiveNewSessionTicket,
    MsHandShakeStageTypeDoReceiveServerFinished,
    MsHandShakeStageTypeDoReceiveEarlyAppData,
    MsHandShakeStageTypeDoReceiveAlert,
    MsHandShakeStageTypeDoSendClientFinished,
    MsHandShakeStageTypeDoComplete = 201,
};

@protocol MsHandShakeStateDelegate <NSObject>

@end

@interface MsHandShakeState : NSObject

// 代理
@property (nonatomic, weak) id<MsHandShakeStateDelegate> delegate;
// 握手模式
@property (nonatomic, assign) MsHandShakeModeType mode;
// 步骤标识
@property (nonatomic, assign) MsHandShakeStageType nextStage;
// 密码套件
@property (nonatomic, strong) NSMutableArray *cipherSuites;

// hash
@property (nonatomic, strong) NSData *hashValue;
- (void)createHash256;
- (void)addHash256:(NSData *)data;
- (NSData *)updateHash256;

// 反序列化握手数据
- (void)deserializeMsg:(MsBuffer *)buffer;

// 共享密钥
@property (nonatomic, copy) NSData *static_secret;
@property (nonatomic, copy) NSData *ephemeral_secret;

// 计算阶段密钥
@property (nonatomic, copy) NSData *stageConnCipherState;
- (void)computeStageConnCipherStateWithKey:(NSData *)key Message:(NSString *)message length:(NSInteger)length isUpdateHash:(BOOL)isUpdateHash;

// 校验证书
- (BOOL)verifyCertificate:(NSData *)signature;

// psk密钥
- (NSData *)computeResumptionSecret:(NSString *)message isUpdateHash:(BOOL)isUpdateHash;

// 计算校验值
- (NSData *)computeVerifyData:(NSString *)message isUpdateHash:(BOOL)isUpdateHash;

// 计算app密钥
@property (nonatomic, copy) NSData *master_secret;
- (void)computeMasterSecret:(NSString *)message;

@end

NS_ASSUME_NONNULL_END

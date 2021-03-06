//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IMHandle, NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface IMAVChatProxy : NSObject
{
    NSDictionary *_info;
}

- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)updateWithInfo:(id)arg1;
- (void)finalUpdate;
- (void)endChatWithReason:(unsigned int)arg1;
- (void)endChat;
- (void)declineInvitation;
- (void)cancelInvitation;
- (void)acceptInvitation;
- (void)invite:(id)arg1 additionalPeers:(id)arg2 excludingPushTokens:(id)arg3;
- (void)invite:(id)arg1 additionalPeers:(id)arg2;
- (void)inviteAll;
- (_Bool)_isCallUpgradeTo:(id)arg1;
@property(nonatomic, getter=isRelayed) _Bool relayed;
@property(nonatomic) double connectionTimeoutTime;
@property(nonatomic) double invitationTimeoutTime;
@property(readonly, nonatomic) int endedError;
@property(readonly, nonatomic) unsigned int endedReason;
@property(nonatomic, setter=setMute:) _Bool isMute;
@property(readonly, nonatomic) _Bool isVideo;
@property(readonly, nonatomic) _Bool isCaller;
@property(readonly, nonatomic) _Bool isActive;
- (_Bool)_isProxy;
@property(readonly, retain, nonatomic) IMHandle *otherIMHandle;
@property(readonly, retain, nonatomic) IMHandle *initiatorIMHandle;
@property(readonly, retain, nonatomic) NSArray *remoteParticipants;
@property(readonly, retain, nonatomic) NSDate *dateEnded;
@property(readonly, retain, nonatomic) NSDate *dateConnected;
@property(readonly, retain, nonatomic) NSNumber *dataDownloaded;
@property(readonly, retain, nonatomic) NSNumber *dataUploaded;
@property(readonly, nonatomic) _Bool hasReceivedFirstFrame;
- (void)setLocalAspectRatio:(struct CGSize)arg1 cameraOrientation:(unsigned int)arg2 cameraType:(unsigned int)arg3;
@property(nonatomic) _Bool isSendingVideo;
@property(nonatomic) _Bool isSendingAudio;
@property(readonly, nonatomic) _Bool isStateFinal;
@property(readonly, nonatomic) unsigned int state;
@property(readonly, retain, nonatomic) NSString *conferenceID;
@property(readonly, nonatomic) unsigned int sessionID;
@property(readonly, retain, nonatomic) NSString *GUID;
- (id)account;
- (id)description;
- (void)dealloc;

@end


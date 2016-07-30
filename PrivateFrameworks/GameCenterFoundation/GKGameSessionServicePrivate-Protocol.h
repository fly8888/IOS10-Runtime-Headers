//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/GKGameSessionService-Protocol.h>

@class NSArray, NSString;

@protocol GKGameSessionServicePrivate <GKGameSessionService>
- (oneway void)sendInvitePushForSessionWithID:(NSString *)arg1 userMessage:(NSString *)arg2 recipientIDs:(NSArray *)arg3 handler:(void (^)(NSError *))arg4;
- (oneway void)getFriendPlayersWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)getZonesWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
@end

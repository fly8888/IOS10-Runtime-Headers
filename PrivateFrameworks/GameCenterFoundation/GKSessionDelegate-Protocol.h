//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/NSObject-Protocol.h>

@class GKSession, NSError, NSString;

@protocol GKSessionDelegate <NSObject>

@optional
- (void)session:(GKSession *)arg1 didFailWithError:(NSError *)arg2;
- (void)session:(GKSession *)arg1 connectionWithPeerFailed:(NSString *)arg2 withError:(NSError *)arg3;
- (void)session:(GKSession *)arg1 didReceiveConnectionRequestFromPeer:(NSString *)arg2;
- (void)session:(GKSession *)arg1 peer:(NSString *)arg2 didChangeState:(int)arg3;
@end


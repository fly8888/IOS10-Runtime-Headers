//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class FKPerson, HDFitnessFriendsRelationshipManager, NSString;

@protocol HDFitnessFriendsRelationshipManagerDelegate <NSObject>
- (void)relationshipManager:(HDFitnessFriendsRelationshipManager *)arg1 didRemoveFriendWithUUID:(NSString *)arg2;
- (void)relationshipManager:(HDFitnessFriendsRelationshipManager *)arg1 didUpdateFriendListWithPerson:(FKPerson *)arg2;
@end

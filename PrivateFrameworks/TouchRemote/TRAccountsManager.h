//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore, GKLocalPlayer, NSString, SSAccount;

@interface TRAccountsManager : NSObject
{
    ACAccountStore *_iCloudAccountStore;
}

+ (id)sharedInstance;
@property(retain, nonatomic) ACAccountStore *iCloudAccountStore; // @synthesize iCloudAccountStore=_iCloudAccountStore;
- (void).cxx_destruct;
- (id)accountTypesWithDefaultAccountID:(id)arg1;
- (id)defaultAccountIDForAuthenticationAccountType:(unsigned long long)arg1;
@property(readonly, nonatomic) GKLocalPlayer *localGameCenterPlayer;
@property(readonly, copy, nonatomic) NSString *homeSharingGroupID;
@property(readonly, copy, nonatomic) NSString *homeSharingAppleID;
@property(readonly, nonatomic) ACAccount *activeiCloudAccount;
@property(readonly, nonatomic) SSAccount *activeiTunesStoreAccount;
@property(readonly, copy, nonatomic) NSString *deviceName;

@end


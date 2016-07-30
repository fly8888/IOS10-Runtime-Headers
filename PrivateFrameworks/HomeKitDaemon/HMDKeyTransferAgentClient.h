//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDKeyTransferAgent.h>

#import <HomeKitDaemon/HMFNetServiceBrowserDelegate-Protocol.h>
#import <HomeKitDaemon/HMFNetServiceDelegate-Protocol.h>

@class HMFNetServiceBrowser, NSMutableDictionary, NSMutableSet, NSString;

@interface HMDKeyTransferAgentClient : HMDKeyTransferAgent <HMFNetServiceDelegate, HMFNetServiceBrowserDelegate>
{
    HMFNetServiceBrowser *_serviceBrowser;
    NSMutableDictionary *_idsKeys;
    NSMutableDictionary *_bonjourKeys;
    NSMutableSet *_targetsToProcess;
    NSString *_pairingWithUUID;
}

+ (id)logCategory;
+ (void)twoFactorAuthenticationEnabledForAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSString *pairingWithUUID; // @synthesize pairingWithUUID=_pairingWithUUID;
@property(retain, nonatomic) NSMutableSet *targetsToProcess; // @synthesize targetsToProcess=_targetsToProcess;
@property(retain, nonatomic) NSMutableDictionary *bonjourKeys; // @synthesize bonjourKeys=_bonjourKeys;
@property(retain, nonatomic) NSMutableDictionary *idsKeys; // @synthesize idsKeys=_idsKeys;
@property(readonly) HMFNetServiceBrowser *serviceBrowser; // @synthesize serviceBrowser=_serviceBrowser;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)netServiceBrowser:(id)arg1 didAddService:(id)arg2;
- (void)netService:(id)arg1 didUpdateTXTRecord:(id)arg2;
- (void)_handleKeyTransferAgentMessage:(id)arg1;
- (void)_accessoryIsReachable:(id)arg1;
- (void)__accessoryIsReachable:(id)arg1;
- (void)__deviceRemovedFromAccount:(id)arg1;
- (void)_device:(id)arg1 removedFromAccount:(id)arg2;
- (void)__deviceUpdated:(id)arg1;
- (void)__deviceAddedToAccount:(id)arg1;
- (void)_device:(id)arg1 addedToAccount:(id)arg2;
- (_Bool)_newDeviceSeen:(id)arg1;
- (void)_sendATVPrivateKey:(id)arg1 withDevice:(id)arg2;
- (void)_sendIOSPublicKey:(id)arg1 withDevice:(id)arg2;
- (void)_haveVerifiedTwoFactorAuthenticationWithKeyUUID:(id)arg1 forTarget:(id)arg2;
- (void)_startPairingWithKeyUUID:(id)arg1 forTarget:(id)arg2;
- (void)_endPairingWithError:(id)arg1;
- (id)initWithHomeManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

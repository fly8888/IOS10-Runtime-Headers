//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HMAccessoryDelegate-Protocol.h>
#import <Home/HMAccessoryDelegatePrivate-Protocol.h>
#import <Home/HMHomeDelegate-Protocol.h>
#import <Home/HMHomeDelegatePrivate-Protocol.h>
#import <Home/HMHomeManagerDelegate-Protocol.h>
#import <Home/HMHomeManagerDelegatePrivate-Protocol.h>

@class HMHome, HMHomeManager, NAFuture, NSHashTable, NSMutableArray, NSString;

@interface HFHomeKitDispatcher : NSObject <HMHomeDelegate, HMAccessoryDelegate, HMHomeDelegatePrivate, HMAccessoryDelegatePrivate, HMHomeManagerDelegatePrivate, HMHomeManagerDelegate>
{
    _Bool _hasLoadedHomes;
    HMHomeManager *_homeManager;
    HMHome *_home;
    HMHome *_overrideHome;
    HMHome *_selectedHome;
    NSHashTable *_homeObservers;
    NSHashTable *_homeManagerObservers;
    NSHashTable *_accessoryObservers;
    NSMutableArray *_homePromises;
    NSMutableArray *_allHomesPromises;
}

+ (id)sharedDispatcher;
@property(retain, nonatomic) NSMutableArray *allHomesPromises; // @synthesize allHomesPromises=_allHomesPromises;
@property(retain, nonatomic) NSMutableArray *homePromises; // @synthesize homePromises=_homePromises;
@property(retain, nonatomic) NSHashTable *accessoryObservers; // @synthesize accessoryObservers=_accessoryObservers;
@property(retain, nonatomic) NSHashTable *homeManagerObservers; // @synthesize homeManagerObservers=_homeManagerObservers;
@property(retain, nonatomic) NSHashTable *homeObservers; // @synthesize homeObservers=_homeObservers;
@property(retain, nonatomic) HMHome *selectedHome; // @synthesize selectedHome=_selectedHome;
@property(retain, nonatomic) HMHome *overrideHome; // @synthesize overrideHome=_overrideHome;
@property(nonatomic) _Bool hasLoadedHomes; // @synthesize hasLoadedHomes=_hasLoadedHomes;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (void).cxx_destruct;
- (id)_primaryHome;
- (void)_finishAllHomesPromises:(id)arg1;
- (void)_finishHomePromises:(id)arg1;
- (void)accessory:(id)arg1 didUpdateApplicationDataForService:(id)arg2;
- (void)accessoryDidUpdateApplicationData:(id)arg1;
- (void)accessory:(id)arg1 service:(id)arg2 didUpdateValueForCharacteristic:(id)arg3;
- (void)accessoryDidUpdateReachability:(id)arg1;
- (void)accessoryDidUpdateServices:(id)arg1;
- (void)accessory:(id)arg1 didUpdateAssociatedServiceTypeForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateNameForService:(id)arg2;
- (void)accessoryDidUpdateName:(id)arg1;
- (void)home:(id)arg1 didRemoveResidentDevice:(id)arg2;
- (void)home:(id)arg1 didAddResidentDevice:(id)arg2;
- (void)home:(id)arg1 didUpdateAccessControlForUser:(id)arg2;
- (void)home:(id)arg1 didUpdateAccesoryInvitationsForUser:(id)arg2;
- (void)home:(id)arg1 didUpdateStateForOutgoingInvitations:(id)arg2;
- (void)home:(id)arg1 didUpdateApplicationDataForServiceGroup:(id)arg2;
- (void)home:(id)arg1 didUpdateApplicationDataForActionSet:(id)arg2;
- (void)home:(id)arg1 didUpdateApplicationDataForRoom:(id)arg2;
- (void)homeDidUpdateApplicationData:(id)arg1;
- (void)home:(id)arg1 didUpdateLocation:(id)arg2;
- (void)home:(id)arg1 didEncounterError:(id)arg2 forAccessory:(id)arg3;
- (void)home:(id)arg1 didUnblockAccessory:(id)arg2;
- (void)home:(id)arg1 didUpdateTrigger:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForTrigger:(id)arg2;
- (void)home:(id)arg1 didRemoveTrigger:(id)arg2;
- (void)home:(id)arg1 didAddTrigger:(id)arg2;
- (void)home:(id)arg1 didUpdateActionsForActionSet:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForActionSet:(id)arg2;
- (void)home:(id)arg1 didRemoveActionSet:(id)arg2;
- (void)home:(id)arg1 didAddActionSet:(id)arg2;
- (void)home:(id)arg1 didRemoveService:(id)arg2 fromServiceGroup:(id)arg3;
- (void)home:(id)arg1 didAddService:(id)arg2 toServiceGroup:(id)arg3;
- (void)home:(id)arg1 didUpdateNameForServiceGroup:(id)arg2;
- (void)home:(id)arg1 didRemoveServiceGroup:(id)arg2;
- (void)home:(id)arg1 didAddServiceGroup:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2 fromZone:(id)arg3;
- (void)home:(id)arg1 didAddRoom:(id)arg2 toZone:(id)arg3;
- (void)home:(id)arg1 didUpdateNameForZone:(id)arg2;
- (void)home:(id)arg1 didRemoveZone:(id)arg2;
- (void)home:(id)arg1 didAddZone:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForRoom:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2;
- (void)home:(id)arg1 didAddRoom:(id)arg2;
- (void)home:(id)arg1 didUpdateRoom:(id)arg2 forAccessory:(id)arg3;
- (void)home:(id)arg1 didRemoveUser:(id)arg2;
- (void)home:(id)arg1 didAddUser:(id)arg2;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)homeDidUpdateName:(id)arg1;
- (void)homeManagerDidUpdateDataSyncInProgress:(id)arg1;
- (void)homeManagerDidUpdateApplicationData:(id)arg1;
- (void)homeManager:(id)arg1 didUpdateStateForIncomingInvitations:(id)arg2;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;
- (void)homeManagerDidUpdatePrimaryHome:(id)arg1;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (void)updateSelectedHome;
@property(readonly, nonatomic) NAFuture *allHomesFuture;
@property(readonly, nonatomic) NAFuture *homeFuture;
- (void)setCurrentHome:(id)arg1;
- (void)updateHome;
- (void)warmup;
- (void)dispatchAccessoryObserverMessage:(CDUnknownBlockType)arg1 sender:(id)arg2;
- (void)dispatchHomeObserverMessage:(CDUnknownBlockType)arg1 sender:(id)arg2;
- (void)dispatchHomeManagerObserverMessage:(CDUnknownBlockType)arg1 sender:(id)arg2;
- (void)removeAccessoryObserver:(id)arg1;
- (void)addAccessoryObserver:(id)arg1;
- (void)removeHomeObserver:(id)arg1;
- (void)addHomeObserver:(id)arg1;
- (void)removeHomeManagerObserver:(id)arg1;
- (void)addHomeManagerObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDBulletinBoardNotification, HMFMessageDispatcher, NSArray, NSDictionary, NSHashTable, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDBulletinBoardNotificationServiceGroup : NSObject <NSSecureCoding, HMFMessageReceiver, HMFLogging>
{
    NSSet *_cameraProfileUUIDs;
    NSSet *_associatedServiceUUIDs;
    NSHashTable *_cameraProfilesTable;
    NSHashTable *_associatedServicesTable;
    HMDBulletinBoardNotification *_bulletinBoardNotification;
    NSUUID *_targetUUID;
    NSArray *_associatedServices;
    NSArray *_cameraProfiles;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFMessageDispatcher *_msgDispatcher;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSArray *cameraProfiles; // @synthesize cameraProfiles=_cameraProfiles;
@property(retain, nonatomic) NSArray *associatedServices; // @synthesize associatedServices=_associatedServices;
@property(readonly, nonatomic) __weak HMDBulletinBoardNotification *bulletinBoardNotification; // @synthesize bulletinBoardNotification=_bulletinBoardNotification;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *actionContext;
- (void)setAssociatedServicesTable:(id)arg1;
@property(readonly, copy, nonatomic) NSHashTable *associatedServicesTable; // @synthesize associatedServicesTable=_associatedServicesTable;
- (void)setCameraProfilesTable:(id)arg1;
@property(readonly, copy, nonatomic) NSHashTable *cameraProfilesTable; // @synthesize cameraProfilesTable=_cameraProfilesTable;
@property(retain, nonatomic) NSSet *associatedServiceUUIDs; // @synthesize associatedServiceUUIDs=_associatedServiceUUIDs;
@property(retain, nonatomic) NSSet *cameraProfileUUIDs; // @synthesize cameraProfileUUIDs=_cameraProfileUUIDs;
- (void)_sendNotification:(id)arg1;
- (id)_prepareServiceGroupPayload;
- (void)_updateCameraProfilesTable:(id)arg1;
- (void)_updateAssociatedServicesTable:(id)arg1;
- (void)_updateAssociatedService:(id)arg1 associatedCameras:(id)arg2;
- (void)_gatherServices;
- (void)configureBulletinBoardNotification:(id)arg1;
- (_Bool)_isNotificationGeneratingService:(id)arg1;
- (_Bool)_isAlarmService:(id)arg1;
- (_Bool)_isSupportedAssociationService:(id)arg1;
- (void)_handleBulletinBoardNotificationServiceGroupRequest:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_registerNotificationHandlers;
- (void)configureMsgDispatcher:(id)arg1;
- (id)logIdentifier;
@property(readonly, copy, nonatomic) NSUUID *targetUUID; // @synthesize targetUUID=_targetUUID;
- (id)initWithBulletinBoardNotification:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

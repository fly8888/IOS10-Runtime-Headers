//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UNSKeyedDataStoreRepository, UNSKeyedObservable;
@protocol OS_dispatch_queue, UNSNotificationRepositoryDelegate;

@interface UNSNotificationRepository : NSObject
{
    UNSKeyedDataStoreRepository *_repository;
    UNSKeyedObservable *_observable;
    NSObject<OS_dispatch_queue> *_queue;
    id <UNSNotificationRepositoryDelegate> _delegate;
}

@property(nonatomic) id <UNSNotificationRepositoryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_queue_performMigrationForBundleIdentifier:(id)arg1;
- (void)_queue_performMigration;
- (void)_queue_removeNotificationRecordsPassingTest:(CDUnknownBlockType)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_saveNotificationRecord:(id)arg1 withOptions:(unsigned long long)arg2 forBundleIdentifier:(id)arg3;
- (void)_queue_notifyObserversNotificationsDidAddNotifications:(id)arg1 replaceNotifications:(id)arg2 removedNotifications:(id)arg3 forBundleIdentifier:(id)arg4;
- (id)_queue_notificationRecordsForBundleIdentifier:(id)arg1;
- (id)_notificationsForObjects:(id)arg1;
- (void)performMigration;
- (void)removeNotificationRepository;
- (void)removeStoreForBundleIdentifier:(id)arg1;
- (void)removeNotificationRecordsPassingTest:(CDUnknownBlockType)arg1 forBundleIdentifier:(id)arg2;
- (void)removeAllNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)saveNotificationRecord:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)notificationRecordsForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)initWithDataStoreRepository:(id)arg1 observable:(id)arg2;
- (id)init;
- (long long)_maxObjectsPerKey;
- (id)_pathExtension;
- (id)_directory;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudScenarioProducer.h>

@class NSDate, NSObject, PLCloudPhotoLibraryManager, PLPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PLCloudLegacyDownloadAgent : PLCloudScenarioProducer
{
    NSObject<OS_dispatch_queue> *_agentQueue;
    CDStruct_691a9b3b _walkStatus[6];
    _Bool _waitingForInitialDownloadDone;
    _Bool _initialDownloadDone;
    _Bool _shouldRunAgainWhenFinished;
    _Bool _running;
    NSDate *__lastRunDate;
    PLPhotoLibrary *_localLibrary;
    PLCloudPhotoLibraryManager *_remoteLibrary;
}

@property(retain) PLCloudPhotoLibraryManager *remoteLibrary; // @synthesize remoteLibrary=_remoteLibrary;
@property(retain, nonatomic) PLPhotoLibrary *localLibrary; // @synthesize localLibrary=_localLibrary;
@property(getter=isRunning) _Bool running; // @synthesize running=_running;
@property _Bool shouldRunAgainWhenFinished; // @synthesize shouldRunAgainWhenFinished=_shouldRunAgainWhenFinished;
@property(copy) NSDate *_lastRunDate; // @synthesize _lastRunDate=__lastRunDate;
- (void)metadataStable:(id)arg1;
- (void)systemStarted:(id)arg1;
- (void)activate;
- (void)_handlePrefetchFinished;
- (void)_resetWalkStatus;
- (void)_checkWalkStatusIfNeeded;
- (void)_monitorForCompletion;
- (void)_waitForDownloadDoneIfNeeded;
- (void)_prefetchLastWeeksOriginals;
- (void)_prefetchLastWeeksFullAndOriginals;
- (void)_prefetchAllThumbnailsAndLastWeeksFullAndOriginals;
- (void)_prefetchResources;
- (void)_regulatedPrefetch;
- (void)_tryAgainLater;
- (void)beginPopulatingResourcesOfType:(unsigned long long)arg1 withFetchRequest:(id)arg2 then:(CDUnknownBlockType)arg3;
- (void)_beginPopulatingResourcesOfType:(unsigned long long)arg1 withFetchRequest:(id)arg2 startingAtOffset:(unsigned long long)arg3 then:(CDUnknownBlockType)arg4;
- (void)cplResourcesForFetchRequest:(id)arg1 ofType:(unsigned long long)arg2 startingAtOffset:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)downloadResources:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)batchSize;
- (int)typeToIndex:(unsigned long long)arg1;
- (void)_runOnAgentQueueWithTransaction:(id)arg1 delay:(double)arg2 block:(CDUnknownBlockType)arg3;
- (void)_runOnAgentQueueWithTransaction:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/MPStoreDownloadManagerObserver-Protocol.h>
#import <FuseUI/SSVDirectUploadObserver-Protocol.h>

@class MPStoreDownloadManager, NSArray, NSHashTable, NSMutableArray, NSNumberFormatter, NSString, SSVDirectUploadQueue;

@interface MusicTransferAggregator : NSObject <MPStoreDownloadManagerObserver, SSVDirectUploadObserver>
{
    MPStoreDownloadManager *_downloadManager;
    NSMutableArray *_downloads;
    NSString *_localizedStatusString;
    unsigned long long _maxDownloadCount;
    unsigned long long _maxUploadCount;
    NSNumberFormatter *_numberFormatter;
    NSHashTable *_observers;
    SSVDirectUploadQueue *_uploadQueue;
    NSMutableArray *_uploads;
}

@property(readonly, copy, nonatomic) NSArray *uploads; // @synthesize uploads=_uploads;
@property(readonly, copy, nonatomic) NSArray *downloads; // @synthesize downloads=_downloads;
- (void).cxx_destruct;
- (void)_updateWithChangedUploads:(id)arg1;
- (void)_updateWithChangedDownloads:(id)arg1;
- (void)_updateWithAddedDownloads:(id)arg1 removedDownloads:(id)arg2;
- (id)_uploadAttachmentTypes;
- (void)_updateMaxUploads;
- (void)_updateMaxDownloads;
- (void)_reloadWithUploads:(id)arg1 forced:(_Bool)arg2;
- (void)_reloadWithDownloads:(id)arg1;
- (id)_numberFormatter;
- (void)_notifyObserversOfUploadsChangedAtIndexes:(id)arg1;
- (void)_notifyObserversOfUploadsChanged;
- (void)_notifyObserversOfDownloadsChangedAtIndexes:(id)arg1;
- (void)_notifyObserversOfDownloadsChanged;
- (void)_enumerateObserversUsingBlock:(CDUnknownBlockType)arg1;
- (id)_downloadKinds;
- (id)_localizedStatusWithUploadCount:(long long)arg1 downloadCount:(long long)arg2;
- (id)_localizedStatusWithUploadCount:(long long)arg1;
- (id)_localizedStatusWithProcessingUploadCount:(long long)arg1 downloadCount:(long long)arg2;
- (id)_localizedStatusWithFailedUploadCount:(long long)arg1 downloadCount:(long long)arg2;
- (id)_localizedStatusWithDownloadCount:(long long)arg1;
- (void)uploadQueue:(id)arg1 uploadsDidChange:(id)arg2;
- (void)uploadQueue:(id)arg1 statusDidChangeForUploads:(id)arg2;
- (void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadsDidProgress:(id)arg2;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
@property(readonly, nonatomic) float transferProgress;
- (void)resumeUploadWithIndex:(long long)arg1;
- (void)resumeDownloadWithIndex:(long long)arg1;
- (void)removeTransferObserver:(id)arg1;
- (void)performStatusButtonActionForUploadWithIndex:(long long)arg1;
- (void)performStatusButtonActionForDownloadWithIndex:(long long)arg1;
- (void)pauseUploadWithIndex:(long long)arg1;
- (void)pauseDownloadWithIndex:(long long)arg1;
@property(readonly, nonatomic) long long numberOfUploads;
@property(readonly, nonatomic) long long numberOfDownloads;
@property(readonly, nonatomic) long long numberOfCancelableUploads;
@property(readonly, nonatomic) long long numberOfCancelableDownloads;
@property(readonly, copy, nonatomic) NSString *localizedStatusString;
- (void)cancelUploadWithIndex:(long long)arg1;
- (void)cancelDownloadWithIndex:(long long)arg1;
- (void)cancelAllUploads;
- (void)cancelAllDownloads;
- (_Bool)canCancelUploadWithIndex:(long long)arg1;
- (_Bool)canCancelDownloadWithIndex:(long long)arg1;
- (void)addTransferObserver:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


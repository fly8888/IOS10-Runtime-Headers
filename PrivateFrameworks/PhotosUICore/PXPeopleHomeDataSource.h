//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSString, PXPeoplePersonDataSource;
@protocol OS_dispatch_queue, PXPeopleHomeDataSourceDelegate;

@interface PXPeopleHomeDataSource : NSObject <PXPhotoLibraryUIChangeObserver>
{
    id <PXPeopleHomeDataSourceDelegate> _delegate;
    PXPeoplePersonDataSource *_favoriteDataSource;
    PXPeoplePersonDataSource *_othersDataSource;
    PXPeoplePersonDataSource *_hiddenDataSource;
    NSObject<OS_dispatch_queue> *_reloadQueue;
    id _pauseToken;
}

@property(retain, nonatomic) id pauseToken; // @synthesize pauseToken=_pauseToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *reloadQueue; // @synthesize reloadQueue=_reloadQueue;
@property(retain, nonatomic) PXPeoplePersonDataSource *hiddenDataSource; // @synthesize hiddenDataSource=_hiddenDataSource;
@property(retain, nonatomic) PXPeoplePersonDataSource *othersDataSource; // @synthesize othersDataSource=_othersDataSource;
@property(retain, nonatomic) PXPeoplePersonDataSource *favoriteDataSource; // @synthesize favoriteDataSource=_favoriteDataSource;
@property(nonatomic) __weak id <PXPeopleHomeDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_dataSourceForIndexPath:(id)arg1;
- (id)_dataSourceForSection:(unsigned long long)arg1;
- (id)changeDetailsForLibraryChange:(id)arg1 inSection:(unsigned long long)arg2;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)resumeListeningForChanges;
- (void)pauseListeningForChangesWithTimeout:(double)arg1;
- (void)stopListeningToLibraryNotifications;
- (void)loadAndStartListeningToLibraryNotifications;
- (void)_loadObjectsAndUpdateMembersWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isSectionDisclosed:(unsigned long long)arg1;
- (void)setSection:(unsigned long long)arg1 disclosed:(_Bool)arg2;
- (id)localizedDisclosedTitleForSection:(unsigned long long)arg1;
- (id)localizedTitleForSection:(unsigned long long)arg1;
- (long long)personTypeForSection:(unsigned long long)arg1;
- (unsigned long long)photoQuantityAtIndexPath:(id)arg1;
- (void)imageAtIndexPath:(id)arg1 targetSize:(struct CGSize)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)titleAtIndexPath:(id)arg1;
- (id)indexPathOfMember:(id)arg1;
- (id)memberAtIndexPath:(id)arg1;
- (unsigned long long)numberOfMembersInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


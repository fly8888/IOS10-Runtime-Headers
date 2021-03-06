//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPeopleDataSourceDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, PXPeoplePersonDataSource;

@interface PXPeopleAlbumProvider : NSObject <PXPeopleDataSourceDelegate>
{
    _Bool _favoriteLoaded;
    _Bool _otherLoaded;
    _Bool _notificationSent;
    PXPeoplePersonDataSource *_favoriteDS;
    PXPeoplePersonDataSource *_otherDS;
    NSMutableArray *_imageCache;
    NSMutableDictionary *_fetchedContainers;
    struct CGSize _imageSize;
}

@property(nonatomic) _Bool notificationSent; // @synthesize notificationSent=_notificationSent;
@property(nonatomic) _Bool otherLoaded; // @synthesize otherLoaded=_otherLoaded;
@property(nonatomic) _Bool favoriteLoaded; // @synthesize favoriteLoaded=_favoriteLoaded;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) NSMutableDictionary *fetchedContainers; // @synthesize fetchedContainers=_fetchedContainers;
@property(retain, nonatomic) NSMutableArray *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) PXPeoplePersonDataSource *otherDS; // @synthesize otherDS=_otherDS;
@property(retain, nonatomic) PXPeoplePersonDataSource *favoriteDS; // @synthesize favoriteDS=_favoriteDS;
- (void).cxx_destruct;
- (void)peopleDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;
- (void)peopleDataSourceMembersChanged:(id)arg1;
- (_Bool)_progressComplete:(double)arg1;
- (double)_analysisProgressSync;
- (_Bool)_featureUnlocked;
- (void)_asyncAddImagesToCacheWithItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_reCacheImagesCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)peopleCount;
- (void)invalidateImageCache;
- (id)peopleViewController;
- (void)requestAlbumImagesWithSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PLAssetChangeObserver-Protocol.h>
#import <PhotosUI/PLCloudFeedEntriesObserver-Protocol.h>
#import <PhotosUI/PLPhotoLibraryShouldReloadObserver-Protocol.h>

@class NSArray, NSMutableArray, NSOrderedSet, PLPhotoLibrary;
@protocol PUFeedRecentsManagerDelegate;

@interface PUFeedRecentsManager : NSObject <PLCloudFeedEntriesObserver, PLAssetChangeObserver, PLPhotoLibraryShouldReloadObserver>
{
    NSMutableArray *_pendingFeedEntriesChangeNotifications;
    NSMutableArray *_pendingAssetsChangeNotifications;
    PLPhotoLibrary *_photoLibrary;
    long long _count;
    id <PUFeedRecentsManagerDelegate> _delegate;
    NSOrderedSet *__cachedRecentAssets;
    NSArray *__cachedRecentPHAssets;
}

@property(copy, nonatomic, setter=_setCachedRecentPHAssets:) NSArray *_cachedRecentPHAssets; // @synthesize _cachedRecentPHAssets=__cachedRecentPHAssets;
@property(copy, nonatomic, setter=_setCachedRecentAssets:) NSOrderedSet *_cachedRecentAssets; // @synthesize _cachedRecentAssets=__cachedRecentAssets;
@property(nonatomic) __weak id <PUFeedRecentsManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=_setCount:) long long count; // @synthesize count=_count;
@property(retain, nonatomic, setter=_setPhotoLibrary:) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (void).cxx_destruct;
- (void)_didFinishPostingNotifications:(id)arg1;
- (void)shouldReload:(id)arg1;
- (void)assetsDidChange:(id)arg1;
- (void)cloudFeedEntriesDidChange:(id)arg1;
- (void)_invalidateCachedRecentAssets;
- (_Bool)_updateCachedRecentAssets;
@property(readonly, copy, nonatomic) NSArray *recentPHAssets;
@property(readonly, copy, nonatomic) NSOrderedSet *recentAssets;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1 count:(long long)arg2;

@end


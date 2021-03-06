//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXUserEventTrackerCommon.h>

@class NSHashTable;

@interface PXUserEventTracker : PXUserEventTrackerCommon
{
    double _timeLoggedOnDetailViewWillAppear;
    double _timeLoggedOnMemoriesFeedWillAppear;
    unsigned long long _totalNumberOfRelatedJumps;
    unsigned long long _MaxDepthOfRelatedJumps;
    NSHashTable *__relatedLookupTable;
}

+ (id)sharedInstance;
@property(retain, nonatomic, setter=_setRelatedLookupTable:) NSHashTable *_relatedLookupTable; // @synthesize _relatedLookupTable=__relatedLookupTable;
- (void).cxx_destruct;
- (void)_logAggdRelatedJumpStatistics:(unsigned long long)arg1 totalJumpCount:(unsigned long long)arg2;
- (void)_logAggdDurationCounterForLogState:(unsigned long long)arg1 duration:(double)arg2;
- (void)logCounterValuesForLogState:(unsigned long long)arg1 duration:(double)arg2;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_resetDetailViewTraversalStatistics;
- (void)didCreateMemoryViaAddToMemories;
- (void)didFavoriteMemory;
- (void)didConfirmDeleteOfMemory;
- (void)didPlayMiroMovieForAssetCollection:(id)arg1;
- (void)didViewDetailsForAssetCollection:(id)arg1;
- (void)didFinishViewingMemoriesFeedView;
- (void)willViewMemoriesFeedView;
- (void)didPullToRefreshMemoriesFeedView;
- (void)didFinishViewingDetailsWithCurrentContext:(id)arg1;
- (void)willViewDetailsWithCurrentContext:(id)arg1;
- (id)init;

@end


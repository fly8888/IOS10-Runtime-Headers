//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUI/PUTilingViewTileSource-Protocol.h>
#import <PhotosUI/PUTilingViewTileTransitionDelegate-Protocol.h>
#import <PhotosUI/UIScrollViewDelegate-Protocol.h>

@class AVAsset, NSString, PUFilmstripDataSource, PUFilmstripMediaProvider, PUTilingView, UIImage;

__attribute__((visibility("hidden")))
@interface PUFilmstripView : UIView <PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, UIScrollViewDelegate>
{
    _Bool _needsUpdateDataSource;
    _Bool _needsUpdateLayout;
    AVAsset *_asset;
    UIImage *_placeholderImage;
    PUTilingView *__tilingView;
    PUFilmstripMediaProvider *__mediaProvider;
    PUFilmstripDataSource *__dataSource;
    struct CGRect _visibleRect;
}

@property(retain, nonatomic, setter=_setDataSource:) PUFilmstripDataSource *_dataSource; // @synthesize _dataSource=__dataSource;
@property(retain, nonatomic, setter=_setMediaProvider:) PUFilmstripMediaProvider *_mediaProvider; // @synthesize _mediaProvider=__mediaProvider;
@property(readonly, nonatomic) PUTilingView *_tilingView; // @synthesize _tilingView=__tilingView;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForChangeFromFrame:(struct CGRect)arg2 toFrame:(struct CGRect)arg3 duration:(double)arg4;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForTransitionFromLayout:(id)arg2 toLayout:(id)arg3 withContext:(id)arg4;
- (id)tilingView:(id)arg1 tileControllerWithIndexPath:(id)arg2 kind:(id)arg3 dataSource:(id)arg4;
- (id)_filmstripLayout;
- (void)_updateLayoutIfNeeded;
- (void)_updateDataSourceIfNeeded;
- (void)_updateIfNeeded;
- (void)_invalidateLayout;
- (void)_invalidateDataSource;
- (void)_invalidateMediaProvider;
- (void)_setNeedsUpdate;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

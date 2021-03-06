//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BPSRemoteImageView, NSBundle, NSString, UIImageView;

@interface BPSWatchView : UIView
{
    NSBundle *_screenImageSearchBundleIdentifier;
    NSString *_screenImageName;
    unsigned long long _style;
    unsigned long long _sizeOverride;
    BPSRemoteImageView *_watchImageView;
    NSString *_styleVersionSuffix;
    UIImageView *_watchScreenImageView;
}

@property(readonly, nonatomic) UIImageView *watchScreenImageView; // @synthesize watchScreenImageView=_watchScreenImageView;
@property(copy, nonatomic) NSString *styleVersionSuffix; // @synthesize styleVersionSuffix=_styleVersionSuffix;
@property(retain, nonatomic) BPSRemoteImageView *watchImageView; // @synthesize watchImageView=_watchImageView;
@property(nonatomic) unsigned long long sizeOverride; // @synthesize sizeOverride=_sizeOverride;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *screenImageName; // @synthesize screenImageName=_screenImageName;
@property(retain, nonatomic) NSBundle *screenImageSearchBundleIdentifier; // @synthesize screenImageSearchBundleIdentifier=_screenImageSearchBundleIdentifier;
- (void).cxx_destruct;
- (id)image;
- (struct CGSize)screenImageSize;
- (unsigned long long)deviceSize;
- (void)overrideMaterial:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)applyScreenStyle;
- (id)watchImageNamed:(id)arg1;
- (id)watchAssetBundle;
- (id)initWithStyle:(unsigned long long)arg1 andVersionModifier:(id)arg2;
- (id)initWithStyle:(unsigned long long)arg1;

@end


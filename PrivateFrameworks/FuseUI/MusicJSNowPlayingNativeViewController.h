//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicJSNativeViewController.h>

#import <FuseUI/MusicJSNowPlayingViewController-Protocol.h>

@class IKJSNavigationDocument;
@protocol MusicJSNowPlayingNativeViewControllerDelegate;

@interface MusicJSNowPlayingNativeViewController : MusicJSNativeViewController <MusicJSNowPlayingViewController>
{
    id <MusicJSNowPlayingNativeViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <MusicJSNowPlayingNativeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)nativeViewIdentifier;

// Remaining properties
@property(readonly, nonatomic) IKJSNavigationDocument *navigationDocument;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FuseUI/MusicTransferObserver-Protocol.h>
#import <FuseUI/MusicTransferProgressViewControllerDelegate-Protocol.h>
#import <FuseUI/UIPopoverPresentationControllerDelegate-Protocol.h>

@class MusicTransferAggregator, MusicTransferProgressBannerView, MusicTransferProgressViewController, NSString, UIPopoverPresentationController;

@interface MusicTransferProgressBannerViewController : UIViewController <MusicTransferObserver, MusicTransferProgressViewControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    MusicTransferProgressBannerView *_bannerView;
    UIPopoverPresentationController *_presentationController;
    MusicTransferAggregator *_transferAggregator;
    MusicTransferProgressViewController *_transferProgressViewController;
}

- (void).cxx_destruct;
- (void)_reloadBannerViewAnimated:(_Bool)arg1;
- (void)_bannerEvent:(id)arg1;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)transferProgressViewControllerWillDismiss:(id)arg1;
- (void)transferAggregatorDidChange:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithTransferAggregator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

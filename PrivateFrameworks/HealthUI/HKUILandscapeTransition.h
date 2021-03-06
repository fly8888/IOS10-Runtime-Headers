//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, UIViewController;
@protocol HKUILandscapeTransitioningViewController, UIViewControllerAnimatedTransitioning;

@interface HKUILandscapeTransition : NSObject <UIViewControllerTransitioningDelegate>
{
    _Bool _isVisible;
    UIViewController *_presentedViewController;
    _Bool _shouldRetainViewHierarchy;
    UIViewController<HKUILandscapeTransitioningViewController> *_transitioningViewController;
    id <UIViewControllerAnimatedTransitioning> _transitionAnimator;
}

@property(nonatomic) _Bool shouldRetainViewHierarchy; // @synthesize shouldRetainViewHierarchy=_shouldRetainViewHierarchy;
@property(retain, nonatomic) id <UIViewControllerAnimatedTransitioning> transitionAnimator; // @synthesize transitionAnimator=_transitionAnimator;
@property(readonly, nonatomic) __weak UIViewController<HKUILandscapeTransitioningViewController> *transitioningViewController; // @synthesize transitioningViewController=_transitioningViewController;
- (void).cxx_destruct;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (_Bool)_isPresentingViewController;
- (void)orientationChanged:(id)arg1;
- (void)dealloc;
- (id)initWithTransitioningViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


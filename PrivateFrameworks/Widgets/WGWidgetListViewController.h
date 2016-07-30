//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Widgets/UIScrollViewDelegate-Protocol.h>
#import <Widgets/WGWidgetDebugging-Protocol.h>
#import <Widgets/WGWidgetDiscoveryObserving-Protocol.h>
#import <Widgets/WGWidgetHostingViewControllerDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, UIScrollView, UIStackView, WGWidgetDiscoveryController, WGWidgetShortLookView;
@protocol WGWidgetListViewControllerDelegate;

@interface WGWidgetListViewController : UIViewController <WGWidgetDebugging, UIScrollViewDelegate, WGWidgetDiscoveryObserving, WGWidgetHostingViewControllerDelegate>
{
    WGWidgetDiscoveryController *_discoveryController;
    UIStackView *_stackView;
    NSMutableDictionary *_cancelTouchesAssertionsByWidgetID;
    NSMutableDictionary *_shortLookViewsByWidgetID;
    WGWidgetShortLookView *_shortLookViewForMeasuring;
    NSArray *_previouslyVisibleWidgetIDs;
    id <WGWidgetListViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <WGWidgetListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)remoteViewControllerViewDidAppearForWidget:(id)arg1;
- (void)widget:(id)arg1 didChangeLargestSupportedDisplayMode:(long long)arg2;
- (struct UIEdgeInsets)marginInsetsForWidget:(id)arg1;
- (struct CGSize)maxSizeForWidget:(id)arg1 forDisplayMode:(long long)arg2;
- (CDUnknownBlockType)widget:(id)arg1 didUpdatePreferredHeight:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)orderOfVisibleWidgetsDidChange:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_updateWidgetViewStateWithPreviouslyVisibleWidgetIdentifiers:(id)arg1;
- (id)_widgetIdentifiersForShortLookViewsVisibleInBounds;
- (void)_invokeBlockWithShortLookViewsVisibleInBounds:(CDUnknownBlockType)arg1;
- (void)_invokeBlockWithShortLookViewsVisibleInRect:(struct CGRect)arg1 block:(CDUnknownBlockType)arg2;
- (void)_invokeBlock:(CDUnknownBlockType)arg1 withShortLookViewsPassingTest:(CDUnknownBlockType)arg2;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLoad;
- (void)loadView;
- (void)_invalidateAllCancelTouchesAssertions;
- (void)_cancelTouchesForWidget:(id)arg1;
- (void)_validateWidgetHostStateForShortLook:(id)arg1;
- (void)_cancelTouchesForHitWidgetIfNecessary;
- (id)_shortLookViewAtLocation:(struct CGPoint)arg1;
- (id)_shortLookViewForMeasuring;
- (void)_repopulateStackViewForColumnMode:(long long)arg1;
- (void)_updateBackgroundViewForShortLookView:(id)arg1;
- (id)_shortLookViewForWidget:(id)arg1;
- (id)_scrollViewIfLoaded;
- (id)_scrollViewLoadingIfNecessary:(_Bool)arg1;
@property(readonly, nonatomic, getter=_activeColumnMode) long long activeColumnMode;
- (CDUnknownBlockType)_insert:(_Bool)arg1 widgetView:(id)arg2 withOrderedIdentifiers:(id)arg3 animated:(_Bool)arg4;
- (CDUnknownBlockType)_beginInsertion:(_Bool)arg1 ofWidgetView:(id)arg2 withOrderedIdentifiers:(id)arg3 removingViewIfPossible:(_Bool)arg4;
- (id)_repopulateStackViewWithWidgetIdentifiers:(id)arg1 forColumnMode:(long long)arg2;
- (void)_configureStackView;
- (id)_shortLookViewForWidgetWithIdentifier:(id)arg1 creatingIfNecessary:(_Bool)arg2;
@property(readonly, nonatomic, getter=_group) NSString *group;
- (void)invalidateWidgetBackgroundViews;
@property(readonly, nonatomic) unsigned long long widgetCount;
@property(readonly, nonatomic) UIScrollView *widgetListView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithWidgetDiscoveryController:(id)arg1;
- (void)makeVisibleWidgetWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)visibleWidgetIdentifiersForColumnMode:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ChatKit/CKImpactEffectManagerAnimationDelegateProtocol-Protocol.h>
#import <ChatKit/UICollectionViewDataSource-Protocol.h>
#import <ChatKit/UICollectionViewDelegate-Protocol.h>

@class CABackdropLayer, CALayer, CKBalloonView, CKChatControllerDummyAnimator, CKFullScreenEffectManager, NSArray, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSString, UIButton, UICollectionView, UILabel, UIPageControl, UIPanGestureRecognizer, UISegmentedControl;
@protocol CKEffectPickerViewDelegate;

@interface CKEffectPickerView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, CKImpactEffectManagerAnimationDelegateProtocol>
{
    _Bool _isAnimating;
    id <CKEffectPickerViewDelegate> _delegate;
    UIView *_hintContainer;
    UIView *_peekContainer;
    CABackdropLayer *_backdrop;
    CALayer *_blueContrastLayer;
    CABackdropLayer *_segmentedBackdrop;
    CKFullScreenEffectManager *_fsem;
    NSArray *_momentIdentifiers;
    NSMutableDictionary *_animationTimers;
    NSMutableDictionary *_animatedCells;
    NSMutableDictionary *_pausedAnimatedCells;
    UISegmentedControl *_typeSegmentedControl;
    UIPageControl *_pageControl;
    UILabel *_mainLabel;
    UIButton *_sendMomentButton;
    UILabel *_momentTitleLabel;
    CKBalloonView *_balloonView;
    UIView *_roundedContainerView;
    NSMutableArray *_effectIdentifiers;
    NSMutableArray *_effectLabels;
    NSMutableArray *_effectDescriptiveLabels;
    NSMutableArray *_effectDotButtons;
    NSMutableArray *_effectSendButtons;
    UICollectionView *_momentsCollectionView;
    UIView *_backgroundView;
    UIButton *_closeButton;
    NSLayoutConstraint *_closeButtonBottomConstraint;
    NSLayoutConstraint *_roundedContainerViewHeightConstraint;
    NSLayoutConstraint *_typeSegmentedControlBottomConstraint;
    NSLayoutConstraint *_mainLabelBottomConstraint;
    UIPanGestureRecognizer *_panGestureRecognizer;
    CKChatControllerDummyAnimator *_dummyAnimator;
    UIView *_hintBlackText;
    UIView *_hintSendButton;
    unsigned long long _selectedIndex;
    struct CGPoint _balloonViewOrigin;
}

+ (_Bool)shouldUseLargeScreenDimension;
+ (double)typeSegmentedControlConstraintBottom;
+ (double)marginBetweenPickerDotButtons;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) struct CGPoint balloonViewOrigin; // @synthesize balloonViewOrigin=_balloonViewOrigin;
@property(nonatomic) UIView *hintSendButton; // @synthesize hintSendButton=_hintSendButton;
@property(nonatomic) UIView *hintBlackText; // @synthesize hintBlackText=_hintBlackText;
@property(retain, nonatomic) CKChatControllerDummyAnimator *dummyAnimator; // @synthesize dummyAnimator=_dummyAnimator;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) NSLayoutConstraint *mainLabelBottomConstraint; // @synthesize mainLabelBottomConstraint=_mainLabelBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *typeSegmentedControlBottomConstraint; // @synthesize typeSegmentedControlBottomConstraint=_typeSegmentedControlBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *roundedContainerViewHeightConstraint; // @synthesize roundedContainerViewHeightConstraint=_roundedContainerViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *closeButtonBottomConstraint; // @synthesize closeButtonBottomConstraint=_closeButtonBottomConstraint;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UICollectionView *momentsCollectionView; // @synthesize momentsCollectionView=_momentsCollectionView;
@property(retain, nonatomic) NSMutableArray *effectSendButtons; // @synthesize effectSendButtons=_effectSendButtons;
@property(retain, nonatomic) NSMutableArray *effectDotButtons; // @synthesize effectDotButtons=_effectDotButtons;
@property(retain, nonatomic) NSMutableArray *effectDescriptiveLabels; // @synthesize effectDescriptiveLabels=_effectDescriptiveLabels;
@property(retain, nonatomic) NSMutableArray *effectLabels; // @synthesize effectLabels=_effectLabels;
@property(retain, nonatomic) NSMutableArray *effectIdentifiers; // @synthesize effectIdentifiers=_effectIdentifiers;
@property(retain, nonatomic) UIView *roundedContainerView; // @synthesize roundedContainerView=_roundedContainerView;
@property(retain, nonatomic) CKBalloonView *balloonView; // @synthesize balloonView=_balloonView;
@property(retain, nonatomic) UILabel *momentTitleLabel; // @synthesize momentTitleLabel=_momentTitleLabel;
@property(retain, nonatomic) UIButton *sendMomentButton; // @synthesize sendMomentButton=_sendMomentButton;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UISegmentedControl *typeSegmentedControl; // @synthesize typeSegmentedControl=_typeSegmentedControl;
@property(retain, nonatomic) NSMutableDictionary *pausedAnimatedCells; // @synthesize pausedAnimatedCells=_pausedAnimatedCells;
@property(retain, nonatomic) NSMutableDictionary *animatedCells; // @synthesize animatedCells=_animatedCells;
@property(retain, nonatomic) NSMutableDictionary *animationTimers; // @synthesize animationTimers=_animationTimers;
@property(copy, nonatomic) NSArray *momentIdentifiers; // @synthesize momentIdentifiers=_momentIdentifiers;
@property(retain, nonatomic) CKFullScreenEffectManager *fsem; // @synthesize fsem=_fsem;
@property(retain, nonatomic) CABackdropLayer *segmentedBackdrop; // @synthesize segmentedBackdrop=_segmentedBackdrop;
@property(retain, nonatomic) CALayer *blueContrastLayer; // @synthesize blueContrastLayer=_blueContrastLayer;
@property(retain, nonatomic) CABackdropLayer *backdrop; // @synthesize backdrop=_backdrop;
@property(retain, nonatomic) UIView *peekContainer; // @synthesize peekContainer=_peekContainer;
@property(retain, nonatomic) UIView *hintContainer; // @synthesize hintContainer=_hintContainer;
@property(nonatomic) id <CKEffectPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)animateMessages:(id)arg1;
- (void)animationDidFinishWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (id)_defaultSendAnimationContextForAnimationPreview;
- (void)_applicationWillEnterForeground;
- (void)_applicationDidEnterBackground;
- (void)startAnimationPreviewForIdentifier:(id)arg1;
- (void)_touchUpInsideDotButton:(id)arg1;
- (void)_animateOutSendButton:(id)arg1;
- (void)_animateInSendButton:(id)arg1;
- (void)_touchUpInsideSendMomentButton:(id)arg1;
- (void)_touchUpInsideSendButton:(id)arg1;
- (void)_touchUpInsideCloseButton:(id)arg1;
- (void)cancelImpactSelection;
- (void)_panGesture:(id)arg1;
- (void)effectTypeDidChange:(id)arg1;
- (void)updateMomentTitle:(_Bool)arg1;
- (void)pageControlChanged:(id)arg1;
- (void)handleTouchMoved:(struct CGPoint)arg1;
- (void)handleTouchUp:(struct CGPoint)arg1;
- (void)_startSwitcherAnimationIfNecessary;
- (_Bool)_needsSwitcherAnimation;
- (void)scrollViewDidScroll:(id)arg1;
- (void)invalidateAllAnimationTimers;
- (void)removeAnimationTimerForCell:(id)arg1;
- (void)addAnimationTimerForCell:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)_animateSelectedEffectLabelAtIndex:(unsigned long long)arg1 fromPreviousIndex:(unsigned long long)arg2;
- (void)_animateOut;
- (void)_stopBalloonAnimation;
- (void)_animateIn;
- (id)_blackTextReplica;
- (void)_updateMomentsBackgroundColor;
- (void)_updateBalloonViewPositionAnimated:(_Bool)arg1;
- (void)_adjustMainLabelAndTypeSegmentedControlIfNecessary;
- (void)_updateRoundedContainerView;
- (void)_setBalloonText:(id)arg1 withColor:(id)arg2;
- (void)_resizeBalloon;
- (void)addEffect:(id)arg1 withDescriptiveText:(id)arg2 withIdentifier:(id)arg3;
- (void)setBalloonText:(id)arg1;
- (void)setCloseButtonYPosition:(double)arg1;
- (void)updateHintTransition:(double)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (long long)selectedMomentIndex;
- (id)initWithFrame:(struct CGRect)arg1 sendButtonFrame:(struct CGRect)arg2 balloonViewOrigin:(struct CGPoint)arg3 composition:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

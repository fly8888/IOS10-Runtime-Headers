//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <StoreKitUI/SKUIComposeReviewHeaderDelegate-Protocol.h>
#import <StoreKitUI/UITextContentViewDelegate-Protocol.h>

@class NSString, SKUIComposeReviewHeaderView, SKUIReviewMetadata, SULoadingView, SUTextContentView, UIScrollView;
@protocol SKUIComposeReviewViewDelegate;

@interface SKUIComposeReviewView : UIView <SKUIComposeReviewHeaderDelegate, UITextContentViewDelegate>
{
    long long _currentBodyLength;
    id <SKUIComposeReviewViewDelegate> _delegate;
    SKUIComposeReviewHeaderView *_headerView;
    struct CGRect _keyboardFrame;
    unsigned int _loading:1;
    SULoadingView *_loadingView;
    SKUIReviewMetadata *_review;
    UIScrollView *_scrollView;
    long long _style;
    SUTextContentView *_textContentView;
}

@property(nonatomic) __weak id <SKUIComposeReviewViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long composeReviewStyle; // @synthesize composeReviewStyle=_style;
- (void).cxx_destruct;
- (void)_updateContentSize;
- (void)_showLoadingView;
- (void)_showComposeView;
- (id)_reviewPlaceholder;
- (void)_layoutLoadingView;
- (void)_layoutComposeView;
- (_Bool)_isReviewTextOptional;
- (void)_delayedUpdateReviewLength;
- (id)_body;
- (void)_keyboardVisibilityDidChangeNotification:(id)arg1;
- (void)textContentViewDidChange:(id)arg1;
- (_Bool)textContentView:(id)arg1 shouldScrollForPendingContentSize:(struct CGSize)arg2;
- (_Bool)textContentView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textContentView:(id)arg1 shouldChangeSizeForContentSize:(struct CGSize)arg2;
- (void)textContentView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)composeHeaderViewValuesDidChange:(id)arg1;
- (void)composeHeaderViewValidityDidChange:(id)arg1;
- (void)setReview:(id)arg1;
@property(nonatomic) float rating;
@property(nonatomic, getter=isLoading) _Bool loading;
- (void)reloadData;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)copyReview;
- (void)setFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


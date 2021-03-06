//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, CATransformLayer, NSArray, UIImage;
@protocol CKGradientReferenceView;

@interface CKGradientView : UIView
{
    UIView<CKGradientReferenceView> *_referenceView;
    NSArray *_colors;
    UIImage *_maskImage;
    CALayer *_gradientLayer;
    CATransformLayer *_trackingLayer;
    double _maskMaxCapInset;
    struct CGRect _gradientFrame;
}

+ (id)gradientViews;
@property(nonatomic) double maskMaxCapInset; // @synthesize maskMaxCapInset=_maskMaxCapInset;
@property(retain, nonatomic) CATransformLayer *trackingLayer; // @synthesize trackingLayer=_trackingLayer;
@property(nonatomic) struct CGRect gradientFrame; // @synthesize gradientFrame=_gradientFrame;
@property(retain, nonatomic) CALayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIImage *maskImage; // @synthesize maskImage=_maskImage;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(nonatomic) __weak UIView<CKGradientReferenceView> *referenceView; // @synthesize referenceView=_referenceView;
- (void).cxx_destruct;
- (id)gradient;
- (void)updateGradientImage;
- (void)updateAnimation;
- (void)_removeAllAnimations:(_Bool)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)description;
- (void)dealloc;

@end


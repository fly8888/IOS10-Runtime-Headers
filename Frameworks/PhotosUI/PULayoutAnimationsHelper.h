//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PUSectionedGridLayout;

__attribute__((visibility("hidden")))
@interface PULayoutAnimationsHelper : NSObject
{
    _Bool _shouldAnimateTemporaryImageView;
    PUSectionedGridLayout *_layout;
}

+ (CDUnknownBlockType)stackedTransitionAnimationsForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 shouldUseSpringAnimations:(_Bool)arg3;
@property(nonatomic) _Bool shouldAnimateTemporaryImageView; // @synthesize shouldAnimateTemporaryImageView=_shouldAnimateTemporaryImageView;
@property(readonly, nonatomic) __weak PUSectionedGridLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (void)_applyDefaultLayoutAttributes:(id)arg1 toView:(id)arg2;
- (void)_configureAnimationsForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)_adjustDecorationViewAnimation:(id)arg1 forReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_adjustRenderedStripAnimation:(id)arg1 forReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_adjustSectionHeaderAnimation:(id)arg1 forReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_adjustCellAnimation:(id)arg1 forReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_adjustAnimation:(id)arg1 forReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_defaultAnimationForKeyPath:(id)arg1 ofReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_createDefaultZoomingInAnimationForKeyPath:(id)arg1 ofReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_createDefaultZoomingOutAnimationForKeyPath:(id)arg1 ofReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (void)didFinishLayoutTransitionAnimations:(_Bool)arg1 transitionIsAppearing:(_Bool)arg2;
- (CDUnknownBlockType)animationsForReusableView:(id)arg1 toLayoutAttributes:(id)arg2;
- (id)initWithSectionedGridLayout:(id)arg1;

@end


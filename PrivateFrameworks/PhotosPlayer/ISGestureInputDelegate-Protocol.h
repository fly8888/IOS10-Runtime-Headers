//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosPlayer/NSObject-Protocol.h>

@class ISGestureInput, UIGestureRecognizer, UIView;
@protocol UIGestureRecognizerDelegate;

@protocol ISGestureInputDelegate <NSObject>

@optional
- (void)gestureInputGestureRecognizerDidChange:(ISGestureInput *)arg1;
- (id <UIGestureRecognizerDelegate>)gestureInput:(ISGestureInput *)arg1 delegateForGestureRecognizer:(UIGestureRecognizer *)arg2;
- (UIView *)gestureInput:(ISGestureInput *)arg1 viewHostingGestureRecognizer:(UIGestureRecognizer *)arg2;
@end


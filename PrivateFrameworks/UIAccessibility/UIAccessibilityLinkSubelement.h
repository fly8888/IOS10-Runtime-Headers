//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class UITextRange;

@interface UIAccessibilityLinkSubelement : UIAccessibilityElement
{
    struct _NSRange _range;
}

@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (float)_accessibilityActivationDelay;
- (struct CGRect)accessibilityFrame;
@property(readonly) UITextRange *textRange;
- (unsigned long long)accessibilityTraits;

@end

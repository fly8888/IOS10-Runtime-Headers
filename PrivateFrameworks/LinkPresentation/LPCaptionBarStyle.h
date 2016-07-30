//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LPImageViewStyle, LPPadding, LPPlayButtonStyle, LPPointUnit, LPVerticalTextStackViewStyle;

__attribute__((visibility("hidden")))
@interface LPCaptionBarStyle : NSObject
{
    LPImageViewStyle *_leadingIcon;
    LPImageViewStyle *_trailingIcon;
    LPVerticalTextStackViewStyle *_textStack;
    LPPointUnit *_minimumWidth;
    LPImageViewStyle *_placeholderIcon;
    LPPlayButtonStyle *_playButton;
    LPPadding *_playButtonPadding;
}

@property(readonly, retain, nonatomic) LPPadding *playButtonPadding; // @synthesize playButtonPadding=_playButtonPadding;
@property(readonly, nonatomic) LPPlayButtonStyle *playButton; // @synthesize playButton=_playButton;
@property(readonly, nonatomic) LPImageViewStyle *placeholderIcon; // @synthesize placeholderIcon=_placeholderIcon;
@property(retain, nonatomic) LPPointUnit *minimumWidth; // @synthesize minimumWidth=_minimumWidth;
@property(readonly, nonatomic) LPVerticalTextStackViewStyle *textStack; // @synthesize textStack=_textStack;
@property(readonly, nonatomic) LPImageViewStyle *trailingIcon; // @synthesize trailingIcon=_trailingIcon;
@property(readonly, nonatomic) LPImageViewStyle *leadingIcon; // @synthesize leadingIcon=_leadingIcon;
- (void).cxx_destruct;
- (id)init;

@end

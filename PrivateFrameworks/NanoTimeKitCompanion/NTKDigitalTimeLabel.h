//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClockKitUI/CLKUITimeLabel.h>

#import <NanoTimeKitCompanion/NTKColoringView-Protocol.h>
#import <NanoTimeKitCompanion/NTKTimeView-Protocol.h>

@class NSString, NTKDigitalTimeLabelStyle, UIColor;

@interface NTKDigitalTimeLabel : CLKUITimeLabel <NTKColoringView, NTKTimeView>
{
    _Bool _usesLegibility;
    UIColor *_color;
    UIColor *_overrideColor;
}

@property(retain, nonatomic) UIColor *overrideColor; // @synthesize overrideColor=_overrideColor;
@property(nonatomic) _Bool usesLegibility; // @synthesize usesLegibility=_usesLegibility;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)setTimeOffset:(double)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
@property(readonly, nonatomic) UIColor *contentColor;
- (void)setShadowColor:(id)arg1;
- (id)_newUnderlyingLabel:(_Bool)arg1;
- (void)animateToStyle:(id)arg1 duration:(double)arg2 timingFunction:(id)arg3 additionalAnimation:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setFrameUsingCurrentStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NTKDigitalTimeLabelStyle *style; // @dynamic style;
@property(readonly) Class superclass;

@end

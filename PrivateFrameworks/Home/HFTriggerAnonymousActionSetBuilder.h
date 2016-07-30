//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemBuilder.h>

#import <Home/HFActionSetBuilderProtocol-Protocol.h>

@class HFMutableSetDiff, HMTrigger, NSArray, NSString;

@interface HFTriggerAnonymousActionSetBuilder : HFItemBuilder <HFActionSetBuilderProtocol>
{
    NSArray *_actions;
    HMTrigger *_containingTrigger;
    HFMutableSetDiff *_actionBuilders;
}

+ (Class)homeKitRepresentationClass;
@property(retain, nonatomic) HFMutableSetDiff *actionBuilders; // @synthesize actionBuilders=_actionBuilders;
@property(retain, nonatomic) HMTrigger *containingTrigger; // @synthesize containingTrigger=_containingTrigger;
- (void).cxx_destruct;
- (id)_lazilyUpdateActions;
- (id)commitItem;
- (void)removeAllActions;
- (void)removeAction:(id)arg1;
- (void)updateAction:(id)arg1;
- (void)addAction:(id)arg1;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void)setActionSet:(id)arg1;
- (id)actionSet;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

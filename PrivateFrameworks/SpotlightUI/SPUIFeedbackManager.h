//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpotlightUI/SearchUIFeedbackDelegate-Protocol.h>

@class NSString;

@interface SPUIFeedbackManager : NSObject <SearchUIFeedbackDelegate>
{
}

+ (void)aggdLogEngagementWithResult:(id)arg1 atDistanceFromTop:(double)arg2;
+ (void)didSearchInAppForSection:(id)arg1;
+ (void)didShowMoreForSection:(id)arg1;
+ (void)didRankSections:(id)arg1;
+ (void)suggestionsDidBecomeVisible:(id)arg1;
+ (void)didPerformSearchOnSuggestion:(id)arg1;
+ (void)didDisappearWithReason:(unsigned long long)arg1;
+ (void)didTapResult:(id)arg1;
+ (void)didPeekResult:(id)arg1;
+ (void)didPopResult:(id)arg1;
+ (void)didEngageResult:(id)arg1 forReason:(unsigned long long)arg2;
+ (void)resultsDidBecomeVisible:(id)arg1 why:(unsigned long long)arg2;
+ (void)didEndSearch:(id)arg1;
+ (id)didStartSearch:(id)arg1 whyQuery:(unsigned long long)arg2;
+ (void)didAppearFromSource:(unsigned long long)arg1;
+ (void)didAppendLateSections:(id)arg1;
+ (id)sharedManager;
- (void)didEngageCardSection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

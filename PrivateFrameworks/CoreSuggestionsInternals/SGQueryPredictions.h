//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SFFeedbackListener-Protocol.h>
#import <CoreSuggestionsInternals/SGQPAssetUpdateDelegate-Protocol.h>

@class NSString, SGQPLanguageContext, SGQPMetricsTracker, SGSqlEntityStore;

@interface SGQueryPredictions : NSObject <SFFeedbackListener, SGQPAssetUpdateDelegate>
{
    SGSqlEntityStore *_harvestStore;
    SGQPMetricsTracker *_metricsTracker;
    SGQPLanguageContext *_noLanguageContext;
    SGQPLanguageContext *_primaryLanguageContext;
}

+ (id)sharedInstance;
@property(retain) SGQPLanguageContext *primaryLanguageContext; // @synthesize primaryLanguageContext=_primaryLanguageContext;
@property(retain) SGQPLanguageContext *noLanguageContext; // @synthesize noLanguageContext=_noLanguageContext;
@property(retain) SGQPMetricsTracker *metricsTracker; // @synthesize metricsTracker=_metricsTracker;
- (void).cxx_destruct;
- (id)currentMetricsTrackerForTesting;
- (void)searchViewDidDisappear:(id)arg1;
- (void)didEngageResult:(id)arg1;
- (void)didEngageSuggestion:(id)arg1;
- (void)didEndSearch:(id)arg1;
- (void)didStartSearch:(id)arg1;
- (void)sendCustomFeedback:(id)arg1;
- (void)searchViewDidAppear:(id)arg1;
- (id)queryPredictionsFeedbackReportForConversation:(id)arg1;
- (id)predictionsForConversation:(id)arg1 count:(unsigned long long)arg2;
- (id)languageContextForMessages:(id)arg1;
- (void)primaryAssetUpdated:(id)arg1;
- (id)initWithStore:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

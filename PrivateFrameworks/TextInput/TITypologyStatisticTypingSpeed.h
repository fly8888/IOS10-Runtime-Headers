//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInput/TITypologyStatisticComposite.h>

@class TITypologyStatisticBasicCounts, TITypologyStatisticTimeElapsed;

@interface TITypologyStatisticTypingSpeed : TITypologyStatisticComposite
{
    TITypologyStatisticTimeElapsed *_timeElapsed;
    TITypologyStatisticBasicCounts *_basicCounts;
}

+ (id)statisticCompositeWithStatistics:(id)arg1;
+ (id)statistic;
@property(readonly, nonatomic) TITypologyStatisticBasicCounts *basicCounts; // @synthesize basicCounts=_basicCounts;
@property(readonly, nonatomic) TITypologyStatisticTimeElapsed *timeElapsed; // @synthesize timeElapsed=_timeElapsed;
- (id)aggregateReport;
@property(readonly, nonatomic) float typingSpeed;
- (void)dealloc;
- (id)initWithTimeElapsed:(id)arg1 basicCounts:(id)arg2;

@end

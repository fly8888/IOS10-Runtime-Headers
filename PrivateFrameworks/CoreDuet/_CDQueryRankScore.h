//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSSecureCoding-Protocol.h>

@class NSSet;

@interface _CDQueryRankScore : NSObject <NSSecureCoding>
{
    double _weekPeriodScore;
    double _engagedScore;
    double _renderedScore;
    double _timeScore;
    double _timeOfDayScore;
    double _timeOfWeekScore;
    double _durationScore;
    double _offset;
    double _delta;
    double _deltaTimeOfDay;
    double _deltaTimeOfWeek;
    unsigned long long _suggestionType;
}

+ (_Bool)supportsSecureCoding;
+ (id)scoreFromQueryEvent:(id)arg1 parameters:(id)arg2;
+ (_Bool)_isDateInWeekend:(id)arg1;
@property unsigned long long suggestionType; // @synthesize suggestionType=_suggestionType;
@property double deltaTimeOfWeek; // @synthesize deltaTimeOfWeek=_deltaTimeOfWeek;
@property double deltaTimeOfDay; // @synthesize deltaTimeOfDay=_deltaTimeOfDay;
@property double delta; // @synthesize delta=_delta;
@property(readonly) double offset; // @synthesize offset=_offset;
@property(readonly) double durationScore; // @synthesize durationScore=_durationScore;
@property(readonly) double timeOfWeekScore; // @synthesize timeOfWeekScore=_timeOfWeekScore;
@property(readonly) double timeOfDayScore; // @synthesize timeOfDayScore=_timeOfDayScore;
@property(readonly) double timeScore; // @synthesize timeScore=_timeScore;
@property(readonly) double renderedScore; // @synthesize renderedScore=_renderedScore;
@property(readonly) double engagedScore; // @synthesize engagedScore=_engagedScore;
@property(readonly) double weekPeriodScore; // @synthesize weekPeriodScore=_weekPeriodScore;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqualToRankScore:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)initWithQueryEvent:(id)arg1 parameters:(id)arg2;
@property(readonly, copy) NSSet *reasons;
@property(readonly) double score;

@end

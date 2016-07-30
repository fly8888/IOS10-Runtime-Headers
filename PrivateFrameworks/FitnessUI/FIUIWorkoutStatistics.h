//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKQuantity, NSArray, NSDate;

@interface FIUIWorkoutStatistics : NSObject
{
    NSArray *_workouts;
    long long _numberOfWalkRunWorkouts;
    long long _numberOfCyclingWorkouts;
    _Bool _isAllOutdoorCycling;
    _Bool _isAllRunning;
    double _totalWorkoutDuration;
    double _averageWorkoutDuration;
    HKQuantity *_totalActiveEnergyBurn;
    HKQuantity *_averageActiveEnergyBurn;
    HKQuantity *_totalWalkRunDistance;
    HKQuantity *_averageWalkRunDistance;
    double _totalWalkRunDuration;
    HKQuantity *_totalCyclingDistance;
    HKQuantity *_averageCyclingDistance;
    double _totalCyclingDuration;
    NSDate *_startOfMonth;
}

+ (id)_monthFormatter;
@property(readonly, nonatomic) NSDate *startOfMonth; // @synthesize startOfMonth=_startOfMonth;
@property(readonly, nonatomic) double totalCyclingDuration; // @synthesize totalCyclingDuration=_totalCyclingDuration;
@property(readonly, nonatomic) HKQuantity *averageCyclingDistance; // @synthesize averageCyclingDistance=_averageCyclingDistance;
@property(readonly, nonatomic) HKQuantity *totalCyclingDistance; // @synthesize totalCyclingDistance=_totalCyclingDistance;
@property(readonly, nonatomic) double totalWalkRunDuration; // @synthesize totalWalkRunDuration=_totalWalkRunDuration;
@property(readonly, nonatomic) HKQuantity *averageWalkRunDistance; // @synthesize averageWalkRunDistance=_averageWalkRunDistance;
@property(readonly, nonatomic) HKQuantity *totalWalkRunDistance; // @synthesize totalWalkRunDistance=_totalWalkRunDistance;
@property(readonly, nonatomic) HKQuantity *averageActiveEnergyBurn; // @synthesize averageActiveEnergyBurn=_averageActiveEnergyBurn;
@property(readonly, nonatomic) HKQuantity *totalActiveEnergyBurn; // @synthesize totalActiveEnergyBurn=_totalActiveEnergyBurn;
@property(readonly, nonatomic) double averageWorkoutDuration; // @synthesize averageWorkoutDuration=_averageWorkoutDuration;
@property(readonly, nonatomic) double totalWorkoutDuration; // @synthesize totalWorkoutDuration=_totalWorkoutDuration;
- (void).cxx_destruct;
- (void)_calculateAverages;
- (void)_calculateStats;
@property(readonly, nonatomic) unsigned long long workoutCount;
- (id)init;
- (id)initWithWorkouts:(id)arg1;
- (id)formattedWorkoutCount;
- (id)simpleWorkoutCount;
- (id)_formattedCyclingDistance:(id)arg1;
- (id)formattedAverageCyclingDistance;
- (id)formattedTotalCyclingDistance;
- (id)_formattedWalkRunDistance:(id)arg1;
- (id)formattedAverageWalkRunDistance;
- (id)formattedTotalWalkRunDistance;
- (id)_formattedEnergyBurn:(id)arg1;
- (id)formattedAverageActiveEnergyBurn;
- (id)formattedTotalActiveEnergyBurn;
- (id)_formattedDuration:(double)arg1;
- (id)formattedAverageWorkoutDuration;
- (id)formattedTotalWorkoutDuration;
- (id)formattedSpeed;
- (id)formattedPace;
- (id)formattedCyclingDistance;
- (id)formattedWalkRunDistance;
- (id)formattedActiveEnergyBurn;
- (id)formattedWorkoutDuration;
- (id)formattedMonth;

@end

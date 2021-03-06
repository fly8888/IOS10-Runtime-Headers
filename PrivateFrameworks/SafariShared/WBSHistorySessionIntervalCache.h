//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar;
@protocol OS_dispatch_queue;

@interface WBSHistorySessionIntervalCache : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSCalendar *_calendar;
    Vector_23cb8338 _intervalCache;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_getSessionIntervalForTime:(double)arg1 beginningOfDay:(double *)arg2 beginningOfNextDay:(double *)arg3;
- (double)_beginningOfSessionContainingTime:(double)arg1;
- (double)beginningOfSessionContainingTime:(double)arg1;
- (id)initWithCalendar:(id)arg1;
- (id)init;

@end


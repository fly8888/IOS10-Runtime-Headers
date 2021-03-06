//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MKMapItem, MKTransitSectionPagingFilter, NSDate, NSSet;
@protocol GEOTransitSystem;

__attribute__((visibility("hidden")))
@interface MKTransitSectionController : NSObject
{
    MKMapItem *_mapItem;
    MKTransitSectionPagingFilter *_pagingFilter;
    NSSet *_linesToShow;
    unsigned long long _numberOfRows;
    unsigned long long _numberOfFilteredRows;
    unsigned long long _numberOfFilteredLines;
    _Bool _needsBuildRows;
    id <GEOTransitSystem> _system;
    NSDate *_departureCutoffDate;
    NSDate *_expiredHighFrequencyCutoffDate;
    NSSet *_incidentEntitiesToExclude;
}

@property(readonly, nonatomic) unsigned long long numberOfFilteredLines; // @synthesize numberOfFilteredLines=_numberOfFilteredLines;
@property(retain, nonatomic) NSSet *incidentEntitiesToExclude; // @synthesize incidentEntitiesToExclude=_incidentEntitiesToExclude;
@property(retain, nonatomic) NSDate *expiredHighFrequencyCutoffDate; // @synthesize expiredHighFrequencyCutoffDate=_expiredHighFrequencyCutoffDate;
@property(retain, nonatomic) NSDate *departureCutoffDate; // @synthesize departureCutoffDate=_departureCutoffDate;
@property(readonly, nonatomic) id <GEOTransitSystem> system; // @synthesize system=_system;
- (void).cxx_destruct;
- (void)_buildRows;
- (void)_setNeedsBuildRows;
- (_Bool)_needsBuildRows;
- (id)linesToShow;
- (_Bool)hasFilteredLines;
- (_Bool)hasFilteredRows;
- (unsigned long long)numberOfRows;
- (void)incrementPagingFilter;
- (id)initWithMapItem:(id)arg1 system:(id)arg2;
- (id)init;

@end


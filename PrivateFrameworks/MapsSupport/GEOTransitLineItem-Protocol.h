//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSupport/GEOTransitLine-Protocol.h>

@class GEOMapRegion, NSArray;
@protocol GEOEncyclopedicInfo, GEOTransitAttribution;

@protocol GEOTransitLineItem <GEOTransitLine>
@property(readonly, nonatomic) id <GEOEncyclopedicInfo> encyclopedicInfo;
@property(readonly, nonatomic) _Bool hasEncyclopedicInfo;
@property(readonly, nonatomic) _Bool hasIncidentComponent;
@property(readonly, nonatomic) _Bool isIncidentsTTLExpired;
@property(readonly, nonatomic) NSArray *incidents;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, nonatomic) id <GEOTransitAttribution> attribution;
@property(readonly, nonatomic) NSArray *labelItems;
@end


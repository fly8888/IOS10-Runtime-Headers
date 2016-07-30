//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOComposedRouteStep, GEOComposedTransitTripRouteStep, GEOPBTransitStation, GEOPBTransitStop;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchUpdater_EnterBoard : _GEORouteMatchUpdater
{
    GEOPBTransitStop *_transitStop;
    GEOPBTransitStation *_transitStation;
    CDStruct_2c43369c _entranceCoordinate;
    struct PolylineCoordinate _routeCoordinateApproaching;
    struct PolylineCoordinate _routeCoordinateAtStation;
    GEOComposedRouteStep *_enterStationStep;
    GEOComposedRouteStep *_boardVehicleStep;
    GEOComposedTransitTripRouteStep *_rideStep;
    _Bool _hasEnteredStation;
}

- (id).cxx_construct;
- (_Bool)_isLocationNearAccessPoint:(id)arg1;
- (_Bool)_isLocationNearTransitNode:(id)arg1;
- (_Bool)_isLocationNearEndOfWalkingLeg:(id)arg1;
- (_Bool)_hasLocationExitedStation:(id)arg1;
- (_Bool)_hasLocationEnteredStation:(id)arg1 routeMatch:(id)arg2;
- (_Bool)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (void)dealloc;
- (id)initWithTransitRouteMatcher:(id)arg1 boardVehicleStep:(id)arg2;

@end

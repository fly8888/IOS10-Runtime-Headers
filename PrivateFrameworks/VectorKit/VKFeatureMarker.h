//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOFeatureStyleAttributes, NSString;

@interface VKFeatureMarker : NSObject
{
    shared_ptr_430519ce _actualFeatureMarker;
}

+ (id)markerWithFeatureMarker:(const shared_ptr_430519ce *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (shared_ptr_430519ce *)actualFeatureMarker;
@property(readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property(readonly, nonatomic) unsigned long long featureID;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;
- (id)initWithFeatureMarkerPtr:(const shared_ptr_430519ce *)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng;

@interface GEORoadAccessPoint : PBCodable <NSCopying>
{
    int _drivingDirection;
    GEOLatLng *_location;
    int _walkingDirection;
    _Bool _isApproximate;
    struct {
        unsigned int drivingDirection:1;
        unsigned int walkingDirection:1;
        unsigned int isApproximate:1;
    } _has;
}

@property(nonatomic) _Bool isApproximate; // @synthesize isApproximate=_isApproximate;
@property(retain, nonatomic) GEOLatLng *location; // @synthesize location=_location;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsDrivingDirection:(id)arg1;
- (id)drivingDirectionAsString:(int)arg1;
@property(nonatomic) _Bool hasDrivingDirection;
@property(nonatomic) int drivingDirection; // @synthesize drivingDirection=_drivingDirection;
- (int)StringAsWalkingDirection:(id)arg1;
- (id)walkingDirectionAsString:(int)arg1;
@property(nonatomic) _Bool hasWalkingDirection;
@property(nonatomic) int walkingDirection; // @synthesize walkingDirection=_walkingDirection;
@property(nonatomic) _Bool hasIsApproximate;
@property(readonly, nonatomic) _Bool hasLocation;
- (void)dealloc;

@end


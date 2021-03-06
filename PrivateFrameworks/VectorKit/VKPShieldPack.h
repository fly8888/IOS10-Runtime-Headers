//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VectorKit/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VKPShieldPack : PBCodable <NSCopying>
{
    NSMutableArray *_atlas;
    NSMutableArray *_shields;
}

@property(retain, nonatomic) NSMutableArray *shields; // @synthesize shields=_shields;
@property(retain, nonatomic) NSMutableArray *atlas; // @synthesize atlas=_atlas;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)shieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)shieldsCount;
- (void)addShields:(id)arg1;
- (void)clearShields;
- (id)atlasAtIndex:(unsigned long long)arg1;
- (unsigned long long)atlasCount;
- (void)addAtlas:(id)arg1;
- (void)clearAtlas;
- (void)dealloc;

@end


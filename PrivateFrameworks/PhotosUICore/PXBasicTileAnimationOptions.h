//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@interface PXBasicTileAnimationOptions : NSObject <NSCopying>
{
    _Bool _shouldNotifyTiles;
    _Bool _shouldSnapshotDynamicContents;
    double _delay;
    double _duration;
    long long _style;
}

+ (id)defaultAnimationOptions;
@property(nonatomic) _Bool shouldSnapshotDynamicContents; // @synthesize shouldSnapshotDynamicContents=_shouldSnapshotDynamicContents;
@property(nonatomic) _Bool shouldNotifyTiles; // @synthesize shouldNotifyTiles=_shouldNotifyTiles;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double delay; // @synthesize delay=_delay;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

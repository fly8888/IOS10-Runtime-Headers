//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PairedSync/NSCopying-Protocol.h>
#import <PairedSync/NSSecureCoding-Protocol.h>

@class NSError, PSYActivityInfo;

@interface PSYSyncSessionActivity : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _finishedSending;
    PSYActivityInfo *_activityInfo;
    double _activityProgress;
    NSError *_error;
    unsigned long long _activityState;
    long long _interruptionCount;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long interruptionCount; // @synthesize interruptionCount=_interruptionCount;
@property(readonly, nonatomic) unsigned long long activityState; // @synthesize activityState=_activityState;
@property(readonly, nonatomic, getter=isFinishedSending) _Bool finishedSending; // @synthesize finishedSending=_finishedSending;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) double activityProgress; // @synthesize activityProgress=_activityProgress;
@property(readonly, nonatomic) PSYActivityInfo *activityInfo; // @synthesize activityInfo=_activityInfo;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithActivityInfo:(id)arg1 progress:(double)arg2 error:(id)arg3 state:(unsigned long long)arg4 finishedSending:(_Bool)arg5 interruptionCount:(long long)arg6;
- (id)syncSessionActivityByUpdatingProgress:(double)arg1;

@end

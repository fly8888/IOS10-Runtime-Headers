//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCSolConfiguration;

@interface FCHeadlineClusteringRules : NSObject
{
    unsigned long long _minCluserSize;
    unsigned long long _maxCluserSize;
    FCSolConfiguration *_solConfiguration;
}

+ (id)defaultRules;
@property(retain, nonatomic) FCSolConfiguration *solConfiguration; // @synthesize solConfiguration=_solConfiguration;
@property(readonly, nonatomic) unsigned long long maxCluserSize; // @synthesize maxCluserSize=_maxCluserSize;
@property(readonly, nonatomic) unsigned long long minCluserSize; // @synthesize minCluserSize=_minCluserSize;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMinClusterSize:(unsigned long long)arg1 maxClusterSize:(unsigned long long)arg2 solConfiguration:(id)arg3;
- (id)initWithMinClusterSize:(unsigned long long)arg1 maxClusterSize:(unsigned long long)arg2;

@end

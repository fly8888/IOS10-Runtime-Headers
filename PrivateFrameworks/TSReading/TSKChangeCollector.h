//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TSKChangeCollector : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)threadCollector;
+ (id)_singletonAlloc;
- (void)registerChange:(int)arg1 details:(id)arg2 forChangeSource:(id)arg3;
- (id)peekCollectedChanges;
- (id)endCollectingChanges;
- (void)beginCollectingChanges;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSArray, NSDictionary, NSString;

@interface SBBootDefaults : SBAbstractSpringBoardDefaultDomain
{
}

- (void)_bindAndRegisterDefaults;

// Remaining properties
@property(nonatomic) NSDictionary *bootTransitionContext; // @dynamic bootTransitionContext;
@property(readonly, nonatomic) _Bool dontLockAfterCrash; // @dynamic dontLockAfterCrash;
@property(nonatomic) _Bool hasAttemptedToSynchronizeCloudCriticalData; // @dynamic hasAttemptedToSynchronizeCloudCriticalData;
@property(retain, nonatomic) NSString *lastSystemBuildVersion; // @dynamic lastSystemBuildVersion;
@property(retain, nonatomic) NSArray *previousBootLanguages; // @dynamic previousBootLanguages;
@property(readonly, nonatomic) _Bool recordBootTimeTillDidFinishLaunching; // @dynamic recordBootTimeTillDidFinishLaunching;

@end


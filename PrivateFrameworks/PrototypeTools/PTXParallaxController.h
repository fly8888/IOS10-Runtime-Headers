//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PrototypeTools/_UISettingsKeyObserver-Protocol.h>

@class CADisplayLink, CMMotionManager, NSHashTable, NSMutableSet, NSString, PTXParallaxEngineSettings, PTXParallaxReferenceFrame;

@interface PTXParallaxController : NSObject <_UISettingsKeyObserver>
{
    NSHashTable *_observers;
    CMMotionManager *_motionManager;
    CADisplayLink *_displayLink;
    PTXParallaxEngineSettings *_settings;
    PTXParallaxReferenceFrame *_referenceFrame;
    double _startUpdatesTimestamp;
    _Bool _generatingUpdates;
    NSMutableSet *_suspendReasons;
}

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)_sendClearOffset;
- (void)_sendOffset:(struct CGPoint)arg1 lockStatus:(long long)arg2 lockStrength:(double)arg3;
- (_Bool)_suspended;
- (_Bool)_shouldGenerateUpdates;
- (void)_defaultsChanged:(id)arg1;
- (void)_onDisplayLink:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_tearDownDisplayLink;
- (void)_setUpDisplayLink;
- (void)_stopGeneratingUpdates;
- (void)_startGeneratingUpdates;
- (void)_startOrStopGeneratingUpdates;
- (void)resume:(id)arg1;
- (void)suspend:(id)arg1;
- (void)resetReferenceFrame;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithParallaxEngineSettings:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


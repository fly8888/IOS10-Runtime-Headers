//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDMerging-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDDevice, HMDHome, NSString, NSUUID;

@interface HMDResidentDevice : NSObject <HMFDumpState, HMFLogging, HMDMerging, NSSecureCoding>
{
    _Bool _enabled;
    _Bool _confirmed;
    _Bool _lowBattery;
    NSUUID *_identifier;
    HMDDevice *_device;
    long long _batteryState;
    HMDHome *_home;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
+ (id)shortDescription;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(nonatomic, getter=isLowBattery) _Bool lowBattery; // @synthesize lowBattery=_lowBattery;
@property(nonatomic) long long batteryState; // @synthesize batteryState=_batteryState;
@property(nonatomic, getter=isConfirmed) _Bool confirmed; // @synthesize confirmed=_confirmed;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) HMDDevice *device; // @synthesize device=_device;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dumpState;
- (_Bool)mergeObject:(id)arg1;
@property(readonly, nonatomic) unsigned long long status;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (id)initWithDevice:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end

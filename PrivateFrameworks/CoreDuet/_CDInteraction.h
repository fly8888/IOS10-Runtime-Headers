//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSSecureCoding-Protocol.h>
#import <CoreDuet/_CDPDataPoint-Protocol.h>

@class NSArray, NSDate, NSString, NSURL, _CDContact;

@interface _CDInteraction : NSObject <_CDPDataPoint, NSSecureCoding>
{
    _Bool _isResponse;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_uuid;
    NSString *_locationUUID;
    long long _mechanism;
    long long _direction;
    NSString *_bundleId;
    NSURL *_contentURL;
    NSString *_domainIdentifier;
    NSString *_account;
    _CDContact *_sender;
    NSArray *_recipients;
    NSArray *_keywords;
}

+ (_Bool)supportsSecureCoding;
@property(retain) NSArray *keywords; // @synthesize keywords=_keywords;
@property(retain) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain) _CDContact *sender; // @synthesize sender=_sender;
@property(retain) NSString *account; // @synthesize account=_account;
@property(retain) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property(retain) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(retain) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property _Bool isResponse; // @synthesize isResponse=_isResponse;
@property long long direction; // @synthesize direction=_direction;
@property long long mechanism; // @synthesize mechanism=_mechanism;
@property(retain) NSString *locationUUID; // @synthesize locationUUID=_locationUUID;
@property(retain) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)descriptionOfArray:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool userIsThreadInitiator;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSArray *peopleIdentifiers;
@property(readonly, nonatomic) NSDate *timestamp;
@property(readonly, nonatomic) _Bool userIsSender;
- (id)initwithINInteraction:(id)arg1 bundleID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


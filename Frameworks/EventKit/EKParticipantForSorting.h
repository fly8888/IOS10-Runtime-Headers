//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EKParticipant, NSString;

@interface EKParticipantForSorting : NSObject
{
    EKParticipant *_participant;
    NSString *_firstName;
    NSString *_lastName;
    _Bool _isEmail;
    NSString *_cachedDisplayName;
}

+ (id)contactStore;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)lastName;
- (id)firstName;
- (id)displayName;
- (_Bool)isEmail;
- (id)participant;
- (id)description;
- (id)initWithEKParticipant:(id)arg1;

@end


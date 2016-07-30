//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VisualVoicemail/NSSecureCoding-Protocol.h>

@class NSURL;

@interface VMVoicemailGreeting : NSObject <NSSecureCoding>
{
    double _duration;
    NSURL *_url;
    unsigned long long _type;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

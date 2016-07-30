//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSURL;

@interface TUCallProvider : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _enabled;
    _Bool _supportsAudioOnly;
    _Bool _supportsAudioAndVideo;
    _Bool _supportsEmergency;
    _Bool _supportsVoicemail;
    _Bool _hasRestrictionsInRetailEnvironment;
    unsigned int _audioSessionID;
    NSString *_identifier;
    NSString *_localizedName;
    NSURL *_bundleURL;
    NSString *_bundleIdentifier;
    NSString *_URLScheme;
    NSArray *_handoffIdentifiers;
    NSURL *_ringtoneSoundURL;
    unsigned long long _maximumCallGroups;
    unsigned long long _maximumCallsPerCallGroup;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property(nonatomic) _Bool hasRestrictionsInRetailEnvironment; // @synthesize hasRestrictionsInRetailEnvironment=_hasRestrictionsInRetailEnvironment;
@property(nonatomic) unsigned long long maximumCallsPerCallGroup; // @synthesize maximumCallsPerCallGroup=_maximumCallsPerCallGroup;
@property(nonatomic) unsigned long long maximumCallGroups; // @synthesize maximumCallGroups=_maximumCallGroups;
@property(copy, nonatomic) NSURL *ringtoneSoundURL; // @synthesize ringtoneSoundURL=_ringtoneSoundURL;
@property(copy, nonatomic) NSArray *handoffIdentifiers; // @synthesize handoffIdentifiers=_handoffIdentifiers;
@property(copy, nonatomic) NSString *URLScheme; // @synthesize URLScheme=_URLScheme;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(nonatomic) _Bool supportsVoicemail; // @synthesize supportsVoicemail=_supportsVoicemail;
@property(nonatomic) _Bool supportsEmergency; // @synthesize supportsEmergency=_supportsEmergency;
@property(nonatomic) _Bool supportsAudioAndVideo; // @synthesize supportsAudioAndVideo=_supportsAudioAndVideo;
@property(nonatomic) _Bool supportsAudioOnly; // @synthesize supportsAudioOnly=_supportsAudioOnly;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToCallProvider:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)inCallUIBundleIdentifier;
- (id)bundle;
- (_Bool)prefersShowingInCallUI;
- (_Bool)supportsShowingInCallUI;
- (_Bool)isSystemProvider;
@property(readonly, nonatomic, getter=isFaceTimeProvider) _Bool faceTimeProvider;
@property(readonly, nonatomic, getter=isTelephonyProvider) _Bool telephonyProvider;
- (id)description;
- (id)init;
- (id)initWithIdentifier:(id)arg1;

@end

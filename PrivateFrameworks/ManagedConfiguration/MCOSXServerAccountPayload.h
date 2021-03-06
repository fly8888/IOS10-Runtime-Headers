//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSArray, NSNumber, NSString;

@interface MCOSXServerAccountPayload : MCPayload
{
    _Bool _documentsConfigured;
    NSString *_accountDescription;
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    NSArray *_configuredAccounts;
    NSNumber *_documentsPort;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(readonly, nonatomic) NSNumber *documentsPort; // @synthesize documentsPort=_documentsPort;
@property(readonly, nonatomic) _Bool documentsConfigured; // @synthesize documentsConfigured=_documentsConfigured;
@property(readonly, nonatomic) NSArray *configuredAccounts; // @synthesize configuredAccounts=_configuredAccounts;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(readonly, nonatomic) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;
- (void).cxx_destruct;
- (_Bool)containsSensitiveUserInformation;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)title;
- (id)stubDictionary;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end


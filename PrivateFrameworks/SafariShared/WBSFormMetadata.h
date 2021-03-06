//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface WBSFormMetadata : NSObject
{
    _Bool _allowsAutocomplete;
    _Bool _containsActiveElement;
    _Bool _bestForCredentialPreFill;
    _Bool _bestForPageLevelAutoFill;
    _Bool _visible;
    _Bool _usesRelAsync;
    _Bool _usesGeneratedPassword;
    NSDictionary *_annotations;
    unsigned long long _type;
    NSString *_confirmPasswordElementUniqueID;
    NSString *_firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;
    NSURL *_action;
    NSArray *_controls;
    long long _uniqueID;
    NSString *_oldPasswordElementUniqueID;
    NSString *_passwordElementUniqueID;
    NSDictionary *_radioButtonInfo;
    NSString *_textSample;
    NSString *_userNameElementUniqueID;
    unsigned long long _requestType;
}

@property(readonly, nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(readonly, nonatomic) _Bool usesGeneratedPassword; // @synthesize usesGeneratedPassword=_usesGeneratedPassword;
@property(readonly, copy, nonatomic) NSString *userNameElementUniqueID; // @synthesize userNameElementUniqueID=_userNameElementUniqueID;
@property(readonly, copy, nonatomic) NSString *textSample; // @synthesize textSample=_textSample;
@property(readonly, copy, nonatomic) NSDictionary *radioButtonInfo; // @synthesize radioButtonInfo=_radioButtonInfo;
@property(readonly, copy, nonatomic) NSString *passwordElementUniqueID; // @synthesize passwordElementUniqueID=_passwordElementUniqueID;
@property(readonly, copy, nonatomic) NSString *oldPasswordElementUniqueID; // @synthesize oldPasswordElementUniqueID=_oldPasswordElementUniqueID;
@property(readonly, nonatomic) _Bool usesRelAsync; // @synthesize usesRelAsync=_usesRelAsync;
@property(readonly, nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(readonly, nonatomic, getter=isBestForPageLevelAutoFill) _Bool bestForPageLevelAutoFill; // @synthesize bestForPageLevelAutoFill=_bestForPageLevelAutoFill;
@property(readonly, nonatomic, getter=isBestForCredentialPreFill) _Bool bestForCredentialPreFill; // @synthesize bestForCredentialPreFill=_bestForCredentialPreFill;
@property(readonly, nonatomic) long long uniqueID; // @synthesize uniqueID=_uniqueID;
@property(readonly, copy, nonatomic) NSArray *controls; // @synthesize controls=_controls;
@property(readonly, nonatomic) NSURL *action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSString *firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID; // @synthesize firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID=_firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;
@property(readonly, nonatomic) _Bool containsActiveElement; // @synthesize containsActiveElement=_containsActiveElement;
@property(readonly, copy, nonatomic) NSString *confirmPasswordElementUniqueID; // @synthesize confirmPasswordElementUniqueID=_confirmPasswordElementUniqueID;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSDictionary *annotations; // @synthesize annotations=_annotations;
@property(readonly, nonatomic) _Bool allowsAutocomplete; // @synthesize allowsAutocomplete=_allowsAutocomplete;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithJSValue:(id)arg1;

@end


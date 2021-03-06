//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupProvisioningFieldsViewController.h>

@class PKPaymentCredential, UIImage;

@interface PKPaymentCredentialProvisioningViewController : PKPaymentSetupProvisioningFieldsViewController
{
    UIImage *_passSnapshot;
    unsigned long long _credentialProvisiningType;
    PKPaymentCredential *_paymentCredential;
}

@property(retain, nonatomic) PKPaymentCredential *paymentCredential; // @synthesize paymentCredential=_paymentCredential;
- (void).cxx_destruct;
- (id)_defaultHeaderViewSubTitleForLocalCredential;
- (id)_remoteCredentialDefaultHeaderViewSubTitle;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (id)readonlyFieldIdentifiers;
- (id)visibleFieldIdentifiers;
- (id)defaultFields;
- (void)_performFinishWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performProvisionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performTermsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performEligibilityWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performRequirementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)preflightRequiredFieldsWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool needsRequiredFieldsPreflight;
- (id)newPaymentProvisioningRequest;
- (id)newPaymentEligibilityRequest;
- (id)newPaymentRequirementsRequest;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)shouldAppearWithFirstEmptyFieldAsFirstResponder;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <NanoTimeKitCompanion/UITextFieldDelegate-Protocol.h>

@class NSString, UITextField;

@interface NTKCompanionMonogramEntryViewController : PSListController <UITextFieldDelegate>
{
    UITextField *_monogramEntry;
}

@property(retain, nonatomic) UITextField *monogramEntry; // @synthesize monogramEntry=_monogramEntry;
- (void).cxx_destruct;
- (void)_resetEntryField;
- (id)customMonogram:(id)arg1;
- (void)setCustomMonogram:(id)arg1 specifier:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)returnPressedAtEnd;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)specifiers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

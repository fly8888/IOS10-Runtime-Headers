//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAAppDocumentController.h>

__attribute__((visibility("hidden")))
@interface VSACredentialEntryAppDocumentController : VSAAppDocumentController
{
}

- (_Bool)_updateCredentialEntryViewModel:(id)arg1 withTemplate:(id)arg2 error:(id *)arg3;
- (_Bool)_updateCredentialEntryViewModel:(id)arg1 error:(id *)arg2;
- (id)_credentialEntryViewModelWithViewModel:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)_updateViewModel:(id)arg1 error:(id *)arg2;
- (id)_newViewModel;
- (void)_stopObservingViewModel:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;

@end


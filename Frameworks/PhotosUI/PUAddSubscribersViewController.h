//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PLCloudSharedAlbum, PUPhotoStreamRecipientViewController, UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface PUAddSubscribersViewController : UIViewController
{
    PUPhotoStreamRecipientViewController *_composeRecipientController;
    UIBarButtonItem *_addButton;
    PLCloudSharedAlbum *_album;
}

@property(readonly, nonatomic) PLCloudSharedAlbum *album; // @synthesize album=_album;
- (void).cxx_destruct;
- (void)recipientViewController:(id)arg1 didEnterText:(id)arg2;
- (void)recipientViewControllerDidRemoveRecipient:(id)arg1;
- (void)recipientViewControllerDidAddRecipient:(id)arg1;
- (id)backingNavigationControllerForComposeRecipientViewController:(id)arg1;
- (_Bool)_validateRecipientsToAdd:(id)arg1;
- (void)_saveAndDismiss;
- (void)_dismiss;
- (void)_cancelButtonHandler;
- (void)_addButtonHandler;
- (void)_keyboardWillShow:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)contentScrollView;
- (void)dealloc;
- (id)initWithSharedStream:(id)arg1;

@end

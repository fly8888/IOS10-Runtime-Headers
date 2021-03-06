//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKEditItemViewController.h>

@class EKEvent, EKEventAttendeePicker, NSArray;

__attribute__((visibility("hidden")))
@interface EKEventAttendeesEditViewController : EKEditItemViewController
{
    EKEventAttendeePicker *_picker;
    EKEvent *_event;
    _Bool _cancelTapped;
    _Bool _disableShowingButtons;
    _Bool _appendOnly;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property(nonatomic) _Bool appendOnly; // @synthesize appendOnly=_appendOnly;
@property(nonatomic) _Bool disableShowingButtons; // @synthesize disableShowingButtons=_disableShowingButtons;
- (void).cxx_destruct;
- (_Bool)editItemShouldBeAskedForInjectableViewController;
- (_Bool)presentModally;
@property(copy, nonatomic) NSArray *attendees;
- (id)_recipientFromAttendee:(id)arg1;
- (id)_attendeeFromRecipient:(id)arg1;
- (_Bool)validateAllowingAlert:(_Bool)arg1;
- (id)_firstInvalidRecipientAddress;
- (void)viewDidLoad;
- (void)setSearchAccountID:(id)arg1;
- (void)_doneTapped:(id)arg1;
- (void)_cancelTapped:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 event:(id)arg2 overriddenEventStartDate:(id)arg3 overriddenEventEndDate:(id)arg4;

@end


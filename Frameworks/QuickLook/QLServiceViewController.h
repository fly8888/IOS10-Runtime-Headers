//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSUUID;

@interface QLServiceViewController : UIViewController
{
    _Bool _isAccessoryView;
    UIViewController *_mainViewController;
    NSUUID *_uuid;
}

+ (id)_getServiceWithUUID:(id)arg1;
+ (id)_serviceViewControllers;
@property(readonly) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)_registerServiceViewController;
- (void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1;
- (void)invalidate;
@property(readonly) __weak UIViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
- (id)init;

@end

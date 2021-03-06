//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/NSObject-Protocol.h>

@class NSError, VSAApplicationController, VSAApplicationControllerRequest, VSAApplicationControllerResponse, VSAViewModel;

@protocol VSAApplicationControllerDelegate <NSObject>
- (void)applicationController:(VSAApplicationController *)arg1 request:(VSAApplicationControllerRequest *)arg2 didFailWithError:(NSError *)arg3;
- (void)applicationController:(VSAApplicationController *)arg1 request:(VSAApplicationControllerRequest *)arg2 didCompleteWithResponse:(VSAApplicationControllerResponse *)arg3;
- (void)applicationController:(VSAApplicationController *)arg1 didReceiveViewModelError:(NSError *)arg2;
- (void)applicationController:(VSAApplicationController *)arg1 didReceiveViewModel:(VSAViewModel *)arg2;
- (void)applicationController:(VSAApplicationController *)arg1 startDidFailWithError:(NSError *)arg2;
- (void)applicationControllerDidStart:(VSAApplicationController *)arg1;

@optional
- (void)applicationController:(VSAApplicationController *)arg1 didStopWithError:(NSError *)arg2;
@end


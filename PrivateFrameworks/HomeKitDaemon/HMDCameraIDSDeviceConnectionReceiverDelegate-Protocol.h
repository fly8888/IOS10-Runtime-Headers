//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraIDSDeviceConnectionReceiver, NSError;

@protocol HMDCameraIDSDeviceConnectionReceiverDelegate <NSObject>
- (void)deviceConnectionReceiver:(HMDCameraIDSDeviceConnectionReceiver *)arg1 didEndSession:(NSError *)arg2;
- (void)deviceConnectionReceiver:(HMDCameraIDSDeviceConnectionReceiver *)arg1 didSetup:(NSError *)arg2;
@end

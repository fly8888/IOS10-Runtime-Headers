//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDClient, HDDaemon, HDProfile, HDServer;
@protocol OS_dispatch_queue;

@interface HDSubserver : NSObject
{
    HDServer *_server;
    HDClient *_client;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) HDClient *client; // @synthesize client=_client;
@property(readonly, nonatomic) __weak HDServer *server; // @synthesize server=_server;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak HDDaemon *daemon;
- (void)requirePrivateHealthKitEntitlementUsingBlock:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)requireEntitlement:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)invalidate;
- (id)initWithParentServer:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/NSObject-Protocol.h>

@class NSObject;
@protocol OS_xpc_object;

@protocol BSXPCServerClient <NSObject>
@property(readonly, retain, nonatomic) NSObject<OS_xpc_object> *connection;
- (void)invalidate;
- (void)suspend;
- (void)resume;
@end


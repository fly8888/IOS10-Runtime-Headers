//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileAccessNode, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface NSFileReactorProxy : NSObject
{
    NSXPCConnection *_client;
    id _reactorID;
    NSFileAccessNode *_itemLocation;
}

- (void)collectDebuggingInformationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_clientProxy;
- (id)description;
- (id)descriptionWithIndenting:(id)arg1;
- (void)invalidate;
- (void)forwardUsingProxy:(id)arg1;
- (id)itemLocation;
- (void)setItemLocation:(id)arg1;
- (id)reactorID;
- (id)client;
- (void)dealloc;
- (id)initWithClient:(id)arg1 reactorID:(id)arg2;

@end

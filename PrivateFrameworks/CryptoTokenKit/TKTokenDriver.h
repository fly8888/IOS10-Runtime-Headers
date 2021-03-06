//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, TKTokenDriverDelegate;

@interface TKTokenDriver : NSObject
{
    id <TKTokenDriverDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_tokens;
}

+ (id)sharedDriver;
@property(retain) NSMutableDictionary *tokens; // @synthesize tokens=_tokens;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property __weak id <TKTokenDriverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)releaseTokenWithTokenID:(id)arg1;
- (void)getTokenEndpointWithAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)removeTokenEndpoint:(id)arg1;
- (id)tokenIDForInstanceID:(id)arg1;
- (void)getTokenWithAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;
@property(readonly) NSString *classID;
@property(readonly) NSDictionary *extensionAttributes;
- (id)init;

@end


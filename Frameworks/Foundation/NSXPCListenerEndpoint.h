//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSSecureCoding-Protocol.h>

@interface NSXPCListenerEndpoint : NSObject <NSSecureCoding>
{
    void *_internal;
}

+ (_Bool)supportsSecureCoding;
- (void)_setEndpoint:(id)arg1;
- (id)_endpoint;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)_initWithConnection:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MobileCoreServices/NSCopying-Protocol.h>
#import <MobileCoreServices/NSSecureCoding-Protocol.h>

@class NSDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LSLazyPropertyList : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_plist;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _peeking;
}

+ (_Bool)supportsSecureCoding;
+ (id)lazyPropertyListWithLazyPropertyLists:(id)arg1;
+ (id)lazyPropertyListWithPropertyList:(id)arg1;
+ (id)lazyPropertyListWithPropertyListData:(id)arg1;
+ (id)lazyPropertyListWithContext:(struct LSContext *)arg1 table:(unsigned int)arg2 unit:(unsigned int)arg3;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_queue; // @synthesize _queue;
@property(getter=isPeeking) _Bool peeking; // @synthesize peeking=_peeking;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_loadPropertyListPeeking:(_Bool)arg1;
@property(readonly) NSDictionary *propertyList; // @dynamic propertyList;
- (void)dealloc;
- (id)init;
- (id)_initWithPropertyList:(id)arg1;

@end


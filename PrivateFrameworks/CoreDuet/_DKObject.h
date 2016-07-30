//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSSecureCoding-Protocol.h>

@class NSDictionary, NSUUID;

@interface _DKObject : NSObject <NSSecureCoding>
{
    NSUUID *_UUID;
    NSDictionary *_metadata;
}

+ (_Bool)supportsSecureCoding;
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(_Bool)arg2 cache:(id)arg3;
+ (id)fetchObjectWithUUID:(id)arg1 context:(id)arg2;
+ (id)entityName;
@property(copy) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (id)stringValue;
- (double)doubleValue;
- (long long)integerValue;
- (_Bool)boolValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)metadataFromData:(id)arg1 cache:(id)arg2;
- (id)metadataFromData:(id)arg1;
- (_Bool)copyBaseObjectInfoFromManagedObject:(id)arg1 readMetadata:(_Bool)arg2 cache:(id)arg3;
- (_Bool)copyToManagedObject:(id)arg1;
- (id)entityName;

@end

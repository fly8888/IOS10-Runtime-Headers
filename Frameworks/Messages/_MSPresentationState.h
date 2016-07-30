//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Messages/NSSecureCoding-Protocol.h>

@interface _MSPresentationState : NSObject <NSSecureCoding>
{
    unsigned long long _presentationStyle;
    struct UIEdgeInsets _contentInsets;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) unsigned long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

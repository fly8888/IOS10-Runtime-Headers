//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CXParallelArrayEnumerator : NSObject
{
    NSArray *_arrayA;
    NSArray *_arrayB;
}

@property(retain, nonatomic) NSArray *arrayB; // @synthesize arrayB=_arrayB;
@property(retain, nonatomic) NSArray *arrayA; // @synthesize arrayA=_arrayA;
- (void).cxx_destruct;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)init;
- (id)initWithArrayA:(id)arg1 arrayB:(id)arg2;

@end


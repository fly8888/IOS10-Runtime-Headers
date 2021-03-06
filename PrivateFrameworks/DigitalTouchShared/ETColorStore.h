//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface ETColorStore : NSObject
{
    NSMutableArray *_colors;
    unsigned long long _selectedColorIndex;
    _Bool _selectedIndexLoaded;
}

+ (id)defaultStore;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long selectedColorIndex;
- (void)saveColor:(id)arg1 forIndex:(unsigned long long)arg2;
- (id)_colors;
@property(readonly, nonatomic) NSArray *colors;
- (void)defaultsChanged:(id)arg1;
- (void)addDefaultsObserver;
- (id)init;
- (void)dealloc;

@end


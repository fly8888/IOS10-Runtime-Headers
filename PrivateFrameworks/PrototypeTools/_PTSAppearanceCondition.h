//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate, NSString;

@interface _PTSAppearanceCondition : NSObject
{
    NSString *_conditionKeyPath;
    NSPredicate *_conditionPredicate;
}

+ (id)appearanceConditionWithPredicate:(id)arg1;
@property(retain, nonatomic) NSPredicate *conditionPredicate; // @synthesize conditionPredicate=_conditionPredicate;
@property(retain, nonatomic) NSString *conditionKeyPath; // @synthesize conditionKeyPath=_conditionKeyPath;
- (void).cxx_destruct;
- (_Bool)evaluateWithSettings:(id)arg1;
- (void)addKeyPathPrefix:(id)arg1;

@end

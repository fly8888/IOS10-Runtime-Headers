//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AXVisualAlertManager : NSObject
{
}

+ (id)sharedVisualAlertManager;
- (void)removeBulletin:(id)arg1;
- (id)existingBulletinForBulletin:(id)arg1;
- (void)addBulletin:(id)arg1;
- (void)stop;
- (void)startForAlertTypes:(unsigned long long)arg1 cameraTorchManager:(id)arg2;

@end

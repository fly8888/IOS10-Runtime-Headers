//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BulletinDistributorCompanion/NSObject-Protocol.h>

@class BLTPBSectionIcon, BLTPBSectionInfo, NSString;

@protocol BLTSettingSyncing <NSObject>
- (void)setSectionSubtypeParametersIcon:(BLTPBSectionIcon *)arg1 forSectionID:(NSString *)arg2 forSubtypeID:(long long)arg3;
- (void)setSectionInfo:(BLTPBSectionInfo *)arg1 completion:(void (^)(void))arg2;
@end


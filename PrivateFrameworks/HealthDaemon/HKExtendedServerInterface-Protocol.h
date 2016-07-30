//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class NSArray, NSDate, NSString, NSTimeZone, NSUUID, _HKAchievement;

@protocol HKExtendedServerInterface <NSObject>
- (void)remote_deleteAllAchievementsWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_deleteAchievementWithUUID:(NSUUID *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_setCurrentActivityCacheOverrideDate:(NSDate *)arg1 timeZone:(NSTimeZone *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_runAchievementsFixupAsDryRun:(_Bool)arg1 completion:(void (^)(NSArray *, _Bool, NSError *))arg2;
- (void)remote_addAchievement:(_HKAchievement *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_updateAllAchievementAssetsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_markAchievementDefinitionIdentifierAlertViewed:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_fetchUnviewedAchievementDefinitionIdentifiersWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_registerForAchievementDefinitionNotificationsWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_fetchHiddenUnearnedAchievementDefinitionIdentifiersAmongIdentifiers:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)remote_markAchievementAsViewed:(_HKAchievement *)arg1 completion:(void (^)(_HKAchievement *, NSError *))arg2;
- (void)remote_fetchNumberOfUnviewedAchievementsWithCompletion:(void (^)(long long, NSError *))arg1;
- (void)remote_markAchievementsAlerted:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_fetchAchievementsWithCompletedDateBetweenStart:(NSDate *)arg1 end:(NSDate *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)remote_registerForAchievementNotificationsAndFetchUnalertedCountWithCompletion:(void (^)(long long, NSError *))arg1;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class FCUserInfo, NSString;

@protocol FCUserInfoObserving <NSObject>

@optional
- (void)userInfo:(FCUserInfo *)arg1 didChangeAccessTokenForTagID:(NSString *)arg2;
- (void)userInfo:(FCUserInfo *)arg1 didAddAccessTokenForTagID:(NSString *)arg2;
- (void)userInfoDidChangeNotificationUserID:(FCUserInfo *)arg1;
- (void)userInfoDidChangeFeldsparID:(FCUserInfo *)arg1;
@end


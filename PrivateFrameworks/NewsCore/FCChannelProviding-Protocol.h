//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCTagProviding-Protocol.h>

@class NSArray, NSString;

@protocol FCChannelProviding <FCTagProviding>
@property(readonly, nonatomic) _Bool isWhitelisted;
@property(readonly, nonatomic) _Bool supportsNotifications;
@property(readonly, copy, nonatomic) NSString *defaultSectionID;
@property(readonly, copy, nonatomic) NSArray *sectionIDs;
@end


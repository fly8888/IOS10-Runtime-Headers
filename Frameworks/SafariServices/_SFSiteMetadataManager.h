//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebUI/WBSSiteMetadataManager.h>

@class _SFTouchIconCache;

@interface _SFSiteMetadataManager : WBSSiteMetadataManager
{
    _SFTouchIconCache *_touchIconCache;
}

+ (id)sharedSiteMetadataManager;
+ (void)setSharedSiteMetadataManager:(id)arg1;
@property(readonly, nonatomic) _SFTouchIconCache *touchIconCache; // @synthesize touchIconCache=_touchIconCache;
- (void).cxx_destruct;
- (void)scheduleLowPriorityRequestForBookmarks:(id)arg1;
- (id)initWithInjectedBundleURL:(id)arg1 imageCacheDirectoryURL:(id)arg2 cacheIsReadOnly:(_Bool)arg3;

@end


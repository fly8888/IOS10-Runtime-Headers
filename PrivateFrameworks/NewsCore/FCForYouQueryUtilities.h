//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FCForYouQueryUtilities : NSObject
{
}

+ (id)_filterTagsForQuerying:(id)arg1 withMutedTagIDs:(id)arg2;
+ (id)feedRequestsForTags:(id)arg1 tagBinProvider:(CDUnknownBlockType)arg2 hiddenFeedIDs:(id)arg3 purchasedTagIDs:(id)arg4 contentContext:(id)arg5 maxCount:(unsigned long long)arg6 tagIDFeedRangeProvider:(CDUnknownBlockType)arg7;
+ (void)fetchTagsForQueryingWithSubscribedTagIDs:(id)arg1 mutedTagIDs:(id)arg2 purchasedTagIDs:(id)arg3 contentContext:(id)arg4 fallbackToPresubscribedTagIDs:(_Bool)arg5 qualityOfService:(long long)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (void)fetchTagsForQueryingWithSubscribedTags:(id)arg1 mutedTagIDs:(id)arg2 purchasedTagIDs:(id)arg3 contentContext:(id)arg4 fallbackToPresubscribedTagIDs:(_Bool)arg5 qualityOfService:(long long)arg6 completionHandler:(CDUnknownBlockType)arg7;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXPeopleConfirmationSummaryViewController;
@protocol PXFaceCollection;

@protocol PXPeopleSummaryDelegate <NSObject>
- (unsigned long long)autoConfirmedCountForSummaryViewController:(PXPeopleConfirmationSummaryViewController *)arg1;
- (unsigned long long)userConfirmedCountForSummaryViewController:(PXPeopleConfirmationSummaryViewController *)arg1;
- (id <PXFaceCollection>)faceCollectionForSummaryViewController:(PXPeopleConfirmationSummaryViewController *)arg1;
@end


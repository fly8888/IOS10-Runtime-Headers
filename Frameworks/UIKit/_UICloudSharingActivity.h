//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

#import <UIKit/_UICloudSharingControllerDelegate_Private-Protocol.h>
#import <UIKit/_UIDocumentSharingControllerDelegate_Private-Protocol.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface _UICloudSharingActivity : UIActivity <_UICloudSharingControllerDelegate_Private, _UIDocumentSharingControllerDelegate_Private>
{
    UIViewController *_activityViewController;
    NSString *_activityTitle;
}

+ (long long)activityCategory;
+ (_Bool)_allowDocumentSharing;
@property(retain, nonatomic) NSString *activityTitle; // @synthesize activityTitle=_activityTitle;
@property(retain, nonatomic) UIViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
- (void).cxx_destruct;
- (_Bool)_activitySupportsPromiseURLs;
- (void)_documentSharingControllerDidDismiss:(id)arg1;
- (void)_cloudShareControllerDidDismiss:(id)arg1;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

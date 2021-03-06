//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoardServices/BSXPCCoding-Protocol.h>

@class FBSSceneSettings, NSString;
@protocol FBSSceneSnapshotRequestDelegate;

@interface FBSSceneSnapshotRequest : NSObject <BSXPCCoding>
{
    NSString *_sceneID;
    FBSSceneSettings *_settings;
    _Bool _handled;
    id <FBSSceneSnapshotRequestDelegate> _delegate;
}

@property(readonly, copy, nonatomic) FBSSceneSettings *settings; // @synthesize settings=_settings;
@property(copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
@property(nonatomic) id <FBSSceneSnapshotRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (_Bool)performSnapshotWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


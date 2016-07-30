//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoard/FBSynchronizedTransactionGroup.h>

#import <FrontBoard/FBApplicationProcessLaunchTransactionObserver-Protocol.h>
#import <FrontBoard/FBUpdateSceneTransactionObserver-Protocol.h>

@class FBApplicationProcess, FBApplicationProcessLaunchTransaction, FBProcessManager, FBSceneManager, NSMutableArray, NSString;

@interface FBApplicationUpdateScenesTransaction : FBSynchronizedTransactionGroup <FBApplicationProcessLaunchTransactionObserver, FBUpdateSceneTransactionObserver>
{
    FBApplicationProcessLaunchTransaction *_processLaunchTransaction;
    _Bool _processLaunched;
    _Bool _waitsForSceneCommits;
    NSString *_bundleID;
    FBSceneManager *_sceneManager;
    FBProcessManager *_processManager;
    NSMutableArray *_updateSceneTransactions;
    NSMutableArray *_pendingUpdateSceneBlocks;
    FBApplicationProcess *_process;
}

@property(nonatomic) _Bool waitsForSceneCommits; // @synthesize waitsForSceneCommits=_waitsForSceneCommits;
@property(readonly, retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)updateSceneTransactionDidCommitUpdate:(id)arg1;
- (void)updateSceneTransactionWillCommitUpdate:(id)arg1;
- (void)updateSceneTransactionWillUpdateScene:(id)arg1;
- (void)updateSceneTransactionDidCreateScene:(id)arg1;
- (void)transaction:(id)arg1 didLaunchProcess:(id)arg2;
- (void)transaction:(id)arg1 willLaunchProcess:(id)arg2;
- (void)_executeSceneUpdatesIfAppropriate;
- (void)_noteDidCommitUpdateForScene:(id)arg1;
- (void)_noteWillCommitUpdateForScene:(id)arg1;
- (void)_performSynchronizedCommit:(id)arg1;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)_willFailWithReason:(id)arg1;
- (void)_willInterruptWithReason:(id)arg1;
- (_Bool)_canBeInterrupted;
- (_Bool)_shouldFailForChildTransaction:(id)arg1;
- (void)_didRemoveChildTransaction:(id)arg1;
- (void)_willAddChildTransaction:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_updateSceneWithIdentifier:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;
- (void)updateSceneWithIdentifier:(id)arg1 display:(id)arg2 newSettings:(id)arg3 transitionContext:(id)arg4 initialClientSettingsProvider:(CDUnknownBlockType)arg5;
- (void)updateSceneWithIdentifier:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;
@property(readonly, retain, nonatomic) FBApplicationProcess *process; // @synthesize process=_process;
- (void)dealloc;
- (id)initWithApplicationBundleID:(id)arg1 executionContextProvider:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

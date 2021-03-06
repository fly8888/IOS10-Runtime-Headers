//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicCarDisplayUI/MCD_OLD_TableViewController.h>

#import <MusicCarDisplayUI/UITableViewDelegate-Protocol.h>

@class MCDNewPlaylistsTableViewController, NSArray, NSIndexPath, NSString, UIActivityIndicatorView, UINavigationController;

@interface MCDContentItemTableViewController : MCD_OLD_TableViewController <UITableViewDelegate>
{
    _Bool _rankedList;
    _Bool _shouldQueueDataSource;
    UINavigationController *_nowPlayingNavigationController;
    UIActivityIndicatorView *_activityIndicator;
    MCDNewPlaylistsTableViewController *_viewController;
    NSArray *_queuedDataSource;
    NSIndexPath *_selectedIndexPath;
    NSArray *_dataSource;
}

@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) NSArray *queuedDataSource; // @synthesize queuedDataSource=_queuedDataSource;
@property(retain, nonatomic) MCDNewPlaylistsTableViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UINavigationController *nowPlayingNavigationController; // @synthesize nowPlayingNavigationController=_nowPlayingNavigationController;
@property(nonatomic) _Bool shouldQueueDataSource; // @synthesize shouldQueueDataSource=_shouldQueueDataSource;
@property(nonatomic) _Bool rankedList; // @synthesize rankedList=_rankedList;
- (void).cxx_destruct;
- (id)_normalizedStringStoreIDForContentItem:(id)arg1;
- (void)didStartPlaying:(id)arg1;
- (void)_animateActivityIndicatorForCell:(id)arg1 shouldBegin:(_Bool)arg2;
- (void)_initiatePlaybackWithError:(id)arg1 forCell:(id)arg2;
- (id)_setupMetadataContextForContentItem:(id)arg1;
- (id)_setupPlaybackContextForContentItem:(id)arg1;
- (id)_setupPlaybackContextForQueuedSongsLength:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_addTrackNumberAndArtworkToCell:(id)arg1 artworkCatalog:(id)arg2 trackNumber:(unsigned long long)arg3 currentlyPlaying:(_Bool)arg4;
- (void)_removeTrackNumberAndArtworkFromCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_setupDataSourceQueue;
- (void)_itemDidChange;
- (void)_limitedUIDidChange;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPlayer:(id)arg1 serviceProvider:(id)arg2 dataSource:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


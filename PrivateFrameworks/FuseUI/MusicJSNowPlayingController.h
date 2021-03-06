//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <FuseUI/MusicJSNowPlayingController-Protocol.h>

@class MPAVController, MusicTabBarController;

@interface MusicJSNowPlayingController : IKJSObject <MusicJSNowPlayingController>
{
    MPAVController *_player;
    MusicTabBarController *_tabBarController;
}

@property(retain, nonatomic) MusicTabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
@property(retain, nonatomic) MPAVController *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)presentNowPlayingView;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVPlayerLayer.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface IrisAVPlayerLayer : AVPlayerLayer
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

- (void).cxx_destruct;
- (void)setPlayer:(id)arg1;
- (void)__reallySetPlayer:(id)arg1;
- (void)_forceLayout;
- (void)setVideoGravity:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)init;

@end

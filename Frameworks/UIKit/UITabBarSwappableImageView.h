//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface UITabBarSwappableImageView : UIImageView
{
    UIImage *_value;
    UIImage *_alternate;
    _Bool _showAlternate;
}

- (void).cxx_destruct;
- (void)setImage:(id)arg1;
- (void)setAlternateImage:(id)arg1;
- (void)showAlternateImage:(_Bool)arg1;
- (void)setCurrentImage;
- (id)initWithImage:(id)arg1 alternateImage:(id)arg2;

@end


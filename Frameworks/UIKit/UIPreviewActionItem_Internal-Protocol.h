//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSString, UIColor, UIImage;

@protocol UIPreviewActionItem_Internal <NSObject>
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic, getter=_color, setter=_setColor:) UIColor *color;
@property(nonatomic) long long style;
@property(copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSString *title;
- (UIImage *)_effectiveImage;
- (UIColor *)_effectiveColor;
@end


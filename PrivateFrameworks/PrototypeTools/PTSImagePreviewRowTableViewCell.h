//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PrototypeTools/PTSRowTableViewCell.h>

@class UIImageView, UIView;

@interface PTSImagePreviewRowTableViewCell : PTSRowTableViewCell
{
    UIImageView *_imageViewOnLight;
    UIImageView *_imageViewOnDark;
    UIView *_lightBackground;
    UIView *_darkBackground;
}

+ (void)_getCellHeight:(double *)arg1 leftFrame:(struct CGRect *)arg2 rightFrame:(struct CGRect *)arg3 forImage:(id)arg4 inBounds:(struct CGRect)arg5;
+ (double)cellHeightForRow:(id)arg1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateDisplayedValue;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


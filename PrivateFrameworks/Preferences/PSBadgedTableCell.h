//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class UIImageView, UILabel;

@interface PSBadgedTableCell : PSTableCell
{
    UIImageView *_badgeImageView;
    UILabel *_badgeNumberLabel;
    long long _badgeInt;
}

+ (id)badgeNumberLabelHighlightedTextColor;
+ (id)badgeNumberLabelTextColor;
+ (id)unreadBubbleHighlightedImage;
+ (id)unreadBubbleImage;
+ (double)badgePadding;
+ (id)reuseIdentifierForClassAndType:(long long)arg1;
- (void).cxx_destruct;
- (void)badgeWithInteger:(long long)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)resetLocale;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionRowView.h>

@class NSDate, NSLayoutConstraint, NSString, UIImage, UIImageView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKPlaceReviewsViewCell : MKPlaceSectionRowView
{
    UIImageView *_pictureView;
    _MKUILabel *_detailLabel;
    _MKUILabel *_reviewLabel;
    NSDate *_date;
    NSLayoutConstraint *_reviewLabelTopConstraint;
    NSLayoutConstraint *_reviewLabelToBottomConstraint;
    NSLayoutConstraint *_reviewLabelToAuthorLabelConstraint;
    NSLayoutConstraint *_authorLabelBaselineConstraint;
    unsigned long long _rating;
    NSString *_author;
}

+ (id)reuseIdentifier;
+ (double)intrinsicContentHeight;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(nonatomic) unsigned long long rating; // @synthesize rating=_rating;
- (void).cxx_destruct;
- (void)updateDetailLabelText;
- (id)detailLabelText;
- (void)setAuthor:(id)arg1 date:(id)arg2 rating:(unsigned long long)arg3;
@property(nonatomic) __weak NSString *reviewText; // @dynamic reviewText;
@property(nonatomic) __weak UIImage *picture; // @dynamic picture;
- (void)updateConstraints;
- (void)infoCardThemeChanged:(id)arg1;
- (id)standardDateAuthorLabel;
- (void)_updateBaselineConstraints;
- (void)_contentSizeDidChange;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

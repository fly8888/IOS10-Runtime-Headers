//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOPhoto, NSString, NSURL;

@protocol GEOMapItemPhoto <NSObject>
@property(readonly, nonatomic) GEOPhoto *geoPhoto;
@property(readonly, nonatomic) _Bool displayFullPhotoInline;
@property(readonly, nonatomic) NSURL *licenseURL;
@property(readonly, nonatomic) NSString *licenseDescription;
@property(readonly, nonatomic) NSString *caption;
@property(readonly, nonatomic) NSString *author;
@end


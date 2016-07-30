//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, WDDocument;

__attribute__((visibility("hidden")))
@interface WDCitation : NSObject
{
    WDDocument *mDocument;
    NSString *mSourceType;
    NSMutableArray *mAuthors;
    NSString *mYear;
    NSMutableArray *mTitles;
    NSMutableArray *mUrls;
    NSString *mPeriodicalTitle;
    NSString *mVolume;
    NSString *mNumber;
    NSString *mSection;
    NSString *mPubDate;
    NSString *mPages;
}

+ (id)stringValuesForNodesAtPath:(id)arg1 nodePtr:(struct _xmlNode *)arg2 trimStyle:(_Bool)arg3;
+ (id)stringValueForNodeAtPath:(id)arg1 nodePtr:(struct _xmlNode *)arg2 trimStyle:(_Bool)arg3;
+ (id)subStringOf:(struct _xmlNode *)arg1 forPath:(id)arg2;
+ (struct _xmlNode *)trimStyle:(struct _xmlNode *)arg1;
+ (struct _xmlNode *)nodeAtPath:(id)arg1 nodePtr:(struct _xmlNode *)arg2;
+ (id)wordStringForRefType:(int)arg1;
+ (int)refTypeForWordString:(id)arg1;
+ (id)endNoteStringForRefType:(int)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSString *pages; // @synthesize pages=mPages;
@property(retain, nonatomic) NSMutableArray *urls; // @synthesize urls=mUrls;
@property(retain, nonatomic) NSString *pubDate; // @synthesize pubDate=mPubDate;
@property(retain, nonatomic) NSString *section; // @synthesize section=mSection;
@property(retain, nonatomic) NSString *number; // @synthesize number=mNumber;
@property(retain, nonatomic) NSString *volume; // @synthesize volume=mVolume;
@property(retain, nonatomic) NSString *periodicalTitle; // @synthesize periodicalTitle=mPeriodicalTitle;
@property(retain, nonatomic) NSMutableArray *titles; // @synthesize titles=mTitles;
@property(retain, nonatomic) NSString *sourceType; // @synthesize sourceType=mSourceType;
@property(retain, nonatomic) NSMutableArray *authors; // @synthesize authors=mAuthors;
@property(retain, nonatomic) NSString *year; // @synthesize year=mYear;
- (id)description;
- (id)initWithDocument:(id)arg1;
- (id)document;
- (void)dealloc;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchUI/SearchUICardPunchout-Protocol.h>

@class NSString, NSURL;

@interface SearchUICardPunchout : NSObject <SearchUICardPunchout>
{
    NSString *_punchoutLabel;
    NSURL *_punchoutURL;
    NSURL *_installURL;
}

@property(retain, nonatomic) NSURL *installURL; // @synthesize installURL=_installURL;
@property(retain, nonatomic) NSURL *punchoutURL; // @synthesize punchoutURL=_punchoutURL;
@property(retain, nonatomic) NSString *punchoutLabel; // @synthesize punchoutLabel=_punchoutLabel;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

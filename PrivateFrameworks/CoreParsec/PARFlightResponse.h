//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreParsec/PARResponse.h>

@class NSArray;

@interface PARFlightResponse : PARResponse
{
    NSArray *_flightResults;
}

+ (id)responseFromReply:(id)arg1 session:(id)arg2;
@property(readonly, nonatomic) NSArray *flightResults; // @synthesize flightResults=_flightResults;
- (void).cxx_destruct;
- (id)description;

@end


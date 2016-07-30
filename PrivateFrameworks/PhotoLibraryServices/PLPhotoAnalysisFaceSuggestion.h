//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface PLPhotoAnalysisFaceSuggestion : NSObject
{
    NSString *_faceLocalIdentifier;
    NSArray *_matchingFaceLocalIdentifiers;
    _Bool _isConfirmed;
    _Bool _confirmed;
}

@property(readonly, nonatomic, getter=isConfirmed) _Bool confirmed; // @synthesize confirmed=_confirmed;
@property(readonly, copy, nonatomic) NSArray *matchingFaceLocalIdentifiers; // @synthesize matchingFaceLocalIdentifiers=_matchingFaceLocalIdentifiers;
@property(readonly, copy, nonatomic) NSString *faceLocalIdentifier; // @synthesize faceLocalIdentifier=_faceLocalIdentifier;
- (void).cxx_destruct;
- (id)initWithSuggestionDictionary:(id)arg1;

@end

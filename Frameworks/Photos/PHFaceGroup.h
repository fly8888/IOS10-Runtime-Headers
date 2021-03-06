//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHObject.h>

@interface PHFaceGroup : PHObject
{
    long long _faceGroupType;
    long long _unnamedFaceCount;
    long long _personModelId;
}

+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)fetchFaceGroupsWithFace:(id)arg1 type:(long long)arg2 options:(id)arg3;
+ (id)fetchRejectedFaceGroupsForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchAlgorithmicFaceGroupsForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchRejectedFaceGroupsWithOptions:(id)arg1;
+ (id)fetchAlgorithmicFaceGroupsWithOptions:(id)arg1;
+ (id)fetchFaceGroupsWithType:(long long)arg1 options:(id)arg2;
+ (id)fetchFaceGroupsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchFaceGroupsWithOptions:(id)arg1;
+ (id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)fetchType;
+ (id)managedEntityName;
+ (id)identifierCode;
@property(nonatomic) long long personModelId; // @synthesize personModelId=_personModelId;
@property(readonly, nonatomic) long long unnamedFaceCount; // @synthesize unnamedFaceCount=_unnamedFaceCount;
@property(readonly, nonatomic) long long faceGroupType; // @synthesize faceGroupType=_faceGroupType;
- (long long)getPersonModelId;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (Class)changeRequestClass;

@end


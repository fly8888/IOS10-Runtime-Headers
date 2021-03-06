//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/NSFastEnumeration-Protocol.h>

@class NSArray, PLManagedObjectContext;

@interface PLPTPdAssetEnumerator : NSObject <NSFastEnumeration>
{
    PLManagedObjectContext *_managedObjectContext;
    NSArray *_assetObjectIDs;
    NSArray *_albumObjectIDs;
}

+ (id)enumeratorWithAssetObjectIDs:(id)arg1 albumObjectIDs:(id)arg2 managedObjectContext:(id)arg3;
- (id)assetsFromOffset:(unsigned long long)arg1 count:(unsigned long long)arg2;
- (void)enumerateDictionariesWithCount:(unsigned long long)arg1 fetchOffset:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)getPTPdInfo:(id *)arg1 count:(unsigned long long)arg2 fetchOffset:(unsigned long long)arg3;
- (void)enumerateDictionariesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)init;

@end


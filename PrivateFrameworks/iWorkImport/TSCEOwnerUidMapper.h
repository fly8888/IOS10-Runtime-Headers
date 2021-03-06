//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKSosBase.h>

__attribute__((visibility("hidden")))
@interface TSCEOwnerUidMapper : TSKSosBase
{
    UUIDMap_8a451d2c _uidMap;
    UUIDData_5fbc143e _tableUid;
    UUIDData_5fbc143e _nextTableUid;
    UUIDData_5fbc143e _hiddenStateForRowsOwnerUid;
    UUIDData_5fbc143e _nextHiddenStateForRowsOwnerUid;
    UUIDData_5fbc143e _hiddenStateForColumnsOwnerUid;
    UUIDData_5fbc143e _nextHiddenStateForColumnsOwnerUid;
    UUIDData_5fbc143e _conditionalStyleOwnerUid;
    UUIDData_5fbc143e _nextConditionalStyleOwnerUid;
    UUIDData_5fbc143e _sortRuleReferenceTrackerOwnerUid;
    UUIDData_5fbc143e _nextSortRuleReferenceTrackerOwnerUid;
    UUIDData_5fbc143e _mergeOwnerUid;
    UUIDData_5fbc143e _nextMergeOwnerUid;
    UUIDData_5fbc143e _pbTableUid;
}

+ (struct __CFUUID *)CFUUIDRefForUID:(const UUIDData_5fbc143e *)arg1;
@property(nonatomic) UUIDData_5fbc143e nextMergeOwnerUID; // @synthesize nextMergeOwnerUID=_nextMergeOwnerUid;
@property(nonatomic) UUIDData_5fbc143e nextSortRuleReferenceTrackerOwnerUID; // @synthesize nextSortRuleReferenceTrackerOwnerUID=_nextSortRuleReferenceTrackerOwnerUid;
@property(nonatomic) UUIDData_5fbc143e nextConditionalStyleOwnerUID; // @synthesize nextConditionalStyleOwnerUID=_nextConditionalStyleOwnerUid;
@property(nonatomic) UUIDData_5fbc143e nextHiddenStateForColumnsOwnerUid; // @synthesize nextHiddenStateForColumnsOwnerUid=_nextHiddenStateForColumnsOwnerUid;
@property(nonatomic) UUIDData_5fbc143e nextHiddenStateForRowsOwnerUid; // @synthesize nextHiddenStateForRowsOwnerUid=_nextHiddenStateForRowsOwnerUid;
@property(nonatomic) UUIDData_5fbc143e nextTableUID; // @synthesize nextTableUID=_nextTableUid;
@property(readonly, nonatomic) UUIDData_5fbc143e mergeOwnerUID; // @synthesize mergeOwnerUID=_mergeOwnerUid;
@property(readonly, nonatomic) UUIDData_5fbc143e sortRuleReferenceTrackerOwnerUID; // @synthesize sortRuleReferenceTrackerOwnerUID=_sortRuleReferenceTrackerOwnerUid;
@property(readonly, nonatomic) UUIDData_5fbc143e conditionalStyleOwnerUID; // @synthesize conditionalStyleOwnerUID=_conditionalStyleOwnerUid;
@property(readonly, nonatomic) UUIDData_5fbc143e hiddenStateForColumnsOwnerUid; // @synthesize hiddenStateForColumnsOwnerUid=_hiddenStateForColumnsOwnerUid;
@property(readonly, nonatomic) UUIDData_5fbc143e hiddenStateForRowsOwnerUid; // @synthesize hiddenStateForRowsOwnerUid=_hiddenStateForRowsOwnerUid;
@property(readonly, nonatomic) UUIDData_5fbc143e pbTableUID; // @synthesize pbTableUID=_pbTableUid;
@property(nonatomic) UUIDData_5fbc143e tableUID; // @synthesize tableUID=_tableUid;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToArchive:(struct OwnerUIDMapperArchive *)arg1;
- (id)initWithArchive:(const struct OwnerUIDMapperArchive *)arg1;
- (const UUIDMap_8a451d2c *)ownerUIDMap;
- (id)description;
- (id)makeInverse;
- (void)setToIdentityMapping;
- (id)initWithIdentityMapping;
- (id)initWithFormulaOwnerUID:(const UUIDData_5fbc143e *)arg1;
- (id)initWithTableUID:(const UUIDData_5fbc143e *)arg1 pasteBoardTableUID:(const UUIDData_5fbc143e *)arg2 hiddenStateOwnerForRowsUID:(const UUIDData_5fbc143e *)arg3 hiddenStateOwnerForColumnsUID:(const UUIDData_5fbc143e *)arg4 conditionalStyleOwnerUID:(const UUIDData_5fbc143e *)arg5 sortRuleReferenceTrackerOwnerUID:(const UUIDData_5fbc143e *)arg6 mergeOwnerUID:(const UUIDData_5fbc143e *)arg7;
- (void)recreateUIDs;

@end


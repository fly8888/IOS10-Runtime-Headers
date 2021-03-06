//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKModel-Protocol.h>

@class TSCECalculationEngine, TSPObject;
@protocol TSCECalculationEngineRegistration;

@protocol TSCECalculationEngineRegistration <TSKModel>
- (TSPObject<TSCECalculationEngineRegistration> *)objectToArchiveInDependencyTracker;
- (struct __CFUUID *)formulaOwnerID;
- (_Bool)registerLast;
- (void)unregisterFromCalculationEngine:(TSCECalculationEngine *)arg1;
- (void)registerWithCalculationEngineForDocumentLoad:(TSCECalculationEngine *)arg1;
@end


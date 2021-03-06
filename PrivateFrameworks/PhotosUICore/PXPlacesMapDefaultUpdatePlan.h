//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPlacesMapUpdatePlan-Protocol.h>

@class NSMapTable, NSString;
@protocol PXPlacesMapLayoutResult, PXPlacesMapPipelineComponentProvider;

@interface PXPlacesMapDefaultUpdatePlan : NSObject <PXPlacesMapUpdatePlan>
{
    id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
    id <PXPlacesMapLayoutResult> _currentLayoutResult;
    NSMapTable *_currentLayoutItemToAnnotationTable;
}

@property(retain) NSMapTable *currentLayoutItemToAnnotationTable; // @synthesize currentLayoutItemToAnnotationTable=_currentLayoutItemToAnnotationTable;
@property(retain) id <PXPlacesMapLayoutResult> currentLayoutResult; // @synthesize currentLayoutResult=_currentLayoutResult;
@property(nonatomic) __weak id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider; // @synthesize pipelineComponentProvider;
- (void).cxx_destruct;
- (void)reset;
- (id)annotationForLayoutItem:(id)arg1;
- (id)_changesBetweenSourceLayoutResult:(id)arg1 targetLayoutResult:(id)arg2;
- (id)removalPlanResult;
- (id)resultForNewLayoutResult:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


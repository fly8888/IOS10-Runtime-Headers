//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/NSObject-Protocol.h>

@class GEOResourceManifestConfiguration, NSArray, NSDictionary, NSSet, NSString, VKAnchorWrapper, VKAnimation, VKAnnotationMarker, VKObjectBoundsContext, VKRasterOverlay, VKTransitLineMarker;
@protocol VKCustomFeatureAnnotation, VKCustomFeatureDataSource, VKInteractiveMapDelegate, VKOverlay, VKRouteMatchedAnnotationPresentation;

@protocol VKInteractiveMap <NSObject>
+ (_Bool)supportsMapType:(long long)arg1 scale:(int)arg2 manifestConfiguration:(GEOResourceManifestConfiguration *)arg3;
@property(readonly, nonatomic) VKAnchorWrapper *externalAnchors;
@property(readonly, nonatomic, getter=isFullyDrawn) _Bool fullyDrawn;
@property(readonly, nonatomic) NSArray *visibleTileSets;
@property(readonly, nonatomic) NSArray *rasterOverlays;
@property(nonatomic) id <VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation;
@property(nonatomic) unsigned char labelScaleFactor;
@property(nonatomic) _Bool localizeLabels;
@property(nonatomic) _Bool labelMarkerSelectionEnabled;
@property(retain, nonatomic) NSArray *customFeatureDataSources;
@property(retain, nonatomic) NSArray *externalTrafficIncidents;
@property(nonatomic) struct PolylineCoordinate routeUserOffset;
@property(nonatomic) _Bool showsBuildings;
@property(nonatomic) _Bool showsPointsOfInterest;
@property(nonatomic) long long shieldIdiom;
@property(nonatomic) long long navigationShieldSize;
@property(nonatomic) long long shieldSize;
@property(nonatomic) long long mapType;
@property(nonatomic) _Bool trafficIncidentsEnabled;
@property(nonatomic) _Bool trafficEnabled;
@property(nonatomic) id <VKInteractiveMapDelegate> delegate;
- (void)removeExternalAnchor:(VKAnchorWrapper *)arg1;
- (void)addExternalAnchor:(VKAnchorWrapper *)arg1;
- (_Bool)isPointValidForGesturing:(struct CGPoint)arg1;
- (_Bool)isShowingNoDataPlaceholders;
- (NSArray *)attributionsForCurrentRegion;
- (void)insertRasterOverlay:(VKRasterOverlay *)arg1 belowOverlay:(VKRasterOverlay *)arg2;
- (void)insertRasterOverlay:(VKRasterOverlay *)arg1 aboveOverlay:(VKRasterOverlay *)arg2;
- (void)removeRasterOverlay:(VKRasterOverlay *)arg1;
- (void)addRasterOverlay:(VKRasterOverlay *)arg1;
- (void)removePersistentOverlay:(id <VKOverlay>)arg1;
- (void)addPersistentOverlay:(id <VKOverlay>)arg1;
- (NSSet *)persistentOverlays;
- (NSArray *)overlays;
- (void)removeOverlay:(id <VKOverlay>)arg1;
- (void)addOverlay:(id <VKOverlay>)arg1;
- (struct CGPoint)convertCoordinateToCameraModelPoint:(CDStruct_c3b9c2ee)arg1;
- (struct CGPoint)convertCoordinateToPoint:(CDStruct_c3b9c2ee)arg1;
- (struct CGPoint)convertMapPointToPoint:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)convertPointToMapPoint:(struct CGPoint)arg1;
- (CDStruct_c3b9c2ee)convertPointToCoordinate:(struct CGPoint)arg1;
- (VKObjectBoundsContext *)boundsForSelectedTransitLines;
- (void)deselectTransitLineMarker;
- (void)selectTransitLineMarker:(VKTransitLineMarker *)arg1;
- (NSArray *)selectedTransitLineIDs;
- (NSArray *)transitLineMarkersForSelectionAtPoint:(struct CGPoint)arg1;
- (NSArray *)transitLineMarkersInCurrentViewport;
- (void)debugHighlightFeatureMarker:(const shared_ptr_430519ce *)arg1;
- (void)deselectLabelMarker;
- (shared_ptr_2d33c5e4)selectedLabelMarker;
- (void)selectLabelMarker:(const shared_ptr_2d33c5e4 *)arg1;
- (shared_ptr_2d33c5e4)labelMarkerForCustomFeatureAnnotation:(id <VKCustomFeatureAnnotation>)arg1 dataSource:(id <VKCustomFeatureDataSource>)arg2;
- (shared_ptr_2d33c5e4)labelMarkerForSelectionAtPoint:(struct CGPoint)arg1 selectableLabelsOnly:(_Bool)arg2;
- (vector_af4a736d)labelMarkers;
- (NSArray *)annotationMarkers;
- (_Bool)shouldHideOffscreenSelectedAnnotation;
- (_Bool (^)(struct))annotationCoordinateTest;
- (long long (^)(double, double, double, double))annotationRectTest;
- (void)removeAnnotationMarker:(VKAnnotationMarker *)arg1;
- (void)addAnnotationMarker:(VKAnnotationMarker *)arg1;
- (shared_ptr_27db7edb)closestRoadMarkerForSelectionAtPoint:(struct CGPoint)arg1;
- (void)debugHighlightObjectAtPoint:(struct CGPoint)arg1 highlightTarget:(unsigned char)arg2;
- (void)_setStyleTransitionProgress:(double)arg1 targetStyle:(struct DisplayStyle)arg2 step:(long long)arg3;
- (double)_styleTransitionProgress;
- (struct DisplayStyle)sourceMapDisplayStyle;
- (_Bool)supportsMapDisplayStyle:(struct DisplayStyle)arg1;
- (void)setStylesheetMapDisplayStyle:(struct DisplayStyle)arg1;
- (void)finishStyleBlend;
- (void)stylesheetAnimationDidEnd:(_Bool)arg1;
- (void)stylesheetAnimationDidProgress:(float)arg1;
- (void)removeCustomFeatureDataSource:(id <VKCustomFeatureDataSource>)arg1;
- (void)addCustomFeatureDataSource:(id <VKCustomFeatureDataSource>)arg1;
- (void)stylesheetAnimationWillStartFromStyle:(struct DisplayStyle)arg1 toStyle:(struct DisplayStyle)arg2;
- (void)endStyleAnimationGroup;
- (void)beginStyleAnimationGroup;
- (void)requestStylesheetAnimation:(VKAnimation *)arg1 targetMapDisplayStyle:(struct DisplayStyle)arg2 setupHandler:(void (^)(void))arg3;
- (void)setMapType:(long long)arg1 animated:(_Bool)arg2;
- (NSString *)consoleString:(_Bool)arg1;
- (NSDictionary *)detailedDescriptionDictionaryRepresentation;
- (NSString *)detailedDescription;
@end


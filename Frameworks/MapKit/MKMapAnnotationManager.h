//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKAnnotationManager.h>

@class MKAnnotationView;

__attribute__((visibility("hidden")))
@interface MKMapAnnotationManager : MKAnnotationManager
{
    MKAnnotationView *_userLocationView;
    _Bool _addedUserLocationAnnotation;
}

- (void).cxx_destruct;
- (id)newInternalAnnotationRepresentationForInternalAnnotation:(id)arg1;
- (_Bool)internalAnnotationAllowsCustomRepresentation:(id)arg1;
- (_Bool)annotationIsInternal:(id)arg1;
- (void)cleanUpAnnotationRepresentationForRemoval:(id)arg1;
- (void)configureAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2;
- (void)configureDefaultAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2;
- (id)newDefaultAnnotationRepresentationForAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)_defaultUserLocationAnnotationView:(id)arg1;

@end


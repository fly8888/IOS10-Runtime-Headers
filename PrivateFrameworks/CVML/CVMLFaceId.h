//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CVMLFaceModelObservation;

@interface CVMLFaceId : NSObject
{
    struct shared_ptr<vision::mod::VIPIdentification> _mVIPAlgorithmImpl;
    CVMLFaceModelObservation *_modelData;
}

@property(retain) CVMLFaceModelObservation *modelData; // @synthesize modelData=_modelData;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)probeForIdentity:(id)arg1 andParameters:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) _Bool buildModels;
- (_Bool)removeIdentity:(id)arg1 andParameters:(id)arg2 error:(id *)arg3;
- (_Bool)removeFace:(id)arg1 andParameters:(id)arg2 error:(id *)arg3;
- (_Bool)enrollFace:(id)arg1 andParameters:(id)arg2 error:(id *)arg3;
- (id)initWithFaceModelData:(id)arg1 cancellationSemaphore:(id)arg2 error:(id *)arg3;
- (id)initWithOptions:(id)arg1 cancellationSemaphore:(id)arg2 error:(id *)arg3;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSData;

@interface SCNGeometryElement : NSObject <NSSecureCoding>
{
    // Error parsing type: ^{__C3DMeshElement={__C3DEntity={__CFRuntimeBase=Q[4C]I}^v^{__CFString}^{__CFString}^{__CFDictionary}qq}II^{__C3DMeshElement}CCC{?=c^{__CFData}I}{?=c^{__CFData}I}^v^{__C3DMeshSource}[2]}, name: _meshElement
    NSData *_elementData;
    long long _primitiveType;
    long long _primitiveCount;
    long long _bytesPerIndex;
}

+ (id)_optimizedGeometryElementWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 bytesPerIndex:(long long)arg4;
+ (_Bool)supportsSecureCoding;
+ (id)geometryElementWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 bytesPerIndex:(long long)arg4;
+     // Error parsing type: @24@0:8^{__C3DMeshElement={__C3DEntity={__CFRuntimeBase=Q[4C]I}^v^{__CFString}^{__CFString}^{__CFDictionary}qq}II^{__C3DMeshElement}CCC{?=c^{__CFData}I}{?=c^{__CFData}I}^v^{__C3DMeshSource}[2]}16, name: geometryElementWithMeshElementRef:
+ (id)geometryElementWithMDLSubmesh:(id)arg1;
- (id)_renderableElementCopy;
- (double)_computeACMR;
- (void)_optimizeTriangleIndices;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
-     // Error parsing type: ^{__C3DMeshElement={__C3DEntity={__CFRuntimeBase=Q[4C]I}^v^{__CFString}^{__CFString}^{__CFDictionary}qq}II^{__C3DMeshElement}CCC{?=c^{__CFData}I}{?=c^{__CFData}I}^v^{__C3DMeshSource}[2]}16@0:8, name: meshElement
@property(readonly, nonatomic) long long bytesPerIndex;
@property(readonly, nonatomic) long long primitiveCount;
@property(readonly, nonatomic) long long primitiveType;
- (unsigned long long)indexCount;
@property(readonly, nonatomic) NSData *data;
- (id)initWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 bytesPerIndex:(long long)arg4;
- (void)dealloc;
- (id)init;
-     // Error parsing type: @24@0:8^{__C3DMeshElement={__C3DEntity={__CFRuntimeBase=Q[4C]I}^v^{__CFString}^{__CFString}^{__CFDictionary}qq}II^{__C3DMeshElement}CCC{?=c^{__CFData}I}{?=c^{__CFData}I}^v^{__C3DMeshSource}[2]}16, name: initWithMeshElement:

@end


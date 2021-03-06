//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, OAVReadState, OCPPackagePart;

__attribute__((visibility("hidden")))
@interface OAVShapeManager : NSObject
{
    struct _xmlNode *mShape;
    unsigned short mType;
    OCPPackagePart *mPackagePart;
    NSDictionary *mShapeStyle;
    NSDictionary *mTextBoxStyle;
    OAVReadState *mOAVState;
}

- (struct OAVTextBoxInsets)textInsets;
- (_Bool)fitShapeToText;
- (id)textRotation;
- (id)textAltLayoutFlow;
- (id)textLayoutFlow;
- (_Bool)autoInsets;
- (id)textAnchor;
- (id)textWrapStyle;
- (struct CGPoint)shadowOffsets;
- (float)shadowAlpha;
- (id)shadowColor;
- (id)shadowType;
- (_Bool)isShadowed;
- (_Bool)isShadowOK;
- (id)strokeEndArrowLength;
- (id)strokeEndArrowWidth;
- (id)strokeEndArrowType;
- (id)strokeStartArrowLength;
- (id)strokeStartArrowWidth;
- (id)strokeStartArrowType;
- (id)strokeJoinStyle;
- (id)strokeCapStyle;
- (id)strokeDashStyle;
- (id)strokeCompoundType;
- (float)strokeMiterLimit;
- (float)strokeWidth;
- (float)strokeFgAlpha;
- (id)strokeFillType;
- (id)strokeBgColor;
- (id)strokeFgColor;
- (_Bool)isStroked;
- (_Bool)isStrokeOK;
- (id)imageFillTitle;
- (id)imageFillId;
- (id)fillGradientColors;
- (float)fillFocus;
- (float)fillAngle;
- (float)fillBgAlpha;
- (id)fillBgColor;
- (float)fillFgAlpha;
- (id)fillFgColor;
- (id)fillType;
- (_Bool)isFilled;
- (_Bool)isFillOK;
- (_Bool)isWordArt;
- (_Bool)isImage;
- (id)movieRelId;
- (id)imageRelId;
- (id)points;
- (_Bool)isPolyline;
- (id)textBodyRects;
- (id)limo;
- (id)path;
- (id)oavState;
- (id)packagePart;
- (struct _xmlNode *)shape;
- (unsigned short)type;
- (void)dealloc;
- (id)initWithShape:(struct _xmlNode *)arg1 type:(unsigned short)arg2 packagePart:(id)arg3 state:(id)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CorePDF/CPChunk.h>

@interface CPRegion : CPChunk
{
    _Bool isTextRegion;
    _Bool isImageRegion;
    _Bool isCompoundShape;
    CPRegion *nextRegion;
    int order;
    id link;
}

- (id)link;
- (void)setLink:(id)arg1;
- (void)setOrder:(int)arg1;
- (int)order;
- (void)setNextRegion:(id)arg1;
- (id)nextRegion;
- (_Bool)isIndivisible;
- (_Bool)isRotated;
- (_Bool)isZone;
- (void)setIsCompoundShape:(_Bool)arg1;
- (_Bool)isCompoundShape;
- (_Bool)isGraphicalRegion;
- (void)setIsTextRegion:(_Bool)arg1;
- (_Bool)isBodyZone;
- (_Bool)isTableCellRegion;
- (_Bool)isRowRegion;
- (_Bool)isListItemRegion;
- (_Bool)isParagraphRegion;
- (_Bool)isShapeRegion;
- (void)setIsImageRegion:(_Bool)arg1;
- (_Bool)isImageRegion;
- (_Bool)isBoxRegion;
- (_Bool)isTextRegion;
- (void)accept:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSCHUnretainedParent-Protocol.h>

@class TSCH3DTSPImageDataTexture, TSPData;

__attribute__((visibility("hidden")))
@interface TSCH3DTSPImageData : NSObject <TSCHUnretainedParent>
{
    TSCH3DTSPImageDataTexture *mParent;
    TSPData *mData;
}

+ (id)dataWithTSPImageData:(id)arg1;
@property(retain, nonatomic) TSPData *data; // @synthesize data=mData;
- (id)uniqueFilename;
- (id)databufferForDataCache:(id)arg1;
- (_Bool)canLoadCachedDataForDataCache:(id)arg1;
- (id)p_generateMipmapsBuffer;
- (id)p_decodeCachedData:(id)arg1 imageSize:(tvec4_f99fd489 *)arg2;
- (id)p_encodeImageSize:(tvec4_f99fd489 *)arg1 andMipmapData:(id)arg2;
- (struct CGImage *)newCGImage;
- (_Bool)hasCompleteData;
- (void)clearParent;
- (void)setParent:(id)arg1;
- (void)dealloc;
- (id)initWithTSPImageData:(id)arg1;

@end

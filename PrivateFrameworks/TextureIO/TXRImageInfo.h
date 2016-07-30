//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;
@protocol TXRBuffer;

@interface TXRImageInfo : NSObject
{
    unsigned long long _offset;
    id <TXRBuffer> _buffer;
    unsigned long long _bytesPerRow;
    unsigned long long _bytesPerImage;
    NSError *_error;
}

@property(retain) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long bytesPerImage; // @synthesize bytesPerImage=_bytesPerImage;
@property(nonatomic) unsigned long long bytesPerRow; // @synthesize bytesPerRow=_bytesPerRow;
@property(retain, nonatomic) id <TXRBuffer> buffer; // @synthesize buffer=_buffer;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
- (void).cxx_destruct;

@end

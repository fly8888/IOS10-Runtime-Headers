//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OISFUBufferedInputStream;

__attribute__((visibility("hidden")))
@interface OISFUZipRecordInputStream : NSObject
{
    id <OISFUBufferedInputStream> mInput;
    const char *mBuffer;
    long long mBufferStart;
    long long mBufferEnd;
}

- (const char *)dataAtOffset:(long long)arg1 size:(unsigned long long)arg2 end:(long long)arg3;
- (void)dealloc;
- (id)initWithDataRepresentation:(id)arg1;

@end


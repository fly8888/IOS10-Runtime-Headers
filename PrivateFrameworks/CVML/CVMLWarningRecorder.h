//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CVML/CVMLWarningRecorder-Protocol.h>

@class NSMutableDictionary, NSString;

@interface CVMLWarningRecorder : NSObject <CVMLWarningRecorder>
{
    NSMutableDictionary *_warnings;
}

- (void).cxx_destruct;
- (_Bool)hasWarnings;
- (id)warnings;
- (id)valueForWarning:(id)arg1;
- (void)recordWarning:(id)arg1 value:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


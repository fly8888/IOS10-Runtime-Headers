//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLNamed-Protocol.h>

@class MDLMaterialProperty, NSString;

@interface MDLMaterialPropertyConnection : NSObject <MDLNamed>
{
    MDLMaterialProperty *_input;
    MDLMaterialProperty *_output;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) __weak MDLMaterialProperty *output; // @synthesize output=_output;
@property(readonly, nonatomic) __weak MDLMaterialProperty *input; // @synthesize input=_input;
- (void).cxx_destruct;
- (id)initWithOutput:(id)arg1 input:(id)arg2;

@end


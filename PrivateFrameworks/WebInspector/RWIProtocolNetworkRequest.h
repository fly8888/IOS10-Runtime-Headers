//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkHeaders;

@interface RWIProtocolNetworkRequest : RWIProtocolJSONObject
{
}

@property(copy, nonatomic) NSString *postData;
@property(retain, nonatomic) RWIProtocolNetworkHeaders *headers;
@property(copy, nonatomic) NSString *method;
@property(copy, nonatomic) NSString *url;
- (id)initWithUrl:(id)arg1 method:(id)arg2 headers:(id)arg3;

@end

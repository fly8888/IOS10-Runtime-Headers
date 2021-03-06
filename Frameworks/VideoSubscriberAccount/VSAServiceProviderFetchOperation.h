//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAStoreRequestOperation.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VSAServiceProviderFetchOperation : VSAStoreRequestOperation
{
    NSString *_identityProviderID;
    NSArray *_appMappings;
}

@property(copy, nonatomic) NSArray *appMappings; // @synthesize appMappings=_appMappings;
@property(readonly, copy, nonatomic) NSString *identityProviderID; // @synthesize identityProviderID=_identityProviderID;
- (void).cxx_destruct;
- (void)handleResponseObject:(id)arg1;
- (id)requestParameters;
- (id)URLBagKey;
- (id)initWithIdentityProviderID:(id)arg1;
- (id)init;

@end


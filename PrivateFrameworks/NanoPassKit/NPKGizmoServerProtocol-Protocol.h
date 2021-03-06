//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NSArray, NSData, NSNumber, NSString, PKPaymentWebServiceContext;

@protocol NPKGizmoServerProtocol <NSObject>
- (void)noteWebServiceUpdateNeededWithCompletion:(void (^)(void))arg1;
- (void)setSharedWebServiceContext:(PKPaymentWebServiceContext *)arg1 completion:(void (^)(_Bool))arg2;
- (void)getSharedWebServiceContextWithCompletion:(void (^)(PKPaymentWebServiceContext *))arg1;
- (void)handleValueAddedServiceTransactions:(NSArray *)arg1 forPassUniqueIDs:(NSArray *)arg2 completion:(void (^)(void))arg3;
- (void)addPassData:(NSData *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)fetchSecureElementIdentifiers:(void (^)(NSArray *))arg1;
- (void)fetchPreferredPaymentApplicationAIDForPaymentPassWithID:(NSString *)arg1 reply:(void (^)(NSString *))arg2;
- (void)setPreferredPaymentApplicationAID:(NSString *)arg1 forPaymentPassWithID:(NSString *)arg2;
- (void)markAsHavingReceivedLocation;
- (void)boostPriorityUntilPassDBAvailable:(void (^)(void))arg1;
- (void)setNeedsRelevancyInformation:(_Bool)arg1;
- (void)deletePassWithID:(NSString *)arg1 reply:(void (^)(_Bool))arg2;
- (void)fetchPrerenderedPassImageWithID:(NSString *)arg1 width:(NSNumber *)arg2 height:(NSNumber *)arg3 compact:(NSNumber *)arg4 reply:(void (^)(NSData *))arg5;
- (void)fetchDiffForPassWithID:(NSString *)arg1 reply:(void (^)(PKDiff *))arg2;
- (void)fetchPassWithID:(NSString *)arg1 reply:(void (^)(PKPass *))arg2;
- (void)fetchRelevantPassTuplesWithReply:(void (^)(NSArray *))arg1;
- (void)fetchPassDescriptionsWithReply:(void (^)(NSArray *, _Bool))arg1;
@end


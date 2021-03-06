//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCNetworkEvent, NSArray, NSError, NSMutableArray, NSMutableDictionary, NSString;

@interface FCCKDirectRequestOperation : FCOperation
{
    _Bool _production;
    _Bool _operationFailsOnRequestFailure;
    NSArray *_requests;
    NSString *_containerName;
    long long _requestType;
    CDUnknownBlockType _criticalNodeFailureTest;
    CDUnknownBlockType _requestCompletionHandler;
    NSString *_requestUUID;
    FCNetworkEvent *_networkEvent;
    NSMutableArray *_resultResponses;
    NSMutableDictionary *_resultErrorsByRequestID;
    NSError *_resultError;
}

+ (id)URLSession;
@property(retain, nonatomic) NSError *resultError; // @synthesize resultError=_resultError;
@property(retain, nonatomic) NSMutableDictionary *resultErrorsByRequestID; // @synthesize resultErrorsByRequestID=_resultErrorsByRequestID;
@property(retain, nonatomic) NSMutableArray *resultResponses; // @synthesize resultResponses=_resultResponses;
@property(retain, nonatomic) FCNetworkEvent *networkEvent; // @synthesize networkEvent=_networkEvent;
@property(copy, nonatomic) NSString *requestUUID; // @synthesize requestUUID=_requestUUID;
@property(copy, nonatomic) CDUnknownBlockType requestCompletionHandler; // @synthesize requestCompletionHandler=_requestCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType criticalNodeFailureTest; // @synthesize criticalNodeFailureTest=_criticalNodeFailureTest;
@property(nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property(nonatomic) _Bool operationFailsOnRequestFailure; // @synthesize operationFailsOnRequestFailure=_operationFailsOnRequestFailure;
@property(nonatomic) _Bool production; // @synthesize production=_production;
@property(copy, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
@property(copy, nonatomic) NSArray *requests; // @synthesize requests=_requests;
- (void).cxx_destruct;
- (id)_errorFromOperationResultError:(id)arg1;
- (id)_errorFromHTTPResponse:(id)arg1;
- (id)_mmeClientInfo;
- (id)_userAgent;
- (id)_requestHeadersWithBaseURL:(id)arg1;
- (id)_requestBodyData;
- (id)generateHTTPRequest;
- (void)_processResponseData:(id)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)init;

@end


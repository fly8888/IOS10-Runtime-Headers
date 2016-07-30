//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCTransferBatchOperation.h>

@class BRCClientZone;

__attribute__((visibility("hidden")))
@interface BRCUploadBatchOperation : BRCTransferBatchOperation
{
    BRCClientZone *_clientZone;
    CDUnknownBlockType _perUploadCompletionBlock;
}

@property(copy) CDUnknownBlockType perUploadCompletionBlock; // @synthesize perUploadCompletionBlock=_perUploadCompletionBlock;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)actionPrettyName;
- (void)_uploadRecordsByID:(id)arg1;
- (void)mainWithTransfers:(id)arg1;
- (void)sendTransferCompletionCallBack:(id)arg1 error:(id)arg2;
- (void)addItem:(id)arg1 stageID:(id)arg2 record:(id)arg3 transferSize:(unsigned long long)arg4;
- (id)createActivity;
- (id)initWithSyncContext:(id)arg1 clientZone:(id)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogFrameworkMetricLogMessage : PBCodable <NSCopying>
{
    unsigned long long _messageSize;
    unsigned int _messageCount;
    int _metricState;
    int _metricType;
    unsigned int _retryCount;
    CDStruct_86e90cf6 _has;
}

@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned long long messageSize; // @synthesize messageSize=_messageSize;
@property(nonatomic) unsigned int messageCount; // @synthesize messageCount=_messageCount;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasRetryCount;
@property(nonatomic) _Bool hasMessageSize;
@property(nonatomic) _Bool hasMessageCount;
- (int)StringAsMetricState:(id)arg1;
- (id)metricStateAsString:(int)arg1;
@property(nonatomic) _Bool hasMetricState;
@property(nonatomic) int metricState; // @synthesize metricState=_metricState;
- (int)StringAsMetricType:(id)arg1;
- (id)metricTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMetricType;
@property(nonatomic) int metricType; // @synthesize metricType=_metricType;

@end

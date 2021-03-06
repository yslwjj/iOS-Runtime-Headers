/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNFCGeneralStatistic : PBCodable <NSCopying> {
    struct { 
        unsigned int startTimestamp : 1; 
        unsigned int timestamp : 1; 
        unsigned int totalAPNReceived : 1; 
        unsigned int totalCEEnable : 1; 
        unsigned int totalCardProvisioned : 1; 
        unsigned int totalFailureWithMissingTransactionEndEvent : 1; 
        unsigned int totalFailureWithTransactionEndEventErrors : 1; 
        unsigned int totalRestrictModeEntered : 1; 
        unsigned int totalTransactionEndEvent : 1; 
        unsigned int totalTransientDeactiveTimeout : 1; 
    } _has;
    unsigned long long _startTimestamp;
    unsigned long long _timestamp;
    unsigned int _totalAPNReceived;
    unsigned int _totalCEEnable;
    unsigned int _totalCardProvisioned;
    unsigned int _totalFailureWithMissingTransactionEndEvent;
    unsigned int _totalFailureWithTransactionEndEventErrors;
    unsigned int _totalRestrictModeEntered;
    unsigned int _totalTransactionEndEvent;
    unsigned int _totalTransientDeactiveTimeout;
}

@property BOOL hasStartTimestamp;
@property BOOL hasTimestamp;
@property BOOL hasTotalAPNReceived;
@property BOOL hasTotalCEEnable;
@property BOOL hasTotalCardProvisioned;
@property BOOL hasTotalFailureWithMissingTransactionEndEvent;
@property BOOL hasTotalFailureWithTransactionEndEventErrors;
@property BOOL hasTotalRestrictModeEntered;
@property BOOL hasTotalTransactionEndEvent;
@property BOOL hasTotalTransientDeactiveTimeout;
@property unsigned long long startTimestamp;
@property unsigned long long timestamp;
@property unsigned int totalAPNReceived;
@property unsigned int totalCEEnable;
@property unsigned int totalCardProvisioned;
@property unsigned int totalFailureWithMissingTransactionEndEvent;
@property unsigned int totalFailureWithTransactionEndEventErrors;
@property unsigned int totalRestrictModeEntered;
@property unsigned int totalTransactionEndEvent;
@property unsigned int totalTransientDeactiveTimeout;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasStartTimestamp;
- (BOOL)hasTimestamp;
- (BOOL)hasTotalAPNReceived;
- (BOOL)hasTotalCEEnable;
- (BOOL)hasTotalCardProvisioned;
- (BOOL)hasTotalFailureWithMissingTransactionEndEvent;
- (BOOL)hasTotalFailureWithTransactionEndEventErrors;
- (BOOL)hasTotalRestrictModeEntered;
- (BOOL)hasTotalTransactionEndEvent;
- (BOOL)hasTotalTransientDeactiveTimeout;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasStartTimestamp:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTotalAPNReceived:(BOOL)arg1;
- (void)setHasTotalCEEnable:(BOOL)arg1;
- (void)setHasTotalCardProvisioned:(BOOL)arg1;
- (void)setHasTotalFailureWithMissingTransactionEndEvent:(BOOL)arg1;
- (void)setHasTotalFailureWithTransactionEndEventErrors:(BOOL)arg1;
- (void)setHasTotalRestrictModeEntered:(BOOL)arg1;
- (void)setHasTotalTransactionEndEvent:(BOOL)arg1;
- (void)setHasTotalTransientDeactiveTimeout:(BOOL)arg1;
- (void)setStartTimestamp:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalAPNReceived:(unsigned int)arg1;
- (void)setTotalCEEnable:(unsigned int)arg1;
- (void)setTotalCardProvisioned:(unsigned int)arg1;
- (void)setTotalFailureWithMissingTransactionEndEvent:(unsigned int)arg1;
- (void)setTotalFailureWithTransactionEndEventErrors:(unsigned int)arg1;
- (void)setTotalRestrictModeEntered:(unsigned int)arg1;
- (void)setTotalTransactionEndEvent:(unsigned int)arg1;
- (void)setTotalTransientDeactiveTimeout:(unsigned int)arg1;
- (unsigned long long)startTimestamp;
- (unsigned long long)timestamp;
- (unsigned int)totalAPNReceived;
- (unsigned int)totalCEEnable;
- (unsigned int)totalCardProvisioned;
- (unsigned int)totalFailureWithMissingTransactionEndEvent;
- (unsigned int)totalFailureWithTransactionEndEventErrors;
- (unsigned int)totalRestrictModeEntered;
- (unsigned int)totalTransactionEndEvent;
- (unsigned int)totalTransientDeactiveTimeout;
- (void)writeTo:(id)arg1;

@end

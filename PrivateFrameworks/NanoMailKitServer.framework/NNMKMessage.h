/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@class NSArray, NSDate, NSString;

@interface NNMKMessage : NSObject <NNMKMailboxItem, NSSecureCoding> {
    NSString *_accountId;
    NSArray *_cc;
    NSString *_conversationId;
    NSDate *_dateReceived;
    NSDate *_dateSent;
    NSString *_from;
    NSString *_messageId;
    NSString *_messageIdHeader;
    NSString *_preview;
    unsigned int _status;
    NSString *_subject;
    NSArray *_to;
}

@property(retain) NSString * accountId;
@property(retain) NSArray * cc;
@property(retain) NSString * conversationId;
@property(retain) NSDate * dateReceived;
@property(retain) NSDate * dateSent;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSString * from;
@property(readonly) unsigned int hash;
@property(retain) NSString * messageId;
@property(retain) NSString * messageIdHeader;
@property(retain) NSString * preview;
@property unsigned int status;
@property(retain) NSString * subject;
@property(readonly) Class superclass;
@property(retain) NSArray * to;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountId;
- (void)addState:(unsigned int)arg1;
- (id)cc;
- (BOOL)checkState:(unsigned int)arg1;
- (id)conversationId;
- (id)dateReceived;
- (id)dateSent;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)from;
- (id)initWithCoder:(id)arg1;
- (id)messageId;
- (id)messageIdHeader;
- (id)preview;
- (void)removeState:(unsigned int)arg1;
- (void)setAccountId:(id)arg1;
- (void)setCc:(id)arg1;
- (void)setConversationId:(id)arg1;
- (void)setDateReceived:(id)arg1;
- (void)setDateSent:(id)arg1;
- (void)setFrom:(id)arg1;
- (void)setMessageId:(id)arg1;
- (void)setMessageIdHeader:(id)arg1;
- (void)setPreview:(id)arg1;
- (void)setStatus:(unsigned int)arg1;
- (void)setSubject:(id)arg1;
- (void)setTo:(id)arg1;
- (unsigned int)status;
- (id)subject;
- (id)to;

@end

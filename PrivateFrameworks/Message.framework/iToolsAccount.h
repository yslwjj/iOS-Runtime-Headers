/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface iToolsAccount : IMAPAccount {
}

+ (id)accountTypeString;
+ (id)defaultPathNameForAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)deliveryHostName;
+ (id)displayedAccountTypeString;
+ (id)emailAddressHostPart;
+ (id)hostname;
+ (void)initialize;
+ (bool)isPredefinedAccountType;
+ (bool)usernameIsEmailAddress;

- (id)_deliveryAccountCreateIfNeeded:(bool)arg1;
- (void)accountDidLoad;
- (Class)connectionClass;
- (bool)derivesDeliveryAccountInfoFromMailAccount;
- (id)displayUsername;
- (id)emailAddresses;
- (int)emptyFrequencyForMailboxType:(int)arg1;
- (id)fromEmailAddresses;
- (id)fromEmailAddressesIncludingDisabled;
- (id)hostname;
- (bool)isAccountClassEquivalentTo:(id)arg1;
- (bool)isEnabledForDataclass:(id)arg1;
- (bool)isHostnameEquivalentTo:(id)arg1;
- (void)reportAuthenticationError:(id)arg1 authScheme:(id)arg2;
- (void)setDeliveryAccount:(id)arg1;
- (void)setHostname:(id)arg1;
- (void)setUsername:(id)arg1;
- (bool)supportsArchiving;
- (bool)updateEmailAliases;

@end
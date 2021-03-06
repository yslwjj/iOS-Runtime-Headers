/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@class <BLTSectionInfoListProviderDelegate>, BLTSectionInfoObserver, LSApplicationWorkspace, NSObject<OS_dispatch_queue>, NSString;

@interface BLTSectionInfoListBBProvider : NSObject <LSApplicationWorkspaceObserverProtocol, BLTSectionInfoObserverDelegate> {
    LSApplicationWorkspace *_appWorkspace;
    <BLTSectionInfoListProviderDelegate> *_delegate;
    BLTSectionInfoObserver *_observer;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(copy,readonly) NSString * debugDescription;
@property <BLTSectionInfoListProviderDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)reloadWithCompletion:(id)arg1;
- (void)sectionInfoObserver:(id)arg1 updatedSectionInfo:(id)arg2 withUniversalSectionID:(id)arg3 displayName:(id)arg4;
- (void)setDelegate:(id)arg1;

@end

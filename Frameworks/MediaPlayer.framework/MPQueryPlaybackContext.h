/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaQuery, NSArray;

@interface MPQueryPlaybackContext : MPPlaybackContext {
    NSArray *_prefixMediaItems;
    MPMediaQuery *_query;
    unsigned long long _startIndex;
    bool_shouldRestartPlaybackIfQueueChanges;
    bool_shouldStartPlayback;
}

@property(copy) NSArray * prefixMediaItems;
@property(readonly) MPMediaQuery * query;
@property bool shouldRestartPlaybackIfQueueChanges;
@property bool shouldStartPlayback;
@property unsigned long long startIndex;

- (void).cxx_destruct;
- (id)initWithQuery:(id)arg1;
- (id)prefixMediaItems;
- (id)query;
- (void)setPrefixMediaItems:(id)arg1;
- (void)setShouldRestartPlaybackIfQueueChanges:(bool)arg1;
- (void)setShouldStartPlayback:(bool)arg1;
- (void)setStartIndex:(unsigned long long)arg1;
- (bool)shouldRestartPlaybackIfQueueChanges;
- (bool)shouldStartPlayback;
- (unsigned long long)startIndex;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSArray, NSMutableArray, NSString, PLPublishAlbum, PLTableViewEditableCell, UIKeyboard, UITableView, UITableViewCell, UIView;

@interface PLPublishingViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    UIView *_accountView;
    NSMutableArray *_albumCells;
    NSArray *_albums;
    UIView *_containerView;
    NSString *_contentDescription;
    NSString *_contentTitle;
    PLTableViewEditableCell *_descriptionCell;
    BOOL _enableHDUploadOption;
    long long _hdUploadSize;
    UIKeyboard *_keyboard;
    UITableViewCell *_loadingCell;
    PLTableViewEditableCell *_posterCell;
    long long _sdUploadSize;
    PLPublishAlbum *_selectedAlbum;
    NSInteger _selectedUploadOption;
    BOOL _showHDUploadOption;
    UITableView *_table;
    PLTableViewEditableCell *_titleCell;
    NSString *_username;
}

@property BOOL enableHDUploadOption;
@property long long hdUploadSize;
@property long long sdUploadSize;
@property NSInteger selectedUploadOption;
@property BOOL showHDUploadOption;

- (id)_accountView;
- (id)_albumCellAtRow:(NSInteger)arg1;
- (NSInteger)_currentSectionForSectionIndex:(NSInteger)arg1;
- (NSInteger)_sectionIndexForPublishingSection:(NSInteger)arg1;
- (void)_selectCurrentCell:(id)arg1 andDeselectPreviousCell:(id)arg2;
- (void)_setCellSelected:(id)arg1;
- (id)addressString;
- (void)automaticKeyboardDidShow:(id)arg1;
- (BOOL)canPublish;
- (id)chooseAlbumForSelection;
- (NSInteger)chooseVideoUploadOption;
- (id)contentDescription;
- (id)contentTitle;
- (void)dealloc;
- (id)descriptionCellPlaceholderText;
- (void)editableCell:(id)arg1 textChanged:(id)arg2;
- (void)editableCellReturnPressed:(id)arg1;
- (BOOL)enableHDUploadOption;
- (id)hdDisabledPlaceHolderText;
- (long long)hdUploadSize;
- (id)hdVideoPlaceholderText;
- (id)initWithTitle:(id)arg1;
- (void)loadView;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (id)posterImage;
- (void)resignResponder;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)sdUploadSize;
- (id)sdVideoPlaceholderText;
- (id)selectedAlbum;
- (NSInteger)selectedUploadOption;
- (void)setAlbums:(id)arg1;
- (void)setEnableHDUploadOption:(BOOL)arg1;
- (void)setHdUploadSize:(long long)arg1;
- (void)setSdUploadSize:(long long)arg1;
- (void)setSelectedAlbum:(id)arg1;
- (void)setSelectedUploadOption:(NSInteger)arg1;
- (void)setShowHDUploadOption:(BOOL)arg1;
- (void)setUsername:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (BOOL)showHDUploadOption;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(NSInteger)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(NSInteger)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tilteCellPlaceholderText;
- (void)updateDoneButton;
- (void)viewWillAppear:(BOOL)arg1;

@end
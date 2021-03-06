/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableSet, NSSet, VKMapModel, VKStylesheet;

@interface VKMapTileModel : VKModelObject <VKMapLayer> {
    VKMapModel *_mapModel;
    NSMutableSet *_previousTilesInScene;
    NSMutableSet *_tilesExitingScene;
    NSMutableSet *_tilesInScene;
    NSMutableSet *_tilesInScenePlusExitingTiles;
    NSMutableSet *_tilesWillEnterScene;
    NSMutableSet *_tilesWillExitScene;
}

@property VKMapModel * mapModel;
@property(readonly) VKStylesheet * stylesheet;
@property(readonly) NSSet * tilesInScene;

+ (BOOL)reloadOnActiveTileGroupChange;
+ (BOOL)reloadOnStylesheetChange;

- (void)activeTileGroupChanged:(id)arg1;
- (void)clearCollections;
- (void)createCollections;
- (void)createCollectionsIfNecessary;
- (void)dealloc;
- (void)didMoveToSupermodel;
- (id)init;
- (unsigned int)mapLayerPosition;
- (id)mapModel;
- (BOOL)maximumZoomLevelBoundsCamera;
- (BOOL)minimumZoomLevelBoundsCamera;
- (void)removePersistingExitingTiles:(id)arg1;
- (void)reset;
- (void)setMapModel:(id)arg1;
- (id)stylesheet;
- (void)stylesheetDidChange;
- (id)tilesInScene;
- (void)updateTilesInScene:(id)arg1 withContext:(id)arg2 categorize:(BOOL)arg3;
- (void)willStartDrawingTiles:(id)arg1;
- (void)willStopDrawingTiles:(id)arg1;

@end

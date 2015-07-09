//
//  BUKAssetsViewController.h
//  BUKImagePickerController
//
//  Created by Yiming Tang on 7/8/15.
//  Copyright (c) 2015 Yiming Tang. All rights reserved.
//

@import UIKit;

@class ALAssetsGroup;
@protocol BUKAssetsViewControllerDelegate;

@interface BUKAssetsViewController : UICollectionViewController

@property (nonatomic) ALAssetsGroup *assetsGroup;
@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, weak) id<BUKAssetsViewControllerDelegate> delegate;
@property (nonatomic) BOOL allowsMultipleSelection;
@property (nonatomic) NSUInteger numberOfColumnsInPortrait;
@property (nonatomic) NSUInteger numberOfColumnsInLandscape;

@end


@protocol BUKAssetsViewControllerDelegate <NSObject>

@optional

- (BOOL)assetsViewController:(BUKAssetsViewController *)assetsViewController shouldSelectAsset:(ALAsset *)asset;
- (void)assetsViewController:(BUKAssetsViewController *)assetsViewController didSelectAsset:(ALAsset *)asset;
- (void)assetsViewController:(BUKAssetsViewController *)assetsViewController didDeselectAsset:(ALAsset *)asset;

- (void)assetsViewController:(BUKAssetsViewController *)assetsViewController didFinishPickingAssets:(NSArray *)assets;
- (void)assetsViewControllerDidCancel:(BUKAssetsViewController *)assetsViewController;

@end

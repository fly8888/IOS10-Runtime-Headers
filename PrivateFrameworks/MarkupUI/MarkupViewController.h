//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MarkupUI/AKControllerDelegateProtocol-Protocol.h>
#import <MarkupUI/UINavigationBarDelegate-Protocol.h>
#import <MarkupUI/UIToolbarDelegate-Protocol.h>

@class AKController, NSArray, NSLayoutConstraint, NSString, NSUndoManager, PDFDocument, PDFView, UIColor, UINavigationBar, UIToolbar, UIView;
@protocol MUContentViewControllerProtocol><MUContentViewControllerAKControllerSubdelegate, MarkupViewControllerDelegate;

@interface MarkupViewController : UIViewController <AKControllerDelegateProtocol, UINavigationBarDelegate, UIToolbarDelegate>
{
    UIColor *_backgroundColor;
    UIColor *_toolbarItemTintColor;
    UIColor *_toolbarTintColor;
    UIColor *_navBarTitleColor;
    _Bool _toolbarHidden;
    _Bool _thumbnailViewHidden;
    _Bool _showThumbnailViewForMultipage;
    _Bool _navigationModeHorizontal;
    _Bool _useFancyTransition;
    _Bool _isAnimatingMarkupExtensionTransition;
    _Bool _userDidCancel;
    _Bool _shapeDetectionEnabled;
    _Bool _allowShakeToUndo;
    _Bool _centersIgnoringContentInsets;
    AKController *_annotationController;
    UIToolbar *_toolbar;
    long long _toolbarPosition;
    UINavigationBar *_navBar;
    UIViewController<MUContentViewControllerProtocol><MUContentViewControllerAKControllerSubdelegate> *_contentViewController;
    NSString *_sourceContentType;
    id _sourceContent;
    id _digestedSourceContent;
    NSArray *_sourceContentReplacedAnnotationMaps;
    double _initialContentScale;
    NSLayoutConstraint *_toolbarTopConstraint;
    NSLayoutConstraint *_toolbarTopAttachedConstraint;
    NSLayoutConstraint *_toolbarBottomConstraint;
    NSString *_preferredFileDisplayName;
    UIView *_contentContainerView;
    UIView *_transitionDimmingView;
    UIView *_whiteView;
    NSUndoManager *_akUndoManager;
    id <MarkupViewControllerDelegate> _delegate;
}

+ (double)_maxImageDimensionInView;
+ (_Bool)_isInLowMemoryEnvironment;
+ (Class)viewControllerClassForUTI:(struct __CFString *)arg1;
@property(nonatomic) _Bool centersIgnoringContentInsets; // @synthesize centersIgnoringContentInsets=_centersIgnoringContentInsets;
@property(nonatomic) __weak id <MarkupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool allowShakeToUndo; // @synthesize allowShakeToUndo=_allowShakeToUndo;
@property(retain, nonatomic) NSUndoManager *akUndoManager; // @synthesize akUndoManager=_akUndoManager;
@property(nonatomic, getter=isShapeDetectionEnabled) _Bool shapeDetectionEnabled; // @synthesize shapeDetectionEnabled=_shapeDetectionEnabled;
@property _Bool userDidCancel; // @synthesize userDidCancel=_userDidCancel;
@property _Bool isAnimatingMarkupExtensionTransition; // @synthesize isAnimatingMarkupExtensionTransition=_isAnimatingMarkupExtensionTransition;
@property _Bool useFancyTransition; // @synthesize useFancyTransition=_useFancyTransition;
@property(retain) UIView *whiteView; // @synthesize whiteView=_whiteView;
@property(retain) UIView *transitionDimmingView; // @synthesize transitionDimmingView=_transitionDimmingView;
@property(retain) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(copy, nonatomic) NSString *preferredFileDisplayName; // @synthesize preferredFileDisplayName=_preferredFileDisplayName;
@property(retain) NSLayoutConstraint *toolbarBottomConstraint; // @synthesize toolbarBottomConstraint=_toolbarBottomConstraint;
@property(retain) NSLayoutConstraint *toolbarTopAttachedConstraint; // @synthesize toolbarTopAttachedConstraint=_toolbarTopAttachedConstraint;
@property(retain) NSLayoutConstraint *toolbarTopConstraint; // @synthesize toolbarTopConstraint=_toolbarTopConstraint;
@property double initialContentScale; // @synthesize initialContentScale=_initialContentScale;
@property(retain) NSArray *sourceContentReplacedAnnotationMaps; // @synthesize sourceContentReplacedAnnotationMaps=_sourceContentReplacedAnnotationMaps;
@property(retain) id digestedSourceContent; // @synthesize digestedSourceContent=_digestedSourceContent;
@property(retain, nonatomic) id sourceContent; // @synthesize sourceContent=_sourceContent;
@property(retain) NSString *sourceContentType; // @synthesize sourceContentType=_sourceContentType;
@property(retain) UIViewController<MUContentViewControllerProtocol><MUContentViewControllerAKControllerSubdelegate> *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic, getter=isNavigationModeHorizontal) _Bool navigationModeHorizontal; // @synthesize navigationModeHorizontal=_navigationModeHorizontal;
@property(nonatomic) _Bool showThumbnailViewForMultipage; // @synthesize showThumbnailViewForMultipage=_showThumbnailViewForMultipage;
@property(nonatomic, getter=isThumbnailViewHidden) _Bool thumbnailViewHidden; // @synthesize thumbnailViewHidden=_thumbnailViewHidden;
@property(retain, nonatomic) UINavigationBar *navBar; // @synthesize navBar=_navBar;
@property(nonatomic) long long toolbarPosition; // @synthesize toolbarPosition=_toolbarPosition;
@property(nonatomic, getter=isToolbarHidden) _Bool toolbarHidden; // @synthesize toolbarHidden=_toolbarHidden;
@property(retain) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain) AKController *annotationController; // @synthesize annotationController=_annotationController;
- (void).cxx_destruct;
- (long long)positionForBar:(id)arg1;
- (id)characterIndexesForQuadPoints:(id)arg1 onPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (id)quadPointsForCharacterIndexes:(id)arg1 onPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (void)clearHighlightableSelectionForAnnotationController:(id)arg1;
- (id)highlightableSelectionCharacterIndexesOnPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (_Bool)hasHighlightableSelectionForAnnotationController:(id)arg1;
- (id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
- (void)controllerDidExitToolMode:(id)arg1;
- (void)controllerDidEnterToolMode:(id)arg1;
- (_Bool)shouldPlaceProposedFormElementAtRect:(struct CGRect)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (_Bool)shouldPlaceFormElementAtPoint:(struct CGPoint)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (_Bool)controllerShouldDetectFormElements:(id)arg1;
- (void)controller:(id)arg1 willPlaceSingleShotAnnotation:(id)arg2 onProposedPageModelController:(id *)arg3;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (id)undoManagerForAnnotationController:(id)arg1;
- (id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (id)newContentSnapshotPDFDataIncludingAdornments:(_Bool)arg1 atScale:(double)arg2 inRect:(struct CGRect)arg3 onOverlayAtPageIndex:(unsigned long long)arg4 forAnnotationController:(id)arg5;
- (struct CGRect)maxPageRectWithPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (id)popoverPresentingViewControllerForAnnotationController:(id)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_showTextStyleOptions:(id)arg1;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)editTextAnnotation:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)delete:(id)arg1;
- (id)_effectiveNavBarTitleColor;
@property(copy) UIColor *navBarTitleColor;
- (id)_effectiveToolbarTintColor;
@property(copy) UIColor *toolbarTintColor;
- (id)_effectiveToolbarItemTintColor;
@property(copy) UIColor *toolbarItemTintColor;
- (id)_effectiveBackgroundColor;
@property(copy) UIColor *backgroundColor;
- (void)_updateAppearanceForTraitCollection:(id)arg1;
- (void)_updateConstraintsForBarPosition:(long long)arg1;
- (void)adjustContentInsetsForBars;
- (void)_createCancelDoneNavBar;
- (void)_teardownContentViewController;
- (void)_installContentViewControllerForUTI:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObservingAnnotationController;
- (void)_startObservingAnnotationController;
- (void)_setupInitialBaseModelScaleFactorWithScreenSize:(struct CGSize)arg1 windowDecorationSize:(struct CGSize)arg2;
- (void)_bailFailedAnimateEnterMarkup;
- (id)filteredToolbarItemsForItems:(id)arg1 fromController:(id)arg2;
- (id)_markupBlackColor;
@property(nonatomic) unsigned long long currentPDFPageIndex;
@property(readonly) PDFView *pdfView;
@property(readonly) PDFDocument *pdfDocument;
- (void)setSourceContent:(id)arg1 withArchivedModelData:(id)arg2;
- (void)_saveEditing:(id)arg1;
@property(nonatomic) _Bool annotationEditingEnabled;
- (void)_loadSourceContentWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateAndLoadSourceContent:(id)arg1 withArchivedModelData:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_setData:(id)arg1 withArchivedModelData:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_writeToDataConsumer:(struct CGDataConsumer *)arg1 embedSourceImageAndEditModel:(_Bool)arg2;
- (void)revert;
- (void)_cancel;
- (void)cancel:(id)arg1;
- (void)done:(id)arg1;
- (id)createArchivedModelData;
- (id)dataRepresentationWithError:(id *)arg1;
- (id)dataRepresentationEmbeddingSourceImageAndEditModel:(_Bool)arg1 error:(id *)arg2;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;
- (_Bool)writeToURL:(id)arg1 embeddingSourceImageAndEditModel:(_Bool)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSString *outputType;
- (void)setData:(id)arg1;
- (void)setData:(id)arg1 withArchivedModelData:(id)arg2;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 withArchivedModelData:(id)arg2;
- (void)setFileURL:(id)arg1;
- (void)_setFileURL:(id)arg1 withArchivedModelData:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setFileURL:(id)arg1 withArchivedModelData:(id)arg2;
- (void)setFileURL:(id)arg1 withArchivedModelData:(id)arg2 placeholderImage:(id)arg3;
- (void)setToolbarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (long long)preferredStatusBarStyle;
- (void)traitCollectionDidChange:(id)arg1;
- (void)positionSketchOverlay:(id)arg1 forAnnotationController:(id)arg2;
- (struct UIEdgeInsets)sketchOverlayInsets;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (void)_commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

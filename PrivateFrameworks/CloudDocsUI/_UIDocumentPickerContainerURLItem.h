//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsUI/_UIDocumentPickerContainerItem.h>

@class NSArray, NSDate, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerContainerURLItem : _UIDocumentPickerContainerItem
{
    NSURL *_url;
    long long _cachedType;
    NSString *_cachedTitle;
    NSString *_cachedSubtitle;
    NSString *_cachedSubtitle2;
    NSArray *_cachedTags;
    unsigned long long _cachedIndentation;
    NSString *_cachedSortPath;
    NSString *_cachedContentType;
    NSDate *_cachedContentModifiedDate;
    id _generationIdentifier;
}

+ (id)defaultKeys;
- (void).cxx_destruct;
- (_Bool)renameable;
- (id)sortPath;
- (id)sortPathComponents;
- (unsigned long long)indentationLevel;
- (void)_modelChanged;
- (id)modificationDate;
- (id)sortDate;
- (id)tags;
- (id)urlInLocalContainer;
- (id)url;
- (id)subtitle2;
- (id)subtitle;
- (id)title;
- (id)contentType;
- (long long)type;
- (void)cacheValues;
- (_Bool)attributesModified:(id)arg1;
- (void)_removeCachedValues;
- (id)initWithURL:(id)arg1;

@end


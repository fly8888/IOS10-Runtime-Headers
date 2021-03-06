//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class TSSPropertySet;
@protocol TSSPropertySource;

@protocol TSDPrototypeChange <NSObject>
@property(readonly, retain) id <TSSPropertySource> propertiesAfterChange;
@property(readonly, retain) id <TSSPropertySource> propertiesBeforeChange;
@property(readonly, retain) id replacement;
@property(readonly, retain) id prototype;
@property(readonly) _Bool prototypeIsBeingDeleted;
@property(readonly) _Bool prototypeIsBeingModified;
@property(readonly) _Bool prototypeIsBeingReplaced;
- (_Bool)propertiesAreChanging:(TSSPropertySet *)arg1;
- (_Bool)propertyIsChanging:(int)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEORouteSet;

@interface GEOLazyRouteSetIterator : NSObject
{
    GEORouteSet *_routeSet;
    unsigned long long _contingencyRouteIndex;
}

- (void)setContingencyRouteIndex:(unsigned long long)arg1;
- (id)nextLazyRoute;
- (void)dealloc;
- (id)initWithRouteSet:(id)arg1;

@end


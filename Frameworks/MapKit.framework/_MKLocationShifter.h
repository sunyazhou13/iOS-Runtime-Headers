/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class GEOLocationShifter;

@interface _MKLocationShifter : NSObject {
    GEOLocationShifter *_locationShifter;
}

@property(getter=isLocationShiftEnabled,readonly) BOOL locationShiftEnabled;

- (void).cxx_destruct;
- (void)_prepareShiftForLocation:(id)arg1 withCompletionHandler:(id)arg2 withShiftRequestBlock:(id)arg3;
- (id)init;
- (BOOL)isLocationShiftEnabled;
- (void)shiftLocation:(id)arg1 withCompletionHandler:(id)arg2 callbackQueue:(id)arg3;
- (void)shiftLocation:(id)arg1 withCompletionHandler:(id)arg2;

@end

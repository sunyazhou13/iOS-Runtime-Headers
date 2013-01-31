/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKPuckAnimatorLocationProjector, <VKPuckAnimatorDelegate>, VKAttributedRouteMatch, <VKPuckAnimatorTarget>, VKAnimation, VKRunningCurve;

@interface VKPuckAnimator : NSObject  {
    <VKPuckAnimatorTarget> *_target;
    VKAnimation *_animation;
    VKRunningCurve *_curve;
    VKPuckAnimatorLocationProjector *_locationProjector;
    <VKPuckAnimatorDelegate> *_delegate;
    int _pausedCount;
    BOOL _suspended;
    double _tracePlaybackSpeedMultiplier;
    VKAttributedRouteMatch *_lastProjectedLocation;
}

@property(retain) <VKPuckAnimatorTarget> * target;
@property <VKPuckAnimatorDelegate> * delegate;
@property double tracePlaybackSpeedMultiplier;
@property(retain) VKAttributedRouteMatch * lastProjectedLocation;


- (void)setLastProjectedLocation:(id)arg1;
- (id)lastProjectedLocation;
- (void)updateLocation:(id)arg1 routeMatch:(id)arg2;
- (void)_step;
- (double)tracePlaybackSpeedMultiplier;
- (void)setTracePlaybackSpeedMultiplier:(double)arg1;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)dealloc;
- (id)init;
- (void)pause;
- (void)stop;
- (void)start;

@end
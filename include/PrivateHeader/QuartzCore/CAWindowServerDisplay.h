/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 7, 2014 at 1:44:45 AM Eastern European Standard Time
* Operating System: Version 7.1.2 (Build 11D257)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore.h>
@class NSString, NSSet;

@interface CAWindowServerDisplay : NSObject {

	void* _impl;

}

@property (readonly) CGRect bounds; 
@property (assign) double scale; 
@property (readonly) NSString * name; 
@property (readonly) NSString * deviceName; 
@property (readonly) unsigned displayId; 
@property (readonly) NSString * uniqueId; 
@property (readonly) unsigned rendererFlags; 
@property (readonly) NSSet * clones; 
@property (readonly) CAWindowServerDisplay * cloneMaster; 
@property (getter=isBlanked) BOOL blanked; 
@property (copy) NSString * orientation; 
@property (assign) double overscanAmount; 
@property (assign) BOOL invertsColors; 
@property (assign) float contrast; 
@property (assign) float maximumBrightness; 
@property (assign) float minimumRefreshRate; 
@property (assign) float maximumRefreshRate; 
@property (assign) float idealRefreshRate; 
@property (assign) BOOL usesPreferredModeRefreshRate; 
@property (nonatomic,copy) NSString * colorMode; 
@property (assign) BOOL allowsVirtualModes; 
@property (getter=isMirroringEnabled) BOOL mirroringEnabled; 
@property (assign) long long tag; 
@property (copy) NSString * TVMode; 
@property (copy) NSString * TVSignalType; 
-(NSString *)colorMode;
-(void)setColorMode:(NSString *)arg1 ;
-(BOOL)allowsVirtualModes;
-(void)setAllowsVirtualModes:(BOOL)arg1 ;
-(void)setMirroringEnabled:(BOOL)arg1 ;
-(BOOL)isMirroringEnabled;
-(unsigned)rendererFlags;
-(void)addClone:(id)arg1 options:(id)arg2 ;
//-(id)_initWithCADisplayServer:(Server*)arg1 ;
-(unsigned)contextIdAtPosition:(CGPoint)arg1 ;
-(unsigned)clientPortAtPosition:(CGPoint)arg1 ;
-(unsigned)clientPortOfContextId:(unsigned)arg1 ;
-(unsigned)taskPortOfContextId:(unsigned)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toContextId:(unsigned)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromContextId:(unsigned)arg2 ;
-(NSSet *)clones;
-(void)addClone:(id)arg1 ;
-(void)removeClone:(id)arg1 ;
-(void)removeAllClones;
-(CAWindowServerDisplay *)cloneMaster;
-(void)setBlanked:(BOOL)arg1 ;
-(BOOL)isBlanked;
-(void)willUnblank;
-(void)setOverscanAmount:(double)arg1 ;
-(void)setInvertsColors:(BOOL)arg1 ;
-(BOOL)invertsColors;
-(void)setMaximumBrightness:(float)arg1 ;
-(float)maximumBrightness;
-(void)setMinimumRefreshRate:(float)arg1 ;
-(float)minimumRefreshRate;
-(void)setMaximumRefreshRate:(float)arg1 ;
-(float)maximumRefreshRate;
-(void)setIdealRefreshRate:(float)arg1 ;
-(float)idealRefreshRate;
-(void)setUsesPreferredModeRefreshRate:(BOOL)arg1 ;
-(BOOL)usesPreferredModeRefreshRate;
-(void)setTVMode:(NSString *)arg1 ;
-(NSString *)TVMode;
-(void)setTVSignalType:(NSString *)arg1 ;
-(NSString *)TVSignalType;
-(void)dealloc;
-(CGRect)bounds;
-(id)description;
-(void)invalidate;
-(NSString *)orientation;
-(double)scale;
-(void)setContrast:(float)arg1 ;
-(void)setTag:(long long)arg1 ;
-(long long)tag;
-(NSString *)name;
-(void)setScale:(double)arg1 ;
-(void)setOrientation:(NSString *)arg1 ;
-(void)update;
-(double)overscanAmount;
-(unsigned)displayId;
-(NSString *)uniqueId;
-(float)contrast;
-(NSString *)deviceName;
@end


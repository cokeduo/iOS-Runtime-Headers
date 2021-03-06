/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKWorldClockSmallModuleView : NTKComplicationModuleView <NTKWorldClockComplicationDisplay> {
    NTKColoringLabel * _cityLabel;
    NTKDigitalTimeLabel * _timeLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <NTKComplicationDisplayObserver> *displayObserver;
@property (readonly) unsigned int hash;
@property (getter=isHighlighted, nonatomic) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureContentSubviews;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_layoutContentView;
- (id)_timeFontOfSize:(float)arg1;
- (id)_timeFontOfSize:(float)arg1 monospace:(BOOL)arg2;
- (void)_updateTimeFont:(BOOL)arg1;
- (void)endTimeTravelAnimated:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setIsXL:(BOOL)arg1;
- (void)setOverrideDate:(id)arg1;
- (void)setShortCity:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)startTimeTravelAnimated:(BOOL)arg1;

@end

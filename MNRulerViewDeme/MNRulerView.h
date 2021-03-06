//
//  MNRulerView.h
//  MNRulerViewDeme
//
//  Created by 이창민 on 2015. 12. 30..
//  Copyright (c) 2015년 changmin. All rights reserved.
//

#import <UIKit/UIKit.h>



@class MNRulerView;


@protocol MNRulerViewDelegate <NSObject>
@optional
- (NSInteger)MNRulerPickerView:(MNRulerView*)MNRulerPickerView titleForRow:(NSInteger)row;
-(void)RulerViewDidScroll:(MNRulerView*)MNRulerPickerView currentValue:(float)value;
-(CGFloat)rowHeightForMNRulerPickerView:(MNRulerView*)MNRulerPickerView;

@required


@end

@interface MNRulerView : UIView



-(void)setIndicatorView:(UIView *)view;
-(void)setMaxValue:(NSInteger)maxValue MinValue:(NSInteger)minValue;

-(void)setBackgroundColorOfCell:(UIColor *)backgroundColor;
-(void)setBackgroundColorOfLine:(UIColor *)backgroundColor;
-(void)setBackgroundColorOfLabel:(UIColor *)backgroundColor;
@property (nonatomic, weak) id <MNRulerViewDelegate> delegate;


@end



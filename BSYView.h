//
//  BSYView.h
//  BSYProgressView
//
//  Created by mac on 15/5/6.
//  Copyright (c) 2015年 BSY. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BSYView : UIView
/**
 *  显示进度数
 */
@property(nonatomic,strong)UILabel *ProgressView;
@property (nonatomic) double progress;
@property (nonatomic) NSInteger showText ;
@property (nonatomic) NSInteger roundedHead ;
@property (nonatomic) NSInteger showShadow ;
@property (nonatomic) CGFloat thicknessRatio ;
@property (nonatomic, strong) UIColor *innerBackgroundColor ;
@property (nonatomic, strong) UIColor *outerBackgroundColor ;
@property (nonatomic, strong) UIFont *font ;
@property (nonatomic, strong) UIColor *progressFillColor ;
@property (nonatomic, strong) UIColor *progressTopGradientColor ;
@property (nonatomic, strong) UIColor *progressBottomGradientColor;
@end

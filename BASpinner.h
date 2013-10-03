//
//  BASpinner.h
//  animations
//
//  Created by Billy Irwin on 10/3/13.
//  Copyright (c) 2013 Billy Irwin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BASpinner : UIView

@property (strong, nonatomic) UIColor *color;
@property (nonatomic) float orbitSize;
@property (nonatomic) float planetSize;
@property (nonatomic) float speed;

- (id)initWithFrame:(CGRect)frame andColor:(UIColor*)color andBackgroundColor:(UIColor*)bColor;

- (void)start;
- (void)stop;

@end

//
//  SCImagePanScrollBarView.h
//  SubjectiveCImagePan
//
//  Created by Sam Page on 16/02/14.
//  Copyright (c) 2014 Sam Page. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SCImagePanScrollBarView : UIView

- (id)initWithFrame:(CGRect)frame edgeInsets:(UIEdgeInsets)edgeInsets;
- (void)updateWithScrollAmount:(CGFloat)scrollAmount forScrollableWidth:(CGFloat)scrollableWidth inScrollableArea:(CGFloat)scrollableArea;

@end

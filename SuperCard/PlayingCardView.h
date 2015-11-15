//
//  PlayingCardView.h
//  SuperCard
//
//  Created by ly on 15/11/15.
//  Copyright © 2015年 princeli. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayingCardView : UIView

@property (nonatomic) NSUInteger rank;
@property (strong,nonatomic) NSString *suit;
@property (nonatomic) BOOL faceUp;

- (void)pinch:(UIPinchGestureRecognizer *)gesture;
@end

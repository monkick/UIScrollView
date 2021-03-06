//
//  ViewController.h
//  UIScrollView
//
//  Created by kazuyoshi kawakami on 13/06/14.
//  Copyright (c) 2013年 kazuyoshi kawakami. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ContentView.h"
#import "CustomScrollView.h"

@interface ViewController : UIViewController <UIScrollViewDelegate>

@property (strong, nonatomic) ContentView *imageView;
@property (weak, nonatomic) IBOutlet CustomScrollView *imageScrollView;


- (IBAction)openButton:(id)sender;

@end

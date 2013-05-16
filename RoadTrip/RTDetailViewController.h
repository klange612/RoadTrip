//
//  RTDetailViewController.h
//  RoadTrip
//
//  Created by Kurt Lange on 5/15/13.
//  Copyright (c) 2013 Kurt Lange. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RTDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

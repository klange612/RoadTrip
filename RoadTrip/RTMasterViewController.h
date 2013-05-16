//
//  RTMasterViewController.h
//  RoadTrip
//
//  Created by Kurt Lange on 5/15/13.
//  Copyright (c) 2013 Kurt Lange. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RTDetailViewController;

@interface RTMasterViewController : UITableViewController

@property (strong, nonatomic) RTDetailViewController *detailViewController;

@end

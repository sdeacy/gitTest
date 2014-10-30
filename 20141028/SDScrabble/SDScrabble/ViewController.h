//
//  ViewController.h
//  SDScrabble
//
//  Created by media temp on 28/10/2014.
//  Copyright (c) 2014 SD. All rights reserved.
//

#import <UIKit/UIKit.h>
 
@interface ViewController : UIViewController <UITableViewDataSource>

@property (nonatomic,strong) NSArray *words;
@property (nonatomic, weak) IBOutlet UITableView *tableview;

@end

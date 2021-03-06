//
//  FirstDayAgendaViewController.h
//  MDW
//
//  Created by JETS on 4/24/17.
//  Copyright © 2017 marko. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SideMenuTableViewController.h"
#import "SessionDetailsViewController.h"
#import "ViewsProtocol.h"
#import "MDWNetworkManager.h"

@interface FirstDayAgendaViewController : UIViewController<UITableViewDelegate,UITableViewDataSource,ViewsProtocol>

@property UIActivityIndicatorView * indicator;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *barButton;
@property (weak, nonatomic) IBOutlet UITableView *FirstDayTable;
@property NSMutableArray * firstDaySessions ;

@end

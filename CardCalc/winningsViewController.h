//
//  winningsViewController.h
//  CardCalc
//
//  Created by Zee on 2013-02-01.
//  Copyright (c) 2013 Zee. All rights reserved.
//

#import <UIKit/UIKit.h>

#define CELL_HEIGHT 78.0

@interface winningsViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>{
    IBOutlet UITableView *resultsTable;
    IBOutlet UIButton *doneButton;
}

@end

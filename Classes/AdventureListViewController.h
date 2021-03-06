//
//  AdventureListViewController.h
//  AR-Quest
//
//  Created by Reto Marti on 23/01/16.
//  Copyright © 2016 Voxatec. All rights reserved.
//
//----------------------------------------------------------------------------------------

#import <UIKit/UIKit.h>
#import "Adventure.h"
#import <CoreLocation/CoreLocation.h>


@interface AdventureListViewController : UITableViewController <UITableViewDelegate> {
    @private
    NSMutableArray* infoButtons;
    Adventure* selectedAdventure;
    CLLocationManager* locationManager;
}

// Outlets
@property (strong, nonatomic) IBOutlet UINavigationItem* adventuresTitel;

// Data model
@property (strong, atomic) NSArray* adventures;
@property (strong, nonatomic) CLLocation* userLocation;

// Segue methods (unwind)
- (IBAction) gotoNextStory: (UIStoryboardSegue*) sender;

@end




//
//  SceneMapViewController.h
//  AR-Quest
//
//  Created by Reto Marti on 23/01/16.
//  Copyright © 2016 Voxatec. All rights reserved.
//
//----------------------------------------------------------------------------------------

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import "ARGameViewController.h"
#import "HintViewController.h"
#import "Story.h"
#import "Scene.h"


@interface SceneMapViewController : ARGameViewController
           <CLLocationManagerDelegate, MKMapViewDelegate, UIViewControllerTransitioningDelegate, HintViewControllerDelegate> {
@protected
    CLLocationManager* locationManager;
}

// Outlets
@property (strong, nonatomic) IBOutlet UINavigationItem* sceneMapViewTitle;
@property (strong, nonatomic) IBOutlet MKMapView* mapView;
@property (strong, nonatomic) IBOutlet UIView* hintView;
@property (strong, nonatomic) IBOutlet UITextView* hintTextView;
@property (strong, nonatomic) IBOutlet UIToolbar* toolbar;
@property (strong, nonatomic) IBOutlet UIButton* cacheFocusButton;
@property (strong, nonatomic) IBOutlet UIBarButtonItem* mapTypeToggleButton;


// Data model
@property (strong, nonatomic) Scene* scene;
@property (strong, nonatomic) CLLocation* userLocation;

// Actions
- (IBAction) toggleMapType: (id) sender;
- (IBAction) focusOnCache: (id) sender;
- (IBAction) showHint: (id)sender;
- (IBAction) detectArtifact: (id)sender;

@end

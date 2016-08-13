//
//  WeatherDetailViewController.h
//  Forecaster
//
//  Created by Ross Gottschalk on 8/13/16.
//  Copyright © 2016 The Iron Yard. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "City.h"
#import "Weather.h"

@interface WeatherDetailViewController : UIViewController
//@property (nonatomic) NSString *summary;
//@property (nonatomic) NSNumber *precipProbability;
//@property (nonatomic) NSNumber *temperature;
//@property (nonatomic) NSNumber *apparentTemperature;
//@property (nonatomic) NSNumber *humidity;
//@property (nonatomic) NSNumber *windSpeed;
@property (weak, nonatomic) IBOutlet UILabel *cityNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *tempLabel;
@property (weak, nonatomic) IBOutlet UILabel *feelsLikeLabel;
@property (weak, nonatomic) IBOutlet UILabel *humidityLabel;
@property (weak, nonatomic) IBOutlet UILabel *chanceOfRainLabel;
@property (weak, nonatomic) IBOutlet UILabel *windLabel;

@property (nonatomic) City *city;
@property (nonatomic) Weather *weather;


@end

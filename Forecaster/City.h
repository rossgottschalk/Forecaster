//
//  City.h
//  Forecaster
//
//  Created by Ross Gottschalk on 8/13/16.
//  Copyright © 2016 The Iron Yard. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface City : NSObject

@property (nonatomic)NSString *cityName;
@property (nonatomic)NSString *stateInitials;

@property (nonatomic)NSNumber *latNumber;
@property (nonatomic)NSString *latitude;

@property (nonatomic)NSNumber *longNumber;
@property (nonatomic)NSString *longitude;



+(City *) cityWithDictionary: (NSDictionary *) cityDict;

@end

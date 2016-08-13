//
//  City.m
//  Forecaster
//
//  Created by Ross Gottschalk on 8/13/16.
//  Copyright © 2016 The Iron Yard. All rights reserved.
//

#import "City.h"

@implementation City

+(City *)cityWithDictionary:(NSDictionary *)cityDict
{
    City *aCity = nil;
    if(cityDict)
    {
        aCity = [[City alloc] init];
        
        NSArray *resultsFromAPI = cityDict[@"results"];
        NSDictionary *resultsDict = resultsFromAPI[0];
        
        
        NSArray *addressComponents = resultsDict [@"address_components"];
        
        //City Name
        NSDictionary *cityDict = addressComponents[1];
        aCity.cityName = cityDict[@"long_name"];
        
        //State Initials
        NSDictionary *stateDict = addressComponents[2];
        aCity.stateInitials = stateDict[@"short_name"];
        
        
        
    }
    return aCity;
}

@end

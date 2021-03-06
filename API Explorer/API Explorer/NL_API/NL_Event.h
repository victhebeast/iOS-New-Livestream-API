//
//  NL_Event.h
//  API Explorer
//
//  Created by Victor Ilisei on 3/12/15.
//  Copyright (c) 2015 Tech Genius. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "NL_Picture.h"
#import "NL_EventFeed.h"

@interface NL_Event : NSObject

@property (nonatomic) long eventId;
@property (nonatomic, strong) NSString *short_name;
@property (nonatomic, strong) NSString *full_name;
@property (nonatomic, strong) NSDictionary *owner;

@property (nonatomic, strong) NL_Picture *logo;

@property (nonatomic, strong) NSDate *start_time;
@property (nonatomic, strong) NSDate *end_time;

@property (nonatomic, strong) NL_EventFeed *feed;

@property (nonatomic, strong) NSDictionary *stream_info;

- (void)populateEventInBackground:(NSString *)customURLevent fromAccount:(NSString *)customURLaccount :(void (^)())succeededBlock :(void (^)(NSInteger statusCode, NSError *connectionError, NSError *jsonError))errorBlock;
- (NSString *)getOptimalVideoURL;
- (void)getEventPosterofSize:(CGSize)posterSize :(void (^)(UIImage *image))completionBlock;

@end
//
//  AdvertInfo.m
//  NewsReader
//
//  Created by Aico on 6/24/17.
//  Copyright © 2017 lee. All rights reserved.
//

#import "AdvertInfo.h"

@implementation AdvertInfo

+ (instancetype)infoFromDict:(NSDictionary *)dict
{
    AdvertInfo *info = [[AdvertInfo alloc] init];
    
    info.ID = [dict objectForKey:@"id"];
    info.name = [dict objectForKey:@"name"];
    info.imageurl = [dict objectForKey:@"imageurl"];
    info.linkurl = [dict objectForKey:@"linkurl"];
    
    return info;
}

@end

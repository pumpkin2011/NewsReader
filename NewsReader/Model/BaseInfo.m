//
//  BaseInfo.m
//  NewsReader
//
//  Created by Aico on 6/24/17.
//  Copyright © 2017 lee. All rights reserved.
//

#import "BaseInfo.h"

@implementation BaseInfo

+ (instancetype)infoFromDict:(NSDictionary *)dict
{
    BaseInfo *info = [[BaseInfo alloc] init];
    
    info.ID = [dict objectForKey:@"id"];
    info.name = [dict objectForKey:@"name"];
    
    return info;
}

+ (NSArray *)arrayFromDict:(NSDictionary *)dict
{
    // NSArray *array = [dict objectForKey:NetData];
//    return [[self class] arrayFromArray:array];
    return [[NSArray alloc] init];
}

+ (NSArray *)arrayFromArray:(NSArray *)array
{
    NSMutableArray *infos = [[NSMutableArray alloc] init];
    
    for(NSDictionary *dict in array) {
        [infos addObject:[[self class] infoFromDict:dict]];
    }
    
    if(infos.count <= 0) {
        infos = nil;
    }
    
    return infos;
}

- (NSComparisonResult)compare:(BaseInfo *)bInfo
{
    return [self.ID caseInsensitiveCompare:bInfo.ID];
}

-(BOOL)isEqual:(BaseInfo *)bInfo
{
    return [self.ID isEqualToString:bInfo.ID];
}

@end

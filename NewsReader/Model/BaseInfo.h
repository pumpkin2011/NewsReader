//
//  BaseInfo.h
//  NewsReader
//
//  Created by Aico on 6/24/17.
//  Copyright © 2017 lee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BaseInfo : NSObject

@property(nonatomic, strong) NSString *ID;
@property(nonatomic, strong) NSString *name;

+ (instancetype)infoFromDict:(NSDictionary *)dict;
+ (NSArray *)arrayFromDict:(NSDictionary *)dict;
+ (NSArray *)arrayFromArray:(NSArray *)array;

@end

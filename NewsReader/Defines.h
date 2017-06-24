//
//  Defines.h
//  NewsReader
//
//  Created by Aico on 6/24/17.
//  Copyright © 2017 lee. All rights reserved.
//
// 所有的常量 和 宏


#if (DEBUG || TESTCASE)
#define FxLog(format, ...) NSLog(format, ## __VA_ARGS__)
#else
#define FxLog(format, ...)
#endif

// 日志输出宏
#define BASE_LOG(cls,sel) FxLog(@"%@-%@", NSStringFromClass(cls), NSStringFromSelector(sel))
#define BASE_ERROR_LOG(cls,sel,error) FxLog(@"ERROR:%@-%@-%@", NSStringFromClass(cls), NSStringFromSelector(sel), error)
#define BASE_INFO_LOG(cls,sel,info) FxLog(@"INFO:%@-%@-%@", NSStringFromClass(cls), NSStringFromSelector(sel), info)

// 日志输出函数
#if (DEBUG || TESTCASE)
#define BASE_LOG_FUN(self,_cmd) BASE_LOG([self class], _cmd)
#define BASE_ERROR_FUN(self,_cmd,error) BASE_ERROR_LOG([self class], _cmd, error)
#define BASE_INFO_FUN(self,_cmd,info) BASE_INFO_LOG([self class], _cmd, info)
#else
#define BASE_LOG_FUN(self,_cmd)
#define BASE_ERROR_FUN(self,_cmd,error)
#define BASE_INFO_FUN(self,_cmd,info)
#endif


// 设备类型判断
#define IsiPaid  (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define IsIphone (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IsRetain ([[UIScreen mainScreen] scale] >= 2.0)
#define ScreenWidth     ([[UIScreen mainScreen] bounds].size.width)
#define ScreenHeight    ([[UIScreen mainScreen] bounds].size.height)
#define ScreenMaxLength (MAX(ScreebWudtg, ScreenHeight))
#define ScreenMinLength (MIN(ScreenWidth, ScreenHeight))

#define IsiPhone4       (IsIphone && ScreenMaxLength < 568.0)
#define IsiPhone5       (IsIphone && ScreenMaxLength == 568.0)
#define IsiPhone6       (IsiPhone && ScreenMaxLength == 667.0)
#define IsIphone6p      (IsiPhone && ScreenMaxLength == 736.0)


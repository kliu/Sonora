//
//  SNRClickActionTextField.h
//  Sonora
//
//  Created by Indragie Karunaratne on 12-01-31.
//  Copyright (c) 2012 Indragie Karunaratne. All rights reserved.
//

#import <AppKit/AppKit.h>

@interface SNRClickActionTextField : NSTextField
@property (nonatomic, copy) void (^mouseUpBlock)();
@end

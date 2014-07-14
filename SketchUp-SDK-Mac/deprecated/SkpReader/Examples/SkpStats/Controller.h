//
//  Controller.h
//  SkpStats
//
//  Created on 11/10/10.
//  Copyright 2010 Google, Inc. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface Controller : NSObject {
  IBOutlet NSTextField *fileNameTF;

  NSString *filePath;

  NSMutableAttributedString *statsResultsString;
}

@property (nonatomic, copy) NSString *filePath;
@property (nonatomic, copy) NSMutableAttributedString *statsResultsString;

- (IBAction)openFile:(id)sender;
- (IBAction)readStats:(id)button;

@end

//
//  Controller.mm
//  SkpStats
//
//  Created on 11/10/10.
//  Copyright 2010 Google, Inc. All rights reserved.
//

#import "Controller.h"
#import <SketchUpReader/SketchUpReader.h>

@implementation Controller
@synthesize filePath;
@synthesize statsResultsString;

- (IBAction)openFile:(id)sender {
  NSOpenPanel *openPanel = [NSOpenPanel openPanel];
  [openPanel setAllowsMultipleSelection:NO];
  if([openPanel runModalForTypes:[NSArray arrayWithObject:@"skp"]] ==
      NSOKButton) {
    self.filePath = [openPanel filename];
  }
}

_bstr_t NSStringToBSTR(NSString* str) {
  return _bstr_t([str UTF8String]);
}

NSString* BSTRToNSString(_bstr_t str) {
  const char* buf = static_cast<const char*>(str);
  return [NSString stringWithUTF8String:buf];
}

- (IBAction)readStats:(id)button {
  NSMutableString *status = [NSMutableString string];
  [status appendFormat:@"File: %@\n", self.filePath];

  ISkpApplication* ppApp = NULL;
  HRESULT hr = GetSketchUpSkpApplication(&ppApp);

  ISkpFileReader * file_reader = NULL;
  if ((hr == S_OK) && (ppApp != NULL)) {
    hr = ppApp->QueryInterface(IID_ISkpFileReader, (void **)&file_reader);
  }
  else {
    status = @"Error acquiring SkpApplication";
    self.statsResultsString =
      [[[NSAttributedString alloc] initWithString:status] autorelease];
    return;
  }

  ISkpDocument * document = NULL;

  _bstr_t filename = NSStringToBSTR(self.filePath);
  hr = file_reader->OpenFile(filename, &document);

  BSTR description = nil;
  hr = document->get_Description(&description);
  [status appendFormat:@"description = \"%@\", success=%@\n",
   BSTRToNSString(description), (SUCCEEDED(hr))?@"YES":@"NO"];

  ISkpPages * pages = NULL;
  document->get_Pages(&pages);
  long pCount = 0;
  pages->get_Count(&pCount);
  [status appendFormat:@"pages.count=%d, success=%@\n",
   pCount, (SUCCEEDED(hr))?@"YES":@"NO"];

  ISkpLayers * layers = NULL;
  hr = document->get_Layers(&layers);
  long lCount = 0;
  layers->get_Count(&lCount);
  [status appendFormat:@"layers.count = %d, success=%@\n",
   lCount, (SUCCEEDED(hr))?@"YES":@"NO"];

  ISkpComponentDefinitions *componentDefinitions = NULL;
  hr = document->get_ComponentDefinitions(&componentDefinitions);
  long cdCount = 0;
  hr = componentDefinitions->get_Count(&cdCount);
  [status appendFormat:@"componentDefinitions.count=%d, success=%@\n",
   cdCount, (SUCCEEDED(hr))?@"YES":@"NO"];

  self.statsResultsString =
    [[[NSAttributedString alloc] initWithString:status] autorelease];
}

- (void)dealloc {
  [filePath release];
  [statsResultsString release];
  [super dealloc];
}


@end

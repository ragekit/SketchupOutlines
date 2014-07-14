// Copyright 2013 Trimble Navigation Limited. All Rights Reserved.

#import "SkpToXMLPlugin.h"
#import "../plugin/xmlplugin.h"

// Our shared base class has just everything we need except the UI.  This
// connector lets us delegate the UI back to our obj-c plugin.
class CXmlExporterPluginMac : public CXmlExporterPlugin {
public:
  CXmlExporterPluginMac(SkpToXMLPlugin*& p) : plugin_(p) {
  }
  void ShowOptionsDialog(bool model_has_selection) {
    [plugin_ showOptionsDialog:model_has_selection];
  }
  void ShowSummaryDialog() {
    // TODO: obtain actual summary. Not relevant to this demonstration.
    std::string summary = "Export was successful!";
    [plugin_ showSummaryDialog:summary];
  }
  SkpToXMLPlugin* plugin_;
};

@implementation SkpToXMLPlugin

// Initialize the plugin and return an autoreleased instance of it.
+ (NSObject<SketchUpModelExporterPlugin>*)exporter {
  SkpToXMLPlugin* theExporter = nil;
  theExporter = [[SkpToXMLPlugin alloc] init];
  
  return [theExporter autorelease];
}

// This gets the underlying c++ interface.
- (SketchUpModelExporterInterface*)sketchUpModelExporterInterface {
  return plugin_;
}

- (id)init {
  self = [super init];
  
  plugin_ = new CXmlExporterPluginMac(self);
  
  return self;
}

- (void)dealloc {
  delete plugin_;
  
  // Release the top level objects from the loaded NIB file
  if (optionsPanel) {
    [optionsPanel release];
  }
  if (summaryPanel) {
    [summaryPanel release];
  }

  [super dealloc];
}

- (void)awakeFromNib {
    // Called after the SkpToXMLOptions NIB file has completely loaded.
}

- (bool)loadNib {
  if (!optionsPanel || !summaryPanel) {
    [NSBundle loadNibNamed:@"SkpToXMLOptions" owner:self];
  }
  return optionsPanel && summaryPanel;
}

#define GET_STATE(c) ((c != nil) ? ([c state] == NSOnState) : false)
#define SET_STATE(c, b) if(c) [c setState:((b)?NSOnState:NSOffState)]

- (void)initControls:(bool)model_has_selection {
  // TODO: Initialize the controls in the options view from the options
  [exportSelectionSetCheck setEnabled:(BOOL)model_has_selection];
}

// Set the options from those selected in the dialog
- (void)getOptions {
  // TODO: Get options from the UI
}


// Close the a panel started with [NSApp runModalForWindow:]
- (IBAction)closePanel:(id)sender {
  // The OK button on the options panel has a tag of 1.  While the Cancel
  // button and OK button on the report panel have a tag of zero.  All we care
  // about is that we can differentate between OK and Cancel on the options
  // dialog so we can save modified preferences.
  if ([sender tag] == 1) {
    [NSApp stopModal];
  } else { // cancel button
    [NSApp abortModal];
  }
}

- (void)showOptionsDialog:(bool)model_has_selection {
  // Make sure we have our panel created before we set data on it.
  if (![self loadNib]) return;
  
  // Set our preferences on the panel
  [self initControls:model_has_selection];
    
  // Sync up our selection toggle.
  [exportSelectionSetCheck setEnabled:(BOOL)model_has_selection];
  
  // Display the panel as a model window.
  NSInteger response = [NSApp runModalForWindow:optionsPanel];
  
  if (response == NSRunStoppedResponse) {
    // get the options from the panel
    [self getOptions];
  }
  [optionsPanel close];
  [optionsPanel orderOut:self];
}

- (void)showSummaryDialog:(const std::string&)summary {
  // Make sure we have our panel created before we set data on it.
  if (![self loadNib]) return;
  
  // Build the localized stats
  const char* cstr = summary.c_str();
  NSString* nsSummary = [NSString stringWithCString:summary.c_str()];
  [summaryText setString:nsSummary];

  // Popup the export summary dialog
  [NSApp runModalForWindow:summaryPanel];
  
  // Clise
  [summaryPanel close];
  [summaryPanel orderOut:self];
}

@end

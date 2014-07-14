// Copyright 2013 Trimble Navigation Limited. All Rights Reserved.

#import <Cocoa/Cocoa.h>
#import <string>
#import <slapi/import_export/modelexporterplugin.h>

// A simple connector class that lets us connect our shared c++ plugin class to
// the UI in this obj-c class
class CXmlExporterPluginMac;

//=============================================================================

@interface SkpToXMLPlugin:NSObject<SketchUpModelExporterPlugin> {
  IBOutlet NSPanel* optionsPanel;
  IBOutlet NSButton* exportFacesCheck;
  IBOutlet NSButton* exportEdgesCheck;
  IBOutlet NSButton* exportMaterialsCheck;
  IBOutlet NSButton* exportMaterialsByLayerCheck;
  IBOutlet NSButton* exportLayersCheck;
  IBOutlet NSButton* exportOptionsCheck;
  IBOutlet NSButton* exportCamerasCheck;
  IBOutlet NSButton* exportSelectionSetCheck;
  IBOutlet NSPanel* summaryPanel;
  IBOutlet NSTextView* summaryText;
  
  // Delegates most everything to our shared c++ plugin class.
  CXmlExporterPluginMac* plugin_;
}

// Implementation of the SketchUpModelExporterPlugin protocol
- (SketchUpModelExporterInterface*)sketchUpModelExporterInterface;

// Gathers options from the user.
- (void)showOptionsDialog:(bool)model_has_selection;

// Shows a summary of the export.
- (void)showSummaryDialog:(const std::string&)summary;

// Used to properly close a model dialog
- (IBAction)closePanel:(id)sender;

@end

// Copyright 2010 Google Inc. All Rights Reserved.

// Define the SkpExporterPlugin protocol
// All SketchUp exporter plugins must implement this protocol
#ifndef _SKPEXPORTERPLUGIN
#define _SKPEXPORTERPLUGIN

#include <Cocoa/Cocoa.h>

struct IProgressCB;
class IUnknown;

//=============================================================================

@protocol SkpExporterPlugin

// Return an instance of the exporter.  This will usually be a singleton
// object and this method will always return the shared instance.
+ (NSObject<SkpExporterPlugin>*) exporter;

// Return a non-localized string that gives the type of the exporter
-(NSString*)exporterType;

// Return the localized name of the exporter to display on the UI
// This is used if exporterType does not return one of the standard types
- (NSString*)name;

// Returns YES if the exporter provides an options view for the given format.
// The format will correspond to an index into the array returned by fileFormats.
-(BOOL)providesOptionsForFormat:(int)format;

// Get the view to display in the options sheet. nil means there are no options
// This should initialize the controls in the view to their default values.
- (NSView*)optionsViewForFormat:(int)format document:(IUnknown*)docinterface;

// This method is caled when the user closes the options dialog.
// returnCode identifies the button that was used to close the dialog.
// if returnCode == NSOKButton, you should update the default values so that
// if optionsViewForFormat:document: is called again you can initialize
// the view with the update values.
// If the user clicks on the Cancel button, then returnCode == NSCancelButton.
- (void)updateOptionsForFormat:(int)format
                      document:(IUnknown*)docinterface
                    returnCode:(int)returnCode;

// Return an array of NSStrings that give the file formats that are supported
// by this exporter.  The strings should be localized.
-(NSArray*)fileFormats;

// Get the file extension to use for a given file format.  The index should
// correspond to the index of the format in the array returned by fileFormats.
-(NSString*)extensionForFormat:(int)index;

// Do the export to the given file
- (BOOL)export:(IUnknown*)docinterface
            to:(NSString*)filename
   usingFormat:(int)format
    optionsSet:(BOOL)optionsWereSet
      callback:(IProgressCB*)progress;

// Do the export to the given file
//- (BOOL)export:(NSString*)skpFile
//            to:(NSString*)filename
//   usingFormat:(int)format
//    optionsSet:(BOOL)optionsWereSet
//      callback:(IProgressCB*)progress;

@end

// SkpExporterAbout
// An optional interface supported by an exporter. 
// 
// If this interface is supported, then the exporter can either 
// present its own About Box, or minimally can provide a 
// descriptive string.
@protocol SkpExporterAbout

// Query to determine whether this object supports its own About Box.
-(BOOL) supportsAboutBox;

// Directs this object to present its own About Box.
-(BOOL) doAbout;

//Returns a descriptive string about the exporter.
-(NSString*) aboutString;

@end

// SkpExporterValidation
//
// Allows the exporter to decide if it is valid
// with the given document.
// docInterface =  A IUnknown that represents the
// document to be written.
@protocol SkpExporterValidation

-(BOOL) isValidDocument:(IUnknown*)docInterface;

@end

// SkpExporterVersion
// Used to determine the version of the exporter.
// 
// Set to a string representing the version of this exporter.
@protocol SkpExporterVersion

-(NSString*) version;

@end

// SkpExporterSummary
// An optional interface supported by an exporter. 
// 
// If this interface is supported, then the exporter can 
// summarize its activities.  The exporter will be asked to
// display a summary if and only the export succeeds without
// a catastrophic error; 
@protocol SkpExporterSummary

//Displays the exporter summary.
-(void) showSummary;

@end

@protocol SkpExporterProgress
// TBD
@end

// SkpExporterFileSpecificOptions
//
// Allows the exporter to query the user for
// file specific options.
// filename The name of the file which is selected for output.
// pActiveDocument The SketchUp document which is being exported.
@protocol SkpExporterFileSpecificOptions

-(BOOL) doFileSpecificOptionsFor:(NSString*)filename Document:(IUnknown*)docInterface;

@end

//=============================================================================

#endif //_SKPEXPORTERPLUGIN


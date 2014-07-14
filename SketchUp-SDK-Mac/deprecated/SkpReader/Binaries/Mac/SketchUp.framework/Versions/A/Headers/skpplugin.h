// Copyright 2010 Google Inc. All Rights Reserved.
// Define the SkpPlugin protocol
// All SketchUp plugins must implement this protocol

#include <Cocoa/Cocoa.h>

//=============================================================================

// This protocol can be used for a simple plugin that does not need access to
// the SketchUp API
@protocol SkpPlugin

// Initialize the plugin and return a shared instance of it.
+ (NSObject<SkpPlugin>*) initializePlugin;

@end

// This protocol can be implemented by a plugin to provide information about the
// plugin

@protocol SkpPluginInfo

// Provide a localized name that describes the plugin.
-(NSString*)pluginName;

// Display an about box for the plugin
-(void)showAboutBox;

@end

//=============================================================================

// These are tags that are used on the main SketchUp menu that may be useful
// for adding things to the menus from a plugin

#ifndef FILE_MENU_TAG
#define FILE_MENU_TAG    1
#define EDIT_MENU_TAG    2
#define VIEW_MENU_TAG    3
#define CAMERA_MENU_TAG  4
#define DRAW_MENU_TAG    5
#define TOOLS_MENU_TAG   6
#define WINDOW_MENU_TAG  7
#define HELP_MENU_TAG    8

// This menu doesn't normally exist in SketchUp, but a plugin can
// use it when they create a new menu item so that multiple plugins
// can share the same menu
#define PLUGINS_MENU_TAG	100

#endif

//=============================================================================

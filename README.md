#Export Sketchup Outlines to Unity.

This plugin exports sketchup outlines to unity : it exports a fbx containing the model and an xml containing faces infos that will be parsed and transform into a mesh with a custom material on the unity side

#Install

##Mac
- Open Sketchup-SDK-Mac/samples/C++/skp_to_xml/mac/XMLExporter.xcodeproj in xcode and build it
- Copy Sketchup-SDK-Mac/samples/C++/skp_to_xml/mac/Build/XmlExporter.plugin to ~/Library/Application Support/SketchUp 2014/SketchUp/Plugins/
- Copy SaveToUnity.rb to ~/Library/Application Support/SketchUp 2014/SketchUp/Plugins/
- Open Sketchup
- Click on plugin in the toolbar and use Save to Unity to export a fbx and an xml
- In unity : put ModelPostProcessor.cs in an Editor folder
- Change variables in ModelPostProcessor.cs to link where your material is and where you want to save the generated line meshes (some material are in the repo to test)

##PC
Nothing yet

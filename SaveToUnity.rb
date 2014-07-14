 plugins_menu = UI.menu("Plugins")
 item = plugins_menu.add_item("Save For Within") {

   pathToSave = UI.savepanel("Save Model To ", "~/", "model")
   model = Sketchup.active_model
   pathToSave = pathToSave.chomp(File.extname(pathToSave))
   #UI.messagebox(pathToSave)
   model.export(pathToSave + ".fbx",false);
   model.export(pathToSave + ".xml",false);

 }

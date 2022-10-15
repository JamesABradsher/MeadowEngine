workspace "Meadow"
	
	configurations {
		"Debug",
		"Release"
	}

	filter "system:windows"
		architecture"x64"
	
	filter "system:macosx"
		architecture"ARM64"

	startproject "MeadowRenderer"

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

include "vendor"
include "MeadowEngine"
include "MeadowRenderer"

newaction {
	trigger     = "clean",
	description = "Removes binaries and project files",
	execute     = function ()
		print("Removing binaries")
		os.rmdir("./bin/")
		print("Removing intermediates")
		os.rmdir("./bin-int/")
		print("Removing project files")
		os.rmdir("./.vs")
		os.remove("**.sln")
		os.remove("**.vcxproj*")
	end
}
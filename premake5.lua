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
		filter "system:windows"
			os.rmdir("./.vs")
			os.remove("**.sln")
			os.remove("**.vcxproj*")
		filter "system:macosx"
			os.execute("rm -r -f ./**/*.xc*/")
			os.execute("rm -r -f ./*.xc*/")

	end
}
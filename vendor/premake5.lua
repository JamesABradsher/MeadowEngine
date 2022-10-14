project "Premake"
	kind "Utility"

	targetdir("../bin/" .. outputdir .. "/%{prj.name}")
	objdir("../bin-int/" .. outputdir .. "/%{prj.name}")

	files {
		"../**premake5.lua"
	}

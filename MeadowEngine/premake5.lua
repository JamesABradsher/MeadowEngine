project "MeadowEngine"
	kind "StaticLib"
	language "C++"
	cppdialect "C++20"
	staticruntime "on"

	targetdir("../bin/" .. outputdir .. "/%{prj.name}")
	objdir("../bin-int/" .. outputdir .. "/%{prj.name}")

	files {
		"src/**.cpp",
		"include/**.h"
	}

	includedirs {
		"include"
	}

	filter { "configurations:Debug" }
		buildoptions "/MTd"
		runtime "Debug"
		symbols "on"

	filter { "configurations:Release"}
		buildoptions "/MT"
		runtime "Release"
		optimize "on"
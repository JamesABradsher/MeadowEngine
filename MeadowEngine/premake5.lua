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
		filter "system:windows"
			buildoptions "/MTd"
		runtime "Debug"
		symbols "on"
		defines {
			"WORLD_DEBUG"
		}

	filter { "configurations:Release"}
		filter "system:windows"
			buildoptions "/MT"
		runtime "Release"
		optimize "on"
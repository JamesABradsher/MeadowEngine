project "MeadowRenderer"
	kind "ConsoleApp"
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
		defines {
			"DEBUG"
		}

	filter { "configurations:Release"}
		buildoptions "/MT"
		runtime "Release"
		optimize "on"
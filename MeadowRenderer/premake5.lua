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
		"include",
		"%{wks.location}/MeadowEngine/include",
		"%{wks.location}/MeadowEngine/vendor/spdlog/include"
	}

	links {
		"MeadowEngine"
	}

	filter { "configurations:Debug" }
        filter "system:windows"
		    buildoptions "/MTd"
		runtime "Debug"
		symbols "on"

	filter { "configurations:Release"}
        filter "system:windows"
		    buildoptions "/MT"
		runtime "Release"
		optimize "on"
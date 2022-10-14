workspace "Meadow"
	architecture"x64"

	configurations {
		"Debug",
		"Release"
	}

	startproject "MeadowEngine"

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

include "MeadowEngine"
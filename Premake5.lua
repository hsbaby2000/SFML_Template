workspace "Solution"
	startproject "Workspace"
	architecture "x86_64"

	configurations
	{
		"Debug",
		"Release",
	}

	flags
	{
		"MultiProcessorCompile"
	}

	outputDir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

	IncludeDir = {};
	IncludeDir["SFML"] = "%{wks.location}/Vendor/SFML-2.6.1"

	group "Dependencies"
		include "Vendor/premake5"
		include "Example"
	group ""

include "Workspace"


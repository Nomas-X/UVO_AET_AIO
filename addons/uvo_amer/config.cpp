class CfgPatches {
	class uvo_amer {
		name = uvo_amer;
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.9;
		requiredAddons[] = {"uvo_main"};
		author = "Simplex Team";
		url = "";
		version = 1;
	};
};

#include "CfgSounds.hpp"
#include "voice_amer.hpp"

class Extended_PreInit_EventHandlers {
	class uvo_amer {
		init = "[configFile >> 'UVO_voice_amer'] call UVO_fnc_register";
	};
};

class Extended_PostInit_EventHandlers
{
	class uvo_amer
	{
		init = "call compileScript ['\uvo_amer\throwables.sqf']";
	};
};
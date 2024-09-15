class CfgPatches {
	class uvo_aet_aio_amer {
		name = "uvo_aet_aio_amer";
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
	class uvo_aet_aio_amer {
		init = "[configFile >> 'uvo_aet_aio_voice_amer'] call UVO_fnc_register";
	};
};

class Extended_PostInit_EventHandlers
{
	class uvo_aet_aio_amer
	{
		init = "call compileScript ['\uvo_aet_aio_amer\throwables.sqf']";
	};
};
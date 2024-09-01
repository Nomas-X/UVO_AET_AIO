class CfgPatches {
	class uvo_brit {
		name = "uvo_brit";
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
#include "voice_brit.hpp"

class Extended_PreInit_EventHandlers {
	class uvo_brit {
		init = "[configFile >> 'UVO_voice_brit'] call UVO_fnc_register";
	};
};

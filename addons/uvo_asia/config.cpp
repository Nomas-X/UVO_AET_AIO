class CfgPatches {
	class uvo_asia {
		name = uvo_asia;
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
#include "voice_asia.hpp"

class Extended_PreInit_EventHandlers {
	class uvo_asia {
		init = "[configFile >> 'UVO_voice_asia'] call UVO_fnc_register";
	};
};

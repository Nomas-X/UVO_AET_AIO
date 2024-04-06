#include "BIS_AddonInfo.hpp"
class CfgPatches {
	class uvo_custom_POL {
		name = "POL";
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
#include "voice_custom.hpp"

class Extended_PreInit_EventHandlers {
	class uvo_custom_POL {
		init = "[configFile >> 'uvo_voice_POL'] call UVO_fnc_register";
	};
};
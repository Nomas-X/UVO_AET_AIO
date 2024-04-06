class CfgPatches {
	class uvo_fren {
		name = uvo_fren;
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
#include "voice_fren.hpp"

class Extended_PreInit_EventHandlers {
	class uvo_fren {
		init = "[configFile >> 'UVO_voice_fren'] call UVO_fnc_register";
	};
};

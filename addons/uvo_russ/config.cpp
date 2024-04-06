class CfgPatches {
	class uvo_russ {
		name = uvo_russ;
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
#include "voice_russ.hpp"

class Extended_PreInit_EventHandlers {
	class uvo_russ {
		init = "[configFile >> 'UVO_voice_russ'] call UVO_fnc_register";
	};
};

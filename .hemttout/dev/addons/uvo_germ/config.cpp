class CfgPatches {
	class uvo_germ {
		name = "uvo_germ";
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
#include "voice_germ.hpp"

class Extended_PreInit_EventHandlers {
	class uvo_germ {
		init = "[configFile >> 'UVO_voice_germ'] call UVO_fnc_register";
	};
};

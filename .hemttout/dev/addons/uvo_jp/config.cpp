class CfgPatches {
	class uvo_jp {
		name = "uvo_jp";
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
#include "voice_jp.hpp"

class Extended_PreInit_EventHandlers {
	class uvo_jp {
		init = "[configFile >> 'UVO_voice_jp'] call UVO_fnc_register";
	};
};

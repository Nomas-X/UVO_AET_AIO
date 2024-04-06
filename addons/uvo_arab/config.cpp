class CfgPatches {
	class uvo_arab {
		name = uvo_arab;
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
#include "voice_arab.hpp"

class Extended_PreInit_EventHandlers {
	class uvo_arab {
		init = "[configFile >> 'UVO_voice_arab'] call UVO_fnc_register";
	};
};

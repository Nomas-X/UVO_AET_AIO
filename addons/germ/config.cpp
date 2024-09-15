class CfgPatches {
	class uvo_aet_aio_germ {
		name = "uvo_aet_aio_germ";
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
	class uvo_aet_aio_germ {
		init = "[configFile >> 'uvo_aet_aio_voice_germ'] call UVO_fnc_register";
	};
};

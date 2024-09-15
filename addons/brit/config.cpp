class CfgPatches {
	class uvo_aet_aio_brit {
		name = "uvo_aet_aio_brit";
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
	class uvo_aet_aio_brit {
		init = "[configFile >> 'uvo_aet_aio_voice_brit'] call UVO_fnc_register";
	};
};

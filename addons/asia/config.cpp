class CfgPatches {
	class uvo_aet_aio_asia {
		name = "uvo_aet_aio_asia";
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
	class uvo_aet_aio_asia {
		init = "[configFile >> 'uvo_aet_aio_voice_asia'] call UVO_fnc_register";
	};
};

class CfgPatches {
	class uvo_aet_aio_pol {
		name = "uvo_aet_aio_pol";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.9;
		requiredAddons[] = {"uvo_aet_aio_main"};
		author = "Simplex Team";
		url = "";
		version = 1;
	};
};

#include "CfgSounds.hpp"
#include "voice_pol.hpp"

class Extended_PreInit_EventHandlers {
	class uvo_aet_aio_pol {
		init = "[configFile >> 'uvo_aet_aio_voice_pol'] call UVO_fnc_register";
	};
};
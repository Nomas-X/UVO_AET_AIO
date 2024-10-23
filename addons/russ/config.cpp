class CfgPatches {
	class uvo_aet_aio_russ {
		name = "uvo_aet_aio_russ";
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
#include "voice_russ.hpp"

class Extended_PreInit_EventHandlers {
	class uvo_aet_aio_russ {
		init = "[configFile >> 'uvo_aet_aio_voice_russ'] call UVO_fnc_register";
	};
};

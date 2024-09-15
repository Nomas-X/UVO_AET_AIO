class CfgPatches {
	class uvo_aet_aio_jp {
		name = "uvo_aet_aio_jp";
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
	class uvo_aet_aio_jp {
		init = "[configFile >> 'uvo_aet_aio_voice_jp'] call UVO_fnc_register";
	};
};

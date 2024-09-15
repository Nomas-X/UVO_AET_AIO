class CfgPatches {
	class uvo_aet_aio_arab {
		name = "uvo_aet_aio_arab";
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
#include "voice_arab.hpp"

class Extended_PreInit_EventHandlers {
	class uvo_aet_aio_arab {
		init = "[configFile >> 'uvo_aet_aio_voice_arab'] call UVO_fnc_register";
	};
};

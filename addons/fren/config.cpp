class CfgPatches {
	class uvo_aet_aio_fren {
		name = "uvo_aet_aio_fren";
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
#include "voice_fren.hpp"

class Extended_PreInit_EventHandlers {
	class uvo_aet_aio_fren {
		init = "[configFile >> 'uvo_aet_aio_voice_fren'] call UVO_fnc_register";
	};
};

#include "CfgSounds.hpp"
#include "Nationality_CZ_Config.hpp"

class CfgPatches {
	class uvo_aet_aio_cz {
		name = "uvo_aet_aio_cz";
		version = "1";
		author = "Domy L'Ours Brun";
		url = "https://steamcommunity.com/id/DomyBear/";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.88;
		requiredAddons[] = {"uvo_main"};
	};
};

class Extended_PreInit_EventHandlers {
    class uvo_aet_aio_cz {
        init = "[configFile >> 'uvo_aet_aio_voice_cz'] call UVO_fnc_createNationalityFromConfig";
    };
};
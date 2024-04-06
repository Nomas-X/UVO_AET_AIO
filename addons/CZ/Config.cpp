#include "BIS_AddonInfo.hpp"
#include "CfgSounds.hpp"
#include "Nationality_CZ_Config.hpp"

class CfgPatches {
	class UVO_RHS_CZ {
		name = "Unit Voiceovers RHS version : Czech voices";
		version = "1";
		author = "Domy L'Ours Brun";
		url = "https://steamcommunity.com/id/DomyBear/";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.88;
		requiredAddons[] = {
			"cba_common",
			"cba_events",
			"cba_keybinding",
			"cba_settings",
			"cba_statemachine",
			"cba_xeh",
			"UAS",
			"UVO"
		};
	};
};

class Extended_PreInit_EventHandlers {
    class UVO_CUSTOM_CZ {
        init = "[configFile >> 'UVO_CZ_NationalityConfig'] call UVO_fnc_createNationalityFromConfig";
    };
};
#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = CSTRING(UnitVoiceOvers);
		author = "Simplex Team";
		url = "";
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			"cba_main",
			"cba_common",
			"cba_events",
			"cba_keybinding",
			"cba_settings",
			"cba_statemachine",
			"cba_xeh"
		};
	};

	// Dependency fix
	class UVO {
		name = QUOTE(COMPONENT);
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"A3_data_f"};
		author = "Simplex Team";
	};
};

#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"


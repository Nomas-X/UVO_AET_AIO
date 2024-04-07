#include "script_component.hpp"

params ["_unit"];

if (isNull _unit || !local _unit) exitWith {};
if (getText (configOf _unit >> "simulation") == "UAVPilot") exitWith {};


// condition - Needs to return bool
_condition = { missionNamespace getVariable ["AET_isDone_CBA_Settings", false] };

// Code to be executed once condition true
_statement = {
	params ["_unit"];

	if (!AET_isDone_CBA_Settings) then {
		waitUntil { AET_isDone_CBA_Settings; };
	};
	private _voice = switch (side group _unit) do {
		case west : {AET_UVO_BLUFOR_LANGUAGE};
		case east : {AET_UVO_OPFOR_LANGUAGE};
		case resistance : {AET_UVO_GUER_LANGUAGE};
		case civilian : {AET_UVO_CIV_LANGUAGE};
		default {};
	};
/*
	_simulationType = switch (true) do {
		case (!isMultiplayer): 				{ "Singleplayer" };
		case (is3DENMultiplayer): 			{ "Editor Multiplayer" };
		case (isMultiplayerSolo): 			{ "Local Hosted Solo" };
		case (isDedicated): 				{ "Dedicated Server" };
		case (isServer && hasInterface): 	{ "Local Hosted" };
		case (hasInterface && !isServer ): 	{ "Player Client" };
		case (!hasInterface && !isServer ): { "Headless Client" };
	};



	_str = format ['[CVO](debug)(fnc_initPost) _unit: %1 - _voice: %2 - AET_UVO_BLUFOR_LANGUAGE: %3 - AET_UVO_OPFOR_LANGUAGE: %4 - AET_UVO_GUER_LANGUAGE: %5 - AET_UVO_CIV_LANGUAGE: %6 - player: %7 - _simulationType: %8', _unit , _voice ,AET_UVO_BLUFOR_LANGUAGE , AET_UVO_OPFOR_LANGUAGE , AET_UVO_GUER_LANGUAGE , AET_UVO_CIV_LANGUAGE , player , _simulationType ];
	diag_log _str;

	if (!isServer) then {	_str remoteExec ["diag_log", 2, false];	};
*/

	if (!isNil QGVAR(customVoices)) then {
		private _faction = faction _unit;
		private _index = GVAR(customVoices) findIf {_x # 0 == _faction};

		if (_index != -1) then {
			private _voices = (GVAR(customVoices) # _index # 1) select {missionNamespace getVariable [QGVAR(UVO) + _x,true]};

			if (_voices isEqualTo []) then {
				_voice = ""; // Don't revert to default
			} else {
				_voice = selectRandom _voices;
			};
		};
	};

	// Add UVO
	if (_voice isNotEqualTo "" && missionNamespace getVariable [QGVAR(UVO) + _voice,true]) then {
		[_unit,_voice] call FUNC(add);
	};

	// Default arma voices
	_unit setVariable ["UVO_speaker",speaker _unit,true];

	if !(missionNamespace getVariable [QGVAR(sentences) + str side group _unit,true]) then {
		private _jipID = [QGVAR(setSpeaker),[_unit,"NoVoice"]] call CBA_fnc_globalEventJIP;
		[_jipID,_unit] call CBA_fnc_removeGlobalEventJIP;
	};

	[QGVAR(initPostDone),[_unit,_voice]] call CBA_fnc_localEvent;
};

_parameter = [_unit];            // arguments to be passed on -> _this
_timeout = 60;                  // if condition isnt true within this time in S, _timecode will be executed.
[_condition, _statement, _parameter, _timeout, _statement] call CBA_fnc_waitUntilAndExecute;
#include "script_component.hpp"

params ["_unit","_voice"];

if (isNull _unit || _voice isEqualTo "") exitWith {};

_unit setVariable ["UVO_voice",_voice,true];
_unit setVariable ["UVO_suppressBuffer",0,true];
_unit setVariable ["UVO_allowDeathShouts",missionNamespace getVariable [QGVAR(UVO) + _voice,true],true];
if (_unit == player) then {
	player setVariable ["UVO_allowDeathShouts", false, true];
};
if (AET_UVO_DISABLE_VANILLA_SPEAKER && {_unit != player}) then {
	_unit setSpeaker "NoVoice";
};

[QGVAR(added),[_unit,_voice]] call CBA_fnc_globalEvent;

#include "..\..\script_macros.hpp"
/*
    File: fn_healHospital.sqf
    Author: Bryan "Tonic" Boardwine
    Reworked: Jesse "TKCJesse" Schultz

    Description:
    Prompts user with a confirmation dialog to heal themselves.
    Used at the hospitals to restore health to full.
    Note: Dialog helps stop a few issues regarding money loss.
*/
params [
    ["_target", objNull, [objNull]]
];

if (life_action_inUse) exitWith {};
if ((damage player) < 0.01) exitWith {hint localize "STR_NOTF_HS_FullHealth"};

private _healCost = LIFE_SETTINGS(getNumber,"hospital_heal_fee");
if (CASH < _healCost) exitWith {hint format [localize "STR_NOTF_HS_NoCash",[_healCost] call life_fnc_numberText]};

life_action_inUse = true;

private _action = [
    format [localize "STR_NOTF_HS_PopUp",[_healCost] call life_fnc_numberText],
    localize "STR_NOTF_HS_TITLE",
    localize "STR_Global_Yes",
    localize "STR_Global_No"
] call BIS_fnc_guiMessage;

closeDialog 0;
if (_action) then {
    titleText [localize "STR_NOTF_HS_Healing", "PLAIN"];
    uiSleep 8;
    if (player distance _target > 5) exitWith {life_action_inUse = false; titleText [localize "STR_NOTF_HS_ToFar", "PLAIN"]};
    titleText [localize "STR_NOTF_HS_Healed", "PLAIN"];
    player setDamage 0;
    CASH = CASH - _healCost;
    [] call life_fnc_hudUpdate;
} else {
    hint localize "STR_NOTF_ActionCancel";
};
life_action_inUse = false;
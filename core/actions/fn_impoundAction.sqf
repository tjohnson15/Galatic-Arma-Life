#include "..\..\script_macros.hpp"
/*
    File: fn_impoundAction.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Impounds the vehicle
*/

params [
    ["_vehicle", objNull, [objNull]]
];

private _filters = ["Car","Air","Ship"];

if !(KINDOF_ARRAY(_vehicle,_filters)) exitWith {};
if (player distance cursorObject > 10) exitWith {};
if (_vehicle getVariable "NPC") exitWith {hint localize "STR_NPC_Protected"};

private _vehicleData = _vehicle getVariable ["vehicle_info_owners",[]];
if (_vehicleData isEqualTo []) exitWith {deleteVehicle _vehicle}; //Bad vehicle.

private _vehicleName = FETCH_CONFIG2(getText,"CfgVehicles",(typeOf _vehicle),"displayName");
private _price = M_CONFIG(getNumber,"LifeCfgVehicles",(typeOf _vehicle),"price");

[0,"STR_NOTF_BeingImpounded",true,[((_vehicleData select 0) select 1),_vehicleName]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
life_action_inUse = true;

private _upp = localize "STR_NOTF_Impounding";
//Setup our progress bar.
disableSerialization;
"progressBar" cutRsc ["life_progress","PLAIN"];
private _ui = uiNamespace getVariable "life_progress";
private _progress = _ui displayCtrl 38201;
private _pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format ["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
private _cP = 0.01;

for "_i" from 0 to 1 step 0 do {
    uiSleep 0.09;
    _cP = _cP + 0.01;
    _progress progressSetPosition _cP;
    _pgText ctrlSetText format ["%3 (%1%2)...",round(_cP * 100),"%",_upp];
    if (_cP >= 1) exitWith {};
    if (player distance _vehicle > 10) exitWith {};
    if (!alive player) exitWith {};
};

"progressBar" cutText ["","PLAIN"];

if (player distance _vehicle > 10) exitWith {
    hint localize "STR_NOTF_ImpoundingCancelled";
    life_action_inUse = false;
};

if (!alive player) exitWith {life_action_inUse = false;};

if (crew _vehicle isEqualTo []) then {
    private _type = FETCH_CONFIG2(getText,"CfgVehicles",(typeOf _vehicle),"displayName");

    life_impound_inuse = true;

    if (life_HC_isActive) then {
        [_vehicle,true,player] remoteExec ["HC_fnc_vehicleStore",HC_Life];
    } else {
        [_vehicle,true,player] remoteExec ["TON_fnc_vehicleStore",RSERV];
    };

    waitUntil {!life_impound_inuse};
    if (playerSide isEqualTo west) then {
            private _impoundMultiplier = LIFE_SETTINGS(getNumber,"vehicle_cop_impound_multiplier");
            private _value = _price * _impoundMultiplier;
            [0,"STR_NOTF_HasImpounded",true,[profileName,((_vehicleData select 0) select 1),_vehicleName]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
            if (_vehicle in life_vehicles) then {
                hint format [localize "STR_NOTF_OwnImpounded",[_value] call life_fnc_numberText,_type];
                BANK = BANK - _value;
            } else {
                hint format [localize "STR_NOTF_Impounded",_type,[_value] call life_fnc_numberText];
                BANK = BANK + _value;
            };
            if (BANK < 0) then {BANK = 0;};
            [1] call SOCK_fnc_updatePartial;
    };
} else {
    hint localize "STR_NOTF_ImpoundingCancelled";
};

life_action_inUse = false;
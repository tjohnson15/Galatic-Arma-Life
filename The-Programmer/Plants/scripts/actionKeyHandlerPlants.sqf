/*
    Author: Maxence Lyon
    Altis DEV: https://altisdev.com/user/maxence-lyon
    Teamspeak 3: ts.the-programmer.com
    Web site: www.the-programmer.com
    Steam: « Une Vache Sur CS – Maxence », please leave a message on my profile who says the exact reason before adding me.

    Terms of use:
      - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
      - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
      - Out of respect for the author please do not delete this information.

    License number:
    Server's name:
    Owner's name:
*/
_plant = objNull;
_allEntities = nearestObjects [player,[],2.5];

{
    if (_x in plants_list) exitWith {
        _plant = _x;
    };
} forEach _allEntities;

if !(isNull _plant) exitWith {
    if (vehicle player != player) exitWith {hint (["STR_YOU_ARE_IN_VEH","Max_Settings_Plants","Plants_Localization"] call theprogrammer_core_fnc_localize)};
    if (player getVariable "restrained") exitWith {hint localize "STR_NOTF_isrestrained";};
    if (player getVariable "playerSurrender") exitWith {hint localize "STR_NOTF_surrender";};

    [_plant] spawn max_plants_fnc_pickupPlante;
};

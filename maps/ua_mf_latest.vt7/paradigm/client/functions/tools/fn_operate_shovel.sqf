/*
    File: fn_operate_shovel.sqf
    Author: dent
    Date: 2021-07-08
    Last Update: Date: 2021-07-08
    Public: Yes
    
    Description:
        Executes "Shovel" behaviour for building.
    
    Parameter(s):
        _hitObject object to be built
    
    Returns:
        None
    
    Example(s):
        [_thingToWhack] call para_c_fnc_operate_shovel
*/

params ["_hitObject"];
// systemchat "SHOVEL";
private _building = _hitObject getVariable ["para_g_building", objNull];
["building_on_hit", [_building]] call para_c_fnc_call_on_server;
false
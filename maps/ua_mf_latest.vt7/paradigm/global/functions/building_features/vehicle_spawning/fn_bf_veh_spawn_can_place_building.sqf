/*
    File: fn_bf_veh_spawn_can_place_building.sqf
    Author: Spoffy
    Date: 2022-02-20
    Last Update: 2022-02-20
    Public: Yes
    
    Description:
		Checks if a vehicle spawning building can be placed.
    
    Parameter(s):
		_buildingConfig - Building config [CONFIG]
		_object - Main building object being placed [OBJECT]

    Returns:
		[_canPlace, _message] - Whether or not the building can be placed, and an error message if it can't be [ARRAY]
    
    Example(s):
		[_buildingConfig, _myGhostModel] call para_g_fnc_bf_veh_spawn_can_place_building;
*/

params ["_buildingConfig", "_object"];

[true, ""]
/*
	File: fn_bf_wreck_recovery_on_building_placed.sqf
	Author: Cerebral
	Date: 2022-07-06
	Last Update: 2022-07-06
	Public: No
	
	Description:
		onPlaced callback script for wreck recovery buildings.
	
	Parameter(s):
		_building - The building object that was used to trigger the recovery [OBJECT]
	
	Returns:
		_building or -1 if unsuccessful.

	Example(s):
		[_building] call para_s_fnc_bf_wreck_recovery_on_building_placed;
*/

params ["_building"];

if (isNil "para_s_bf_wreck_recovery_buildings") then {
	//Init wreck recovery buildings array
	para_s_bf_wreck_recovery_buildings = [];
};

para_s_bf_wreck_recovery_buildings pushBackUnique _building;

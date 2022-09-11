/*
    File: fn_zone_marker_delete.sqf
    Author: Alablm
    Date: 2021-10-15
    Last Update: 2021-11-03
    Public: Yes

    Description:
        Deletes given marker from the Zone Marker system.

    Parameter(s):
        _marker - Marker that should be deleted [STRING, defaults to nil]

    Returns:
        Nothing

    Example(s):
        ["zone_locationName"] call para_c_fnc_zone_marker_delete;
*/
params ["_marker"];
para_c_zone_markers_map deleteAt _marker;

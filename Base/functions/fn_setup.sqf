/*
 * @Author: MoarRightRudder 
 * @Date: 2018-03-29 14:50:18 
 * @Last Modified by: mikey.zhaopeng
 * @Last Modified time: 2020-02-19 22:13:09
 */

//Setup - Adds base spawns, determines group behaviours
waitUntil{!isNil "bis_fnc_init"};

createMarker ["respawn_west", getMarkerPos "bluBase"];
"respawn_west" setMarkerType "b_hq";
//[west, (getMarkerPos "bluBase"), "BluForBase"] call BIS_fnc_addRespawnPosition;
createMarker ["respawn_east", getMarkerPos "redBase"];
"respawn_east" setMarkerType "o_hq";
//[east, (getMarkerPos "redBase"), "OpFor Base"] call BIS_fnc_addRespawnPosition;


missionNamespace setVariable ["bluOwned", []];
missionNamespace setVariable ["opfOwned", []];

{
	_rand = floor random 3;
	switch (0) do {
		case 0: {
			[_x] spawn psq_fnc_aggressiveGroup;
			diag_log format["### Group: %1 .........Behaviour: %2",_x, "Aggresive"];
		};
		case 1: {
			_x setVariable ["behaviour", "def"];
			diag_log format["### Group: %1 .........Behaviour: %2",_x, "Defensive"];
		};
		case 2: {
			_x setVariable ["behaviour", "strat"];
			diag_log format["### Group: %1 .........Behaviour: %2",_x, "Strategic"];
		};
	};
	//Prevent AI moving until players can spawn
	{
		_x disableAI "MOVE";
	}forEach units _x;

}forEach allGroups;

//Wait for 15 seconds and then enable AI movement again
uisleep 15;
{_x enableAI "MOVE";}forEach allUnits;

if(missionNamespace getVariable "debug") then {[] spawn psq_fnc_zeusDebug;};

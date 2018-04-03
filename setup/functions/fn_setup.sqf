/*
 * @Author: MoarRightRudder 
 * @Date: 2018-03-29 14:50:18 
 * @Last Modified by: MoarRightRudder
 * @Last Modified time: 2018-04-01 19:23:50
 */

//Setup - Adds base spawns, finds sectors, determines group behaviours and sets their init objective
waitUntil{!isNil "bis_fnc_init"};

_triggers = [];

[west, (getMarkerPos "bluBase"), "BluForBase"] call BIS_fnc_addRespawnPosition;
[east, (getMarkerPos "redBase"), "OpFor Base"] call BIS_fnc_addRespawnPosition;

_triggerSearch = nearestObjects [getMarkerPos "bluBase", ["locationarea_f"], 40000];
{
	{
		if (_x isKindOf "EmptyDetector") then {
			_triggers pushBack _x;
			_x setVariable ["owner", "none"];
		};
	}forEach (synchronizedObjects _x);
}forEach _triggerSearch;

missionNameSpace setVariable ["triggers", _triggers];

{
	_rand = floor random 3;
	switch (_rand) do {
		case 0: {
			_x setVariable ["behaviour", "agg"];
		};
		case 1: {
			_x setVariable ["behaviour", "def"];
		};
		case 2: {
			_x setVariable ["behaviour", "strat"];
		};
	};
	diag_log format["### Group: %1 .........Behaviour: %2",_x, _x getVariable "behaviour"];
	//Set AI's class for correct loadout assignment on respawn (4th man in group will switch between recon and engi randomly)
	//0=Assault, 1=SpecOps, 2=Support, 3=Recon, 4=Engineer
	{
		_unit = _x;
		if(_forEachIndex == 3) then {
			_unit setVariable ["class", (floor random 2) + 3];
		} else {
			_unit setVariable ["class",_forEachIndex];
		};
		_unit setVariable ["group", group _unit];
		_unit addEventHandler ["Fired", {(_this select 0) setVariable ["lastFired", diag_tickTime];}];
		_unit addEventHandler ["Respawn", {[_this select 0] spawn psq_fnc_aiRespawn;[side (_this select 0), -1] call BIS_fnc_respawnTickets;}];

		[_unit] remoteExec ["psq_fnc_loadoutSet", _unit, false];
		
		switch (side _unit) do {
			case west :{
				{
					_unit setSkill [_x, (bluSkill select _forEachIndex)];
				}forEach skillStr;
			};
			case east :{
				{
					_unit setSkill [_x, (opfSkill select _forEachIndex)];
				}forEach skillStr;
			};
		};

	}forEach (units _x);
	
	[_x] spawn psq_fnc_reEval;

}forEach allGroups;

{[west, _x] call BIS_fnc_addRespawnInventory;}forEach ((missionNamespace getVariable "bluInventory") select ("WeaponSet" call BIS_fnc_getParamValue));
{[east, _x] call BIS_fnc_addRespawnInventory;}forEach ((missionNamespace getVariable "redInventory") select ("WeaponSet" call BIS_fnc_getParamValue));

["init","bull"] call psq_fnc_sectorChange;

uisleep 10;

[] spawn psq_fnc_fsmLoop;
[] spawn psq_fnc_zeusDebug;
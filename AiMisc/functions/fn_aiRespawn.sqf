/*
 * @Author: MoarRightRudder 
 * @Date: 2018-03-30 08:47:17 
 * @Last Modified by: MoarRightRudder
 * @Last Modified time: 2018-04-03 12:24:46
 */

params ["_unit", "_slDistance","_closestTrigger","_closestTriggerDistance","_spawnPos"];
if(isPlayer _unit) exitWith {};

_group = _unit getVariable "group";
_currentObjective = _group getVariable "objective";
_class = _unit getVariable "class";
_ownedTriggers = [];

//Check if the squad leader (assuming unit is not the leader), a taken objective, or a base is closest to the groups current objective 

//Get squad leaders distance to current objective
if(leader _unit != _unit) then {
	_slDistance = (leader _unit) distance _currentObjective;
}else {
	_slDistance = nil;
};

//Get closest owned trigger to the groups objective
{
	if(_x getVariable "owner" == (str (side _unit))) then {
		_ownedTriggers pushBack _x;
	};
}forEach (missionNamespace getVariable "triggers");

if(count _ownedTriggers > 0) then {
	_closestTrigger = ([_ownedTriggers, [], {_x distance _currentObjective}, "ascend", {true}] call bis_fnc_sortBy) select 0;
	_closestTriggerDistance = _closestTrigger distance _currentObjective;
} else {
	_closestTriggerDistance = nil;
};

//Determine which location to move the unit to
switch (true) do {
	case (!(isNil "_slDistance") && {!(isNil "_closestTriggerDistance")} && {_slDistance < _closestTriggerDistance}): {
		_spawnPos = [getPos (leader _unit), 0, 15, 4, 0, .6, 0, [], []] call BIS_fnc_findSafePos;
		diag_log format ["$$$ RESPAWN 1: %1 @ %2", _unit, _spawnPos];
	};
	case (!(isNil "_closestTriggerDistance")): {
		_spawnPos = [0,0];
		while {_spawnPos isEqualTo [0,0]} do {
			_spawnPos = [[[_closestTrigger],["water"]] call bis_fnc_randomPos, 0, 10, 2, 0, 1.0, 0, [],[0,0]] call BIS_fnc_findSafePos;
		};
		/*if(_spawnPos isEqualTo [0,0]) then {
			if(side _unit == west) then {
				_spawnPos = [["bluBase"],["water"],{count (_this isFlatEmpty [1, -1, 1.2]) > 0}] call bis_fnc_randomPos;
				diag_log format ["$$$ RESPAWN 3: %1 @ %2", _unit, _spawnPos];
			} else {
				_spawnPos = [["redBase"],["water"],{count (_this isFlatEmpty [1, -1, 1.2]) > 0}] call bis_fnc_randomPos;
				diag_log format ["$$$ RESPAWN 4: %1 @ %2", _unit, _spawnPos];
			};
		};
		*/
		diag_log format ["$$$ RESPAWN 2: %1 @ %2", _unit, _spawnPos];
	};
	default {
		if(side _unit == west) then {
			_spawnPos = [0,0];
			while {_spawnPos isEqualTo [0,0]} do {
				_spawnPos = [[["bluBase"],["water"]] call bis_fnc_randomPos, 0, 10, 2, 0, 1.0, 0, [],[0,0]] call BIS_fnc_findSafePos;
			};
			diag_log format ["$$$ RESPAWN 3: %1 @ %2", _unit, _spawnPos];
		} else {
		_spawnPos = [0,0];
			while {_spawnPos isEqualTo [0,0]} do {
				_spawnPos = [[["redBase"],["water"]] call bis_fnc_randomPos, 0, 10, 2, 0, 1.0, 0, [],[0,0]] call BIS_fnc_findSafePos;
			};
			diag_log format ["$$$ RESPAWN 4: %1 @ %2", _unit, _spawnPos];
		};
	};
};

//Set the units loadout
[_unit] call psq_fnc_setLoadout;

//Move the unit to the correct location
_unit setPos _spawnPos;
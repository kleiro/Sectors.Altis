/*
 * @Author: MoarRightRudder 
 * @Date: 2018-03-29 14:50:18 
 * @Last Modified by: mikey.zhaopeng
 * @Last Modified time: 2020-02-19 22:13:09
 */

//Setup - Adds base spawns, finds sectors, determines group behaviours and sets their init objective
waitUntil{!isNil "bis_fnc_init"};

[west, (getMarkerPos "bluBase"), "BluForBase"] call BIS_fnc_addRespawnPosition;
[east, (getMarkerPos "redBase"), "OpFor Base"] call BIS_fnc_addRespawnPosition;

missionNamespace setVariable ["bluOwned", []];
missionNamespace setVariable ["opfOwned", []];
{
	_area = (_x getVariable "areas") select 0;
	_x setVariable ["sectorArea", _area];
}forEach ([true] call BIS_fnc_moduleSector);

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
		_unit setVariable ["group", group _unit, true];
		_unit addEventHandler ["Fired", {(_this select 0) setVariable ["lastFired", diag_tickTime];}];
		_unit addEventHandler ["Respawn", {
			if((_this select 0) getVariable ["isPlayer", false]) then {
				[(_this select 0)] remoteExec ["psq_fnc_setLoadout", (_this select 0), false];
				[(_this select 0)] remoteExec ["psq_fnc_tempInvincible", (_this select 0), false];
			}else{
				[(_this select 0)] remoteExec ["psq_fnc_aiRespawn", (_this select 0), false];
				[side (_this select 0), -1] call BIS_fnc_respawnTickets;
			};			
		}];

		[_unit] remoteExec ["psq_fnc_setLoadout", _unit, false];
		
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


//["init","bull"] call psq_fnc_sectorChange;

uisleep 10;

//[] spawn psq_fnc_fsmLoop;

if(missionNamespace getVariable "debug") then {[] spawn psq_fnc_zeusDebug;};

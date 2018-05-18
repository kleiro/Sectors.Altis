/*
 * @Author: MoarRightRudder 
 * @Date: 2018-03-29 14:50:18 
 * @Last Modified by: MoarRightRudder
 * @Last Modified time: 2018-04-26 17:20:52
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
			_x setVariable ["owner", "none", true];
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

//Weapon loadouts
_westLoadouts = [];
_eastLoadouts = [];

//1. Add vanilla weapons to east and west respawn inventories
{
	_westLoadouts append (_x select 0);
}forEach (missionNamespace getVariable "westInventory");
{
	_eastLoadouts append (_x select 0);
}forEach (missionNamespace getVariable "eastInventory");

//2. Determine if the host wants to disable DLC weapons, otherwise add them
if("ApexWeapons" call BIS_fnc_getParamValue == 0) then {

	{
		_westLoadouts append (_x select 1);
	}forEach (missionNamespace getVariable "westInventory");
	{
		_eastLoadouts append (_x select 1);
	}forEach (missionNamespace getVariable "eastInventory");

};

//3. If the ADR97 is enabled, add it 
if(isClass(configFile >> "CfgPatches" >> "A3_Weapons_F_Mod")) then {
	_westLoadouts append (((missionNamespace getVariable "westInventory") select 1) select 4);
	_eastLoadouts append (((missionNamespace getVariable "eastInventory") select 1) select 4);
};

//4. If RHS is enabled, add its loadouts
if((isClass(configFile >> "CfgPatches" >> "rhs_main")) && (isClass(configFile >> "CfgPatches" >> "rhsusf_main"))) then {

	{
		_westLoadouts append (_x select 2);
	}forEach (missionNamespace getVariable "westInventory");
	{
		_eastLoadouts append (_x select 2);
	}forEach (missionNamespace getVariable "eastInventory");

};

{[west, _x] call BIS_fnc_addRespawnInventory;}forEach _westLoadouts;
{[east, _x] call BIS_fnc_addRespawnInventory;}forEach _eastLoadouts;

//Set loadouts
diag_log format ["###Weapon OUTPUT: BLU %1, OP %2", _westLoadouts, _eastLoadouts];
missionNamespace setVariable ["westLoadout", _westLoadouts, true];
missionNamespace setVariable ["eastLoadout", _eastLoadouts, true];

//Set uniforms
private ["_westUniform", "_eastUniform"];

switch ("WestUniformSet" call BIS_fnc_getParamValue) do {
	case 0: {
		_westUniform = "Vanilla";
	};

	default {
		diag_log format["wudefs: %1", (missionNamespace getVariable "westUniformDefinitions")];
		diag_log format["wuset: %1", ("WestUniformSet" call BIS_fnc_getParamValue)];

		_westUniform = ((missionNamespace getVariable "westUniformDefinitions") select (("WestUniformSet" call BIS_fnc_getParamValue)-1));
		switch (true) do {
			//Default back to vanilla uniforms if the selected uniform's mods are not enabled
			case (_westUniform select 0 == "RHS"): {
				if (!(isClass(configFile >> "CfgPatches" >> "rhs_main")) || !(isClass(configFile >> "CfgPatches" >> "rhsusf_main"))) then {
					_westUniform == "Vanilla";
				};
			};
			case (_westUniform select 0 == "Apex"): {
				if ("ApexWeapons" call BIS_fnc_getParamValue == 1) then {
					_westUniform == "Vanilla";
				};
			};
		};
	};
};

switch ("EastUniformSet" call BIS_fnc_getParamValue) do {
	case 0: {
		_eastUniform = "Vanilla";
	};

	default {
		_eastUniform = ((missionNamespace getVariable "eastUniformDefinitions") select (("EastUniformSet" call BIS_fnc_getParamValue)-1));
		switch (true) do {
			//Default back to vanilla uniforms if the selected uniform's mods are not enabled
			case (_eastUniform select 0 == "RHS"): {
				if (!(isClass(configFile >> "CfgPatches" >> "rhs_main")) || !(isClass(configFile >> "CfgPatches" >> "rhsusf_main"))) then {
					_eastUniform == "Vanilla";
				};
			};
			case (_eastUniform select 0 == "Apex"): {
				if ("ApexWeapons" call BIS_fnc_getParamValue == 1) then {
					_eastUniform == "Vanilla";
				};
			};
		};
	};
};
diag_log format ["###UNIFORM OUTPUT: BLU %1, OP %2", _westUniform, _eastUniform];
missionNamespace setVariable ["westUniform", _westUniform, true];
missionNamespace setVariable ["eastUniform", _eastUniform, true];

["init","bull"] call psq_fnc_sectorChange;

uisleep 10;

[] spawn psq_fnc_fsmLoop;

if(missionNamespace getVariable "debug") then {[] spawn psq_fnc_zeusDebug;};

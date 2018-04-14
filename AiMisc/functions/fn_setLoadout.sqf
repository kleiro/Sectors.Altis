/*
 * @Author: MoarRightRudder 
 * @Date: 2018-04-03 12:22:49 
 * @Last Modified by: MoarRightRudder
 * @Last Modified time: 2018-04-03 12:37:17
 */

params ["_unit"];

_loadoutClass = switch ("WeaponSet" call BIS_fnc_getParamValue) do {
	//All
	case 0:{
		selectRandom ((missionNamespace getVariable (str (side _unit) + "Inventory")) select (selectRandom [0,1,3]));
	};

	//Pistols Only
	case 1:{
		selectRandom ((missionNamespace getVariable (str (side _unit) + "Inventory")) select 2);
	};

	//RHS Only 
	case 2:{
		//Whenever we add RHS or CUP mods, add the loadout indexes to an array [3,7,10] and selectRandom instead of select 2
		selectRandom ((missionNamespace getVariable (str (side _unit) + "Inventory")) select 3);
	};
};

[_unit, missionConfigFile >> "CfgRespawnInventory" >> _loadoutClass] call BIS_fnc_loadInventory;
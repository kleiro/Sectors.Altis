/*
 * @Author: MoarRightRudder 
 * @Date: 2018-03-29 17:00:01 
 * @Last Modified by: mikey.zhaopeng
 * @Last Modified time: 2020-02-19 22:11:54
 */

 
//SetSkill
//Store and select the subSkill level for the ai


//range from 0 to 1
//[1: aimingAccuracy, 2: aimingShake, 3: aimingSpeed, 4: endurance, 5: spotDistance, 6: spotTime, 7: courage, 8: reloadSpeed, 9: commanding, 10: general]
_Skillset = [
//0 - Box of Rocks
[.3,.5,.5,.5,.5,.3,1,.2,0,.2],
//1 - Easy
[.5,.5,.3,.5,.5,.5,1,.3,.5,.5],
//2 - Normal
[.8,.5,.90,.5,.9,.75,1,.95,.95,1],
//3 - Challenging
[.95,.75,.97,.7,.9,1,1,.95,.8,1],
//4 - Godlike
[1,1,1,.8,.98,1,1,1,1,1]
];

bluSkill = _skillset select (["BluDifficulty", 2] call BIS_fnc_getParamValue);
opfSkill = _skillset select (["OpfDifficulty", 2] call BIS_fnc_getParamValue);
skillStr = ['aimingAccuracy', 'aimingShake', 'aimingSpeed', 'endurance', 'spotDistance', 'spotTime', 'courage', 'reloadSpeed', 'commanding', 'general'];


//Set Time
_timeIndx = ["Time", 50] call BIS_fnc_getParamValue;
if (_timeIndx == 50) then {
	_timeIndx = selectRandom [4,5,7,12,17,19,20,0];
};

skipTime ((_timeIndx - daytime + 24) % 24);


//Set Weather

_weather = ["Weather", 6] call BIS_fnc_getParamValue;
if(_weather == 6) then {
	_weather = floor random 6;
};

switch (_weather) do {
	case 0 : {
		//Clear
		[random .35] call BIS_fnc_setOvercast;
		1 setRain 0;
		1 setLightnings 0;
		0 setFog 0;
		setWind[floor random 2, floor random 2,true];
	};
	case 1 : {
		//Cloudy
		[.9] call BIS_fnc_setOvercast;
		1 setRain 0;
		1 setLightnings 0;
		0 setFog 0;
		setWind[floor random 4,floor random 4,true];
	};
	case 2 : {
		//Foggy
		[.9] call BIS_fnc_setOvercast;
		1 setRain 0;
		1 setLightnings 0;
		0 setFog .75;
		setWind[floor random 2,floor random 2,true];
	};
	case 3 : {
		//Rain
		[1] call BIS_fnc_setOvercast;
		1 setRain .6;
		1 setLightnings 0;
		0 setFog .3;
		setWind[floor random 4, floor random 4,true];
	};
	case 4 : {
		//Rain & Fog
		[.9] call BIS_fnc_setOvercast;
		1 setRain .5;
		1 setLightnings 0;
		0 setFog .6;
		setWind[floor random 4,floor random 4,true];
	};
	case 5 : {
		//ThunderStorm
		[1] call BIS_fnc_setOvercast;
		1 setRain 1;
		1 setLightnings .7;
		0 setFog .4;
		setWind[(random[7,10,15]),(random[7,10,15]),true];
	};
};


//Weapon loadouts
_westLoadouts = [[],[],[],[],[],[]];
_eastLoadouts = [[],[],[],[],[],[]];

//1. Add vanilla weapons to east and west respawn inventories
{
	(_westLoadouts select _forEachIndex) append (_x select 0);
}forEach (missionNamespace getVariable "westInventory");
{
	(_eastLoadouts select _forEachIndex) append (_x select 0);
}forEach (missionNamespace getVariable "eastInventory");

//2. Determine if the host wants to disable DLC weapons, otherwise add them
if("ApexWeapons" call BIS_fnc_getParamValue == 0) then {

	{
		(_westLoadouts select _forEachIndex) append (_x select 1);
	}forEach (missionNamespace getVariable "westInventory");
	{
		(_eastLoadouts select _forEachIndex) append (_x select 1);
	}forEach (missionNamespace getVariable "eastInventory");

};


//3. If RHS is enabled, add its loadouts
if((isClass(configFile >> "CfgPatches" >> "rhs_main")) && (isClass(configFile >> "CfgPatches" >> "rhsusf_main"))) then {

	{
		(_westLoadouts select _forEachIndex) append (_x select 2);
	}forEach (missionNamespace getVariable "westInventory");
	{
		(_eastLoadouts select _forEachIndex) append (_x select 2);
	}forEach (missionNamespace getVariable "eastInventory");

};

{
	{[west, _x] call BIS_fnc_addRespawnInventory;}forEach _x;
}forEach _westLoadouts;
{
	{[east, _x] call BIS_fnc_addRespawnInventory;}forEach _x;
}forEach _eastLoadouts;

//Set loadouts
diag_log format ["###Weapon OUTPUT: BLU %1, OP %2", _westLoadouts, _eastLoadouts];
missionNamespace setVariable ["westLoadout", _westLoadouts, true];
missionNamespace setVariable ["eastLoadout", _eastLoadouts, true];


//Uniforms
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
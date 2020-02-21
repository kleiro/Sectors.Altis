/*
 * @Author: MoarRightRudder 
 * @Date: 2018-04-03 12:22:49 
 * @Last Modified by: MoarRightRudder
 * @Last Modified time: 2018-04-26 17:35:55
 */

//Passing a random vanilla loadout from the available loadouts defined in fn_setup
params ["_unit","_class"];
switch (isPlayer _unit) do {
	case false : {
		_class = floor(random 7);
		_loadout = selectRandom ((missionNamespace getVariable ((str(side _unit)) + "loadout")) select _class)
		[_unit, missionConfigFile >> "CfgRespawnInventory" >> _loadout] call BIS_fnc_loadInventory;
	};

	case true : {
		disableSerialization;
		_classArray = ["Assault","SpecOps","Support","Engineer","DM","Recon"];
		_rList = uiNamespace getVariable (["BIS_RscRespawnControlsMap_ctrlRoleList", "BIS_RscRespawnControlsSpectate_ctrlRoleList"] select (uiNamespace getVariable ["BIS_RscRespawnControlsSpectate_shown", false]));
		_rName = _rList lbText (lbCurSel _rList);
		_class = _classArray find _rName;
	};
};


//If uniform definition == "Vanilla" then the selected uniform is vanilla
_uniformSet = (missionNamespace getVariable ((str (side _unit))+"Uniform"));

if(!(_uniformSet isEqualTo "Vanilla") && _class >= 0) then {
	_uniform = _uniformSet select (_class + 2);
	diag_log format ["###setloadout: class %1, uniform: %2", _class, _uniform];
	//Get items in player's inventory
	_items = uniformItems _unit;
	_items append (vestItems _unit);
	_items append (backpackItems _unit);

	//Add the new uniform, vest, headgear, facewear to unit
	_unit addUniform (_uniform select 0);
	_unit addVest (_uniform select 1);
	_unit addHeadgear (_uniform select 2);
	_unit addGoggles (_uniform select 3);
	_unit addBackpack (_uniform select 4);

	for "_i" from 0 to (count _items) do {
		if(_unit canAdd (_items select 0)) then {
			_unit addItem (_items select 0);
			_items deleteAt 0;
		} else {
			_items pushBack (_items select 0);
			_items deleteAt 0;
		};
	};

	if((count _items) > 0 && (backpack _unit) != "") then {
		_unit addBackpack (_uniformSet select 1);
		{
			if(_unit canAdd (_items select 0)) then {
				_unit addItem (_items select 0);
			};
		}forEach _items;
	};
};
params["_unit"];
_normalLoad = loadabs _unit;

//Find the carried number of magazines for each weapon
_primaryMag = primaryweaponmagazine _unit;
_secondaryMag = secondaryWeaponMagazine _unit;
_handgunMag = handgunMagazine _unit;

_mags = magazinecargo (uniformContainer _unit);
_mags append (magazinecargo (vestContainer _unit));
_mags append (magazinecargo (backpackCargo _unit));

_magCount = [];

{
	_magType = _x;
	_ct = {_x == _magType} count _mags;
	if(_count > 0) then {_magCount pushback [_magType, _ct];};
}forEach[_primaryMag,_secondaryMag,_handgunMag];

//Remove primary, secondary, and handgun mags, then save the remaining items
{_unit removeMagazines _x;}forEach[_primaryMag, _secondaryMag, _handgunMag];

_uniformItems = itemCargo (uniformContainer _unit);
_uniformItems append (magazineCargo (uniformContainer _unit));

_vestItems = itemCargo (vestContainer _unit);
_vestItems append (magazineCargo (vestContainer _unit));

_backpackItems = itemCargo (backpackContainer _unit);
_backpackItems append (magazineCargo (backpackContainer _unit));

//Add the new uniform, vest, headgear, facewear to unit
_unit addUniform ((missionNamespace getVariable "uniformSet") select 0);
_unit addVest ((missionNamespace getVariable "uniformSet") select 1);
_unit addHeadgear ((missionNamespace getVariable "uniformSet") select 2);
_unit addGoggles ((missionNamespace getVariable "uniformSet") select 3);

//Figure out if a backpack is needed based on ammo/weight, etc 
_newWeight = loadabs _unit;
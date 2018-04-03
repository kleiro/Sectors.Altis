/*
 * @Author: MoarRightRudder 
 * @Date: 2018-03-30 14:17:52 
 * @Last Modified by: MoarRightRudder
 * @Last Modified time: 2018-04-01 23:49:43
 */

//Credit goes to genesis92x
//The majority of this script was repurposed from his Vcom AI

params ["_unit","_cover","_movePosition","_hideDir"];
diag_log format["^^^ Running defensiveCover for %1", _unit];

_nearestEnemy = _unit findNearestEnemy _unit;

//Look for potential cover near the unit
_objectsList = nearestObjects [_unit, [], 20];
_roads = _unit nearRoads 20;
_weakListFinal = [];
_strongListFinal = [];

//Filter the potential covers 
{
	_Type = typeOf _x;
	if !(_type in ["#crater","#crateronvehicle","#soundonvehicle","#particlesource","#lightpoint","#slop","#mark","HoneyBee","Mosquito","HouseFly","FxWindPollen1","ButterFly_random","Snake_random_F","Rabbit_F","FxWindGrass2","FxWindLeaf1","FxWindGrass1","FxWindLeaf3","FxWindLeaf2"]) then
	{
		if (!(_x isKindOf "Man") && {!(_x isKindOf "Bird")} && {!(_x isKindOf "BulletCore")} && {!(_x isKindOf "Grenade")} && {!(_x isKindOf "WeaponHolder")} && {(_x distance _unit > 5)}) then
		{
			_BoundingArray = boundingBoxReal _x;
			_p1 = _BoundingArray select 0;
			_p2 = _BoundingArray select 1;
			_maxWidth = abs ((_p2 select 0) - (_p1 select 0));
			_maxLength = abs ((_p2 select 1) - (_p1 select 1));
			_maxHeight = abs ((_p2 select 2) - (_p1 select 2));
			if (_maxWidth > 2 && _maxLength > 2 && _maxHeight > 2) then
			{
				if (_type isEqualTo "") then 
				{
					_weakListFinal pushback _x
				} 
				else
				{
					_strongListFinal pushback _x;
				};
			};
		};
	};

}forEach (_objectsList - _roads);

//Select cover if there is any
switch (true) do {
	case ((count _strongListFinal) > 0): {
		_cover = selectRandom _strongListFinal;
	};
	case ((count _weakListFinal) > 0): {
		_cover = selectRandom _weakListFinal;
	};
};

//Set the position the unit should move to
if(!(isNil "_cover")) then {
	
	//If there's cover, have the unit move behind it
	if(!(isNull _nearestEnemy)) then {
		_hideDir = _nearestEnemy getDir _cover;
	}else {
		_hideDir = _cover getDir _unit;
	};

	_movePosition = _cover getPos [2, _hideDir];

	//Force the unit to move the position
	{
		_unit disableAI _x;
	}forEach ["TARGET", "SUPPRESSION", "AUTOCOMBAT", "COVER", "FSM"];

	_unit doWatch objNull;
	_unit setBehaviour "aware";								
	_waitTime = diag_ticktime + 15;

	while {alive _unit && diag_ticktime < _waitTime && (_unit distance _movePosition) > 3} do {
		_unit forceSpeed -1;
		_unit moveTo _movePosition;
		uisleep 4;
	};

	//Allow the unit to reenter combat
	{
		_unit enableAI _x;
	}forEach ["AUTOTARGET", "TARGET", "SUPPRESSION", "AUTOCOMBAT", "COVER", "FSM"];
	_unit doWatch (_unit findNearestEnemy _unit);

	_unit setVariable ["lastCoverMove", diag_ticktime, true];
};

_unit setVariable ["defenseCover", false, true];
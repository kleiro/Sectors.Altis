/*
 * @Author: MoarRightRudder 
 * @Date: 2018-03-31 10:32:06 
 * @Last Modified by: MoarRightRudder
 * @Last Modified time: 2018-03-31 13:07:09
 */

while {true} do {
	{
		if(!(_x getVariable ["fsmActive", false]) && {_x isKindOf "Man"}) then {
			_x setVariable ["fsmActive", true, true];
			[_x] spawn psq_fnc_unitMove;;
		};
	}forEach allUnits;
};
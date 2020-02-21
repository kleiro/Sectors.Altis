/*
 * @Author: MoarRightRudder 
 * @Date: 2018-03-30 15:27:32 
 * @Last Modified by: mikey.zhaopeng
 * @Last Modified time: 2020-02-19 22:00:44
 */

#include "base\inventoryDefines.hpp"
#include "base\uniformDefines.hpp"

addMissionEventHandler ["handleDisconnect", {(_this select 0) setVariable ["isPlayer", false, true];}];

//Add an eventhandler to each sector so that it runs fn_sectorOwnerChange on owner switch
{
	[ _x, "ownerChanged", {
		params[ "_sector", "_owner", "_ownerOld" ];
		[_sector, _owner, _ownerOld] call psq_fnc_sectorOwnerChange;
	}] call BIS_fnc_addScriptedEventHandler; 
}forEach ( true call BIS_fnc_moduleSector );

missionNamespace setVariable ["debug", false]; //Enables zeus debug when set to true

[] call psq_fnc_startParams;
[] spawn psq_fnc_setup;


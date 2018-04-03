/*
 * @Author: MoarRightRudder 
 * @Date: 2018-03-30 15:27:32 
 * @Last Modified by: MoarRightRudder
 * @Last Modified time: 2018-03-30 23:31:19
 */

#include "setup\inventoryDefines.hpp"

addMissionEventHandler ["handleDisconnect", {(_this select 0) setVariable ["isPlayer", false, true];}];

[] call psq_fnc_startParams;
[] spawn psq_fnc_setup;


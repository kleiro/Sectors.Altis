/*
 * @Author: MoarRightRudder 
 * @Date: 2018-03-29 17:00:01 
 * @Last Modified by: MoarRightRudder
 * @Last Modified time: 2018-04-01 22:47:52
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
[.9,.5,.95,.5,.9,.98,1,.95,.95,1],
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
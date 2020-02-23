
//SectorOwnerChange - Adds and removes spawn points for each side at a sector when ownership changes
params ["_sector", "_owner", "_ownerOld"];

//Remove the current respawn associated with the sector
_respawn = _sector getVariable ["spawnPosition", []];

if (!(_respawn isEqualTo [])) then {
	_respawn call BIS_fnc_removeRespawnPosition;
};

//Add a new respawn for whichever side is the new owner
switch (true) do {
	case (_owner isEqualTo west) :{
		//Set owner arrays first
		(missionNamespace getVariable "opfOwned") deleteAt ((missionNamespace getVariable "opfOwned") find _sector);
		(missionNamespace getVariable "bluOwned") pushBack _sector;
		
		//Create new respawn position
		_respawn = [west, getPos(_sector getVariable "sectorArea")] call BIS_fnc_addRespawnPosition;
		_sector setVariable ["spawnPosition", _respawn];

		//Change task polarity
		{
			switch (side _x) do {
				case west :{
					[(str _x) + str _sector, "defend"] call BIS_fnc_taskSetType;
				};
				case east :{
					[(str _x) + str _sector, "attack"] call BIS_fnc_taskSetType;
				};
			};
		}forEach allGroups;
	 };

	case (_owner isEqualTo east) :{
		//Set owner arrays first
		(missionNamespace getVariable "bluOwned") deleteAt ((missionNamespace getVariable "bluOwned") find _sector);
		(missionNamespace getVariable "opfOwned") pushBack _sector;
		
		//Create new respawn position
		_respawn = [east, getPos(_sector getVariable "sectorArea")] call BIS_fnc_addRespawnPosition;
		_sector setVariable ["spawnPosition", _respawn];

		//Change task polarity
		{
			switch (side _x) do {
				case west :{
					[(str _x) + str _sector, "attack"] call BIS_fnc_taskSetType;
				};
				case east :{
					[(str _x) + str _sector, "defend"] call BIS_fnc_taskSetType;
				};
			};
		}forEach allGroups;
	};
	
};         
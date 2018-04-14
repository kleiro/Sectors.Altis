params["_unit"];
_unit allowDamage false;
_wait = diag_tickTime + 6;
_spawnPos = getpos _unit;
waitUntil {diag_tickTime > _wait || (_unit distance _spawnPos) > 3};
_unit allowDamage true;
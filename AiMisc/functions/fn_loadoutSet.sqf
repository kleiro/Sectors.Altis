/*
 * @Author: MoarRightRudder 
 * @Date: 2018-03-29 17:00:28 
 * @Last Modified by: MoarRightRudder
 * @Last Modified time: 2018-03-30 10:14:33
 */
params ["_unit"];
_class = _unit getVariable "class";
//_loadoutType = something selected in parameters;


switch ("WeaponSet" call BIS_fnc_getParamValue) do {
	case (0) : {

		//Vanilla
		switch (side _unit) do {
			case west : {
				switch (_class) do {
					case (0) : {
						//Assault

						removeAllWeapons _unit;
						removeAllItems _unit;
						removeAllAssignedItems _unit;
						removeUniform _unit;
						removeVest _unit;
						removeBackpack _unit;
						removeHeadgear _unit;
						removeGoggles _unit;

						comment "Add containers";
						_unit forceAddUniform "U_B_CombatUniform_mcam";
						for "_i" from 1 to 5 do {_unit addItemToUniform "FirstAidKit";};
						_unit addVest "V_PlateCarrier2_rgr";
						for "_i" from 1 to 7 do {_unit addItemToVest "30Rnd_65x39_caseless_mag";};
						for "_i" from 1 to 3 do {_unit addItemToVest "1Rnd_HE_Grenade_shell";};
						for "_i" from 1 to 3 do {_unit addItemToVest "16Rnd_9x21_Mag";};
						for "_i" from 1 to 3 do {_unit addItemToVest "HandGrenade";};
						_unit addHeadgear "H_HelmetSpecB_paint1";
						_unit addGoggles "G_Combat";

						comment "Add weapons";
						_unit addWeapon "arifle_MX_GL_Black_F";
						_unit addPrimaryWeaponItem "optic_Hamr";
						_unit addWeapon "hgun_P07_F";
						_unit addWeapon "Rangefinder";

						comment "Add items";
						_unit linkItem "ItemMap";
						_unit linkItem "ItemCompass";
						_unit linkItem "ItemWatch";
						_unit linkItem "ItemRadio";
						_unit linkItem "ItemGPS";
						_unit linkItem "NVGoggles";

					};
					case (1) : {
						//SpecOps

						removeAllWeapons _unit;
						removeAllItems _unit;
						removeAllAssignedItems _unit;
						removeUniform _unit;
						removeVest _unit;
						removeBackpack _unit;
						removeHeadgear _unit;
						removeGoggles _unit;

						comment "Add containers";
						_unit forceAddUniform "U_B_CombatUniform_mcam";
						for "_i" from 1 to 5 do {_unit addItemToUniform "FirstAidKit";};
						_unit addVest "V_PlateCarrier2_rgr";
						for "_i" from 1 to 3 do {_unit addItemToVest "MiniGrenade";};
						for "_i" from 1 to 9 do {_unit addItemToVest "30Rnd_9x21_Mag_SMG_02";};
						for "_i" from 1 to 3 do {_unit addItemToVest "16Rnd_9x21_Mag";};
						_unit addBackpack "B_AssaultPack_rgr";
						for "_i" from 1 to 4 do {_unit addItemToBackpack "DemoCharge_Remote_Mag";};
						_unit addHeadgear "H_HelmetSpecB_paint1";
						_unit addGoggles "G_Combat";

						comment "Add weapons";
						_unit addWeapon "SMG_02_F";
						_unit addPrimaryWeaponItem "muzzle_snds_L";
						_unit addPrimaryWeaponItem "acc_flashlight";
						_unit addPrimaryWeaponItem "optic_Holosight";
						_unit addWeapon "hgun_P07_F";
						_unit addHandgunItem "muzzle_snds_L";
						_unit addWeapon "Rangefinder";

						comment "Add items";
						_unit linkItem "ItemMap";
						_unit linkItem "ItemCompass";
						_unit linkItem "ItemWatch";
						_unit linkItem "ItemRadio";
						_unit linkItem "ItemGPS";
						_unit linkItem "NVGoggles";

					};
					case (2) : {
						//Support

						removeAllWeapons _unit;
						removeAllItems _unit;
						removeAllAssignedItems _unit;
						removeUniform _unit;
						removeVest _unit;
						removeBackpack _unit;
						removeHeadgear _unit;
						removeGoggles _unit;

						comment "Add containers";
						_unit forceAddUniform "U_B_CombatUniform_mcam";
						for "_i" from 1 to 5 do {_unit addItemToUniform "FirstAidKit";};
						_unit addVest "V_PlateCarrier2_rgr";
						for "_i" from 1 to 3 do {_unit addItemToVest "16Rnd_9x21_Mag";};
						for "_i" from 1 to 2 do {_unit addItemToVest "200Rnd_65x39_cased_Box_Tracer";};
						for "_i" from 1 to 2 do {_unit addItemToVest "HandGrenade";};
						_unit addBackpack "B_Kitbag_mcamo";
						_unit addItemToBackpack "HandGrenade";
						_unit addItemToBackpack "200Rnd_65x39_cased_Box_Tracer";
						_unit addHeadgear "H_HelmetSpecB_paint1";
						_unit addGoggles "G_Combat";

						comment "Add weapons";
						_unit addWeapon "LMG_Mk200_F";
						_unit addPrimaryWeaponItem "acc_pointer_IR";
						_unit addPrimaryWeaponItem "bipod_01_F_blk";
						_unit addWeapon "hgun_P07_F";
						_unit addWeapon "Rangefinder";

						comment "Add items";
						_unit linkItem "ItemMap";
						_unit linkItem "ItemCompass";
						_unit linkItem "ItemWatch";
						_unit linkItem "ItemRadio";
						_unit linkItem "ItemGPS";
						_unit linkItem "NVGoggles";

					};
					case (3) : {
						//Recon

						removeAllWeapons _unit;
						removeAllItems _unit;
						removeAllAssignedItems _unit;
						removeUniform _unit;
						removeVest _unit;
						removeBackpack _unit;
						removeHeadgear _unit;
						removeGoggles _unit;

						comment "Add containers";
						_unit forceAddUniform "U_B_FullGhillie_sard";
						for "_i" from 1 to 5 do {_unit addItemToUniform "FirstAidKit";};
						_unit addVest "V_Chestrig_rgr";
						for "_i" from 1 to 3 do {_unit addItemToVest "16Rnd_9x21_Mag";};
						for "_i" from 1 to 3 do {_unit addItemToVest "SmokeShell";};
						for "_i" from 1 to 5 do {_unit addItemToVest "7Rnd_408_Mag";};
						_unit addBackpack "B_AssaultPack_mcamo";
						for "_i" from 1 to 2 do {_unit addItemToBackpack "ClaymoreDirectionalMine_Remote_Mag";};
						_unit addHeadgear "H_HelmetB_snakeskin";
						_unit addGoggles "G_Combat";

						comment "Add weapons";
						_unit addWeapon "srifle_LRR_F";
						_unit addPrimaryWeaponItem "optic_SOS";
						_unit addWeapon "hgun_P07_F";
						_unit addHandgunItem "muzzle_snds_L";
						_unit addWeapon "Rangefinder";

						comment "Add items";
						_unit linkItem "ItemMap";
						_unit linkItem "ItemCompass";
						_unit linkItem "ItemWatch";
						_unit linkItem "ItemRadio";
						_unit linkItem "ItemGPS";
						_unit linkItem "NVGoggles";

					};
					case (4) : {
						//Engineer

						removeAllWeapons _unit;
						removeAllItems _unit;
						removeAllAssignedItems _unit;
						removeUniform _unit;
						removeVest _unit;
						removeBackpack _unit;
						removeHeadgear _unit;
						removeGoggles _unit;

						comment "Add containers";
						_unit forceAddUniform "U_B_CombatUniform_mcam";
						for "_i" from 1 to 5 do {_unit addItemToUniform "FirstAidKit";};
						_unit addVest "V_PlateCarrier2_rgr";
						for "_i" from 1 to 3 do {_unit addItemToVest "16Rnd_9x21_Mag";};
						for "_i" from 1 to 7 do {_unit addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
						for "_i" from 1 to 3 do {_unit addItemToVest "HandGrenade";};
						_unit addBackpack "B_Kitbag_mcamo";
						_unit addItemToBackpack "ToolKit";
						_unit addItemToBackpack "NLAW_F";
						_unit addHeadgear "H_HelmetSpecB_paint1";
						_unit addGoggles "G_Combat";

						comment "Add weapons";
						_unit addWeapon "arifle_Mk20C_plain_F";
						_unit addPrimaryWeaponItem "acc_flashlight";
						_unit addWeapon "launch_NLAW_F";
						_unit addWeapon "hgun_P07_F";
						_unit addWeapon "Rangefinder";

						comment "Add items";
						_unit linkItem "ItemMap";
						_unit linkItem "ItemCompass";
						_unit linkItem "ItemWatch";
						_unit linkItem "ItemRadio";
						_unit linkItem "ItemGPS";
						_unit linkItem "NVGoggles";

					};
				};
			};

			case east : {
				switch (_class) do {
					case (0) : {
						//Assault

						removeAllWeapons _unit;
						removeAllItems _unit;
						removeAllAssignedItems _unit;
						removeUniform _unit;
						removeVest _unit;
						removeBackpack _unit;
						removeHeadgear _unit;
						removeGoggles _unit;

						comment "Add containers";
						_unit forceAddUniform "U_O_CombatUniform_ocamo";
						for "_i" from 1 to 5 do {_unit addItemToUniform "FirstAidKit";};
						_unit addVest "V_HarnessO_brn";
						for "_i" from 1 to 3 do {_unit addItemToVest "16Rnd_9x21_Mag";};
						for "_i" from 1 to 7 do {_unit addItemToVest "30Rnd_65x39_caseless_green_mag_Tracer";};
						for "_i" from 1 to 3 do {_unit addItemToVest "1Rnd_HE_Grenade_shell";};
						for "_i" from 1 to 3 do {_unit addItemToVest "HandGrenade";};
						_unit addHeadgear "H_HelmetO_ocamo";
						_unit addGoggles "G_Combat";

						comment "Add weapons";
						_unit addWeapon "arifle_Katiba_GL_F";
						_unit addPrimaryWeaponItem "optic_Arco";
						_unit addWeapon "hgun_Rook40_F";
						_unit addWeapon "Rangefinder";

						comment "Add items";
						_unit linkItem "ItemMap";
						_unit linkItem "ItemCompass";
						_unit linkItem "ItemWatch";
						_unit linkItem "ItemRadio";
						_unit linkItem "ItemGPS";
						_unit linkItem "NVGoggles";

					};
					case (1) : {
						//SpecOps

						removeAllWeapons _unit;
						removeAllItems _unit;
						removeAllAssignedItems _unit;
						removeUniform _unit;
						removeVest _unit;
						removeBackpack _unit;
						removeHeadgear _unit;
						removeGoggles _unit;

						comment "Add containers";
						_unit forceAddUniform "U_O_CombatUniform_ocamo";
						for "_i" from 1 to 5 do {_unit addItemToUniform "FirstAidKit";};
						_unit addVest "V_HarnessO_brn";
						for "_i" from 1 to 3 do {_unit addItemToVest "16Rnd_9x21_Mag";};
						for "_i" from 1 to 8 do {_unit addItemToVest "30Rnd_45ACP_Mag_SMG_01";};
						for "_i" from 1 to 3 do {_unit addItemToVest "MiniGrenade";};
						_unit addBackpack "B_FieldPack_ocamo";
						for "_i" from 1 to 4 do {_unit addItemToBackpack "DemoCharge_Remote_Mag";};
						_unit addHeadgear "H_HelmetO_ocamo";
						_unit addGoggles "G_Combat";

						comment "Add weapons";
						_unit addWeapon "SMG_01_F";
						_unit addPrimaryWeaponItem "muzzle_snds_acp";
						_unit addPrimaryWeaponItem "optic_Holosight";
						_unit addWeapon "hgun_Rook40_F";
						_unit addHandgunItem "muzzle_snds_L";
						_unit addWeapon "Rangefinder";

						comment "Add items";
						_unit linkItem "ItemMap";
						_unit linkItem "ItemCompass";
						_unit linkItem "ItemWatch";
						_unit linkItem "ItemRadio";
						_unit linkItem "ItemGPS";
						_unit linkItem "NVGoggles";

					};
					case (2) : {
						//Support

						removeAllWeapons _unit;
						removeAllItems _unit;
						removeAllAssignedItems _unit;
						removeUniform _unit;
						removeVest _unit;
						removeBackpack _unit;
						removeHeadgear _unit;
						removeGoggles _unit;

						comment "Add containers";
						_unit forceAddUniform "U_O_CombatUniform_ocamo";
						for "_i" from 1 to 5 do {_unit addItemToUniform "FirstAidKit";};
						_unit addVest "V_HarnessO_brn";
						for "_i" from 1 to 3 do {_unit addItemToVest "30Rnd_9x21_Mag";};
						for "_i" from 1 to 2 do {_unit addItemToVest "150Rnd_762x54_Box_Tracer";};
						for "_i" from 1 to 3 do {_unit addItemToVest "HandGrenade";};
						_unit addBackpack "B_FieldPack_ocamo";
						_unit addItemToBackpack "150Rnd_762x54_Box_Tracer";
						_unit addHeadgear "H_HelmetO_ocamo";
						_unit addGoggles "G_Combat";

						comment "Add weapons";
						_unit addWeapon "LMG_Zafir_F";
						_unit addPrimaryWeaponItem "acc_pointer_IR";
						_unit addWeapon "hgun_Rook40_F";
						_unit addWeapon "Rangefinder";

						comment "Add items";
						_unit linkItem "ItemMap";
						_unit linkItem "ItemCompass";
						_unit linkItem "ItemWatch";
						_unit linkItem "ItemRadio";
						_unit linkItem "ItemGPS";
						_unit linkItem "NVGoggles";

					};
					case (3) : {
						//Recon

						removeAllWeapons _unit;
						removeAllItems _unit;
						removeAllAssignedItems _unit;
						removeUniform _unit;
						removeVest _unit;
						removeBackpack _unit;
						removeHeadgear _unit;
						removeGoggles _unit;

						comment "Add containers";
						_unit forceAddUniform "U_O_FullGhillie_sard";
						for "_i" from 1 to 5 do {_unit addItemToUniform "FirstAidKit";};
						_unit addVest "V_HarnessO_brn";
						for "_i" from 1 to 3 do {_unit addItemToVest "16Rnd_9x21_Mag";};
						for "_i" from 1 to 5 do {_unit addItemToVest "5Rnd_127x108_Mag";};
						for "_i" from 1 to 3 do {_unit addItemToVest "SmokeShell";};
						for "_i" from 1 to 2 do {_unit addItemToVest "ClaymoreDirectionalMine_Remote_Mag";};
						_unit addGoggles "G_Combat";

						comment "Add weapons";
						_unit addWeapon "srifle_GM6_F";
						_unit addPrimaryWeaponItem "optic_SOS";
						_unit addWeapon "hgun_Rook40_F";
						_unit addHandgunItem "muzzle_snds_L";
						_unit addWeapon "Rangefinder";

						comment "Add items";
						_unit linkItem "ItemMap";
						_unit linkItem "ItemCompass";
						_unit linkItem "ItemWatch";
						_unit linkItem "ItemRadio";
						_unit linkItem "ItemGPS";
						_unit linkItem "NVGoggles";

					};
					case (4) : {
						//Engineer

						removeAllWeapons _unit;
						removeAllItems _unit;
						removeAllAssignedItems _unit;
						removeUniform _unit;
						removeVest _unit;
						removeBackpack _unit;
						removeHeadgear _unit;
						removeGoggles _unit;

						comment "Add containers";
						_unit forceAddUniform "U_O_CombatUniform_ocamo";
						for "_i" from 1 to 5 do {_unit addItemToUniform "FirstAidKit";};
						_unit addVest "V_HarnessO_brn";
						for "_i" from 1 to 3 do {_unit addItemToVest "16Rnd_9x21_Mag";};
						for "_i" from 1 to 3 do {_unit addItemToVest "1Rnd_HE_Grenade_shell";};
						for "_i" from 1 to 3 do {_unit addItemToVest "HandGrenade";};
						for "_i" from 1 to 7 do {_unit addItemToVest "30Rnd_556x45_Stanag_Tracer_Green";};
						_unit addBackpack "B_FieldPack_ocamo";
						_unit addItemToBackpack "ToolKit";
						_unit addItemToBackpack "RPG32_F";
						_unit addHeadgear "H_HelmetO_ocamo";
						_unit addGoggles "G_Combat";

						comment "Add weapons";
						_unit addWeapon "arifle_TRG20_F";
						_unit addPrimaryWeaponItem "acc_flashlight";
						_unit addWeapon "launch_RPG32_F";
						_unit addWeapon "hgun_Rook40_F";
						_unit addWeapon "Rangefinder";

						comment "Add items";
						_unit linkItem "ItemMap";
						_unit linkItem "ItemCompass";
						_unit linkItem "ItemWatch";
						_unit linkItem "ItemRadio";
						_unit linkItem "ItemGPS";
						_unit linkItem "NVGoggles";

					};
				};
			};
		};
	};




	case (1) : {

		//DLC
		switch (side _unit) do {
			case west : {
				switch (_class) do {
					case (0) : {
						//Assault

					};
					case (1) : {
						//SpecOps

					};
					case (2) : {
						//Support

					};
					case (3) : {
						//Recon

					};
					case (4) : {
						//Engineer

					};
				};
			};

			case east : {
				switch (_class) do {
					case (0) : {
						//Assault

					};
					case (1) : {
						//SpecOps

					};
					case (2) : {
						//Support

					};
					case (3) : {
						//Recon

					};
					case (4) : {
						//Engineer

					};
				};
			};
		};
	};





	case (2) : {

		//Pistols Only
		switch (side _unit) do {
			case west : {
				switch (_class) do {
					case (0) : {
						//Assault

					};
					case (1) : {
						//SpecOps

					};
					case (2) : {
						//Support

					};
					case (3) : {
						//Recon

					};
					case (4) : {
						//Engineer

					};
				};
			};

			case east : {
				switch (_class) do {
					case (0) : {
						//Assault

					};
					case (1) : {
						//SpecOps

					};
					case (2) : {
						//Support

					};
					case (3) : {
						//Recon

					};
					case (4) : {
						//Engineer

					};
				};
			};
		};
	};
};


/*
Template:

		switch (side _unit) do {
			case west : {
				switch (_class) do {
					case (0) : {
						//Assault

					};
					case (1) : {
						//SpecOps

					};
					case (2) : {
						//Support

					};
					case (3) : {
						//Recon

					};
					case (4) : {
						//Engineer

					};
				};
			};

			case east : {
				switch (_class) do {
					case (0) : {
						//Assault

					};
					case (1) : {
						//SpecOps

					};
					case (2) : {
						//Support

					};
					case (3) : {
						//Recon

					};
					case (4) : {
						//Engineer

					};
				};
			};
		};
*/
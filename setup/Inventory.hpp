/*
 * @Author: MoarRightRudder 
 * @Date: 2018-03-29 17:00:14 
 * @Last Modified by: MoarRightRudder
 * @Last Modified time: 2018-04-26 18:27:32
 */

class CfgRoles {
	class Assault {
		displayName = "Assault";
	};
	class SpecOps {
		displayName = "SpecOps";
	};
	class Support {
		displayName = "Support";
	};
	class Engineer {
		displayName = "Engineer";
	};
	class DM {
		displayName = "DM";
	};
	class Recon {
		displayName = "Recon";
	};
};
//Loadouts
class CfgRespawnInventory {
//BluFor
	//Assault
		//Vanilla
			//MX
			class BAV1 { 
			displayName = "MX-3GL";
			role = "Assault";

			weapons[] = {"arifle_MX_GL_Black_F", "hgun_P07_F", "Throw", "Put"};
			magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_red_Mag", "16Rnd_9x21_red_Mag", "MiniGrenade", "MiniGrenade", "MiniGrenade", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_red_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "", "optic_Hamr", "", "", "", "", "", "", "", "", "", "V_PlateCarrier2_rgr", "H_HelmetSpecB_snakeskin", "G_Combat"};
			backpack = "";
			uniformClass = "U_B_CombatUniform_mcam";
		};

		//F2000
			class BAV2 { 
			displayName = "F2000";
			role = "Assault";

			weapons[] = {"arifle_Mk20_GL_plain_F", "hgun_P07_F", "Throw", "Put"};
			magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell","16Rnd_9x21_red_Mag", "16Rnd_9x21_red_Mag", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "MiniGrenade", "MiniGrenade", "MiniGrenade", "30Rnd_556x45_Stanag_Tracer_Red", "16Rnd_9x21_red_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "", "optic_Hamr", "", "", "", "", "", "", "", "", "", "V_PlateCarrier2_rgr", "H_HelmetSpecB_snakeskin", "G_Combat"};
			backpack = "";
			uniformClass = "U_B_CombatUniform_mcam";
		};

		//Apex
			//SPAR
			class BAA1 { 
			displayName = "SPAR16";
			role = "Assault";

			weapons[] = {"arifle_SPAR_01_GL_blk_F", "hgun_P07_F", "Throw", "Put"};
			magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "16Rnd_9x21_red_Mag", "16Rnd_9x21_red_Mag", "MiniGrenade", "MiniGrenade", "MiniGrenade", "30Rnd_556x45_Stanag_Tracer_Red", "1Rnd_HE_Grenade_shell", "16Rnd_9x21_red_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "", "optic_ERCO_blk_F", "", "", "", "", "", "", "", "", "", "V_PlateCarrier2_rgr", "H_HelmetSpecB_snakeskin", "G_Combat"};
			backpack = "";
			uniformClass = "U_B_CombatUniform_mcam";
		};
		//Pistols Only
		//RHS
			//M16A4
			class BAR1 { 
			displayName = "M16A4";
			role = "Assault";

			weapons[] = {"rhs_weap_m16a4_carryhandle_M203", "rhsusf_weap_m9", "Throw", "Put"};
			magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "MiniGrenade", "MiniGrenade", "MiniGrenade", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "1Rnd_HE_Grenade_shell", "rhsusf_mag_15Rnd_9x19_FMJ"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "", "rhsusf_acc_ACOG_RMR", "", "", "", "", "", "", "", "", "", "V_PlateCarrier2_rgr", "H_HelmetSpecB_snakeskin", "G_Combat"};
			backpack = "";
			uniformClass = "U_B_CombatUniform_mcam";
		};
			//M4 BlockII
			class BAR2 { 
			displayName = "M4A1 Block II";
			role = "Assault";

			weapons[] = {"rhs_weap_m4a1_blockII_M203_bk", "rhsusf_weap_m9", "Throw", "Put"};
			magazines[] = {"rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "MiniGrenade", "MiniGrenade", "MiniGrenade", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "1Rnd_HE_Grenade_shell", "rhsusf_mag_15Rnd_9x19_FMJ"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "", "rhsusf_acc_SpecterDR_CX", "", "", "", "", "", "", "", "", "", "V_PlateCarrier2_rgr", "H_HelmetSpecB_snakeskin", "G_Combat"};
			backpack = "";
			uniformClass = "U_B_CombatUniform_mcam";
		};
		//RHS Pistols Only
	//SpecOps
		//Vanilla
			//CZ Scorpion
			class BOV1 { 
			displayName = "CZ Scorpion";
			role = "SpecOps";

			weapons[] = {"SMG_02_F", "hgun_Pistol_heavy_01_F", "Binocular", "Throw", "Put"};
			magazines[] = {"11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "30Rnd_9x21_Mag_SMG_02", "11Rnd_45ACP_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "muzzle_snds_L", "acc_pointer_IR", "optic_Aco_smg", "", "", "", "", "", "muzzle_snds_acp", "", "optic_MRD", "", "V_PlateCarrier1_rgr", "H_HelmetB_light_black", "G_Lowprofile"};
			backpack = "B_AssaultPack_rgr";
			uniformClass = "U_B_CombatUniform_mcam_tshirt";
		};

			//MP7
			class BOV2 { 
			displayName = "MP7";
			role = "SpecOps";

			weapons[] = {"hgun_PDW2000_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
			magazines[] = {"11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "30Rnd_9x21_Red_Mag", "30Rnd_9x21_Red_Mag", "30Rnd_9x21_Red_Mag", "30Rnd_9x21_Red_Mag", "30Rnd_9x21_Red_Mag", "30Rnd_9x21_Red_Mag", "30Rnd_9x21_Red_Mag", "30Rnd_9x21_Red_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "30Rnd_9x21_Red_Mag", "11Rnd_45ACP_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "muzzle_snds_L", "", "optic_Aco_smg", "", "", "", "", "", "muzzle_snds_acp", "", "optic_MRD", "", "V_PlateCarrier1_rgr", "H_HelmetB_light_black", "G_Lowprofile"};
			backpack = "B_AssaultPack_rgr";
			uniformClass = "U_B_CombatUniform_mcam_tshirt";
		};
		//Apex
			//MP5
			class BOA1 { 
			displayName = "MP5";
			role = "SpecOps";

			weapons[] = {"SMG_05_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
			magazines[] = {"11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "11Rnd_45ACP_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "muzzle_snds_L", "acc_pointer_IR", "optic_Aco_smg", "", "", "", "", "", "muzzle_snds_acp", "", "optic_MRD", "", "V_PlateCarrier1_rgr", "H_HelmetB_light_black", "G_Lowprofile"};
			backpack = "B_AssaultPack_rgr";
			uniformClass = "U_B_CombatUniform_mcam_tshirt";
		};
		//RHS
			//M4A1
			class BOR1 { 
			displayName = "M4A1";
			role = "SpecOps";

			weapons[] = {"rhs_weap_m4a1_carryhandle_mstock", "rhsusf_weap_glock17g4", "Throw", "Put"};
			magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhsusf_mag_17Rnd_9x19_FMJ"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "rhsusf_acc_nt4_black", "rhsusf_acc_anpeq15side_bk", "rhsusf_acc_eotech_552", "", "", "", "", "", "rhsusf_acc_omega9k", "", "", "", "V_PlateCarrier1_rgr", "H_HelmetB_light_black", "G_Lowprofile"};
			backpack = "B_AssaultPack_rgr";
			uniformClass = "U_B_CombatUniform_mcam_tshirt";
		};
			//HK416
			class BOR2 { 
			displayName = "HK416 D10";
			role = "SpecOps";

			weapons[] = {"rhs_weap_hk416d10", "rhsusf_weap_glock17g4", "Throw", "Put"};
			magazines[] = {"rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhsusf_mag_17Rnd_9x19_FMJ"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "rhsusf_acc_nt4_black", "rhsusf_acc_anpeq15_bk_top_h", "rhsusf_acc_eotech_xps3", "", "", "", "", "", "rhsusf_acc_omega9k", "", "", "", "V_PlateCarrier1_rgr", "H_HelmetB_light_black", "G_Lowprofile"};
			backpack = "B_AssaultPack_rgr";
			uniformClass = "U_B_CombatUniform_mcam_tshirt";
		};
		//ADR97
			//P90
			class BOAd1 { 
			displayName = "P90";
			role = "SpecOps";

			weapons[] = {"SMG_03C_TR_black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
			magazines[] = {"11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "50Rnd_570x28_SMG_03", "11Rnd_45ACP_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "muzzle_snds_570", "acc_pointer_IR", "optic_Aco_smg", "", "", "", "", "", "muzzle_snds_acp", "", "optic_MRD", "", "V_PlateCarrier1_rgr", "H_HelmetB_light_black", "G_Lowprofile"};
			backpack = "B_AssaultPack_rgr";
			uniformClass = "U_B_CombatUniform_mcam_tshirt";
		};
	//Support
		//Vanilla
			//Mk200
			class BSV1 { 
			displayName = "Mk200";
			role = "Support";

			weapons[] = {"LMG_Mk200_F", "hgun_P07_F", "Binocular", "Throw", "Put"};
			magazines[] = {"200Rnd_65x39_cased_Box_Tracer", "200Rnd_65x39_cased_Box_Tracer", "HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "16Rnd_9x21_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "", "acc_pointer_IR", "", "", "", "", "", "", "", "", "", "", "V_PlateCarrier1_rgr", "H_HelmetB_grass", "G_Combat"};
			backpack = "";
			uniformClass = "U_B_CombatUniform_mcam";
		};
		//Apex
			//SPAR16
			class BSA1 { 
			displayName = "SPAR16 LMG";
			role = "Support";

			weapons[] = {"arifle_SPAR_02_blk_F", "hgun_P07_F", "Throw", "Put"};
			magazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_red_Mag", "16Rnd_9x21_red_Mag", "150Rnd_556x45_Drum_Mag_Tracer_F", "150Rnd_556x45_Drum_Mag_Tracer_F", "150Rnd_556x45_Drum_Mag_Tracer_F", "16Rnd_9x21_red_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "acc_pointer_IR", "", "", "", "", "", "", "", "", "", "", "V_PlateCarrier1_rgr", "H_HelmetB_grass", "G_Combat"};
			backpack = "";
			uniformClass = "U_B_CombatUniform_mcam";
		};
			//M249S
			class BSA2 { 
			displayName = "M249S";
			role = "Support";

			weapons[] = {"LMG_03_F", "hgun_P07_F", "Throw", "Put"};
			magazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_red_Mag", "16Rnd_9x21_red_Mag", "200Rnd_556x45_Box_Tracer_Red_F", "200Rnd_556x45_Box_Tracer_Red_F", "200Rnd_556x45_Box_Tracer_Red_F", "16Rnd_9x21_red_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "acc_pointer_IR", "", "", "", "", "", "", "", "", "", "", "V_PlateCarrier1_rgr", "H_HelmetB_grass", "G_Combat"};
			backpack = "";
			uniformClass = "U_B_CombatUniform_mcam";
		};
		//RHS
			//M240B 
			class BSR1 { 
			displayName = "M240B";
			role = "Support";

			weapons[] = {"rhs_weap_m240B", "rhsusf_weap_m9", "Throw", "Put"};
			magazines[] = {"HandGrenade", "HandGrenade", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_100Rnd_762x51_m62_tracer", "rhsusf_100Rnd_762x51_m62_tracer", "rhsusf_100Rnd_762x51_m62_tracer", "rhsusf_100Rnd_762x51_m62_tracer", "rhsusf_mag_15Rnd_9x19_FMJ"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "rhsusf_acc_anpeq15side_bk", "", "", "", "", "", "", "", "", "", "", "V_PlateCarrier1_rgr", "H_HelmetB_grass", "G_Combat"};
			backpack = "";
			uniformClass = "U_B_CombatUniform_mcam";
		};
			//M249
			class BSR2 { 
			displayName = "M249";
			role = "Support";

			weapons[] = {"rhs_weap_m249_pip_S", "rhsusf_weap_m9", "Throw", "Put"};
			magazines[] = {"HandGrenade", "HandGrenade", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_mag_15Rnd_9x19_FMJ"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "rhsusf_acc_anpeq15side_bk", "", "", "", "", "", "", "", "", "", "", "V_PlateCarrier1_rgr", "H_HelmetB_grass", "G_Combat"};
			backpack = "";
			uniformClass = "U_B_CombatUniform_mcam";
		};
	//Engineer
		//Vanilla
			//MXC
			class BEV1 { 
			displayName = "MXC";
			role = "Engineer";

			weapons[] = {"arifle_MXC_Black_F", "launch_NLAW_F", "hgun_P07_F", "Binocular", "Throw", "Put"};
			magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "APERSBoundingMine_Range_Mag", "APERSBoundingMine_Range_Mag", "30Rnd_65x39_caseless_mag", "NLAW_F", "16Rnd_9x21_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles", "", "", "optic_Aco", "", "", "", "", "", "", "", "", "", "V_PlateCarrier1_rgr", "H_HelmetSpecB_snakeskin", "G_Lowprofile"};
			backpack = "";
			uniformClass = "U_B_CombatUniform_mcam";
		};
		//Apex
			//SPAR16
			class BEA1 { 
			displayName = "SPAR16";
			role = "Engineer";

			weapons[] = {"arifle_SPAR_01_blk_F", "hgun_P07_F", "launch_NLAW_F", "Throw", "Put"};
			magazines[] = {"30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "16Rnd_9x21_red_Mag", "16Rnd_9x21_red_Mag", "MiniGrenade", "MiniGrenade", "APERSBoundingMine_Range_Mag", "APERSBoundingMine_Range_Mag", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "NLAW_F", "16Rnd_9x21_red_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "", "optic_Aco", "", "", "", "", "", "", "", "", "", "V_PlateCarrier1_rgr", "H_HelmetB_snakeskin", "G_Lowprofile"};
			backpack = "";
			uniformClass = "U_B_CombatUniform_mcam";
		};
			//Type 115
			class BEA2 { 
			displayName = "Type 115";
			role = "Engineer";

			weapons[] = {"arifle_ARX_blk_F", "hgun_P07_F", "launch_NLAW_F", "Throw", "Put"};
			magazines[] = {"16Rnd_9x21_red_Mag", "16Rnd_9x21_red_Mag", "MiniGrenade", "MiniGrenade", "APERSBoundingMine_Range_Mag", "APERSBoundingMine_Range_Mag", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "10Rnd_50BW_Mag_F", "NLAW_F", "16Rnd_9x21_red_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "", "optic_Aco", "", "", "", "", "", "", "", "", "", "V_PlateCarrier1_rgr", "H_HelmetB_snakeskin", "G_Lowprofile"};
			backpack = "";
			uniformClass = "U_B_CombatUniform_mcam";
		};
		//RHS
			//M590
			class BER1 { 
			displayName = "M590";
			role = "Engineer";

			weapons[] = {"rhs_weap_M590_8RD", "rhsusf_weap_m9", "rhs_weap_M136_hedp", "Throw", "Put"};
			magazines[] = {"rhs_m136_hedp_mag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "MiniGrenade", "MiniGrenade", "APERSBoundingMine_Range_Mag", "APERSBoundingMine_Range_Mag", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_mag_15Rnd_9x19_FMJ"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "", "", "", "", "", "", "", "", "", "", "", "V_PlateCarrier1_rgr", "H_HelmetB_snakeskin", "G_Lowprofile"};
			backpack = "";
			uniformClass = "U_B_CombatUniform_mcam";
		};
			//M4
			class BER2 { 
			displayName = "M4";
			role = "Engineer";

			weapons[] = {"rhs_weap_m4_carryhandle", "rhsusf_weap_m9", "rhs_weap_M136_hedp", "Throw", "Put"};
			magazines[] = {"rhs_m136_hedp_mag", "rhsusf_mag_15Rnd_9x19_FMJ", "rhsusf_mag_15Rnd_9x19_FMJ", "MiniGrenade", "MiniGrenade", "APERSBoundingMine_Range_Mag", "APERSBoundingMine_Range_Mag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhsusf_mag_15Rnd_9x19_FMJ"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "", "rhsusf_acc_eotech_552", "", "", "", "", "", "", "", "", "", "V_PlateCarrier1_rgr", "H_HelmetB_snakeskin", "G_Lowprofile"};
			backpack = "";
			uniformClass = "U_B_CombatUniform_mcam";
		};
	//DM
		//Vanilla
			//EBR
			class BDV1 { 
			displayName = "Mk 14 EBR";
			role = "DM";

			weapons[] = {"srifle_EBR_F", "hgun_Pistol_heavy_01_F", "Binocular", "Throw", "Put"};
			magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "SmokeShell", "SmokeShell", "MiniGrenade", "MiniGrenade", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles", "", "acc_flashlight", "optic_DMS", "", "", "", "", "", "", "", "optic_MRD", "", "V_PlateCarrier1_rgr", "H_Cap_oli_hs", ""};
			backpack = "";
			uniformClass = "U_B_CombatUniform_mcam";
		};
		//Apex
			//SPAR17
			class BDA1 { 
			displayName = "SPAR17";
			role = "DM";

			weapons[] = {"arifle_SPAR_03_blk_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
			magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "acc_flashlight", "optic_DMS", "", "", "", "", "", "", "", "optic_MRD", "", "V_PlateCarrier1_rgr", "H_Cap_oli_hs", ""};
			backpack = "";
			uniformClass = "U_B_CombatUniform_mcam";
		};
		//RHS
			//Mk11
			class BDR1 { 
			displayName = "Mk11 Mod 0";
			role = "DM";

			weapons[] = {"rhs_weap_sr25", "rhsusf_weap_m1911a1", "Throw", "Put"};
			magazines[] = {"rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "SmokeShell", "SmokeShell", "MiniGrenade", "MiniGrenade", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_mag_7x45acp_MHP"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "acc_flashlight", "rhsusf_acc_ACOG_RMR", "", "", "", "", "", "", "", "", "", "V_PlateCarrier1_rgr", "H_Cap_oli_hs", ""};
			backpack = "";
			uniformClass = "U_B_CombatUniform_mcam";
		};
			//M40 
			class BDR2 { 
			displayName = "M40A5";
			role = "DM";

			weapons[] = {"rhs_weap_m40a5", "rhsusf_weap_m1911a1", "Throw", "Put"};
			magazines[] = {"rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "SmokeShell", "SmokeShell", "MiniGrenade", "MiniGrenade", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_mag_7x45acp_MHP", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_mag_7x45acp_MHP"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "", "rhsusf_acc_ACOG_RMR", "", "", "", "", "", "", "", "", "", "V_PlateCarrier1_rgr", "H_Cap_oli_hs", ""};
			backpack = "";
			uniformClass = "U_B_CombatUniform_mcam";
		};
			//M24 
			class BDR3 { 
			displayName = "M24";
			role = "DM";

			weapons[] = {"rhs_weap_m24sws_blk", "rhsusf_weap_m1911a1", "Throw", "Put"};
			magazines[] = {"rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "SmokeShell", "SmokeShell", "MiniGrenade", "MiniGrenade", "rhsusf_mag_7x45acp_MHP", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_mag_7x45acp_MHP"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "", "rhsusf_acc_ACOG_RMR", "", "", "", "", "", "", "", "", "", "V_PlateCarrier1_rgr", "H_Cap_oli_hs", ""};
			backpack = "";
			uniformClass = "U_B_CombatUniform_mcam";
		};
	//Recon
		//Vanilla
			//Cheytac
			class BRV1 { 
			displayName = "M200 Intervention";
			role = "Recon";

			weapons[] = {"srifle_LRR_F", "hgun_P07_F", "Binocular", "Throw", "Put"};
			magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "ClaymoreDirectionalMine_Remote_Mag", "ClaymoreDirectionalMine_Remote_Mag", "SmokeShell", "SmokeShell", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "16Rnd_9x21_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles", "", "", "optic_DMS", "", "", "", "", "", "muzzle_snds_L", "", "", "", "V_Chestrig_rgr", "", ""};
			backpack = "";
			uniformClass = "U_B_FullGhillie_sard";
		};
		//Apex
		//RHS
			//M107
			class BRR1 { 
			displayName = "M107";
			role = "Recon";

			weapons[] = {"rhs_weap_M107", "rhsusf_weap_glock17g4", "Throw", "Put"};
			magazines[] = {"SmokeShell", "SmokeShell", "ClaymoreDirectionalMine_Remote_Mag", "ClaymoreDirectionalMine_Remote_Mag", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_10Rnd_STD_50BMG_mk211", "rhsusf_mag_10Rnd_STD_50BMG_mk211", "rhsusf_mag_10Rnd_STD_50BMG_mk211", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_17Rnd_9x19_FMJ"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "", "rhsusf_acc_M8541", "", "", "", "", "", "rhsusf_acc_omega9k", "", "", "", "V_Chestrig_rgr", "", ""};
			backpack = "B_AssaultPack_rgr";
			uniformClass = "U_B_FullGhillie_sard";
		};
			//M2010
			class BRR2 { 
			displayName = "M2010";
			role = "Recon";

			weapons[] = {"rhs_weap_XM2010", "rhsusf_weap_glock17g4", "Throw", "Put"};
			magazines[] = {"SmokeShell", "SmokeShell", "ClaymoreDirectionalMine_Remote_Mag", "ClaymoreDirectionalMine_Remote_Mag", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_mag_17Rnd_9x19_FMJ"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "", "rhsusf_acc_M8541", "rhsusf_acc_harris_bipod", "", "", "", "", "rhsusf_acc_omega9k", "", "", "", "V_Chestrig_rgr", "", ""};
			backpack = "";
			uniformClass = "U_B_FullGhillie_sard";
		};
			//M24
			class BRR3 { 
			displayName = "M24";
			role = "Recon";

			weapons[] = {"rhs_weap_m24sws_ghillie", "rhsusf_weap_glock17g4", "Throw", "Put"};
			magazines[] = {"SmokeShell", "SmokeShell", "ClaymoreDirectionalMine_Remote_Mag", "ClaymoreDirectionalMine_Remote_Mag", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_mag_17Rnd_9x19_FMJ"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "", "rhsusf_acc_M8541_low", "rhsusf_acc_harris_swivel", "", "", "", "", "rhsusf_acc_omega9k", "", "", "", "V_Chestrig_rgr", "", ""};
			backpack = "";
			uniformClass = "U_B_FullGhillie_sard";
		};
			//M40
			class BRR4 { 
			displayName = "M40A5";
			role = "Recon";

			weapons[] = {"rhs_weap_m40a5", "rhsusf_weap_glock17g4", "Throw", "Put"};
			magazines[] = {"SmokeShell", "SmokeShell", "ClaymoreDirectionalMine_Remote_Mag", "ClaymoreDirectionalMine_Remote_Mag", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_mag_17Rnd_9x19_FMJ"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "", "rhsusf_acc_M8541_low", "rhsusf_acc_harris_swivel", "", "", "", "", "rhsusf_acc_omega9k", "", "", "", "V_Chestrig_rgr", "", ""};
			backpack = "";
			uniformClass = "U_B_FullGhillie_sard";
		};
//OpFor
	//Assault
		//Vanilla
			//Katiba
			class OAV1 { 
			displayName = "Katiba";
			role = "Assault";

			weapons[] = {"arifle_Katiba_GL_F", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
			magazines[] = {"30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "MiniGrenade", "MiniGrenade", "MiniGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "", "", "optic_Arco", "", "", "", "", "", "", "", "", "", "V_HarnessOGL_brn", "H_HelmetLeaderO_ocamo", ""};
			backpack = "";
			uniformClass = "U_O_CombatUniform_ocamo";
		};
			//TAR 
			class OAV2 { 
			displayName = "TAR-21";
			role = "Assault";

			weapons[] = {"arifle_TRG21_GL_F", "hgun_Rook40_F", "Throw", "Put"};
			magazines[] = {"30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green", "MiniGrenade", "MiniGrenade", "MiniGrenade", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "16Rnd_9x21_green_Mag", "16Rnd_9x21_green_Mag", "30Rnd_556x45_Stanag_Tracer_Green", "1Rnd_HE_Grenade_shell", "16Rnd_9x21_green_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "", "optic_Arco", "", "", "", "", "", "", "", "", "", "V_HarnessOGL_brn", "H_HelmetLeaderO_ocamo", ""};
			backpack = "";
			uniformClass = "U_O_CombatUniform_ocamo";
		};
		//Apex
			//QBZ95
			class OAA1 { 
			displayName = "QBZ-95";
			role = "Assault";

			weapons[] = {"arifle_CTAR_GL_blk_F", "hgun_Rook40_F", "Throw", "Put"};
			magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "16Rnd_9x21_green_Mag", "16Rnd_9x21_green_Mag", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "MiniGrenade", "MiniGrenade", "MiniGrenade", "30Rnd_580x42_Mag_Tracer_F", "1Rnd_HE_Grenade_shell", "16Rnd_9x21_green_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "", "optic_Arco_blk_F", "", "", "", "", "", "", "", "", "", "V_HarnessOGL_brn", "H_HelmetLeaderO_ocamo", ""};
			backpack = "";
			uniformClass = "U_O_CombatUniform_ocamo";
		};
			//AK12
			class OAA2 { 
			displayName = "AK-12";
			role = "Assault";

			weapons[] = {"arifle_AK12_GL_F", "hgun_Rook40_F", "Throw", "Put"};
			magazines[] = {"MiniGrenade", "MiniGrenade", "MiniGrenade", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "16Rnd_9x21_green_Mag", "16Rnd_9x21_green_Mag", "30Rnd_762x39_Mag_Tracer_Green_F", "30Rnd_762x39_Mag_Tracer_Green_F", "30Rnd_762x39_Mag_Tracer_Green_F", "30Rnd_762x39_Mag_Tracer_Green_F", "30Rnd_762x39_Mag_Tracer_Green_F", "30Rnd_762x39_Mag_Tracer_Green_F", "30Rnd_762x39_Mag_Tracer_Green_F", "1Rnd_HE_Grenade_shell", "16Rnd_9x21_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "", "optic_Arco_blk_F", "", "", "", "", "", "", "", "", "", "V_HarnessOGL_brn", "H_HelmetLeaderO_ocamo", ""};
			backpack = "";
			uniformClass = "U_O_CombatUniform_ocamo";
		};
		//Pistols Only
		//RHS
			//AK74M
			class OAR1 { 
			displayName = "AK-74M";
			role = "Assault";

			weapons[] = {"rhs_weap_ak74m_gp25_npz", "hgun_Rook40_F", "Throw", "Put"};
			magazines[] = {"MiniGrenade", "MiniGrenade", "MiniGrenade", "16Rnd_9x21_green_Mag", "16Rnd_9x21_green_Mag", "rhs_VOG25", "rhs_VOG25", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_AK_green", "rhs_VOG25", "16Rnd_9x21_green_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "rhs_acc_dtk", "", "optic_MRCO", "", "", "", "", "", "", "", "", "", "V_HarnessOGL_brn", "H_HelmetLeaderO_ocamo", ""};
			backpack = "";
			uniformClass = "U_O_CombatUniform_ocamo";
		};
			//AK-74N 
			class OAR2 { 
			displayName = "AK-74N";
			role = "Assault";

			weapons[] = {"rhs_weap_ak74n_gp25", "hgun_Rook40_F", "Throw", "Put"};
			magazines[] = {"MiniGrenade", "MiniGrenade", "MiniGrenade", "16Rnd_9x21_green_Mag", "16Rnd_9x21_green_Mag", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_AK_green", "rhs_VOG25", "rhs_VOG25", "rhs_30Rnd_545x39_AK_green", "rhs_VOG25", "16Rnd_9x21_green_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "rhs_acc_dtk1983", "", "", "", "", "", "", "", "", "", "", "", "V_HarnessOGL_brn", "H_HelmetLeaderO_ocamo", ""};
			backpack = "";
			uniformClass = "U_O_CombatUniform_ocamo";
		};
			//
		//RHS Pistols Only
	//SpecOps
		//Vanilla
			//Vector
			class OOV1 { 
			displayName = "Vector";
			role = "SpecOps";

			weapons[] = {"SMG_01_F", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
			magazines[] = {"30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "30Rnd_45ACP_Mag_SMG_01", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "30Rnd_45ACP_Mag_SMG_01", "16Rnd_9x21_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "muzzle_snds_acp", "acc_flashlight_smg_01", "optic_ACO_grn_smg", "", "", "", "", "", "muzzle_snds_L", "", "", "", "V_HarnessOGL_brn", "H_HelmetO_ocamo", ""};
			backpack = "B_AssaultPack_ocamo";
			uniformClass = "U_O_CombatUniform_ocamo";
		};
			//MP7
			class OOV2 { 
			displayName = "MP7";
			role = "SpecOps";

			weapons[] = {"hgun_PDW2000_F", "hgun_Rook40_F", "Throw", "Put"};
			magazines[] = {"30Rnd_9x21_Green_Mag", "30Rnd_9x21_Green_Mag", "30Rnd_9x21_Green_Mag", "30Rnd_9x21_Green_Mag", "30Rnd_9x21_Green_Mag", "30Rnd_9x21_Green_Mag", "30Rnd_9x21_Green_Mag", "30Rnd_9x21_Green_Mag", "16Rnd_9x21_green_Mag", "16Rnd_9x21_green_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "30Rnd_9x21_Green_Mag", "16Rnd_9x21_green_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "muzzle_snds_L", "", "optic_ACO_grn_smg", "", "", "", "", "", "muzzle_snds_L", "", "", "", "V_HarnessOGL_brn", "H_HelmetSpecO_ocamo", ""};
			backpack = "B_FieldPack_ocamo";
			uniformClass = "U_O_CombatUniform_ocamo";
		};
		//Apex
			//QBZ95
			class OOA1 { 
			displayName = "QBZ-95";
			role = "SpecOps";

			weapons[] = {"arifle_CTAR_blk_F", "hgun_Rook40_F", "Throw", "Put"};
			magazines[] = {"16Rnd_9x21_green_Mag", "16Rnd_9x21_green_Mag", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "SmokeShell", "SmokeShell", "MiniGrenade", "MiniGrenade", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "30Rnd_580x42_Mag_Tracer_F", "16Rnd_9x21_green_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "muzzle_snds_58_blk_F", "acc_pointer_IR", "optic_Holosight_blk_F", "", "", "", "", "", "muzzle_snds_L", "", "", "", "V_HarnessOGL_brn", "H_HelmetSpecO_ocamo", ""};
			backpack = "B_FieldPack_ocamo";
			uniformClass = "U_O_CombatUniform_ocamo";
		};
		//RHS
			//AKS74UN
			class OOR1 { 
			displayName = "AKS-74UN";
			role = "SpecOps";

			weapons[] = {"rhs_weap_aks74un", "rhs_weap_pb_6p9", "Throw", "Put"};
			magazines[] = {"rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "rhs_30Rnd_545x39_AK", "rhs_mag_9x18_8_57N181S"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "rhs_acc_pbs4", "", "rhs_acc_ekp8_02", "", "", "", "", "", "rhs_acc_6p9_suppressor", "", "", "", "V_HarnessOGL_brn", "H_HelmetSpecO_ocamo", ""};
			backpack = "B_FieldPack_ocamo";
			uniformClass = "U_O_CombatUniform_ocamo";
		};
			//AS Val 
			class OOR2 { 
			displayName = "AS Val";
			role = "SpecOps";

			weapons[] = {"rhs_weap_asval_grip", "rhs_weap_pb_6p9", "Throw", "Put"};
			magazines[] = {"rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x18_8_57N181S", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "rhs_20rnd_9x39mm_SP6", "rhs_mag_9x18_8_57N181S"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "rhs_acc_perst1ik_ris", "rhs_acc_ekp8_02", "", "", "", "", "", "rhs_acc_6p9_suppressor", "", "", "", "V_HarnessOGL_brn", "H_HelmetSpecO_ocamo", ""};
			backpack = "B_FieldPack_ocamo";
			uniformClass = "U_O_CombatUniform_ocamo";
		};
		//ADR97
			//P99
			class OOAd1 { 
			displayName = "P90";
			role = "SpecOps";

			weapons[] = {"SMG_03C_TR_hex", "hgun_Rook40_F", "Throw", "Put"};
			magazines[] = {"50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "16Rnd_9x21_green_Mag", "16Rnd_9x21_green_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "50Rnd_570x28_SMG_03", "16Rnd_9x21_green_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "muzzle_snds_570", "acc_pointer_IR", "optic_ACO_grn_smg", "", "", "", "", "", "muzzle_snds_L", "", "", "", "V_HarnessOGL_brn", "H_HelmetSpecO_ocamo", ""};
			backpack = "B_FieldPack_ocamo";
			uniformClass = "U_O_CombatUniform_ocamo";
		};
	//Support
		//Vanilla
			//Zafir
			class OSV1 { 
			displayName = "Zafir";
			role = "Support";

			weapons[] = {"LMG_Zafir_F", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
			magazines[] = {"150Rnd_762x54_Box", "150Rnd_762x54_Box", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "150Rnd_762x54_Box", "16Rnd_9x21_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "", "acc_pointer_IR", "", "", "", "", "", "", "", "", "", "", "V_HarnessO_brn", "H_HelmetO_ocamo", ""};
			backpack = "";
			uniformClass = "U_O_CombatUniform_ocamo";
		};
		//Apex
			//QBZ95
			class OSA1 { 
			displayName = "QBZ-95 LMG";
			role = "Support";

			weapons[] = {"arifle_CTARS_blk_F", "hgun_Rook40_F", "Throw", "Put"};
			magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_580x42_Mag_Tracer_F", "100Rnd_580x42_Mag_Tracer_F", "100Rnd_580x42_Mag_Tracer_F", "100Rnd_580x42_Mag_Tracer_F", "100Rnd_580x42_Mag_Tracer_F", "16Rnd_9x21_green_Mag", "16Rnd_9x21_green_Mag", "100Rnd_580x42_Mag_Tracer_F", "16Rnd_9x21_green_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "acc_pointer_IR", "", "", "", "", "", "", "", "", "", "", "V_HarnessO_brn", "H_HelmetO_ocamo", ""};
			backpack = "";
			uniformClass = "U_O_CombatUniform_ocamo";
		};
		//RHS
			//PKM 
			class OSR1 { 
			displayName = "PKM";
			role = "Support";

			weapons[] = {"rhs_weap_pkm", "hgun_Rook40_F", "Throw", "Put"};
			magazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_green_Mag", "16Rnd_9x21_green_Mag", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "16Rnd_9x21_green_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "", "", "", "", "", "", "", "", "", "", "", "V_HarnessO_brn", "H_HelmetO_ocamo", ""};
			backpack = "B_FieldPack_ocamo";
			uniformClass = "U_O_CombatUniform_ocamo";
		};
			//PKP
			class OSR2 { 
			displayName = "PKP";
			role = "Support";

			weapons[] = {"rhs_weap_pkp", "hgun_Rook40_F", "Throw", "Put"};
			magazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_green_Mag", "16Rnd_9x21_green_Mag", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_green", "16Rnd_9x21_green_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "", "", "", "", "", "", "", "", "", "", "", "V_HarnessO_brn", "H_HelmetO_ocamo", ""};
			backpack = "B_FieldPack_ocamo";
			uniformClass = "U_O_CombatUniform_ocamo";
		};
	//Engineer
		//Vanilla
			//Katiba Carbine
			class OEV1 { 
			displayName = "Katiba-C";
			role = "Engineer";

			weapons[] = {"arifle_Katiba_C_F", "launch_RPG32_F", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
			magazines[] = {"30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "RPG32_HE_F", "MiniGrenade", "MiniGrenade", "APERSBoundingMine_Range_Mag", "APERSBoundingMine_Range_Mag", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "", "", "optic_ACO_grn", "", "", "", "", "", "", "", "", "", "V_HarnessO_brn", "H_HelmetLeaderO_ocamo", ""};
			backpack = "";
			uniformClass = "U_O_CombatUniform_ocamo";
		};
		//Apex
			//AK12
			class OEA1 { 
			displayName = "AK-12";
			role = "Engineer";

			weapons[] = {"arifle_AK12_F", "hgun_Rook40_F", "launch_RPG32_F", "Throw", "Put"};
			magazines[] = {"MiniGrenade", "MiniGrenade", "APERSBoundingMine_Range_Mag", "APERSBoundingMine_Range_Mag", "16Rnd_9x21_green_Mag", "16Rnd_9x21_green_Mag", "30Rnd_762x39_Mag_Tracer_Green_F", "30Rnd_762x39_Mag_Tracer_Green_F", "30Rnd_762x39_Mag_Tracer_Green_F", "30Rnd_762x39_Mag_Tracer_Green_F", "30Rnd_762x39_Mag_Tracer_Green_F", "30Rnd_762x39_Mag_Tracer_Green_F", "30Rnd_762x39_Mag_Tracer_Green_F", "RPG32_HE_F", "16Rnd_9x21_green_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "", "optic_ACO_grn", "", "", "", "", "", "", "", "", "", "V_HarnessO_brn", "H_HelmetLeaderO_ocamo", ""};
			backpack = "";
			uniformClass = "U_O_CombatUniform_ocamo";
		};
			//QBZ
			class OEA2 { 
			displayName = "QBZ-95";
			role = "Engineer";

			weapons[] = {"arifle_CTAR_blk_F", "hgun_Rook40_F", "launch_RPG32_F", "Throw", "Put"};
			magazines[] = {"MiniGrenade", "MiniGrenade", "APERSBoundingMine_Range_Mag", "APERSBoundingMine_Range_Mag", "16Rnd_9x21_green_Mag", "16Rnd_9x21_green_Mag", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "RPG32_HE_F", "16Rnd_9x21_green_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "", "optic_ACO_grn", "", "", "", "", "", "", "", "", "", "V_HarnessO_brn", "H_HelmetLeaderO_ocamo", ""};
			backpack = "";
			uniformClass = "U_O_CombatUniform_ocamo";
		};
			//Type 115
			class OEA3 { 
			displayName = "Type 115";
			role = "Engineer";

			weapons[] = {"arifle_ARX_blk_F", "hgun_Rook40_F", "launch_RPG32_F", "Throw", "Put"};
			magazines[] = {"MiniGrenade", "MiniGrenade", "APERSBoundingMine_Range_Mag", "APERSBoundingMine_Range_Mag", "16Rnd_9x21_green_Mag", "16Rnd_9x21_green_Mag", "30Rnd_65x39_caseless_green_mag_Tracer", "30Rnd_65x39_caseless_green_mag_Tracer", "30Rnd_65x39_caseless_green_mag_Tracer", "30Rnd_65x39_caseless_green_mag_Tracer", "30Rnd_65x39_caseless_green_mag_Tracer", "30Rnd_65x39_caseless_green_mag_Tracer", "30Rnd_65x39_caseless_green_mag_Tracer", "10Rnd_50BW_Mag_F", "RPG32_HE_F", "16Rnd_9x21_green_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "", "optic_ACO_grn", "", "", "", "", "", "", "", "", "", "V_HarnessO_brn", "H_HelmetLeaderO_ocamo", ""};
			backpack = "";
			uniformClass = "U_O_CombatUniform_ocamo";
		};
		//RHS
			//AKs74N 
			class OER1 { 
			displayName = "AKS-47N";
			role = "Engineer";

			weapons[] = {"rhs_weap_aks74n_npz", "hgun_Rook40_F", "rhs_weap_rpg7", "Throw", "Put"};
			magazines[] = {"MiniGrenade", "MiniGrenade", "APERSBoundingMine_Range_Mag", "APERSBoundingMine_Range_Mag", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_rpg7_TBG7V_mag", "16Rnd_9x21_green_Mag","16Rnd_9x21_green_Mag","16Rnd_9x21_green_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "rhs_acc_dtk1983", "", "rhs_acc_1p87", "", "", "", "", "", "", "", "", "", "V_HarnessO_brn", "H_HelmetLeaderO_ocamo", ""};
			backpack = "";
			uniformClass = "U_O_CombatUniform_ocamo";
		};
			//AKMN 
			class OER2 { 
			displayName = "AKMN";
			role = "Engineer";

			weapons[] = {"rhs_weap_akmn", "hgun_Rook40_F", "rhs_weap_rpg7", "Throw", "Put"};
			magazines[] = {"MiniGrenade", "MiniGrenade", "APERSBoundingMine_Range_Mag", "APERSBoundingMine_Range_Mag", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_tracer", "16Rnd_9x21_Green_Mag", "16Rnd_9x21_Green_Mag", "rhs_30Rnd_762x39mm_tracer", "rhs_rpg7_TBG7V_mag", "16Rnd_9x21_green_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "rhs_acc_dtkakm", "", "", "", "", "", "", "", "", "", "", "", "V_HarnessO_brn", "H_HelmetLeaderO_ocamo", ""};
			backpack = "";
			uniformClass = "U_O_CombatUniform_ocamo";
		};
	//DM
		//Vanilla
			//Rahim
			class ODV1 { 
			displayName = "Rahim";
			role = "DM";

			weapons[] = {"srifle_DMR_01_F", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
			magazines[] = {"10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "16Rnd_9x21_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "", "", "optic_DMS", "", "", "", "", "", "", "", "", "", "V_HarnessO_brn", "H_MilCap_ocamo", ""};
			backpack = "";
			uniformClass = "U_O_CombatUniform_ocamo";
		};
		//Apex
			//QBU88
			class ODA1 { 
			displayName = "QBU-88";
			role = "DM";

			weapons[] = {"srifle_DMR_07_blk_F", "hgun_Rook40_F", "Throw", "Put"};
			magazines[] = {"MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "16Rnd_9x21_green_Mag", "16Rnd_9x21_green_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "16Rnd_9x21_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "acc_flashlight", "optic_DMS", "", "", "", "", "", "", "", "", "", "V_HarnessO_brn", "H_MilCap_ocamo", ""};
			backpack = "";
			uniformClass = "U_O_CombatUniform_ocamo";
		};
		//RHS
			//SVD
			class ODR1 { 
			displayName = "SVD";
			role = "DM";

			weapons[] = {"rhs_weap_svdp_npz", "hgun_Rook40_F", "Throw", "Put"};
			magazines[] = {"16Rnd_9x21_green_Mag", "16Rnd_9x21_green_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "16Rnd_9x21_green_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "", "rhs_acc_dh520x56", "", "", "", "", "", "", "", "", "", "V_HarnessO_brn", "H_MilCap_ocamo", ""};
			backpack = "";
			uniformClass = "U_O_CombatUniform_ocamo";
		};
			//VSS 
			class ODR2 { 
			displayName = "VSS";
			role = "DM";

			weapons[] = {"rhs_weap_vss_grip_npz", "Binocular", "Throw", "Put"};
			magazines[] = {"16Rnd_9x21_green_Mag", "16Rnd_9x21_green_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "16Rnd_9x21_green_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "", "", "optic_SOS", "", "", "", "", "", "", "", "", "", "V_HarnessO_brn", "H_MilCap_ocamo", ""};
			backpack = "";
			uniformClass = "U_O_CombatUniform_ocamo";
		};
	//Recon
		//Vanilla
			//GM6 Lynx
			class ORV1 { 
			displayName = "GM6 Lynx";
			role = "Recon";

			weapons[] = {"srifle_GM6_F", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
			magazines[] = {"5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShell", "ClaymoreDirectionalMine_Remote_Mag", "ClaymoreDirectionalMine_Remote_Mag", "5Rnd_127x108_Mag", "16Rnd_9x21_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "", "", "optic_DMS", "", "", "", "", "", "muzzle_snds_L", "", "", "", "V_HarnessO_brn", "", ""};
			backpack = "";
			uniformClass = "U_O_FullGhillie_ard";
		};
		//Apex
		//RHS
			//T5000
			class ORR1 { 
			displayName = "T5K";
			role = "Recon";

			weapons[] = {"rhs_weap_t5000", "hgun_Rook40_F", "Throw", "Put"};
			magazines[] = {"SmokeShell", "SmokeShell", "ClaymoreDirectionalMine_Remote_Mag", "ClaymoreDirectionalMine_Remote_Mag", "16Rnd_9x21_green_Mag", "16Rnd_9x21_green_Mag", "rhs_5Rnd_338lapua_t5000", "rhs_5Rnd_338lapua_t5000", "rhs_5Rnd_338lapua_t5000", "rhs_5Rnd_338lapua_t5000", "rhs_5Rnd_338lapua_t5000", "rhs_5Rnd_338lapua_t5000", "rhs_5Rnd_338lapua_t5000", "rhs_5Rnd_338lapua_t5000", "rhs_5Rnd_338lapua_t5000", "rhs_5Rnd_338lapua_t5000", "rhs_5Rnd_338lapua_t5000", "rhs_5Rnd_338lapua_t5000", "rhs_5Rnd_338lapua_t5000", "rhs_5Rnd_338lapua_t5000", "rhs_5Rnd_338lapua_t5000", "16Rnd_9x21_green_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "", "rhs_acc_dh520x56", "rhs_acc_harris_swivel", "", "", "", "", "muzzle_snds_L", "", "", "", "V_HarnessO_brn", "", ""};
			backpack = "";
			uniformClass = "U_O_FullGhillie_sard";
		};
			//SVD
			class ORR2 { 
			displayName = "SVD";
			role = "Recon";

			weapons[] = {"rhs_weap_svdp_npz", "hgun_Rook40_F", "Throw", "Put"};
			magazines[] = {"SmokeShell", "SmokeShell", "ClaymoreDirectionalMine_Remote_Mag", "ClaymoreDirectionalMine_Remote_Mag", "16Rnd_9x21_green_Mag", "16Rnd_9x21_green_Mag", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "16Rnd_9x21_green_Mag"};
			items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "Binocular", "", "", "rhs_acc_dh520x56", "", "", "", "", "", "muzzle_snds_L", "", "", "", "V_HarnessO_brn", "", ""};
			backpack = "";
			uniformClass = "U_O_FullGhillie_sard";
		};
};
/*
 * @Author: MoarRightRudder 
 * @Date: 2018-03-29 17:00:14 
 * @Last Modified by: MoarRightRudder
 * @Last Modified time: 2018-03-31 22:23:14
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

//Vanilla
	//BluFor
		//Assault
		class VB1 { 
		displayName = "Vanilla";
		role = "Assault";

		weapons[] = {"arifle_MX_GL_Black_F", "hgun_P07_F", "Binocular", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "1Rnd_HE_Grenade_shell", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "MiniGrenade", "MiniGrenade", "MiniGrenade", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles", "", "", "optic_Hamr", "", "", "", "", "", "", "", "", "", "V_PlateCarrier2_rgr", "H_HelmetSpecB_snakeskin", "G_Combat"};
		backpack = "";
		uniformClass = "U_B_CombatUniform_mcam";
	};

		//SpecOps
		class VB2 { 
		displayName = "Vanilla";
		role = "SpecOps";

		weapons[] = {"SMG_02_F", "hgun_Pistol_heavy_01_F", "Binocular", "Throw", "Put"};
		magazines[] = {"11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "30Rnd_9x21_Mag_SMG_02", "11Rnd_45ACP_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles", "muzzle_snds_L", "acc_pointer_IR", "optic_Aco_smg", "", "", "", "", "", "muzzle_snds_acp", "", "optic_MRD", "", "V_PlateCarrier1_rgr", "H_HelmetB_light", "G_Lowprofile"};
		backpack = "B_AssaultPack_rgr";
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
	};

		//Support
		class VB3 { 
		displayName = "Vanilla";
		role = "Support";

		weapons[] = {"LMG_Mk200_F", "hgun_P07_F", "Binocular", "Throw", "Put"};
		magazines[] = {"200Rnd_65x39_cased_Box_Tracer", "200Rnd_65x39_cased_Box_Tracer", "HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles", "", "acc_pointer_IR", "", "", "", "", "", "", "", "", "", "", "V_PlateCarrier1_rgr", "H_HelmetB_grass", "G_Combat"};
		backpack = "";
		uniformClass = "U_B_CombatUniform_mcam";
	};

		//Engineer
		class VB4 { 
		displayName = "Vanilla";
		role = "Engineer";

		weapons[] = {"arifle_MXC_Black_F", "launch_NLAW_F", "hgun_P07_F", "Binocular", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "APERSBoundingMine_Range_Mag", "APERSBoundingMine_Range_Mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles", "", "", "optic_Aco", "", "", "", "", "", "", "", "", "", "V_PlateCarrier1_rgr", "H_HelmetSpecB_snakeskin", "G_Lowprofile"};
		backpack = "";
		uniformClass = "U_B_CombatUniform_mcam";
	};

		//DM
		class VB5 { 
		displayName = "Vanilla";
		role = "DM";

		weapons[] = {"srifle_EBR_F", "hgun_Pistol_heavy_01_F", "Binocular", "Throw", "Put"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "SmokeShell", "SmokeShell", "MiniGrenade", "MiniGrenade", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles", "", "acc_flashlight", "optic_DMS", "", "", "", "", "", "", "", "optic_MRD", "", "V_PlateCarrier1_rgr", "H_Cap_oli_hs", ""};
		backpack = "";
		uniformClass = "U_B_CombatUniform_mcam";
	};

		//Recon
		class VB6 { 
		displayName = "Vanilla";
		role = "Recon";

		weapons[] = {"srifle_LRR_F", "hgun_P07_F", "Binocular", "Throw", "Put"};
		magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "ClaymoreDirectionalMine_Remote_Mag", "ClaymoreDirectionalMine_Remote_Mag", "SmokeShell", "SmokeShell", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles", "", "", "optic_DMS", "", "", "", "", "", "muzzle_snds_L", "", "", "", "V_Chestrig_rgr", "", ""};
		backpack = "";
		uniformClass = "U_B_FullGhillie_sard";
	};

	//OpFor
		//Assault
		class VO1 { 
		displayName = "Vanilla";
		role = "Assault";

		weapons[] = {"arifle_Katiba_GL_F", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "MiniGrenade", "MiniGrenade", "MiniGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "", "", "optic_Arco", "", "", "", "", "", "", "", "", "", "V_HarnessOGL_brn", "H_HelmetLeaderO_ocamo", ""};
		backpack = "";
		uniformClass = "U_O_CombatUniform_ocamo";
	};

		//SpecOps
		class VO2 { 
		displayName = "Vanilla";
		role = "SpecOps";

		weapons[] = {"SMG_01_F", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
		magazines[] = {"30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_45ACP_Mag_SMG_01", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "30Rnd_45ACP_Mag_SMG_01", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "30Rnd_45ACP_Mag_SMG_01", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "muzzle_snds_acp", "acc_flashlight_smg_01", "optic_ACO_grn_smg", "", "", "", "", "", "muzzle_snds_L", "", "", "", "V_HarnessOGL_brn", "H_HelmetO_ocamo", ""};
		backpack = "B_AssaultPack_ocamo";
		uniformClass = "U_O_CombatUniform_ocamo";
	};

		//Support
		class VO3 { 
		displayName = "Vanilla";
		role = "Support";

		weapons[] = {"LMG_Zafir_F", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
		magazines[] = {"150Rnd_762x54_Box", "150Rnd_762x54_Box", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "150Rnd_762x54_Box", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "", "acc_pointer_IR", "", "", "", "", "", "", "", "", "", "", "V_HarnessO_brn", "H_HelmetO_ocamo", ""};
		backpack = "";
		uniformClass = "U_O_CombatUniform_ocamo";
	};

		//Engineer
		class VO4 { 
		displayName = "Vanilla";
		role = "Engineer";

		weapons[] = {"arifle_Katiba_C_F", "launch_RPG32_F", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "APERSBoundingMine_Range_Mag", "APERSBoundingMine_Range_Mag", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "", "", "optic_ACO_grn", "", "", "", "", "", "", "", "", "", "V_HarnessO_brn", "H_HelmetLeaderO_ocamo", ""};
		backpack = "";
		uniformClass = "U_O_CombatUniform_ocamo";
	};

		//DM
		class VO5 { 
		displayName = "Vanilla";
		role = "DM";

		weapons[] = {"srifle_DMR_01_F", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
		magazines[] = {"10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "", "", "optic_DMS", "", "", "", "", "", "", "", "", "", "V_HarnessO_brn", "H_MilCap_ocamo", ""};
		backpack = "";
		uniformClass = "U_O_CombatUniform_ocamo";
	};

		//Recon
		class VO6 { 
		displayName = "Vanilla";
		role = "Recon";

		weapons[] = {"srifle_GM6_F", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
		magazines[] = {"5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShell", "ClaymoreDirectionalMine_Remote_Mag", "ClaymoreDirectionalMine_Remote_Mag", "5Rnd_127x108_Mag", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "", "", "optic_DMS", "", "", "", "", "", "muzzle_snds_L", "", "", "", "V_HarnessO_brn", "", ""};
		backpack = "";
		uniformClass = "U_O_FullGhillie_ard";
	};

//DLC
	//BluFor
		//Assault
		class DB1 { 
		displayName = "Apex";
		role = "Assault";

		weapons[] = {"arifle_SPAR_01_GL_blk_F", "hgun_P07_F", "Binocular", "Throw", "Put"};
		magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "MiniGrenade", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "1Rnd_HE_Grenade_shell", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles", "", "", "optic_ERCO_blk_F", "", "", "", "", "", "", "", "", "", "V_PlateCarrier2_rgr", "H_HelmetSpecB_snakeskin", "G_Combat"};
		backpack = "";
		uniformClass = "U_B_CombatUniform_mcam";
	};

		//SpecOps
		class DB2 { 
		displayName = "Apex";
		role = "SpecOps";

		weapons[] = {"SMG_05_F", "hgun_Pistol_heavy_01_F", "Binocular", "Throw", "Put"};
		magazines[] = {"11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "30Rnd_9x21_Mag_SMG_02", "11Rnd_45ACP_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles", "muzzle_snds_L", "acc_pointer_IR", "optic_Aco_smg", "", "", "", "", "", "muzzle_snds_acp", "", "optic_MRD", "", "V_PlateCarrier1_rgr", "H_HelmetB_light", "G_Lowprofile"};
		backpack = "B_AssaultPack_rgr";
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
	};

		//Support
		class DB3 { 
		displayName = "Apex";
		role = "Support";

		weapons[] = {"arifle_SPAR_02_blk_F", "hgun_P07_F", "Binocular", "Throw", "Put"};
		magazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "150Rnd_556x45_Drum_Mag_Tracer_F", "150Rnd_556x45_Drum_Mag_Tracer_F", "150Rnd_556x45_Drum_Mag_Tracer_F", "150Rnd_556x45_Drum_Mag_Tracer_F", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles", "", "acc_pointer_IR", "", "bipod_01_F_blk", "", "", "", "", "", "", "", "", "V_PlateCarrier1_rgr", "H_HelmetB_grass", "G_Combat"};
		backpack = "";
		uniformClass = "U_B_CombatUniform_mcam";
	};

		//Engineer
		class DB4 { 
		displayName = "Apex";
		role = "Engineer";

		weapons[] = { "arifle_ARX_blk_F", "launch_NLAW_F", "hgun_P07_F", "Binocular", "Throw", "Put"};
		magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "APERSBoundingMine_Range_Mag", "APERSBoundingMine_Range_Mag", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "10Rnd_50BW_Mag_F", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles", "", "", "optic_Aco", "", "", "", "", "", "", "", "", "", "V_PlateCarrier1_rgr", "H_HelmetSpecB_snakeskin", "G_Lowprofile"};
		backpack = "";
		uniformClass = "U_B_CombatUniform_mcam";
	};

		//DM
		class DB5 { 
		displayName = "Apex";
		role = "DM";

		weapons[] = {"arifle_SPAR_03_blk_F", "hgun_Pistol_heavy_01_F", "Binocular", "Throw", "Put"};
		magazines[] = {"11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "SmokeShell", "SmokeShell", "MiniGrenade", "MiniGrenade", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles", "", "acc_flashlight", "optic_AMS", "", "", "", "", "", "", "", "optic_MRD", "", "V_PlateCarrier1_rgr", "H_Cap_oli_hs", ""};
		backpack = "";
		uniformClass = "U_B_CombatUniform_mcam";
	};

	//OpFor
		//Assault
		class DO1 { 
		displayName = "Apex";
		role = "Assault";

		weapons[] = {"arifle_AK12_GL_F", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
		magazines[] = {"1Rnd_HE_Grenade_shell", "MiniGrenade", "MiniGrenade", "MiniGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "1Rnd_HE_Grenade_shell", "30Rnd_762x39_Mag_F", "1Rnd_HE_Grenade_shell", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "", "", "optic_Arco_blk_F", "", "", "", "", "", "", "", "", "", "V_HarnessOGL_brn", "H_HelmetLeaderO_ocamo", ""};
		backpack = "";
		uniformClass = "U_O_CombatUniform_ocamo";
	};

		//SpecOps
		class DO2 { 
		displayName = "Apex";
		role = "SpecOps";

		weapons[] = {"arifle_CTAR_hex_F", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
		magazines[] = {"MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "30Rnd_580x42_Mag_F", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "muzzle_snds_58_blk_F", "acc_pointer_IR", "optic_ACO_grn_smg", "", "", "", "", "", "muzzle_snds_L", "", "", "", "V_HarnessOGL_brn", "H_HelmetO_ocamo", ""};
		backpack = "B_AssaultPack_ocamo";
		uniformClass = "U_O_CombatUniform_ocamo";
	};

		//Support
		class DO3 { 
		displayName = "Apex";
		role = "Support";

		weapons[] = {"arifle_CTARS_blk_F", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
		magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "", "acc_pointer_IR", "", "", "", "", "", "", "", "", "", "", "V_HarnessO_brn", "H_HelmetO_ocamo", ""};
		backpack = "";
		uniformClass = "U_O_CombatUniform_ocamo";
	};

		//Engineer
		class DO4 { 
		displayName = "Apex";
		role = "Engineer";

		weapons[] = {"arifle_ARX_hex_F", "launch_RPG32_F", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
		magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "APERSBoundingMine_Range_Mag", "APERSBoundingMine_Range_Mag", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "10Rnd_50BW_Mag_F", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "", "", "optic_ACO_grn", "", "", "", "", "", "", "", "", "", "V_HarnessO_brn", "H_HelmetLeaderO_ocamo", ""};
		backpack = "";
		uniformClass = "U_O_CombatUniform_ocamo";
	};

		//DM
		class DO5 { 
		displayName = "Apex";
		role = "DM";

		weapons[] = {"srifle_DMR_07_hex_F", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
		magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "", "", "optic_KHS_hex", "", "", "", "", "", "", "", "", "", "V_HarnessO_brn", "H_MilCap_ocamo", ""};
		backpack = "";
		uniformClass = "U_O_CombatUniform_ocamo";
	};

//Pistols Only
	//BluFor
		//P99
		class PB1 { 
		displayName = "P99";
		role = "Assault";

		weapons[] = {"Binocular", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles", "", "", "", "", "", "", "", "", "", "", "", "", "V_TacVest_oli", "H_Cap_oli_hs", ""};
		backpack = "";
		uniformClass = "U_B_CombatUniform_mcam";
	};
		//P99 Suppressed
		class PB2 { 
		displayName = "P99 (S)";
		role = "Assault";

		weapons[] = {"hgun_P07_F", "Binocular", "Throw", "Put"};
		magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles", "", "", "", "", "", "", "", "", "muzzle_snds_L", "", "", "", "V_TacVest_oli", "H_Cap_oli_hs", ""};
		backpack = "";
		uniformClass = "U_B_CombatUniform_mcam";
	};

		//1911
		class PB3 { 
		displayName = "1911";
		role = "Assault";

		weapons[] = {"Binocular", "hgun_ACPC2_F", "Throw", "Put"};
		magazines[] = {"9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles", "", "", "", "", "", "", "", "", "", "", "", "", "V_TacVest_oli", "H_Cap_oli_hs", ""};
		backpack = "";
		uniformClass = "U_B_CombatUniform_mcam";
	};

		//1911 Suppressed
		class PB4 { 
		displayName = "1911 (S)";
		role = "Assault";

		weapons[] = {"hgun_ACPC2_F", "Binocular", "Throw", "Put"};
		magazines[] = {"9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles", "", "", "", "", "", "", "", "", "muzzle_snds_acp", "acc_flashlight_pistol", "", "", "V_TacVest_oli", "H_Cap_oli_hs", ""};
		backpack = "";
		uniformClass = "U_B_CombatUniform_mcam";
	};

		//FNX-45
		class PB5 { 
		displayName = "FNX-45";
		role = "Assault";

		weapons[] = {"hgun_Pistol_heavy_01_F", "Binocular", "Throw", "Put"};
		magazines[] = {"11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles", "", "", "", "", "", "", "", "", "", "", "optic_MRD", "", "V_TacVest_oli", "H_Cap_oli_hs", ""};
		backpack = "";
		uniformClass = "U_B_CombatUniform_mcam";
	};

		//FNX-45 Suppressed
		class PB6 { 
		displayName = "FNX-45 (S)";
		role = "Assault";

		weapons[] = {"hgun_Pistol_heavy_01_F", "Binocular", "Throw", "Put"};
		magazines[] = {"11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles", "", "", "", "", "", "", "", "", "muzzle_snds_acp", "acc_flashlight_pistol", "optic_MRD", "", "V_TacVest_oli", "H_Cap_oli_hs", ""};
		backpack = "";
		uniformClass = "U_B_CombatUniform_mcam";
	};

		//MP-443 Grach
		class PB7 { 
		displayName = "MP-443 Grach";
		role = "Assault";

		weapons[] = {"hgun_Rook40_F", "Binocular", "Throw", "Put"};
		magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles", "", "", "", "", "", "", "", "", "", "", "", "", "V_TacVest_oli", "H_Cap_oli_hs", ""};
		backpack = "";
		uniformClass = "U_B_CombatUniform_mcam";
	};		

		//MP-443 Grach Suppressed
		class PB8 { 
		displayName = "MP-443 Grach (S)";
		role = "Assault";

		weapons[] = {"hgun_Rook40_F", "Binocular", "Throw", "Put"};
		magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles", "", "", "", "", "", "", "", "", "muzzle_snds_L", "", "", "", "V_TacVest_oli", "H_Cap_oli_hs", ""};
		backpack = "";
		uniformClass = "U_B_CombatUniform_mcam";
	};

	
	//OpFor
		//P99
		class PO1 { 
		displayName = "P99";
		role = "Assault";

		weapons[] = {"Binocular", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "", "", "", "", "", "", "", "", "", "", "", "", "V_BandollierB_khk", "H_MilCap_ocamo", ""};
		backpack = "";
		uniformClass = "U_O_CombatUniform_ocamo";
	};

		//P99 Suppressed
		class PO2 { 
		displayName = "P99 (S)";
		role = "Assault";

		weapons[] = {"hgun_P07_F", "Binocular", "Throw", "Put"};
		magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "", "", "", "", "", "", "", "", "muzzle_snds_L", "", "", "", "V_BandollierB_khk", "H_MilCap_ocamo", ""};
		backpack = "";
		uniformClass = "U_O_CombatUniform_ocamo";
	};

		//1911
		class PO3 { 
		displayName = "1911";
		role = "Assault";

		weapons[] = {"Binocular", "hgun_ACPC2_F", "Throw", "Put"};
		magazines[] = {"9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "", "", "", "", "", "", "", "", "", "", "", "", "V_BandollierB_khk", "H_MilCap_ocamo", ""};
		backpack = "";
		uniformClass = "U_O_CombatUniform_ocamo";
	};
		
		//1911 Suppressed
		class PO4 { 
		displayName = "1911 (S)";
		role = "Assault";

		weapons[] = {"hgun_ACPC2_F", "Binocular", "Throw", "Put"};
		magazines[] = {"9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "", "", "", "", "", "", "", "", "muzzle_snds_acp", "acc_flashlight_pistol", "", "", "V_BandollierB_khk", "H_MilCap_ocamo", ""};
		backpack = "";
		uniformClass = "U_O_CombatUniform_ocamo";
	};

		//FNX-45
		class PO5 { 
		displayName = "FNX-45";
		role = "Assault";

		weapons[] = {"Binocular", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
		magazines[] = {"11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "", "", "", "", "", "", "", "", "", "", "optic_MRD", "", "V_BandollierB_khk", "H_MilCap_ocamo", ""};
		backpack = "";
		uniformClass = "U_O_CombatUniform_ocamo";
	};

		//FNX-45 Suppressed
		class PO6 { 
		displayName = "FNX-45 (S)";
		role = "Assault";

		weapons[] = {"hgun_Pistol_heavy_01_F", "Binocular", "Throw", "Put"};
		magazines[] = {"11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "", "", "", "", "", "", "", "", "muzzle_snds_acp", "acc_flashlight_pistol", "optic_MRD", "", "V_BandollierB_khk", "H_MilCap_ocamo", ""};
		backpack = "";
		uniformClass = "U_O_CombatUniform_ocamo";
	};

		//MP-443 Grach
		class PO7 { 
		displayName = "MP-443 Grach";
		role = "Assault";

		weapons[] = {"Binocular", "hgun_Rook40_F", "Throw", "Put"};
		magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "", "", "", "", "", "", "", "", "", "", "", "", "V_BandollierB_khk", "H_MilCap_ocamo", ""};
		backpack = "";
		uniformClass = "U_O_CombatUniform_ocamo";
	};

		//MP-443 Grach Suppressed
		class PO8 { 
		displayName = "MP-443 Grach (S)";
		role = "Assault";

		weapons[] = {"hgun_Rook40_F", "Binocular", "Throw", "Put"};
		magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "", "", "", "", "", "", "", "", "muzzle_snds_L", "", "", "", "V_BandollierB_khk", "H_MilCap_ocamo", ""};
		backpack = "";
		uniformClass = "U_O_CombatUniform_ocamo";
	};

};
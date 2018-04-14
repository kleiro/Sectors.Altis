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
		displayName = "A3 Base";
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
		displayName = "A3 Base";
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
		displayName = "A3 Base";
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
		displayName = "A3 Base";
		role = "Engineer";

		weapons[] = {"arifle_MXC_Black_F", "launch_NLAW_F", "hgun_P07_F", "Binocular", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "APERSBoundingMine_Range_Mag", "APERSBoundingMine_Range_Mag", "30Rnd_65x39_caseless_mag", "NLAW_F", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles", "", "", "optic_Aco", "", "", "", "", "", "", "", "", "", "V_PlateCarrier1_rgr", "H_HelmetSpecB_snakeskin", "G_Lowprofile"};
		backpack = "";
		uniformClass = "U_B_CombatUniform_mcam";
	};

		//DM
		class VB5 { 
		displayName = "A3 Base";
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
		displayName = "A3 Base";
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
		displayName = "A3 Base";
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
		displayName = "A3 Base";
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
		displayName = "A3 Base";
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
		displayName = "A3 Base";
		role = "Engineer";

		weapons[] = {"arifle_Katiba_C_F", "launch_RPG32_F", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "RPG32_HE_F", "MiniGrenade", "MiniGrenade", "APERSBoundingMine_Range_Mag", "APERSBoundingMine_Range_Mag", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "", "", "optic_ACO_grn", "", "", "", "", "", "", "", "", "", "V_HarnessO_brn", "H_HelmetLeaderO_ocamo", ""};
		backpack = "";
		uniformClass = "U_O_CombatUniform_ocamo";
	};

		//DM
		class VO5 { 
		displayName = "A3 Base";
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
		displayName = "A3 Base";
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
		magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "APERSBoundingMine_Range_Mag", "APERSBoundingMine_Range_Mag", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "10Rnd_50BW_Mag_F", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "NLAW_F", "16Rnd_9x21_Mag"};
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
		magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "APERSBoundingMine_Range_Mag", "APERSBoundingMine_Range_Mag", "RPG32_HE_F", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "10Rnd_50BW_Mag_F", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag"};
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

//RHS 
	//BluFor
		//Assault - OCP
		class RB1 { 
		displayName = "M4A1 - OCP";
		role = "Assault";

		weapons[] = {"rhs_weap_m4a1_m320", "rhsusf_weap_m9", "Binocular", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "MiniGrenade", "MiniGrenade", "MiniGrenade", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "1Rnd_HE_Grenade_shell", "rhsusf_mag_15Rnd_9x19_JHP"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhsusf_ANPVS_15", "", "", "rhsusf_acc_ACOG_RMR", "", "", "", "", "", "", "", "", "", "rhsusf_spcs_ocp_rifleman", "rhsusf_ach_helmet_headset_ocp", "rhsusf_oakley_goggles_blk"};
		backpack = "";
		uniformClass = "rhs_uniform_cu_ocp";
	};
		class RB11 { 
		displayName = "M4B2 - OCP";
		role = "Assault";

		weapons[] = {"rhs_weap_m4a1_blockII_M203_bk", "rhsusf_weap_m9", "Binocular", "Throw", "Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "MiniGrenade", "MiniGrenade", "MiniGrenade", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_M441_HE", "rhsusf_mag_15Rnd_9x19_JHP"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhsusf_ANPVS_15", "", "", "rhsusf_acc_ACOG_RMR", "", "", "", "", "", "", "", "", "", "rhsusf_spcs_ocp_rifleman", "rhsusf_ach_helmet_headset_ocp", "rhsusf_oakley_goggles_blk"};
		backpack = "";
		uniformClass = "rhs_uniform_cu_ocp";
	};
		class RB12 { 
		displayName = "M4A1 - M81";
		role = "Assault";

		weapons[] = {"rhs_weap_m4a1_carryhandle_m203S", "rhsusf_weap_m9", "Binocular", "Throw", "Put"};
		magazines[] = {"rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "MiniGrenade", "MiniGrenade", "MiniGrenade", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_M441_HE", "rhsusf_mag_15Rnd_9x19_JHP"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhsusf_ANPVS_15", "", "", "rhsusf_acc_ACOG_RMR", "", "", "", "", "", "", "", "", "", "V_PlateCarrier2_rgr", "rhsusf_ach_helmet_M81", "rhsusf_oakley_goggles_blk"};
		backpack = "";
		uniformClass = "rhs_uniform_g3_m81";
	};

		class RB13 { 
		displayName = "M4B2 - M81";
		role = "Assault";

		weapons[] = {"rhs_weap_m4a1_blockII_M203_bk", "rhsusf_weap_m9", "Binocular", "Throw", "Put"};
		magazines[] = {"rhs_mag_M441_HE", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "MiniGrenade", "MiniGrenade", "MiniGrenade", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_M441_HE", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_M441_HE", "rhsusf_mag_15Rnd_9x19_JHP"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhsusf_ANPVS_15", "", "", "rhsusf_acc_ACOG_RMR", "", "", "", "", "", "", "", "", "", "V_PlateCarrier2_rgr", "rhsusf_ach_helmet_M81", "rhsusf_oakley_goggles_blk"};
		backpack = "";
		uniformClass = "rhs_uniform_g3_m81";
	};

		//SpecOps
		class RB2 { 
		displayName = "MP7 - OCP";
		role = "SpecOps";

		weapons[] = {"rhsusf_weap_MP7A2", "rhsusf_weap_glock17g4", "Binocular", "Throw", "Put"};
		magazines[] = {"rhsusf_mag_17Rnd_9x19_JHP", "rhsusf_mag_17Rnd_9x19_JHP", "rhsusf_mag_40Rnd_46x30_JHP", "rhsusf_mag_40Rnd_46x30_JHP", "rhsusf_mag_40Rnd_46x30_JHP", "rhsusf_mag_40Rnd_46x30_JHP", "rhsusf_mag_40Rnd_46x30_JHP", "rhsusf_mag_40Rnd_46x30_JHP", "rhsusf_mag_40Rnd_46x30_JHP", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "rhsusf_mag_40Rnd_46x30_JHP", "rhsusf_mag_17Rnd_9x19_JHP"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhsusf_ANPVS_15", "rhsusf_acc_rotex_mp7", "rhsusf_acc_anpeq15side_bk", "optic_Aco_smg", "", "", "", "", "", "rhsusf_acc_omega9k", "", "", "", "rhsusf_spcs_ocp_rifleman", "rhsusf_opscore_bk_pelt", "rhs_googles_yellow"};
		backpack = "B_AssaultPack_blk";
		uniformClass = "rhs_uniform_cu_ocp";
	};
		class RB21 { 
		displayName = "MP7 - M81";
		role = "SpecOps";

		weapons[] = {"rhsusf_weap_MP7A2", "rhsusf_weap_glock17g4", "Binocular", "Throw", "Put"};
		magazines[] = {"rhsusf_mag_17Rnd_9x19_JHP", "rhsusf_mag_17Rnd_9x19_JHP", "rhsusf_mag_40Rnd_46x30_JHP", "rhsusf_mag_40Rnd_46x30_JHP", "rhsusf_mag_40Rnd_46x30_JHP", "rhsusf_mag_40Rnd_46x30_JHP", "rhsusf_mag_40Rnd_46x30_JHP", "rhsusf_mag_40Rnd_46x30_JHP", "rhsusf_mag_40Rnd_46x30_JHP", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "rhsusf_mag_40Rnd_46x30_JHP", "rhsusf_mag_17Rnd_9x19_JHP"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhsusf_ANPVS_15", "rhsusf_acc_rotex_mp7", "rhsusf_acc_anpeq15side_bk", "optic_Aco_smg", "", "", "", "", "", "rhsusf_acc_omega9k", "", "", "", "V_PlateCarrier1_rgr", "rhsusf_protech_helmet_rhino", "rhs_googles_clear"};
		backpack = "B_AssaultPack_blk";
		uniformClass = "rhs_uniform_g3_m81";
	};

		//Support
		class RB3 { 
		displayName = "M249 - OCP";
		role = "Support";

		weapons[] = {"rhs_weap_m249_pip", "rhsusf_weap_m9", "Binocular", "Throw", "Put"};
		magazines[] = {"rhs_200rnd_556x45_M_SAW", "rhs_200rnd_556x45_M_SAW", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "HandGrenade", "HandGrenade", "rhs_200rnd_556x45_M_SAW", "rhsusf_mag_15Rnd_9x19_JHP"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhsusf_ANPVS_15", "", "", "rhsusf_acc_eotech_552", "", "", "", "", "", "", "", "", "", "rhsusf_spcs_ocp_rifleman", "rhsusf_ach_helmet_ocp", "rhsusf_oakley_goggles_ylw"};
		backpack = "";
		uniformClass = "rhs_uniform_cu_ocp";
	};
		class RB31 { 
		displayName = "M240B - OCP";
		role = "Support";

		weapons[] = {"rhs_weap_m240B", "rhsusf_weap_m9", "Binocular", "Throw", "Put"};
		magazines[] = {"rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "HandGrenade", "HandGrenade", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_100Rnd_762x51_m62_tracer", "rhsusf_100Rnd_762x51_m62_tracer", "rhsusf_100Rnd_762x51_m62_tracer", "rhsusf_100Rnd_762x51_m62_tracer", "rhsusf_mag_15Rnd_9x19_JHP"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhsusf_ANPVS_15", "", "rhsusf_acc_anpeq15side_bk", "rhsusf_acc_ELCAN", "", "", "", "", "", "", "", "", "", "rhsusf_spcs_ocp_rifleman", "rhsusf_ach_helmet_ocp", "rhsusf_oakley_goggles_ylw"};
		backpack = "";
		uniformClass = "rhs_uniform_cu_ocp";
	};
		class RB32 { 
		displayName = "M249 - M81";
		role = "Support";

		weapons[] = {"rhs_weap_m249_pip", "rhsusf_weap_m9", "Binocular", "Throw", "Put"};
		magazines[] = {"rhs_m136_hedp_mag", "rhs_200rnd_556x45_M_SAW", "rhs_200rnd_556x45_M_SAW", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "HandGrenade", "HandGrenade", "rhs_200rnd_556x45_M_SAW", "rhsusf_mag_15Rnd_9x19_JHP"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhsusf_ANPVS_15", "", "", "rhsusf_acc_eotech_552", "", "", "", "", "", "", "", "", "", "V_PlateCarrier2_rgr", "rhsusf_ach_helmet_M81", "rhsusf_oakley_goggles_ylw"};
		backpack = "";
		uniformClass = "rhs_uniform_g3_m81";
	};
		class RB33 { 
		displayName = "M240B - M81";
		role = "Support";

		weapons[] = {"rhs_weap_m240B", "rhsusf_weap_m9", "Binocular", "Throw", "Put"};
		magazines[] = {"rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "HandGrenade", "HandGrenade", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_100Rnd_762x51_m62_tracer", "rhsusf_100Rnd_762x51_m62_tracer", "rhsusf_100Rnd_762x51_m62_tracer", "rhsusf_100Rnd_762x51_m62_tracer", "rhsusf_mag_15Rnd_9x19_JHP"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhsusf_ANPVS_15", "", "rhsusf_acc_anpeq15side_bk", "rhsusf_acc_ELCAN", "", "", "", "", "", "", "", "", "", "V_PlateCarrier2_rgr", "rhsusf_ach_helmet_M81", "rhsusf_oakley_goggles_ylw"};
		backpack = "";
		uniformClass = "rhs_uniform_g3_m81";
	};

		//Engineer
		class RB4 { 
		displayName = "M590 - OCP";
		role = "Engineer";

		weapons[] = {"rhs_weap_M590_8RD", "rhsusf_weap_m9", "rhs_weap_M136_hedp", "Binocular", "Throw", "Put"};
		magazines[] = {"rhs_m136_hedp_mag", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "MiniGrenade", "MiniGrenade", "APERSBoundingMine_Range_Mag", "APERSBoundingMine_Range_Mag", "rhsusf_8Rnd_00Buck", "rhsusf_mag_15Rnd_9x19_JHP"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhsusf_ANPVS_15", "", "", "", "", "", "", "", "", "", "", "", "", "rhsusf_spcs_ocp_rifleman", "rhsusf_ach_helmet_headset_ocp", "rhsusf_oakley_goggles_clr"};
		backpack = "";
		uniformClass = "rhs_uniform_cu_ocp";
	};
		class RB41 { 
		displayName = "M4 - OCP";
		role = "Engineer";

		weapons[] = {"rhs_weap_m4_carryhandle_mstock", "rhsusf_weap_m9", "rhs_weap_M136_hedp", "Binocular", "Throw", "Put"};
		magazines[] = {"rhs_m136_hedp_mag", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "MiniGrenade", "MiniGrenade", "APERSBoundingMine_Range_Mag", "APERSBoundingMine_Range_Mag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhsusf_mag_15Rnd_9x19_JHP"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhsusf_ANPVS_15", "", "", "rhsusf_acc_eotech_552", "", "", "", "", "", "", "", "", "", "rhsusf_spcs_ocp_rifleman", "rhsusf_ach_helmet_headset_ocp", "rhsusf_oakley_goggles_clr"};
		backpack = "";
		uniformClass = "rhs_uniform_cu_ocp";
	};
		class RB42 { 
		displayName = "M590 - M81";
		role = "Engineer";

		weapons[] = {"rhs_weap_M590_8RD", "rhsusf_weap_m9", "rhs_weap_M136_hedp", "Binocular", "Throw", "Put"};
		magazines[] = {"rhs_m136_hedp_mag", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_00Buck", "APERSBoundingMine_Range_Mag", "APERSBoundingMine_Range_Mag", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_8Rnd_00Buck", "rhs_m136_hedp_mag", "rhsusf_mag_15Rnd_9x19_JHP"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhsusf_ANPVS_15", "", "", "", "", "", "", "", "", "", "", "", "", "V_PlateCarrier2_rgr", "rhsusf_ach_helmet_M81", "rhsusf_oakley_goggles_clr"};
		backpack = "";
		uniformClass = "rhs_uniform_g3_m81";
	};
		class RB43 { 
		displayName = "M4 - M81";
		role = "Engineer";

		weapons[] = {"rhs_weap_m4_mstock", "rhsusf_weap_m9", "rhs_weap_M136_hedp", "Binocular", "Throw", "Put"};
		magazines[] = {"rhs_m136_hedp_mag", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "APERSBoundingMine_Range_Mag", "APERSBoundingMine_Range_Mag","rhs_m136_hedp_mag", "rhsusf_mag_15Rnd_9x19_JHP"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhsusf_ANPVS_15", "", "", "rhsusf_acc_eotech_552", "", "", "", "", "", "", "", "", "", "V_PlateCarrier2_rgr", "rhsusf_ach_helmet_M81", "rhsusf_oakley_goggles_clr"};
		backpack = "";
		uniformClass = "rhs_uniform_g3_m81";
	};

		//DM
		class RB5 { 
		displayName = "Mk11 - OCP";
		role = "DM";

		weapons[] = {"rhs_weap_sr25", "Binocular", "rhsusf_weap_m1911a1", "Throw", "Put"};
		magazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "SmokeShell", "SmokeShell", "MiniGrenade", "MiniGrenade", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_mag_7x45acp_MHP"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhsusf_ANPVS_15", "", "rhsusf_acc_wmx_bk", "rhsusf_acc_ACOG_RMR", "", "", "", "", "", "", "", "", "", "rhsusf_spcs_ocp", "rhsusf_bowman_cap", ""};
		backpack = "";
		uniformClass = "rhs_uniform_cu_ocp";
	};
		class RB51 { 
		displayName = "M40A1 - OCP";
		role = "DM";

		weapons[] = {"rhs_weap_m40a5", "rhsusf_weap_m9", "Binocular", "Throw", "Put"};
		magazines[] = {"rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_mag_15Rnd_9x19_JHP"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhsusf_ANPVS_15", "", "rhsusf_acc_anpeq15side_bk", "rhsusf_acc_ACOG_RMR", "", "", "", "", "", "", "", "", "", "rhsusf_spcs_ocp", "rhsusf_bowman_cap", ""};
		backpack = "";
		uniformClass = "rhs_uniform_cu_ocp";
	};
		class RB52 { 
		displayName = "Mk11 - M81";
		role = "DM";

		weapons[] = {"rhs_weap_sr25", "rhsusf_weap_m1911a1", "Binocular", "Throw", "Put"};
		magazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "MiniGrenade", "MiniGrenade", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_mag_7x45acp_MHP"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhsusf_ANPVS_15", "", "rhsusf_acc_wmx_bk", "rhsusf_acc_ACOG_RMR", "", "", "", "", "", "", "", "", "", "V_PlateCarrier1_rgr", "rhsusf_bowman_cap", ""};
		backpack = "";
		uniformClass = "rhs_uniform_g3_m81";
	};
		class RB53 { 
		displayName = "M40A1 - M81";
		role = "DM";

		weapons[] = {"rhs_weap_m40a5", "rhsusf_weap_m1911a1", "Binocular", "Throw", "Put"};
		magazines[] = {"rhsusf_mag_7x45acp_MHP", "rhsusf_mag_7x45acp_MHP", "MiniGrenade", "MiniGrenade", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_mag_7x45acp_MHP"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhsusf_ANPVS_15", "", "", "rhsusf_acc_ACOG_RMR", "", "", "", "", "", "", "", "", "", "V_PlateCarrier1_rgr", "rhsusf_bowman_cap", ""};
		backpack = "";
		uniformClass = "rhs_uniform_g3_m81";
	};

		//Recon
		class RB6 { 
		displayName = "M107";
		role = "Recon";

		weapons[] = {"rhs_weap_M107", "rhsusf_weap_glock17g4", "Binocular", "Throw", "Put"};
		magazines[] = {"rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_17Rnd_9x19_JHP", "rhsusf_mag_17Rnd_9x19_JHP", "ClaymoreDirectionalMine_Remote_Mag", "ClaymoreDirectionalMine_Remote_Mag", "SmokeShell", "SmokeShell", "rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_17Rnd_9x19_JHP"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhsusf_ANPVS_15", "", "", "rhsusf_acc_premier", "", "", "", "", "", "rhsusf_acc_omega9k", "", "", "", "V_Chestrig_rgr", "", ""};
		backpack = "B_AssaultPack_rgr";
		uniformClass = "U_B_FullGhillie_sard";
	};
		class RB61 { 
		displayName = "M2010";
		role = "Recon";

		weapons[] = {"rhs_weap_XM2010", "rhsusf_weap_glock17g4", "Binocular", "Throw", "Put"};
		magazines[] = {"rhsusf_mag_17Rnd_9x19_JHP", "rhsusf_mag_17Rnd_9x19_JHP", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_5Rnd_300winmag_xm2010", "SmokeShell", "SmokeShell", "ClaymoreDirectionalMine_Remote_Mag", "ClaymoreDirectionalMine_Remote_Mag", "rhsusf_5Rnd_300winmag_xm2010", "rhsusf_mag_17Rnd_9x19_JHP"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhsusf_ANPVS_15", "", "", "rhsusf_acc_M8541", "rhsusf_acc_harris_bipod", "", "", "", "", "rhsusf_acc_omega9k", "", "", "", "V_Chestrig_rgr", "", ""};
		backpack = "";
		uniformClass = "U_B_FullGhillie_sard";
	};


	//OpFor
		//Assault
		class RO1 { 
		displayName = "AK74M";
		role = "Assault";

		weapons[] = {"rhs_weap_ak74m_gp25_npz", "rhs_weap_pya", "Binocular", "Throw", "Put"};
		magazines[] = {"rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_VOG25", "rhs_VOG25", "rhs_mag_rgn", "rhs_mag_rgn", "rhs_mag_rgn", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_VOG25", "rhs_mag_9x19_17"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhs_1PN138", "rhs_acc_dtk", "", "optic_MRCO", "", "", "", "", "", "", "", "", "", "rhs_6b23_6sh116", "rhs_6b47", "rhsusf_oakley_goggles_blk"};
		backpack = "";
		uniformClass = "rhs_uniform_emr_patchless";
	};
		class RO11 { 
		displayName = "AK74";
		role = "Assault";

		weapons[] = {"rhs_weap_pya", "Binocular", "rhs_weap_ak74n_gp25", "Throw", "Put"};
		magazines[] = {"rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_rgn", "rhs_mag_rgn", "rhs_mag_rgn", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_VOG25", "rhs_VOG25", "rhs_VOG25", "rhs_30Rnd_545x39_AK", "rhs_mag_9x19_17"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhs_1PN138", "rhs_acc_dtk1983", "", "", "", "", "", "", "", "", "", "", "", "rhs_6b23_6sh116", "rhs_6b47", "rhsusf_oakley_goggles_blk"};
		backpack = "";
		uniformClass = "rhs_uniform_emr_patchless";
	};
		//SpecOps
		class RO2 { 
		displayName = "AS Val";
		role = "SpecOps";

		weapons[] = {"rhs_weap_asval_grip_npz", "Binocular", "hgun_Rook40_F", "Throw", "Put"};
		magazines[] = {"rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "rhs_mag_rgn", "rhs_mag_rgn", "SmokeShell", "SmokeShell", "rhs_20rnd_9x39mm_SP6"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhs_1PN138", "", "rhs_acc_perst1ik_ris", "rhs_acc_ekp8_18", "", "", "", "", "", "muzzle_snds_L", "", "", "", "rhs_6b23_digi_6sh92_spetsnaz2", "rhs_6b47_bala", "rhsusf_oakley_goggles_clr"};
		backpack = "rhs_assault_umbts";
		uniformClass = "rhs_uniform_emr_patchless";
	};
		class RO21 { 
		displayName = "AK74U";
		role = "SpecOps";

		weapons[] = {"rhs_weap_aks74un", "Binocular", "Throw", "Put"};
		magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "rhs_30Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_AK", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "rhs_mag_rgn", "rhs_mag_rgn", "SmokeShell", "SmokeShell", "rhs_30Rnd_545x39_7U1_AK", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhs_1PN138", "rhs_acc_pbs4", "", "rhs_acc_pkas", "", "", "", "", "", "muzzle_snds_L", "", "", "", "rhs_6b23_digi_6sh92_spetsnaz2", "rhs_6b47_bala", "rhsusf_oakley_goggles_clr"};
		backpack = "rhs_assault_umbts";
		uniformClass = "rhs_uniform_emr_patchless";
	};
		//Support
		class RO3 { 
		displayName = "PKP";
		role = "Support";

		weapons[] = {"rhs_weap_pkp", "Binocular", "hgun_Rook40_F", "Throw", "Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR", "rhs_mag_rgo", "rhs_mag_rgo", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhs_1PN138", "", "", "", "", "", "", "", "", "", "", "", "", "rhs_6b23_digi_6sh92", "rhs_6b47", "rhsusf_oakley_goggles_ylw"};
		backpack = "rhs_sidor";
		uniformClass = "rhs_uniform_emr_patchless";
	};
		class RO31 { 
		displayName = "PKM";
		role = "Support";

		weapons[] = {"rhs_weap_pkm", "Binocular", "Throw", "Put"};
		magazines[] = {"rhs_mag_rgo", "rhs_mag_rgo", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhs_1PN138", "", "", "", "", "", "", "", "", "", "", "", "", "rhs_6b23_digi_6sh92", "rhs_6b47", "rhsusf_oakley_goggles_ylw"};
		backpack = "rhs_sidor";
		uniformClass = "rhs_uniform_emr_patchless";
	};
		//Engineer
		class RO4 { 
		displayName = "AKMS";
		role = "Engineer";

		weapons[] = {"rhs_weap_akms", "rhs_weap_rpg26", "hgun_Rook40_F", "Throw", "Put"};
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_mag_rgn", "rhs_mag_rgn", "APERSBoundingMine_Range_Mag", "APERSBoundingMine_Range_Mag", "rhs_30Rnd_762x39mm", "rhs_rpg26_mag", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhs_1PN138", "Binocular", "rhs_acc_dtkakm", "", "", "", "", "", "", "", "", "", "", "", "rhs_6b23_6sh116", "rhs_6b47", "rhsusf_oakley_goggles_clr"};
		backpack = "rhs_assault_umbts";
		uniformClass = "rhs_uniform_emr_patchless";
	};
		//DM
		class RO5 { 
		displayName = "SVDM";
		role = "DM";

		weapons[] = {"rhs_weap_svdp", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
		magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "rhs_mag_rgn", "rhs_mag_rgn", "SmokeShell", "SmokeShell", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhs_1PN138", "", "", "rhs_acc_pso1m21_svd", "", "", "", "", "", "muzzle_snds_L", "", "", "", "rhs_6b23_6sh116", "rhs_beanie_green", ""};
		backpack = "";
		uniformClass = "rhs_uniform_emr_patchless";
	};
		class RO51 { 
		displayName = "VSS";
		role = "DM";

		weapons[] = {"rhs_weap_vss_grip", "Binocular", "Throw", "Put"};
		magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "rhs_mag_rgn", "rhs_mag_rgn", "SmokeShell", "SmokeShell", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "rhs_20rnd_9x39mm_SP6", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "rhs_1PN138", "", "", "rhs_acc_1p29", "", "", "", "", "", "muzzle_snds_L", "", "", "", "rhs_6b23_6sh116", "rhs_beanie_green", ""};
		backpack = "";
		uniformClass = "rhs_uniform_emr_patchless";
	};
		//Recon
		class RO6 { 
		displayName = "T5000";
		role = "Recon";

		weapons[] = {"rhs_weap_t5000", "Binocular", "Throw", "Put"};
		magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShell", "ClaymoreDirectionalMine_Remote_Mag", "ClaymoreDirectionalMine_Remote_Mag", "rhs_5Rnd_338lapua_t5000", "rhs_5Rnd_338lapua_t5000", "rhs_5Rnd_338lapua_t5000", "rhs_5Rnd_338lapua_t5000", "rhs_5Rnd_338lapua_t5000", "rhs_5Rnd_338lapua_t5000", "rhs_5Rnd_338lapua_t5000", "rhs_5Rnd_338lapua_t5000", "rhs_5Rnd_338lapua_t5000", "16Rnd_9x21_Mag"};
		items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit", "FirstAidKit"};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGoggles_OPFOR", "", "", "rhs_acc_dh520x56", "rhs_acc_harris_swivel", "", "", "", "", "muzzle_snds_L", "", "", "", "V_HarnessO_brn", "", ""};
		backpack = "";
		uniformClass = "U_O_FullGhillie_ard";
	};

};
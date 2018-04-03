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

				
				backpack = "";
				weapons[] = {"arifle_MX_GL_Black_F","hgun_P07_F","Binocular","Throw","Put"};
				magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","MiniGrenade"};
				items[] = {"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
				linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetSpecB_snakeskin","G_Combat","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles", "optic_hamr"};
				uniformClass = "U_B_CombatUniform_mcam";
			};

		//SpecOps
			class VB2 {
				displayName = "Vanilla";
				role = "SpecOps";

				
				backpack = "B_AssaultPack_rgr";
				weapons[] = {"hgun_Pistol_heavy_01_F","SMG_02_F","Binocular","Throw","Put"};
				magazines[] = {"11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag"};
				items[] = {"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
				linkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB_light","G_Lowprofile","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles", "optic_aco_smg", "acc_pointer_IR", "muzzle_snds_L", "muzzle_snds_acp"};
				uniformClass = "U_B_CombatUniform_mcam_tshirt";
			};

		//Support
			class VB3 {
				displayName = "Vanilla";
				role = "Support";

				
				backpack = "";
				weapons[] = {"LMG_Mk200_F","Binocular","hgun_P07_F","Throw","Put"};
				magazines[] = {"200Rnd_65x39_cased_Box_Tracer","200Rnd_65x39_cased_Box_Tracer","HandGrenade","HandGrenade","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
				items[] = {"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
				linkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB_grass","G_Combat","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles", "acc_pointer_IR"};
				uniformClass = "U_B_CombatUniform_mcam";
			};

		//Engineer
			class VB4 {
				displayName = "Vanilla";
				role = "Engineer";

				
				backpack = "";
				weapons[] = {"hgun_P07_F","launch_NLAW_F","arifle_MXC_Black_F","Binocular","Throw","Put"};
				magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","APERSBoundingMine_Range_Mag","APERSBoundingMine_Range_Mag"};
				items[] = {"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
				linkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetSpecB_snakeskin","G_Lowprofile","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles", "optic_aco"};
				uniformClass = "U_B_CombatUniform_mcam";
			};
		//Marksman
			class VB5 {
				displayName = "Vanilla";
				role = "Marksman";

				
				backpack = "";
				weapons[] = {"srifle_EBR_F","hgun_Pistol_heavy_01_F","Binocular","Throw","Put"};
				magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShell","MiniGrenade","MiniGrenade","20Rnd_762x51_Mag"};
				items[] = {"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
				linkedItems[] = {"V_PlateCarrier1_rgr","H_Cap_oli_hs","","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles", "optic_dms","acc_flashlight"};
				uniformClass = "U_B_CombatUniform_mcam";
			};

		//Recon
			class VB6 {
				displayName = "Vanilla";
				role = "Recon";

				
				backpack = "";
				weapons[] = {"hgun_P07_F","srifle_LRR_F","Binocular","Throw","Put"};
				magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","7Rnd_408_Mag","7Rnd_408_Mag","ClaymoreDirectionalMine_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","SmokeShell","SmokeShell","7Rnd_408_Mag","7Rnd_408_Mag"};
				items[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
				linkedItems[] = {"V_Chestrig_rgr","","","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles", "optic_dms", "muzzle_snds_L"};
				uniformClass = "U_B_FullGhillie_sard";
			};

	//OpFor
		//Assault
			class VO1 {
				displayName = "Vanilla";
				role = "Assault";

				
				backpack = "";
				weapons[] = {"arifle_Katiba_GL_F","hgun_Rook40_F","Binocular","Throw","Put"};
				magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","MiniGrenade","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
				items[] = {"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
				linkedItems[] = {"V_HarnessOGL_brn","H_HelmetLeaderO_ocamo","","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles_OPFOR", "optic_arco"};
				uniformClass = "U_O_CombatUniform_ocamo";
			};

		//SpecOps
			class VO2 {
				displayName = "Vanilla";
				role = "SpecOps";

				
				backpack = "B_AssaultPack_ocamo";
				weapons[] = {"SMG_01_F","hgun_Rook40_F","Binocular","Throw","Put"};
				magazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","30Rnd_45ACP_Mag_SMG_01","16Rnd_9x21_Mag","16Rnd_9x21_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag"};
				items[] = {"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
				linkedItems[] = {"V_HarnessOGL_brn","H_HelmetO_ocamo","","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles_OPFOR", "optic_aco_grn_smg", "acc_flashlight_smg_01", "muzzle_snds_acp", "muzzle_snds_L"};
				uniformClass = "U_O_CombatUniform_ocamo";
			};

		//Support
			class VO3 {
				displayName = "Vanilla";
				role = "Support";

				
				backpack = "";
				weapons[] = {"hgun_Rook40_F","Binocular","LMG_Zafir_F","Throw","Put"};
				magazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade"};
				items[] = {"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
				linkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles_OPFOR", "acc_pointer_IR"};
				uniformClass = "U_O_CombatUniform_ocamo";
			};

		//Engineer
			class VO4 {
				displayName = "Vanilla";
				role = "Engineer";

				backpack = "";
				weapons[] = {"hgun_Rook40_F","arifle_Katiba_C_F","launch_RPG32_F","Binocular","Throw","Put"};
				magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","APERSBoundingMine_Range_Mag","APERSBoundingMine_Range_Mag"};
				items[] = {"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
				linkedItems[] = {"V_HarnessO_brn","H_HelmetLeaderO_ocamo","","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles_OPFOR", "optic_aco_grn"};
				uniformClass = "U_O_CombatUniform_ocamo";
			};

		//Marksman
			class VO5 {
				displayName = "Vanilla";
				role = "Engineer";

				backpack = "";
				weapons[] = {"srifle_DMR_01_F","hgun_Rook40_F","Binocular","Throw","Put"};
				magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag"};
				items[] = {"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
				linkedItems[] = {"V_HarnessO_brn","H_MilCap_ocamo","","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles_OPFOR", "optic_dms"};
				uniformClass = "U_O_CombatUniform_ocamo";
			};

		//Recon
			class VO6 {
				displayName = "Vanilla";
				role = "Recon";

				backpack = "";
				weapons[] = {"srifle_GM6_F","hgun_Rook40_F","Binocular","Throw","Put"};
				magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","ClaymoreDirectionalMine_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag"};
				items[] = {"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
				linkedItems[] = {"V_HarnessO_brn","","","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles_OPFOR", "optic_dms", "muzzle_snds_L"};
				uniformClass = "U_O_FullGhillie_ard";
			};

//DLC
	//BluFor


	//OpFor
	
//Pistols Only
	//BluFor

	
	//OpFor

};
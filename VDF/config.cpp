#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

class CfgPatches {
	class VinnishDefenceForce {
	    author = "WestDevs and Swat";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {};
};

// Faction Config
class cfgFactionClasses {
    // Faction Calling Name
	class VINNISH_FACTION
    {
		displayName = "Vinnish Defense Force";
		priority = 1;
	    side = 1;
    };
};

class CfgVehicleClasses {
    class VDF_Car
    {
        displayName = "Cars";
        priority = 1;
    };
    class VDF_Heli
    {
        displayName = "Helicopters";
        priority = 3;
    };
    class VDF_APC
    {
        displayName = "APCs";
        priority = 2;
    };
    class VDF_Tank
    {
        displayName = "Tanks";
        priority = 5;
    };
    class VDF_Plane
    {
        displayName = "Planes";
        priority = 4;
    };
};

// Vehicle Config
// External class references
class CfgVehicles {
//Cars
	class CUP_B_MTVR_USA;
	class CUP_B_MTVR_Ammo_USA;
	class CUP_B_MTVR_Refuel_USA;
	class CUP_B_MTVR_Repair_USA;
	class CUP_B_HMMWV_M2_USA;
	class CUP_B_HMMWV_MK19_USA;
	class CUP_B_HMMWV_Unarmed_USA;
	class CUP_B_HMMWV_Avenger_USA;
	class CUP_B_HMMWV_Transport_USA;
	class CUP_B_HMMWV_Ambulance_USA;
//APCs
	class CUP_B_M163_USA;
	class I_APC_tracked_03_cannon_F;
	class B_AFV_Wheeled_01_cannon_F;
	class CUP_B_M113_USA;
	class CUP_B_M113_Med_USA;
//Tanks
	class I_MBT_03_cannon_F;
	class CUP_B_M60A3_USMC;
//Helis
    class CUP_I_UH1H_armed_TK_GUE;
    class CUP_I_UH1H_TK_GUE;
    class CUP_I_MH6M_ION;
    class CUP_I_Mi24_D_Dynamic_ION;
    class CUP_B_UH60M_US;
//Planes
    class FIR_F16C;
    class CUP_I_C130J_AAF;
//Clothing
    class CUP_U_B_BDUv2_DCU_US;
    class CUP_B_USArmy_Soldier_BDUv2_DCU_US;
    class CUP_B_USArmy_Soldier_BDUv2_gloves_DCU_US;
    class CUP_B_USArmy_Soldier_BDUv2_roll2_DCU_US;
    class CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_DCU_US;
    class CUP_B_USArmy_Soldier_BDUv2_roll_DCU_US;
    class CUP_B_USArmy_Soldier_BDUv2_roll_gloves_DCU_US;

    // Cars
	class car_GMTVR : CUP_B_MTVR_USA {
		displayName = "MTVR (Forest)";
		faction = "VINNISH_FACTION";
		vehicleclass = "VDF_Car";
		side = TWest;
		crew = "B_Soldier_F";
		author = "WestDevs and Swat";
		hiddenSelections[] = {"camo1", "camo2", "camo4"};
		hiddenSelectionsTextures[] = {"\VDF\data\cars\MTVR\green_mtvr_fuel_co.paa", "\VDF\data\cars\MTVR\green_mtvr_tarp_co.paa", "\VDF\data\cars\MTVR\green_mtvr_tarp_co.paa"};
	};

	class car_TMTVR : CUP_B_MTVR_USA {
		displayName = "MTVR (Desert)";
		faction = "VINNISH_FACTION";
		vehicleclass = "VDF_Car";
		side = TWest;
		crew = "B_Soldier_F";
		author = "WestDevs and Swat";
		hiddenSelections[] = {"camo1", "camo2", "camo4"};
		hiddenSelectionsTextures[] = {"\VDF\data\cars\MTVR\tan_mtvr_body_co.paa", "\VDF\data\cars\MTVR\tan_mtvr_body_co.paa", "\VDF\data\cars\MTVR\tan_mtvr_tarp_co.paa"};
	};
	
	class car_GMTVRA : CUP_B_MTVR_Ammo_USA {
		displayName = "MTVR Ammo (Forest)";
		faction = "VINNISH_FACTION";
		vehicleclass = "VDF_Car";
		side = TWest;
		crew = "B_Soldier_F";
		author = "WestDevs and Swat";
		hiddenSelections[] = {"camo1", "camo4", "camo2"};
		hiddenSelectionsTextures[] = {"\VDF\data\cars\MTVR\green_mtvr_fuel_co.paa", "\VDF\data\cars\MTVR\green_mtvr_body_co.paa", "\VDF\data\cars\MTVR\green_mtvr_fuel_co.paa"};
	};
	
	class car_TMTVRA : CUP_B_MTVR_Ammo_USA {
		displayName = "MTVR Ammo (Desert)";
		faction = "VINNISH_FACTION";
		vehicleclass = "VDF_Car";
		side = TWest;
		crew = "B_Soldier_F";
		author = "WestDevs and Swat";
		hiddenSelections[] = {"camo1", "camo4", "camo2"};
		hiddenSelectionsTextures[] = {"\VDF\data\cars\MTVR\tan_mtvr_body_co.paa", "\VDF\data\cars\MTVR\tan_mtvr_tarp_co.paa", "\VDF\data\cars\MTVR\tan_mtvr_body_co.paa"};
	};

	class car_GMTVRR : CUP_B_MTVR_Refuel_USA {
		displayName = "MTVR Refuel (Forest)";
		faction = "VINNISH_FACTION";
		vehicleclass = "VDF_Car";
		side = TWest;
		crew = "B_Soldier_F";
		author = "WestDevs and Swat";
		hiddenSelections[] = {"camo1", "camo2", "camo4"};
		hiddenSelectionsTextures[] = {"\VDF\data\cars\MTVR\green_mtvr_fuel_co.paa", "\VDF\data\cars\MTVR\green_mtvr_tarp_co.paa", "\VDF\data\cars\MTVR\green_mtvr_fuel_co.paa"};
	};
	
	class car_TMTVRR : CUP_B_MTVR_Refuel_USA {
		displayName = "MTVR Refuel (Desert)";
		faction = "VINNISH_FACTION";
		vehicleclass = "VDF_Car";
		side = TWest;
		crew = "B_Soldier_F";
		author = "WestDevs and Swat";
		hiddenSelections[] = {"camo1", "camo2", "camo4"};
		hiddenSelectionsTextures[] = {"\VDF\data\cars\MTVR\tan_mtvr_body_co.paa", "\VDF\data\cars\MTVR\tan_mtvr_tarp_co.paa", "\VDF\data\cars\MTVR\tan_mtvr_fuel_co.paa"};
	};

	class car_GMTVRRP : CUP_B_MTVR_Repair_USA {
		displayName = "MTVR Repair (Forest)";
		faction = "VINNISH_FACTION";
		vehicleclass = "VDF_Car";
		side = TWest;
		crew = "B_Soldier_F";
		author = "WestDevs and Swat";
		hiddenSelections[] = {"camo1", "camo2", "camo4"};
		hiddenSelectionsTextures[] = {"\VDF\data\cars\MTVR\green_mtvr_fuel_co.paa", "\VDF\data\cars\MTVR\green_mtvr_tarp_co.paa", "\VDF\data\cars\MTVR\green_mtvr_repair_co.paa"};
	};

	class car_TMTVRRP : CUP_B_MTVR_Repair_USA {
		displayName = "MTVR Repair (Desert)";
		faction = "VINNISH_FACTION";
		vehicleclass = "VDF_Car";
		side = TWest;
		crew = "B_Soldier_F";
		author = "WestDevs and Swat";
		hiddenSelections[] = {"camo1", "camo2", "camo4"};
		hiddenSelectionsTextures[] = {"\VDF\data\cars\MTVR\tan_mtvr_body_co.paa", "\VDF\data\cars\MTVR\tan_mtvr_tarp_co.paa", "\VDF\data\cars\MTVR\tan_mtvr_repair_co.paa"};
	};

 	class car_GHMMWVM2 : CUP_B_HMMWV_M2_USA {
 		displayName = "HMMWV M2 (Forest)";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_Car";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1", "camo2"};
 		hiddenSelectionsTextures[] = {"\VDF\data\cars\HMMWV\green_HMMWV.paa", "\data\cars\HMMWV\green_HMMWV_2.paa"};
 	};

 	class car_THMMWVM2 : CUP_B_HMMWV_M2_USA {
 		displayName = "HMMWV M2 (Desert)";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_Car";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1", "camo2"};
 		hiddenSelectionsTextures[] = {"\VDF\data\cars\HMMWV\tan_HMMWV.paa", "\data\cars\HMMWV\tan_HMMWV_2.paa"};
 	};

 	class car_GHMMWVMK19 : CUP_B_HMMWV_MK19_USA {
 		displayName = "HMMWV Mk19 (Forest)";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_Car";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1", "camo2"};
 		hiddenSelectionsTextures[] = {"\VDF\data\cars\HMMWV\green_HMMWV.paa", "\data\cars\HMMWV\green_HMMWV_2.paa"};
 	};

 	class car_THMMWVMK19 : CUP_B_HMMWV_MK19_USA {
 		displayName = "HMMWV Mk19 (Desert)";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_Car";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1", "camo2"};
 		hiddenSelectionsTextures[] = {"\VDF\data\cars\HMMWV\tan_HMMWV.paa", "\data\cars\HMMWV\tan_HMMWV_2.paa"};
 	};

 	class car_GHMMWVAM : CUP_B_HMMWV_Ambulance_USA {
 		displayName = "HMMWV Ambulance (Forest)";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_Car";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1", "camo2"};
 		hiddenSelectionsTextures[] = {"\VDF\data\cars\HMMWV\green_HMMWV.paa", "\data\cars\HMMWV\tan_HMMWV_3.paa"};
 	};

  	class car_THMMWVAM : CUP_B_HMMWV_Ambulance_USA {
 		displayName = "HMMWV Ambulance (Desert)";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_Car";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1", "camo2"};
 		hiddenSelectionsTextures[] = {"\VDF\data\cars\HMMWV\tan_HMMWV.paa", "\data\cars\HMMWV\tan_HMMWV_3.paa"};
 	};

 	class car_GHMMWVUA : CUP_B_HMMWV_Unarmed_USA {
 		displayName = "HMMWV Unarmed (Forest)";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_Car";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1"};
 		hiddenSelectionsTextures[] = {"\VDF\data\cars\HMMWV\green_HMMWV.paa"};
 	};

 	class car_THMMWVUA : CUP_B_HMMWV_Unarmed_USA {
 		displayName = "HMMWV Unarmed (Desert)";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_Car";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1"};
 		hiddenSelectionsTextures[] = {"\VDF\data\cars\HMMWV\tan_HMMWV.paa"};
 	};

 	class car_THMMWVTP : CUP_B_HMMWV_Transport_USA {
 		displayName = "HMMWV Transport (Desert)";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_Car";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1", "camo2", "camo3"};
 		hiddenSelectionsTextures[] = {"\VDF\data\cars\HMMWV\tan_HMMWV.paa", "\VDF\data\cars\HMMWV\tan_HMMWV_2.paa", "\VDF\data\cars\HMMWV\tan_HMMWV_2.paa"};
 	};
// APC'S
 	class tank_M163G : CUP_B_M163_USA {
 		displayName = "M163A1 VADS (Forest)";
 		faction = "VINNISH_FACTION";
 		vehicleClass = "VDF_APC";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1", "camo2"};
 		hiddenSelectionsTextures[] = {"\VDF\data\apcs\M163A1\green_m163_vulcansp_01_co.paa", "\VDF\data\apcs\M163A1\green_m163_vulcansp_02_co.paa"};
 	};

 	class tank_M163T : CUP_B_M163_USA {
 		displayName = "M163A1 VADS (Desert)";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_APC";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1", "camo2"};
 		hiddenSelectionsTextures[] = {"\VDF\data\apcs\M163A1\tan_m163_vulcansp_01_co.paa", "\VDF\data\apcs\M163A1\tan_m163_vulcansp_02_co.paa"};
 	};

 	class tank_M113G : CUP_B_M113_USA {
 		displayName = "M113 (Forest)";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_APC";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1"};
 		hiddenSelectionsTextures[] = {"\VDF\data\apcs\M113\green_m113a3_01_co.paa"};
 	};

 	class tank_M113T : CUP_B_M113_USA {
 		displayName = "M113 (Desert)";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_APC";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1"};
 		hiddenSelectionsTextures[] = {"\VDF\data\apcs\M113\tan_m113a3_01_co.paa"};
 	};

 	class tank_M113MG : CUP_B_M113_Med_USA {
 		displayName = "M113 Ambulance (Forest)";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_APC";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1"};
 		hiddenSelectionsTextures[] = {"\VDF\data\apcs\M113\green_m113a3_01_co.paa"};
 	};

 	class tank_M113MT : CUP_B_M113_Med_USA {
 		displayName = "M113 Ambulance (Desert)";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_APC";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1"};
 		hiddenSelectionsTextures[] = {"\VDF\data\apcs\M113\tan_m113a3_01_co.paa"};
 	};


 	class tank_MORAG : I_APC_tracked_03_cannon_F {
 		displayName = "FV-720 Mora (Forest)";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_APC";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1", "camo2"};
 		hiddenSelectionsTextures[] = {"\VDF\data\apcs\Mora\green_APC_Tracked_03_Ext_INDP_CO.paa", "\VDF\data\apcs\Mora\green_APC_Tracked_03_Ext2_INDP_CO.paa"};
 	};

 	class tank_MORAT : I_APC_tracked_03_cannon_F {
 		displayName = "FV-720 Mora (Desert)";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_APC";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1", "camo2"};
 		hiddenSelectionsTextures[] = {"\VDF\data\apcs\Mora\tan_APC_Tracked_03_Ext_INDP_CO.paa", "\VDF\data\apcs\Mora\tan_APC_Tracked_03_Ext2_INDP_CO.paa"};
 	};
// Tanks

 	class tank_KUMAG : I_MBT_03_cannon_F {
 		displayName = "MBT-52 Kuma (Forest)";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_Tank";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1", "camo2", "camo3"};
 		hiddenSelectionsTextures[] = {"\VDF\data\tanks\Kuma\green_MBT_03_ext01_CO.paa", "\VDF\data\tanks\Kuma\green_MBT_03_ext02_CO.paa", "\VDF\data\tanks\Kuma\green_MBT_03_RCWS_CO.paa"};
 	};

 	class tank_KUMAT : I_MBT_03_cannon_F {
 		displayName = "MBT-52 Kuma (Desert)";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_Tank";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1", "camo2", "camo3"};
 		hiddenSelectionsTextures[] = {"\VDF\data\tanks\Kuma\tan_MBT_03_ext01_CO.paa", "\VDF\data\tanks\Kuma\tan_MBT_03_ext02_CO.paa", "\VDF\data\tanks\Kuma\tan_MBT_03_RCWS_CO.paa"};
 	};

 	class tank_M60A3G : CUP_B_M60A3_USMC {
 		displayName = "M60A3 (Forest)";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_Tank";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
 		hiddenSelectionsTextures[] = {"\VDF\data\tanks\M60A3\green_Body_UV_co.paa", "\VDF\data\tanks\M60A3\green_Tlt_UV_co.paa", "\VDF\data\tanks\M60A3\green_gun_mnt_co.paa", "\VDF\data\tanks\M60A3\green_M60_gun_co.paa"};
 	};

 	class tank_M60A3T : CUP_B_M60A3_USMC {
 		displayName = "M60A3 (Desert)";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_Tank";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
 		hiddenSelectionsTextures[] = {"\VDF\data\tanks\M60A3\tan_Body_UV_co.paa", "\VDF\data\tanks\M60A3\tan_Tlt_UV_co.paa", "\VDF\data\tanks\M60A3\tan_gun_mnt_co.paa", "\VDF\data\tanks\M60A3\tan_M60_gun_co.paa"};
 	};
//helis

 	class heli_MI24DF : CUP_I_Mi24_D_Dynamic_ION {
 		displayName = "Forsvaret MH-24D";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_Heli";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1", "camo2"};
 		hiddenSelectionsTextures[] = {"\VDF\data\helicopters\mi24d\mi24df_co.paa", "\VDF\data\helicopters\mi24d\mi24d2_co.paa"};
 	};

 	class heli_MI24DS : CUP_I_Mi24_D_Dynamic_ION {
 		displayName = "Søværnet MH-24D";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_Heli";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1", "camo2"};
 		hiddenSelectionsTextures[] = {"\VDF\data\helicopters\mi24d\mi24ds_co.paa", "\VDF\data\helicopters\mi24d\mi24d2_co.paa"};
 	};
//planes
 	class plane_F16CF : FIR_F16C {
 		displayName = "Forsvaret F16 Fighting Falcon";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_Heli";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1"};
 		hiddenSelectionsTextures[] = {"\VDF\data\planes\f16\fighter_falconf_co.paa"};
 	};

 	class plane_F16CS : FIR_F16C {
 		displayName = "Søværnet F16 Fighting Falcon";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_Heli";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1"};
 		hiddenSelectionsTextures[] = {"\VDF\data\planes\f16\fighter_falcons_co.paa"};
 	};

 	class plane_C130F : CUP_I_C130J_AAF {
 		displayName = "Forsvaret C-130J";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_Heli";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1", "camo2"};
 		hiddenSelectionsTextures[] = {"\VDF\data\planes\c130\c130f_co.paa", "\VDF\data\planes\c130\c130_2_co.paa"};
 	};

 	class plane_C130S : CUP_I_C130J_AAF {
 		displayName = "Søværnet C-130J";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_Heli";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1", "camo2"};
 		hiddenSelectionsTextures[] = {"\VDF\data\planes\c130\c130s_co.paa", "\VDF\data\planes\c130\c130_2_co.paa"};
 	};

 	class heli_UH60S : CUP_B_UH60M_US {
 		displayName = "Søværnet UH-60 Armed";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_Heli";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1", "camo2"};
 		hiddenSelectionsTextures[] = {"\VDF\data\helicopters\uh60\uh.paa", "\VDF\data\helicopters\uh60\uh2.paa"};
 	};

 	class heli_UH60F : CUP_B_UH60M_US {
 		displayName = "Forsvaret UH-60 Armed";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_Heli";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1", "camo2"};
 		hiddenSelectionsTextures[] = {"\VDF\data\helicopters\uh60\uh.paa", "\VDF\data\helicopters\uh60\uh2.paa"};
 	};

 	class heli_UH60M : CUP_B_UH60M_US {
 		displayName = "Vinnish UH-60 Medevac";
 		faction = "VINNISH_FACTION";
 		vehicleclass = "VDF_Heli";
 		side = TWest;
 		crew = "B_Soldier_F";
 		author = "WestDevs and Swat";
 		hiddenSelections[] = {"camo1", "camo2"};
 		hiddenSelectionsTextures[] = {"\VDF\data\helicopters\uh60\uhm.paa", "\VDF\data\helicopters\uh60\uh2m.paa"};
 	};

//clothingInVehicles

    class clothing_UUBD_base: CUP_B_USArmy_Soldier_BDUv2_DCU_US
	{
		author = "WestDevs and Swat";			
		displayName = "aVinnish BDU - Desert";
		uniformClass = "clothing_UUBD";
		hiddenSelectionsTextures[]=
		{
			"\VDF\data\clothing\uub\uubd_co.paa",
			"\VDF\data\clothing\uub\uubd_co.paa",
			"\VDF\data\clothing\uub\uubd_co.paa",
			"\VDF\data\clothing\uub\uubd_co.paa"
		};
	};

	class clothing_UUBF_base: CUP_B_USArmy_Soldier_BDUv2_DCU_US
	{
		author = "WestDevs and Swat";			
		displayName = "aVinnish BDU - Forest";
		uniformClass = "clothing_UUBD";
		hiddenSelectionsTextures[]=
		{
			"\VDF\data\clothing\uub\uubf_co.paa",
			"\VDF\data\clothing\uub\uubf_co.paa",
			"\VDF\data\clothing\uub\uubf_co.paa",
			"\VDF\data\clothing\uub\uubf_co.paa"
		};
	};

	class clothing_UUBD_gloves_base: CUP_B_USArmy_Soldier_BDUv2_gloves_DCU_US
	{
		author = "WestDevs and Swat";			
		displayName = "aVinnish BDU Gloves - Desert";
		uniformClass = "clothing_UUBD";
		hiddenSelectionsTextures[]=
		{
			"\VDF\data\clothing\uub\uubd_co.paa",
			"\VDF\data\clothing\uub\uubd_co.paa",
			"\VDF\data\clothing\uub\uubd_co.paa",
			"\VDF\data\clothing\uub\uubd_co.paa"
		};
	};

	class clothing_UUBF_gloves_base: CUP_B_USArmy_Soldier_BDUv2_gloves_DCU_US
	{
		author = "WestDevs and Swat";			
		displayName = "aVinnish BDU Gloves - Forest";
		uniformClass = "clothing_UUBD";
		hiddenSelectionsTextures[]=
		{
			"\VDF\data\clothing\uub\uubf_co.paa",
			"\VDF\data\clothing\uub\uubf_co.paa",
			"\VDF\data\clothing\uub\uubf_co.paa",
			"\VDF\data\clothing\uub\uubf_co.paa"
		};
	};

	class clothing_UUBD_roll2_base: CUP_B_USArmy_Soldier_BDUv2_roll2_DCU_US
	{
		author = "WestDevs and Swat";			
		displayName = "aVinnish BDU Roll2 - Desert";
		uniformClass = "clothing_UUBD";
		hiddenSelectionsTextures[]=
		{
			"\VDF\data\clothing\uub\uubd_co.paa",
			"\VDF\data\clothing\uub\uubd_co.paa",
			"\VDF\data\clothing\uub\uubd_co.paa",
			"\VDF\data\clothing\uub\uubd_co.paa"
		};
	};

	class clothing_UUBF_roll2_base: CUP_B_USArmy_Soldier_BDUv2_roll2_DCU_US
	{
		author = "WestDevs and Swat";			
		displayName = "aVinnish BDU Roll2 - Forest";
		uniformClass = "clothing_UUBD";
		hiddenSelectionsTextures[]=
		{
			"\VDF\data\clothing\uub\uubf_co.paa",
			"\VDF\data\clothing\uub\uubf_co.paa",
			"\VDF\data\clothing\uub\uubf_co.paa",
			"\VDF\data\clothing\uub\uubf_co.paa"
		};
	};

	class clothing_UUBD_roll2g_base: CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_DCU_US
	{
		author = "WestDevs and Swat";			
		displayName = "aVinnish BDU Roll2g - Desert";
		uniformClass = "clothing_UUBD";
		hiddenSelectionsTextures[]=
		{
			"\VDF\data\clothing\uub\uubd_co.paa",
			"\VDF\data\clothing\uub\uubd_co.paa",
			"\VDF\data\clothing\uub\uubd_co.paa",
			"\VDF\data\clothing\uub\uubd_co.paa"
		};
	};

	class clothing_UUBF_roll2g_base: CUP_B_USArmy_Soldier_BDUv2_roll2_gloves_DCU_US
	{
		author = "WestDevs and Swat";			
		displayName = "aVinnish BDU Roll2g - Forest";
		uniformClass = "clothing_UUBD";
		hiddenSelectionsTextures[]=
		{
			"\VDF\data\clothing\uub\uubf_co.paa",
			"\VDF\data\clothing\uub\uubf_co.paa",
			"\VDF\data\clothing\uub\uubf_co.paa",
			"\VDF\data\clothing\uub\uubf_co.paa"
		};
	};

	class clothing_UUBD_roll_base: CUP_B_USArmy_Soldier_BDUv2_roll_DCU_US
	{
		author = "WestDevs and Swat";			
		displayName = "aVinnish BDU Roll - Desert";
		uniformClass = "clothing_UUBD";
		hiddenSelectionsTextures[]=
		{
			"\VDF\data\clothing\uub\uubd_co.paa",
			"\VDF\data\clothing\uub\uubd_co.paa",
			"\VDF\data\clothing\uub\uubd_co.paa",
			"\VDF\data\clothing\uub\uubd_co.paa"
		};
	};

	class clothing_UUBF_roll_base: CUP_B_USArmy_Soldier_BDUv2_roll_DCU_US
	{
		author = "WestDevs and Swat";			
		displayName = "aVinnish BDU Roll - Forest";
		uniformClass = "clothing_UUBD";
		hiddenSelectionsTextures[]=
		{
			"\VDF\data\clothing\uub\uubf_co.paa",
			"\VDF\data\clothing\uub\uubf_co.paa",
			"\VDF\data\clothing\uub\uubf_co.paa",
			"\VDF\data\clothing\uub\uubf_co.paa"
		};
	};

	class clothing_UUBD_rollg_base: CUP_B_USArmy_Soldier_BDUv2_roll_gloves_DCU_US
	{
		author = "WestDevs and Swat";			
		displayName = "aVinnish BDU Rollg - Desert";
		uniformClass = "clothing_UUBD";
		hiddenSelectionsTextures[]=
		{
			"\VDF\data\clothing\uub\uubd_co.paa",
			"\VDF\data\clothing\uub\uubd_co.paa",
			"\VDF\data\clothing\uub\uubd_co.paa",
			"\VDF\data\clothing\uub\uubd_co.paa"
		};
	};

	class clothing_UUBF_rollg_base: CUP_B_USArmy_Soldier_BDUv2_roll_gloves_DCU_US
	{
		author = "WestDevs and Swat";			
		displayName = "aVinnish BDU Rollg - Forest";
		uniformClass = "clothing_UUBD";
		hiddenSelectionsTextures[]=
		{
			"\VDF\data\clothing\uub\uubf_co.paa",
			"\VDF\data\clothing\uub\uubf_co.paa",
			"\VDF\data\clothing\uub\uubf_co.paa",
			"\VDF\data\clothing\uub\uubf_co.paa"
		};
	};
};

class CfgWeapons {
// Helmets / headwear

	class CUP_H_Ger_M92_Black;
	class H_Booniehat_khk;
	class H_PilotHelmetHeli_B;
	class CUP_H_US_patrol_cap_DCU;
	class CUP_H_PASGTv2_DCU;
	class UniformItem;
	class CUP_U_B_BDUv2_DCU_US;
	class CUP_U_B_BDUv2_gloves_DCU_US;
	class CUP_U_B_BDUv2_roll2_DCU_US;
	class CUP_U_B_BDUv2_roll2_gloves_DCU_US;
	class CUP_U_B_BDUv2_roll_DCU_US;
	class CUP_U_B_BDUv2_roll_gloves_DCU_US;

 	class clothing_M92D : CUP_H_Ger_M92_Black {
        author = "WestDevs and Swat";
        picture = "";
        displayName = "Vinnish Desert M92 Helmet";
        hiddenSelectionsTextures[] = {"\VDF\data\clothing\m92\m92d_co.paa"};    
    };

    class clothing_M92F : CUP_H_Ger_M92_Black {
        author = "WestDevs and Swat";
        picture = "";
        displayName = "Vinnish Forest M92 Helmet";
        hiddenSelectionsTextures[] = {"\VDF\data\clothing\m92\m92f_co.paa"};
    };

    class clothing_BHD : H_Booniehat_khk {
        author = "WestDevs and Swat";
        picture = "";
        displayName = "Vinnish Desert Boonie Hat";
        hiddenSelectionsTextures[] = {"\VDF\data\clothing\bh\bhd_co.paa"};
    };

    class clothing_BHF : H_Booniehat_khk {
        author = "WestDevs and Swat";
        picture = "";
        displayName = "Vinnish Forest Boonie Hat";
        hiddenSelectionsTextures[] = {"\VDF\data\clothing\bh\bhf_co.paa"};
    };

    class clothing_HP : H_PilotHelmetHeli_B {
        author = "WestDevs and Swat";
        picture = "";
        displayName = "Vinnish Helicopter Pilot Helmet";
        hiddenSelectionsTextures[] = {"\VDF\data\clothing\hp\hp_co.paa"};
    };

    class clothing_PCD : CUP_H_US_patrol_cap_DCU {
        author = "WestDevs and Swat";
        picture = "";
        displayName = "Vinnish Patrol Cap Desert";
        hiddenSelectionsTextures[] = {"\VDF\data\clothing\pc\pcd_co.paa"};
    };

    class clothing_PCF : CUP_H_US_patrol_cap_DCU {
        author = "WestDevs and Swat";
        picture = "";
        displayName = "Vinnish Patrol Cap Forest";
        hiddenSelectionsTextures[] = {"\VDF\data\clothing\pc\pcf_co.paa"};
    };

    class clothing_PHF : CUP_H_PASGTv2_DCU {
        author = "WestDevs and Swat";
        picture = "";
        displayName = "Vinnish PASGT Helmet Forest";
        hiddenSelectionsTextures[] = {"\VDF\data\clothing\ph\phf_co.paa"};
    };

    class clothing_PHD : CUP_H_PASGTv2_DCU {
        author = "WestDevs and Swat";
        picture = "";
        displayName = "Vinnish PASGT Helmet Desert";
        hiddenSelectionsTextures[] = {"\VDF\data\clothing\ph\phd_co.paa"};
    };
// Uniforms

    class clothing_UUBD: CUP_U_B_BDUv2_DCU_US
	{
		author = "WestDevs and Swat";
		displayName = "Vinnish BDU - Desert";
		picture = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\VDF\data\clothing\uub\uubd_co.paa"
		};
			
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "clothing_UUBD_base";
			containerClass = Supply40;
			mass = 40;
		};
	};

	class clothing_UUBF: CUP_U_B_BDUv2_DCU_US
	{
		author = "WestDevs and Swat";
		displayName = "Vinnish BDU - Forest";
		picture = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]={"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[]=
		{
			"\VDF\data\clothing\uub\uubf_co.paa"
		};
			
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "clothing_UUBF_base";
			containerClass = Supply40;
			mass = 40;
		};
	};

	class clothing_UUBD_gloves: CUP_U_B_BDUv2_gloves_DCU_US
	{
		author = "WestDevs and Swat";
		displayName = "Vinnish BDU w/ Gloves - Desert";
		picture = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\VDF\data\clothing\uub\uubd_co.paa"
		};
			
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "clothing_UUBD_gloves_base";
			containerClass = Supply40;
			mass = 40;
		};
	};

	class clothing_UUBF_roll2_gloves: CUP_U_B_BDUv2_gloves_DCU_US
	{
		author = "WestDevs and Swat";
		displayName = "Vinnish BDU w/Gloves - Forest";
		picture = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\VDF\data\clothing\uub\uubf_co.paa"
		};
			
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "clothing_UUBF_gloves_base";
			containerClass = Supply40;
			mass = 40;
		};
	};

	class clothing_UUBD_roll2_gloves: CUP_U_B_BDUv2_roll2_DCU_US
	{
		author = "WestDevs and Swat";
		displayName = "Vinnish BDU Rolled High - Desert";
		picture = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\VDF\data\clothing\uub\uubd_co.paa"
		};
			
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "clothing_UUBD_roll2_base";
			containerClass = Supply40;
			mass = 40;
		};
	};

	class clothing_UUBF_gloves: CUP_U_B_BDUv2_roll2_DCU_US
	{
		author = "WestDevs and Swat";
		displayName = "Vinnish BDU Rolled High - Forest";
		picture = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\VDF\data\clothing\uub\uubf_co.paa"
		};
			
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "clothing_UUBF_roll2_base";
			containerClass = Supply40;
			mass = 40;
		};
	};

	class clothing_UUBD_roll2g: CUP_U_B_BDUv2_roll2_gloves_DCU_US
	{
		author = "WestDevs and Swat";
		displayName = "Vinnish BDU Rolled High w/ Gloves - Desert";
		picture = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\VDF\data\clothing\uub\uubd_co.paa"
		};
			
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "clothing_UUBD_roll2g_base";
			containerClass = Supply40;
			mass = 40;
		};
	};

	class clothing_UUBF_roll2g: CUP_U_B_BDUv2_roll2_gloves_DCU_US
	{
		author = "WestDevs and Swat";
		displayName = "Vinnish BDU Rolled High w/ Gloves - Forest";
		picture = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\VDF\data\clothing\uub\uubf_co.paa"
		};
			
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "clothing_UUBF_roll2g_base";
			containerClass = Supply40;
			mass = 40;
		};
	};

	class clothing_UUBD_roll: CUP_U_B_BDUv2_roll_DCU_US
	{
		author = "WestDevs and Swat";
		displayName = "Vinnish BDU Rolled - Desert";
		picture = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\VDF\data\clothing\uub\uubd_co.paa"
		};
			
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "clothing_UUBD_roll_base";
			containerClass = Supply40;
			mass = 40;
		};
	};

	class clothing_UUBF_roll: CUP_U_B_BDUv2_roll_DCU_US
	{
		author = "WestDevs and Swat";
		displayName = "Vinnish BDU Rolled - Forest";
		picture = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\VDF\data\clothing\uub\uubf_co.paa"
		};
			
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "clothing_UUBF_roll_base";
			containerClass = Supply40;
			mass = 40;
		};
	};

	class clothing_UUBD_rollg: CUP_U_B_BDUv2_roll_gloves_DCU_US
	{
		author = "WestDevs and Swat";
		displayName = "Vinnish BDU Rolled w/ Gloves - Desert";
		picture = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\VDF\data\clothing\uub\uubd_co.paa"
		};
			
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "clothing_UUBD_rollg_base";
			containerClass = Supply40;
			mass = 40;
		};
	};

	class clothing_UUBF_rollg: CUP_U_B_BDUv2_roll_gloves_DCU_US
	{
		author = "WestDevs and Swat";
		displayName = "Vinnish BDU Rolled w/ Gloves - Forest";
		picture = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\VDF\data\clothing\uub\uubf_co.paa"
		};
			
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "clothing_UUBF_rollg_base";
			containerClass = Supply40;
			mass = 40;
		};
	};
};
























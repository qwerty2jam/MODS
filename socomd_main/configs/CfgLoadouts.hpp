/*//////////////////////////////////////////////////////////////////////////////

Uses "getUnitLoadout player" to get the loadout of the current unit.

Loadout Format:
[
    [], //0 PRIMARY     | WEAPON FORMAT
    [], //1 SECONDARY   | WEAPON FORMAT
    [], //2 HANDGUN     | WEAPON FORMAT
    [], //3 UNIFORM     | CONTAINER FORMAT
    [], //4 VEST        | CONTAINER FORMAT
    [], //5 BACKPACK    | CONTAINER FORMAT
    ""  //6 HELMET
    ""  //7 FACEWEAR
    []  //8 BINOCULAR   | WEAPON
    []  //9 ITEMS       | EQUIPMENT FORMAT
]

WEAPON FORMAT
[
    "",     //0 WEAPON TYPE
    "",     //1 MUZZLE
    "",     //2 POINTER
    "",     //3 OPTIC
    ["", 0] //4 PRIMARY MAGAZINE (TYPE/COUNT)
    ["", 0] //5 SECONDARY MAGAZINE (TYPE/COUNT)
    "",     //6 BIPOD
]

CONTAINER FORMAT
[
    ""      //0 ITEM TYPE
    [...]   //1 INVENTORY
]

EQUIPMENT FORMAT
[
    "",     //0 MAP
    "",     //1 GPS
    "",     //2 RADIO
    "",     //3 COMPASS
    "",     //4 WATCH
    ""      //5 GOGGLES
]

INVENTORY ITEM
[
    "",     //0 ITEM TYPE
    0       //0 ITEM COUNT
]

////////////////////////////////////////////////////////////////////////////////

** EXAMPLE LOADOUT **
class SASR_StandardTrooper
{
    primary = "";
    secondary = "";
    handgun = "";
    headgear = "";
    facewear = "";
    binocular = "";
    gps = "";
    
    class Uniform
    {
        type = "";
        class Inventory
        {
            LOADOUT_ITEM(ClassName, Quantity)
        };
    };

    class Vest
    {
        type = "";
        class Inventory
        {
            LOADOUT_ITEM(ClassName, Quantity)
        };
    };

    class Backpack
    {
        type = "";
        class Inventory
        {
            LOADOUT_ITEM(ClassName, Quantity)
        };
    };
};

//////////////////////////////////////////////////////////////////////////////*/

#define LOADOUT_ITEM(id,qty) class _xx_##id { type = #id; count = qty; };

//////////////////////////////////////////////////////////////////////
// COMMON SASR LOADOUT ITEMS

#define SASR_STANDARD_MEDICAL   LOADOUT_ITEM(ACE_personalAidKit, 1) \
                                LOADOUT_ITEM(ACE_elasticBandage, 6) \
                                LOADOUT_ITEM(ACE_packingBandage, 6) \
                                LOADOUT_ITEM(ACE_quikclot, 6) \
                                LOADOUT_ITEM(ACE_epinephrine, 2) \
                                LOADOUT_ITEM(ACE_morphine, 2) \
                                LOADOUT_ITEM(ACE_tourniquet, 2)

#define SASR_UNIFORM_ESSENTIALS LOADOUT_ITEM(ItemcTabHCam, 1) \
                                LOADOUT_ITEM(ACE_EarPlugs, 1) \
                                LOADOUT_ITEM(ACE_CableTie, 4) \
                                LOADOUT_ITEM(ACE_NVG_Gen4, 1) \
                                LOADOUT_ITEM(ACE_Flashlight_KSF1, 1) \
                                LOADOUT_ITEM(ACE_Chemlight_HiRed, 2) \
                                LOADOUT_ITEM(Chemlight_blue, 2) \
                                LOADOUT_ITEM(B_IR_Grenade, 1) \
								LOADOUT_ITEM(ACRE_PRC343, 1) \
								LOADOUT_ITEM(ACE_DAGR, 1)

#define SASR_VEST_ESSENTIALS    LOADOUT_ITEM(CUP_HandGrenade_M67, 2) \
                                LOADOUT_ITEM(ACE_M84, 2) \
                                LOADOUT_ITEM(SmokeShell, 2) \
                                LOADOUT_ITEM(SmokeShellRed, 2) \
                                LOADOUT_ITEM(SmokeShellGreen, 2)

#define JAC_ESSENTIALS          LOADOUT_ITEM(ItemcTabHCam, 1) \
                                LOADOUT_ITEM(ACE_EarPlugs, 1) \
                                LOADOUT_ITEM(ACE_Flashlight_KSF1, 1) \
                                LOADOUT_ITEM(ACE_NVG_Gen4, 1) \
                                LOADOUT_ITEM(B_IR_Grenade, 1) \
								LOADOUT_ITEM(ACRE_PRC343, 1) \
								LOADOUT_ITEM(ACE_DAGR, 1)

#define JAC_STANDARD_MEDICAL    LOADOUT_ITEM(ACE_elasticBandage, 5) \
                                LOADOUT_ITEM(ACE_quikclot, 5) \
                                LOADOUT_ITEM(ACE_packingBandage, 5) \
                                LOADOUT_ITEM(ACE_morphine, 2) \
                                LOADOUT_ITEM(ACE_epinephrine, 2)

//////////////////////////////////////////////////////////////////////
// COMMON 2CDO LOADOUT ITEMS

#define CDO_STANDARD_MEDICAL    LOADOUT_ITEM(ACE_fieldDressing, 6) \
                                LOADOUT_ITEM(ACE_elasticBandage, 6) \
                                LOADOUT_ITEM(ACE_packingBandage, 6) \
                                LOADOUT_ITEM(ACE_quikclot, 6) \
                                LOADOUT_ITEM(ACE_epinephrine, 2) \
                                LOADOUT_ITEM(ACE_morphine, 2) \
                                LOADOUT_ITEM(ACE_tourniquet, 1)

#define CDO_UNIFORM_ESSENTIALS  LOADOUT_ITEM(ACRE_PRC343, 1) \
                                LOADOUT_ITEM(ItemcTabHCam, 1) \
                                LOADOUT_ITEM(murshun_cigs_lighter, 1) \
                                LOADOUT_ITEM(ACE_EarPlugs, 1) \
                                LOADOUT_ITEM(ACE_CableTie, 4) \
                                LOADOUT_ITEM(ACE_NVG_Gen4, 1) \
                                LOADOUT_ITEM(ACE_Flashlight_KSF1, 1) \
                                LOADOUT_ITEM(B_IR_Grenade, 1)

#define CDO_VEST_ESSENTIALS     LOADOUT_ITEM(HandGrenade, 2) \
                                LOADOUT_ITEM(ACE_M84, 2) \
                                LOADOUT_ITEM(SmokeShell, 2) \
                                LOADOUT_ITEM(SmokeShellGreen, 2)

//////////////////////////////////////////////////////////////////////

class CfgLoadouts
{
    class SOCOMD
    {
        class SASR_Trooper
        {
            headgear = "AU_02_780000_v1";
            binocular = "Rangefinder";

            class Uniform 
            {
                type = "VSM_Multicam_Crye_Camo";
                class Inventory 
                {
                    SASR_UNIFORM_ESSENTIALS
                };
            };
        };

        class SASR_TroopLeader
        {
            primary = "SMA_MK18MOEBLK";
            handgun = "CUP_hgun_Glock17";
            handgunMagazine = "CUP_17Rnd_9x19_glock17";
            headgear = "VSM_OPS_2_multicam";
            binocular = "Laserdesignator";
            gps = "ItemcTab";

            class Uniform 
            {
                type = "VSM_Multicam_Crye_Camo";
                class Inventory 
                {
                    SASR_STANDARD_MEDICAL
                    SASR_UNIFORM_ESSENTIALS

                    LOADOUT_ITEM(ACE_MapTools, 1)
                    LOADOUT_ITEM(Laserbatteries, 1)
                };
            };

            class Vest
            {
                type = "VSM_LBT6094_operator_Multicam";

                class Inventory 
                {
                    SASR_VEST_ESSENTIALS

					LOADOUT_ITEM(ACRE_PRC152, 1)
                    LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 8)
                    LOADOUT_ITEM(CUP_17Rnd_9x19_glock17, 2) 
                };
            };

            class Backpack
            {
                type = "SOCOMD_LongRange_Radio";
				class Inventory 
				{
					LOADOUT_ITEM(ACRE_PRC117F, 1)
				};
            };
        };

        class SASR_PatrolLeader
        {
            primary = "SMA_MK18BLK_GL_SM";
            handgun = "CUP_hgun_Glock17";
            handgunMagazine = "CUP_17Rnd_9x19_glock17";
            headgear = "VSM_OPS_2_multicam";
            binocular = "Laserdesignator";
            gps = "ItemAndroid";

            class Uniform 
            {
                type = "VSM_Multicam_Crye_Camo";
                class Inventory 
                {
                    SASR_STANDARD_MEDICAL
                    SASR_UNIFORM_ESSENTIALS

                    LOADOUT_ITEM(ACE_MapTools, 1)
                    LOADOUT_ITEM(Laserbatteries, 1)
                };
            };

            class Vest
            {
                type = "VSM_LBT6094_operator_Multicam";

                class Inventory 
                {
                    SASR_VEST_ESSENTIALS

					LOADOUT_ITEM(ACRE_PRC152, 1)
                    LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 8)
                    LOADOUT_ITEM(CUP_17Rnd_9x19_glock17, 2)

                    LOADOUT_ITEM(1Rnd_HE_Grenade_shell, 8)
                    LOADOUT_ITEM(UGL_FlareWhite_F, 2)
                    LOADOUT_ITEM(UGL_FlareRed_F, 2)
                    LOADOUT_ITEM(UGL_FlareGreen_F, 2)
                    LOADOUT_ITEM(1Rnd_SmokeRed_Grenade_shell, 2)
                };
            };

            class Backpack
            {
                type = "SOCOMD_LongRange_Radio";
				class Inventory 
				{
					LOADOUT_ITEM(ACRE_PRC117F, 1)
				};
            };
        };

        class SASR_Rifleman
        {
            primary = "SMA_MK18MOEBLK_SM";
            handgun = "CUP_hgun_Glock17";
            handgunMagazine = "CUP_17Rnd_9x19_glock17";
            headgear = "VSM_OPS_2_multicam";
            binocular = "Binocular";

            class Uniform 
            {
                type = "VSM_Multicam_Crye_Camo";
                class Inventory 
                {
                    SASR_STANDARD_MEDICAL
                    SASR_UNIFORM_ESSENTIALS
                };
            };

            class Vest
            {
                type = "VSM_LBT6094_operator_Multicam";
                class Inventory 
                {
                    SASR_VEST_ESSENTIALS

                    LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 8)
                    LOADOUT_ITEM(CUP_17Rnd_9x19_glock17, 2)
                };
            };
        };

        class SASR_Grenadier
        {
            primary = "SMA_MK18BLK_GL_SM";
            handgun = "CUP_hgun_Glock17";
            handgunMagazine = "CUP_17Rnd_9x19_glock17";
            headgear = "VSM_OPS_2_multicam";
            binocular = "Rangefinder";
            gps = "ItemAndroid";

            class Uniform 
            {
                type = "VSM_Multicam_Crye_Camo";
                class Inventory 
                {
                    SASR_STANDARD_MEDICAL
                    SASR_UNIFORM_ESSENTIALS
                    
                    LOADOUT_ITEM(ACE_MapTools, 1)
                };
            };

            class Vest
            {
                type = "VSM_LBT6094_operator_Multicam";

                class Inventory 
                {
                    SASR_VEST_ESSENTIALS

                    LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 8)
                    LOADOUT_ITEM(CUP_17Rnd_9x19_glock17, 2)

                    LOADOUT_ITEM(1Rnd_HE_Grenade_shell, 8)
                    LOADOUT_ITEM(UGL_FlareWhite_F, 2)
                    LOADOUT_ITEM(UGL_FlareRed_F, 2)
                    LOADOUT_ITEM(UGL_FlareGreen_F, 2)
                    LOADOUT_ITEM(1Rnd_SmokeRed_Grenade_shell, 2)
                };
            };
        };

        class SASR_Sapper
        {
            primary = "SMA_MK18MOEBLK_SM";
            handgun = "CUP_hgun_Glock17";
            handgunMagazine = "CUP_17Rnd_9x19_glock17";
            headgear = "VSM_OPS_2_multicam";
            binocular = "Binocular";

            class Uniform
            {
                type = "VSM_Multicam_Crye_Camo";
                class Inventory
                {
                    SASR_STANDARD_MEDICAL
                    SASR_UNIFORM_ESSENTIALS
                };
            };

            class Vest
            {
                type = "VSM_LBT6094_operator_Multicam";
                class Inventory
                {
                    SASR_VEST_ESSENTIALS

                    LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 8)
                    LOADOUT_ITEM(CUP_17Rnd_9x19_glock17, 2)
                };
            };

            class Backpack
            {
                type = "VSM_Multicam_Backpack_Kitbag";
                 class Inventory
                {
                    LOADOUT_ITEM(ACE_DefusalKit, 1)
                    LOADOUT_ITEM(ACE_Clacker, 1)
                    LOADOUT_ITEM(ACE_wirecutter, 1)
                    LOADOUT_ITEM(ACE_EntrenchingTool, 1)
                    LOADOUT_ITEM(MineDetector, 1)
                    LOADOUT_ITEM(DemoCharge_Remote_Mag, 6)
                    LOADOUT_ITEM(SatchelCharge_Remote_Mag, 1)
                };
            };
        };

        class SASR_MachineGunner
        {
            primary = "sma_minimi_mk3_762tsb";
            handgun = "CUP_hgun_Glock17";
            handgunMagazine = "CUP_17Rnd_9x19_glock17";
            headgear = "VSM_OPS_2_multicam";
            binocular = "Binocular";

            class Uniform
            {
                type = "VSM_Multicam_Crye_Camo";
                class Inventory
                {
                    SASR_STANDARD_MEDICAL
                    SASR_UNIFORM_ESSENTIALS
                };
            };

            class Vest
            {
                type = "VSM_LBT6094_MG_Multicam";
                class Inventory
                {
                    SASR_VEST_ESSENTIALS
                    
                    LOADOUT_ITEM(SMA_150Rnd_762_M80A1, 5)
                    LOADOUT_ITEM(CUP_17Rnd_9x19_glock17, 2)
                };
            };
        };

        class SASR_Medic
        {
            primary = "SMA_MK18MOEBLK_SM";
            handgun = "CUP_hgun_Glock17";
            handgunMagazine = "CUP_17Rnd_9x19_glock17";
            headgear = "VSM_OPS_2_multicam";
            binocular = "Binocular";

            class Uniform 
            {
                type = "VSM_Multicam_Crye_Camo";
                class Inventory 
                {
                    SASR_STANDARD_MEDICAL
                    SASR_UNIFORM_ESSENTIALS
                };
            };

            class Vest
            {
                type = "VSM_LBT6094_operator_Multicam";
                class Inventory 
                {
                    SASR_VEST_ESSENTIALS

                    LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 5)
                    LOADOUT_ITEM(CUP_17Rnd_9x19_glock17, 2)
                };
            };

            class Backpack
            {
                type = "VSM_Multicam_Backpack_Kitbag";
                class Inventory 
                {
                    LOADOUT_ITEM(ACE_personalAidKit, 6)
                    LOADOUT_ITEM(ACE_elasticBandage, 20)
                    LOADOUT_ITEM(ACE_packingBandage, 20) 
                    LOADOUT_ITEM(ACE_quikclot, 20)
                    LOADOUT_ITEM(ACE_epinephrine, 10)
                    LOADOUT_ITEM(ACE_morphine, 10)
                    LOADOUT_ITEM(ACE_tourniquet, 6)
                    LOADOUT_ITEM(ACE_salineIV_500, 6)
                    LOADOUT_ITEM(ACE_bodyBag, 6)
                };
            };
        };

        class SASR_Marksman
        {
            primary = "SMA_HK417_16in";
            handgun = "CUP_hgun_Glock17";
            handgunMagazine = "CUP_17Rnd_9x19_glock17";
            headgear = "VSM_OPS_2_multicam";
            binocular = "Rangefinder";

            class Uniform
            {
                type = "VSM_Multicam_Crye_Camo";
                class Inventory
                {
                    SASR_STANDARD_MEDICAL
                    SASR_UNIFORM_ESSENTIALS
                };
            };

            class Vest
            {
                type = "VSM_LBT6094_operator_Multicam";
                class Inventory
                {
                    SASR_VEST_ESSENTIALS

                    LOADOUT_ITEM(20Rnd_762x51_Mag, 8)
                    LOADOUT_ITEM(CUP_17Rnd_9x19_glock17, 2)
                };
            };
        };

        class SASR_Sniper
        {
            primary = "hlc_rifle_awmagnum";
            handgun = "CUP_hgun_Glock17";
            handgunMagazine = "CUP_17Rnd_9x19_glock17";
            headgear = "VSM_OPS_2_multicam";
            binocular = "Rangefinder";

            class Uniform
            {
                type = "VSM_Multicam_Crye_Camo";

                class Inventory
                {
                    SASR_STANDARD_MEDICAL
                    SASR_UNIFORM_ESSENTIALS
                };
            };

            class Vest
            {
                type = "VSM_LBT6094_operator_Multicam";
                class Inventory
                {
                    SASR_VEST_ESSENTIALS

					LOADOUT_ITEM(ACRE_PRC152, 1)
                    LOADOUT_ITEM(hlc_5rnd_300WM_FMJ_AWM, 9)
                    LOADOUT_ITEM(CUP_17Rnd_9x19_glock17, 2)
                };
            };
        };

        class SASR_LAT
        {
            primary = "SMA_MK18MOEBLK_SM";
            secondary = "HAFM_LAW";
            handgun = "CUP_hgun_Glock17";
            handgunMagazine = "CUP_17Rnd_9x19_glock17";
            headgear = "VSM_Mich2000_2_Multicam";
            binocular = "Binocular";

            class Uniform
            {
                type = "VSM_Multicam_Crye_Camo";
                class Inventory
                {
                    SASR_STANDARD_MEDICAL
                    SASR_UNIFORM_ESSENTIALS
                };
            };

            class Vest
            {
                type = "VSM_LBT6094_operator_Multicam";
                class Inventory
                {
                    SASR_VEST_ESSENTIALS

                    LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 8)
                    LOADOUT_ITEM(CUP_17Rnd_9x19_glock17, 2)
                };
            };
        };

        class SASR_MAT
        {
            primary = "SMA_MK18MOEBLK_SM";
            secondary = "SOCOMD_Carl_Gustav";
            handgun = "CUP_hgun_Glock17";
            handgunMagazine = "CUP_17Rnd_9x19_glock17";
            headgear = "VSM_Mich2000_2_Multicam";
            binocular = "Binocular";

            class Uniform
            {
                type = "VSM_Multicam_Crye_Camo";
                class Inventory
                {
                    SASR_STANDARD_MEDICAL
                    SASR_UNIFORM_ESSENTIALS
                };
            };      

            class Vest
            {
                type = "VSM_LBT6094_operator_Multicam";
                class Inventory
                {
                    SASR_VEST_ESSENTIALS

                    LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 8)
                    LOADOUT_ITEM(CUP_17Rnd_9x19_glock17, 2)
                };
            };

            class Backpack
            {
                type = "VSM_Multicam_Backpack_Kitbag";
                class Inventory
                {
                    LOADOUT_ITEM(tf47_m3maaws_HEAT, 1)
                    LOADOUT_ITEM(tf47_m3maaws_HE, 1)
                };
            };
        };

        class SASR_HAT
        {
            primary = "SMA_MK18MOEBLK_SM";
            secondary = "CUP_launch_Javelin";
            handgun = "CUP_hgun_Glock17";
            handgunMagazine = "CUP_17Rnd_9x19_glock17";
            headgear = "VSM_Mich2000_2_Multicam";
            binocular = "Binocular";

            class Uniform
            {
                type = "VSM_Multicam_Crye_Camo";
                class Inventory
                {
                    SASR_STANDARD_MEDICAL
                    SASR_UNIFORM_ESSENTIALS
                };
            };      

            class Vest
            {
                type = "VSM_LBT6094_operator_Multicam";
                class Inventory
                {
                    SASR_VEST_ESSENTIALS

                    LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 8)
                    LOADOUT_ITEM(CUP_17Rnd_9x19_glock17, 2)
                };
            };

            class Backpack
            {
                type = "VSM_Multicam_Backpack_Kitbag";
                class Inventory
                {
                    LOADOUT_ITEM(CUP_Javelin_M, 1)
                };
            };
        };

        ////////////////////////////////////////////////////////////////////////////////
        //JAC LOADOUTS

        class JAC_Aircrew
        {
            primary = "SMA_M4MOE_Tan";
            headgear = "H_CrewHelmetHeli_B";
            binocular = "Binocular";

            class Uniform 
            {
                type = "VSM_M81_Crye_grey_shirt_Camo";
                class Inventory 
                {
                    JAC_ESSENTIALS
                    JAC_STANDARD_MEDICAL

                    LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 3)
                };
            };

            class Vest
            {
                type = "V_Chestrig_blk";
            };
        };

        class JAC_GroundCrew
        {
            headgear = "CUP_H_Navy_CrewHelmet_White";

            class Uniform 
            {
                type = "VSM_M81_Crye_tan_shirt_Camo";
                class Inventory 
                {
                    JAC_ESSENTIALS
                    JAC_STANDARD_MEDICAL
                };
            };

            class Vest 
            {
                type = "CUP_V_B_LHDVest_White";
            };
        };

        class JAC_PJ
        {
            primary = "SMA_M4MOE_Tan";
            handgun = "CUP_hgun_Glock17";
            handgunMagazine = "CUP_17Rnd_9x19_glock17";
            headgear = "VSM_oga_OPS_2";
            binocular = "Binocular";
            gps = "ItemAndroid";

            class Uniform 
            {
                type = "VSM_M81_Crye_tan_shirt_Camo";
                class Inventory 
                {
                    JAC_ESSENTIALS
                    JAC_STANDARD_MEDICAL

                    LOADOUT_ITEM(RH_15Rnd_9x19_M9, 2)
                    LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 4)
                    LOADOUT_ITEM(SmokeShellRed, 2)
                };
            };

            class Vest
            {
                type = "VSM_OGA_Vest_3";
                class Inventory 
                {
                    LOADOUT_ITEM(ACE_elasticBandage, 20)
                    LOADOUT_ITEM(ACE_quikclot, 20)
                    LOADOUT_ITEM(ACE_epinephrine, 7)
                    LOADOUT_ITEM(ACE_morphine, 7)
                    LOADOUT_ITEM(ACE_packingBandage, 20)
                    LOADOUT_ITEM(ACE_tourniquet, 4)
                    LOADOUT_ITEM(ACE_personalAidKit, 2)
                    LOADOUT_ITEM(ACE_salineIV_500, 6)
                };
            };
        };

        class JAC_Pilot
        {
            handgun = "CUP_hgun_Glock17";
            handgunMagazine = "CUP_17Rnd_9x19_glock17";
            headgear = "SOCOMD_Pilot_helmet";
            binocular = "Binocular";
            gps = "ItemcTab";

            class Uniform 
            {
                type = "SOCOMD_Uniform_GSuit";
                class Inventory 
                {
                    JAC_ESSENTIALS
                    JAC_STANDARD_MEDICAL

                    LOADOUT_ITEM(H_Watchcap_camo, 1)
                    LOADOUT_ITEM(CUP_17Rnd_9x19_glock17, 3)
                    LOADOUT_ITEM(ACRE_PRC152, 1)
                };
            };

            class Backpack
            {
                type = "SOCOMD_LongRange_Radio";
				class Inventory 
				{
					LOADOUT_ITEM(ACRE_PRC117F, 1)
				};
            };
        };
        
        class JAC_Officer
        {
            handgun = "CUP_hgun_Glock17";
            handgunMagazine = "CUP_17Rnd_9x19_glock17";
            headgear = "H_MilCap_gry";
            binocular = "Rangefinder";
            gps = "ItemcTab";

            class Uniform 
            {
                type = "VSM_OGA_Crye_SS_grey_Camo";
                class Inventory 
                {
                    JAC_ESSENTIALS

                    LOADOUT_ITEM(H_Watchcap_camo, 1)
                    LOADOUT_ITEM(CUP_17Rnd_9x19_glock17, 3)
                };
            };

            class Vest
            {
                type = "VSM_FAPC_Operator_OGA_OD";
                class Inventory
                {
                    JAC_STANDARD_MEDICAL
                };
            };

            class Backpack
            {
                type = "SOCOMD_LongRange_Radio";
				class Inventory 
				{
					LOADOUT_ITEM(ACRE_PRC117F, 1)
				};
            };
        };

        ////////////////////////////////////////////////////////////////////////////////
        //2CDO LOADOUTS

        class CDO_Leader {
            primary = "SMA_HK416GLCQB";
            binocular = "Laserdesignator";
            handgun = "RH_usp";
            handgunMagazine = "RH_12Rnd_45cal_usp";
            headgear = "SOCOMD_MICH_Multi";
            gps = "ItemAndroid";

            class Uniform 
            {
                type = "SOCOMD_Uniform_LongSleeve";
                class Inventory 
                {
                    CDO_STANDARD_MEDICAL
                    CDO_UNIFORM_ESSENTIALS

                    LOADOUT_ITEM(ACE_HuntIR_monitor, 1)
                };
            };

            class Vest 
            {
                type = "SOCOMD_Vest_TL";
                class Inventory {
                    CDO_VEST_ESSENTIALS

                    LOADOUT_ITEM(1Rnd_HE_Grenade_shell, 5)
                    LOADOUT_ITEM(1Rnd_SmokeRed_Grenade_shell, 2)
                    LOADOUT_ITEM(ACE_HuntIR_M203, 2)
                    LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 7)
                    LOADOUT_ITEM(Laserbatteries, 1)
                    LOADOUT_ITEM(ACRE_PRC152, 1)
                };
            };
        };

        class CDO_2IC {
            primary = "SMA_HK416GLCQB";
            binocular = "Rangefinder";
            handgun = "RH_usp";
            handgunMagazine = "RH_12Rnd_45cal_usp";
            headgear = "SOCOMD_MICH_Multi";
            gps = "ItemAndroid";

            class Uniform 
            {
                type = "SOCOMD_Uniform_LongSleeve";
                class Inventory 
                {
                    CDO_STANDARD_MEDICAL
                    CDO_UNIFORM_ESSENTIALS

                    LOADOUT_ITEM(ACE_HuntIR_monitor, 1)
                };
            };

            class Vest 
            {
                type = "SOCOMD_Vest_TL";
                class Inventory {
                    CDO_VEST_ESSENTIALS

                    LOADOUT_ITEM(1Rnd_HE_Grenade_shell, 5)
                    LOADOUT_ITEM(1Rnd_SmokeRed_Grenade_shell, 2)
                    LOADOUT_ITEM(ACE_HuntIR_M203, 2)
                    LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 7)
                    LOADOUT_ITEM(ACRE_PRC152, 1)
                };
            };
        };

        class CDO_Sapper {
            primary = "SMA_HK416CUSTOMCQBvfg";
            handgun = "RH_usp";
            handgunMagazine = "RH_12Rnd_45cal_usp";
            headgear = "SOCOMD_MICH_Multi";

            class Uniform 
            {
                type = "SOCOMD_Uniform_LongSleeve";
                class Inventory 
                {
                    CDO_STANDARD_MEDICAL
                    CDO_UNIFORM_ESSENTIALS
                };
            };

            class Vest 
            {
                type = "SOCOMD_Vest_OP";
                class Inventory {
                    CDO_VEST_ESSENTIALS

                    LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 7)
                    LOADOUT_ITEM(ACE_EntrenchingTool, 1)
                    LOADOUT_ITEM(MineDetector, 1)
                };
            };

            class Backpack
            {
                type = "SOCOMD_Sapper_Backpack";
                class Inventory {
                    LOADOUT_ITEM(ACE_DefusalKit, 1)
                    LOADOUT_ITEM(ACE_M26_Clacker, 1)
                    LOADOUT_ITEM(ACE_wirecutter, 1)
                    LOADOUT_ITEM(DemoCharge_Remote_Mag, 5)
                    LOADOUT_ITEM(SatchelCharge_Remote_Mag, 1)
                };
            };
        };
        
        class CDO_Gunner {
            primary = "sma_minimi_mk3_762tsb";
            handgun = "RH_usp";
            handgunMagazine = "RH_12Rnd_45cal_usp";
            headgear = "SOCOMD_MICH_Multi";

            class Uniform 
            {
                type = "SOCOMD_Uniform_LongSleeve";
                class Inventory 
                {
                    CDO_STANDARD_MEDICAL
                    CDO_UNIFORM_ESSENTIALS
                };
            };

            class Vest 
            {
                type = "SOCOMD_Vest_AR";
                class Inventory {
                    CDO_VEST_ESSENTIALS

                    LOADOUT_ITEM(SMA_150Rnd_762_M80A1, 4)
                };
            };
        };

        class CDO_Rifleman {
            primary = "SMA_HK416GLCQB";
            handgun = "RH_usp";
            handgunMagazine = "RH_12Rnd_45cal_usp";
            headgear = "SOCOMD_MICH_Multi";

            class Uniform 
            {
                type = "SOCOMD_Uniform_LongSleeve";
                class Inventory 
                {
                    CDO_STANDARD_MEDICAL
                    CDO_UNIFORM_ESSENTIALS
                };
            };

            class Vest 
            {
                type = "SOCOMD_Vest_OP";
                class Inventory {
                    CDO_VEST_ESSENTIALS

                    LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 7)
                };
            };
        };

        class CDO_Marksman {
            primary = "SMA_HK417_16in";
            handgun = "RH_usp";
            handgunMagazine = "RH_12Rnd_45cal_usp";
            headgear = "SOCOMD_MICH_Multi";
            binocular = "Rangefinder";

            class Uniform 
            {
                type = "SOCOMD_Uniform_LongSleeve";
                class Inventory 
                {
                    CDO_STANDARD_MEDICAL
                    CDO_UNIFORM_ESSENTIALS
                };
            };

            class Vest 
            {
                type = "SOCOMD_Vest_OP";
                class Inventory {
                    CDO_VEST_ESSENTIALS

                    LOADOUT_ITEM(SMA_20Rnd_762x51mm_M80A1_EPR, 9)
                };
            };
        };

        class CDO_AT {
            primary = "SMA_HK416CUSTOMCQBvfg";
            secondary = "CUP_launch_M72A6"
            secondaryMagazine = "CUP_M72A6_M";
            handgun = "RH_usp";
            handgunMagazine = "RH_12Rnd_45cal_usp";
            headgear = "SOCOMD_MICH_Multi";

            class Uniform 
            {
                type = "SOCOMD_Uniform_LongSleeve";
                class Inventory 
                {
                    CDO_STANDARD_MEDICAL
                    CDO_UNIFORM_ESSENTIALS
                };
            };

            class Vest 
            {
                type = "SOCOMD_Vest_CM";
                class Inventory {
                    CDO_VEST_ESSENTIALS

                    LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 7)
                };
            };
        };
        
        class CDO_Medic {
            primary = "SMA_HK416CUSTOMCQBvfg";
            handgun = "RH_usp";
            handgunMagazine = "RH_12Rnd_45cal_usp";
            headgear = "SOCOMD_MICH_Multi";

            class Uniform 
            {
                type = "SOCOMD_Uniform_LongSleeve";
                class Inventory 
                {
                    CDO_STANDARD_MEDICAL
                    CDO_UNIFORM_ESSENTIALS
                };
            };

            class Vest 
            {
                type = "SOCOMD_Vest_OP";
                class Inventory {
                    CDO_VEST_ESSENTIALS

                    LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 18)
                    LOADOUT_ITEM(ACE_fieldDressing, 18)
                    LOADOUT_ITEM(ACE_quikclot, 18)
                    LOADOUT_ITEM(ACE_elasticBandage, 18)
                    LOADOUT_ITEM(ACE_packingBandage, 18)
                    LOADOUT_ITEM(ACE_morphine, 8)
                    LOADOUT_ITEM(ACE_epinephrine, 8)
                    LOADOUT_ITEM(ACE_tourniquet, 4)
                    LOADOUT_ITEM(ACE_salineIV_500, 8)
                    LOADOUT_ITEM(ACE_bodyBag, 2)
                };
            };
        };
    };
};
///Standard SOCOMD
//////////////////////////////////////////////////////////////////////
//Common loadout items
//Contents shared by every loadout
//////////////////////////////////////////////////////////////////////
// COMMON SASR LOADOUT ITEMS

#define LOADOUT_STANDARD_MEDICAL \
	LOADOUT_ITEM(ACE_fieldDressing, 6) \
	LOADOUT_ITEM(ACE_elasticBandage, 6) \
	LOADOUT_ITEM(ACE_packingBandage, 6) \
	LOADOUT_ITEM(ACE_quikclot, 6) \
	LOADOUT_ITEM(ACE_epinephrine, 2) \
	LOADOUT_ITEM(ACE_morphine, 2) \
	LOADOUT_ITEM(ACE_tourniquet, 2)

#define LOADOUT_UNIFORM_ESSENTIALS \
	LOADOUT_ITEM(ItemcTabHCam, 1) \
	LOADOUT_ITEM(ACE_EarPlugs, 1) \
	LOADOUT_ITEM(ACE_Flashlight_KSF1, 1) \
	LOADOUT_ITEM(ACE_Chemlight_HiRed, 2) \
	LOADOUT_ITEM(murshun_cigs_cigpack, 1) \
	LOADOUT_ITEM(murshun_cigs_lighter, 1) \
	LOADOUT_ITEM(ACE_DAGR, 1) \
	LOADOUT_ITEM(hlc_acc_DBALPL, 1) \
	LOADOUT_ITEM(11Rnd_45ACP_Mag, 3)

#define LOADOUT_BACKPACK_ESSENTIALS \
	LOADOUT_ITEM(NVGoggles_WP, 1) \
	LOADOUT_ITEM(ACE_MapTools, 1) \
	LOADOUT_ITEM(ACE_CableTie, 4)

#define LOADOUT_VEST_ESSENTIALS \
	LOADOUT_ITEM(CUP_HandGrenade_M67, 2) \
	LOADOUT_ITEM(ACE_M84, 2) \
	LOADOUT_ITEM(SmokeShell, 5) \
	LOADOUT_ITEM(ACRE_PRC343, 1) \
	LOADOUT_ITEM(ACE_IR_Strobe_Item, 1)

// COMMON JAC LOADOUT ITEMS

#define LOADOUT_SUPPORT_ESSENTIALS \
	LOADOUT_ITEM(ItemcTabHCam, 1) \
	LOADOUT_ITEM(ACE_EarPlugs, 1) \
	LOADOUT_ITEM(ACE_Flashlight_KSF1, 1) \
	LOADOUT_ITEM(SOCOMD_GPNVG18b_BLK_F, 1) \
	LOADOUT_ITEM(NVGoggles_WP, 1) \
	LOADOUT_ITEM(ACE_IR_Strobe_Item, 1) \
	LOADOUT_ITEM(ACRE_PRC343, 1) \
	LOADOUT_ITEM(ACE_DAGR, 1) \
	LOADOUT_ITEM(ACE_MapTools, 1)

#define LOADOUT_SUPPORT_STANDARD_MEDICAL \
	LOADOUT_ITEM(ACE_fieldDressing, 6) \
	LOADOUT_ITEM(ACE_elasticBandage, 5) \
	LOADOUT_ITEM(ACE_quikclot, 5) \
	LOADOUT_ITEM(ACE_packingBandage, 5) \
	LOADOUT_ITEM(ACE_morphine, 2) \
	LOADOUT_ITEM(ACE_epinephrine, 2)

//////////////////////////////////////////////////////////////////////
//Individual loadout items
//Contents shared by individual loadouts common to every Qstore
//When you want to change the contents of a loadout on every Qstore, change it here
//////////////////////////////////////////////////////////////////////

//HAT
#define LOADOUT_HAT_BACKPACK				\
	LOADOUT_ITEM(CUP_Javelin_M, 1)

////////////////////////////////////////////////////////////////////////////////
// Unarmed

class SOCOMD_Unarmed {
	headgear = "AU_02_780000_v1";
	binocular = "";

	class Uniform {
		type = SOCOMD_Item_Uniform_Rifleman;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Commander

class SOCOMD_Commander {
	primary			= ITEM_PRIMARY_TROOPLEADER;
	secondary		= ITEM_SECONDARY_TROOPLEADER;
	handgun			= ITEM_HANDGUN_TROOPLEADER;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_TROOPLEADER;
	headgear		= ITEM_HEADGEAR_TROOPLEADER;
	binocular		= ITEM_BINOCULAR_TROOPLEADER;
	gps				= ITEM_GPS_TROOPLEADER;

	class Uniform {
		type = ITEM_UNIFORM_TROOPLEADER;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			LOADOUT_ITEM(Laserbatteries, 2)
		};
	};

	class Vest {
		type = ITEM_VEST_TROOPLEADER;
		class Inventory {
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(ACRE_PRC152, 1)
			LOADOUT_ITEM(SOCOMD_Item_Primary_Magazine_TroopLeader, 8)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_TROOPLEADER;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_ITEM(ACRE_PRC117F, 1)
			LOADOUT_ITEM(SmokeShellGreen, 2)
			LOADOUT_ITEM(1Rnd_HE_Grenade_shell, 8)
			LOADOUT_ITEM(UGL_FlareRed_F, 2)
			LOADOUT_ITEM(1Rnd_SmokeRed_Grenade_shell, 2)
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Leader

class SOCOMD_Leader {
	primary		    = ITEM_PRIMARY_PATROLLEADER;
	secondary		= ITEM_SECONDARY_PATROLLEADER;
	handgun		    = ITEM_HANDGUN_PATROLLEADER;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_PATROLLEADER;
	headgear		= ITEM_HEADGEAR_PATROLLEADER;
	binocular		= ITEM_BINOCULAR_PATROLLEADER;
	gps			    = ITEM_GPS_PATROLLEADER;

	class Uniform {
		type = ITEM_UNIFORM_PATROLLEADER;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			LOADOUT_ITEM(Laserbatteries, 2)
		};
	};

	class Vest {
		type = ITEM_VEST_PATROLLEADER;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Primary_Magazine_PatrolLeader, 8)
		};
	};
	class Backpack {
		type = ITEM_BACKPACK_PATROLLEADER;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_ITEM(ACRE_PRC152, 1)
			LOADOUT_ITEM(SmokeShellGreen, 2)
			LOADOUT_ITEM(1Rnd_HE_Grenade_shell, 8)
			LOADOUT_ITEM(UGL_FlareRed_F, 2)
			LOADOUT_ITEM(1Rnd_SmokeRed_Grenade_shell, 2)
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Rifleman

class SOCOMD_Rifleman {
	primary		    = ITEM_PRIMARY_RIFLEMAN;
	secondary		= ITEM_SECONDARY_RIFLEMAN;
	handgun		    = ITEM_HANDGUN_RIFLEMAN;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_RIFLEMAN;
	headgear		= ITEM_HEADGEAR_RIFLEMAN;
	binocular		= ITEM_BINOCULAR_RIFLEMAN;
	gps			    = ITEM_GPS_RIFLEMAN;

	class Uniform {
		type = ITEM_UNIFORM_RIFLEMAN;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_RIFLEMAN;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Primary_Magazine_Rifleman, 8)
		};
	};
	class Backpack {
		type = ITEM_BACKPACK_RIFLEMAN;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Grenadier

class SOCOMD_Grenadier {
	primary		    = ITEM_PRIMARY_GRENADIER;
	secondary		= ITEM_SECONDARY_GRENADIER;
	handgun		    = ITEM_HANDGUN_GRENADIER;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_GRENADIER;
	headgear		= ITEM_HEADGEAR_GRENADIER;
	binocular		= ITEM_BINOCULAR_GRENADIER;
	gps			    = ITEM_GPS_GRENADIER;

	class Uniform {
		type = ITEM_UNIFORM_GRENADIER;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_GRENADIER;

		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Primary_Magazine_Grenadier, 8)
		};
	};
	class Backpack {
		type = ITEM_BACKPACK_GRENADIER;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_ITEM(SmokeShellGreen, 2)
			LOADOUT_ITEM(1Rnd_HE_Grenade_shell, 8)
			LOADOUT_ITEM(UGL_FlareRed_F, 2)
			LOADOUT_ITEM(1Rnd_SmokeRed_Grenade_shell, 2)
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Sapper

class SOCOMD_Sapper {
	primary		    = ITEM_PRIMARY_SAPPER;
	secondary		= ITEM_SECONDARY_SAPPER;
	handgun		    = ITEM_HANDGUN_SAPPER;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_SAPPER;
	headgear		= ITEM_HEADGEAR_SAPPER;
	binocular		= ITEM_BINOCULAR_SAPPER;
	gps			    = ITEM_GPS_SAPPER;

	class Uniform {
		type = ITEM_UNIFORM_SAPPER;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_SAPPER;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Primary_Magazine_Sapper, 8)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_SAPPER;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_ITEM(ACE_DefusalKit, 1)
			LOADOUT_ITEM(ACE_Clacker, 1)
			LOADOUT_ITEM(ACE_wirecutter, 1)
			LOADOUT_ITEM(ACE_EntrenchingTool, 1)
			LOADOUT_ITEM(MineDetector, 1)
			LOADOUT_ITEM(DemoCharge_Remote_Mag, 3)
			LOADOUT_ITEM(ClaymoreDirectionalMine_Remote_Mag, 1)
			LOADOUT_ITEM(SatchelCharge_Remote_Mag, 1)
			LOADOUT_ITEM(AMP_Breaching_Charge_Mag, 3)
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Machine Gunner

class SOCOMD_MachineGunner {
	primary		    = ITEM_PRIMARY_MACHINEGUNNER;
	secondary		= ITEM_SECONDARY_MACHINEGUNNER;
	handgun		    = ITEM_HANDGUN_MACHINEGUNNER;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_MACHINEGUNNER;
	headgear		= ITEM_HEADGEAR_MACHINEGUNNER;
	binocular		= ITEM_BINOCULAR_MACHINEGUNNER;
	gps			    = ITEM_GPS_MACHINEGUNNER;

	class Uniform {
		type = ITEM_UNIFORM_MACHINEGUNNER;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_MACHINEGUNNER;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Primary_Magazine_MachineGunner, 5)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_MACHINEGUNNER;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Medic

class SOCOMD_Medic {
	primary		    = ITEM_PRIMARY_MEDIC;
	secondary		= ITEM_SECONDARY_MEDIC;
	handgun		    = ITEM_HANDGUN_MEDIC;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_MEDIC;
	headgear		= ITEM_HEADGEAR_MEDIC;
	binocular		= ITEM_BINOCULAR_MEDIC;
	gps			    = ITEM_GPS_MEDIC;

	class Uniform {
		type = ITEM_UNIFORM_MEDIC;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_MEDIC;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Primary_Magazine_Medic, 8)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_MEDIC;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_ITEM(ACE_surgicalKit, 8)
			LOADOUT_ITEM(ACE_fieldDressing, 25)
			LOADOUT_ITEM(ACE_elasticBandage, 20)
			LOADOUT_ITEM(ACE_packingBandage, 25)
			LOADOUT_ITEM(ACE_quikclot, 25)
			LOADOUT_ITEM(ACE_epinephrine, 10)
			LOADOUT_ITEM(ACE_morphine, 10)
			LOADOUT_ITEM(ACE_tourniquet, 6)
			LOADOUT_ITEM(ACE_salineIV_500, 6)
			LOADOUT_ITEM(ACE_personalAidKit, 2)
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Marksman

class SOCOMD_Marksman {
	primary	        = ITEM_PRIMARY_MARKSMAN;
	secondary		= ITEM_SECONDARY_MARKSMAN;
	handgun		    = ITEM_HANDGUN_MARKSMAN;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_MARKSMAN;
	headgear		= ITEM_HEADGEAR_MARKSMAN;
	binocular		= ITEM_BINOCULAR_MARKSMAN;
	gps			    = ITEM_GPS_MARKSMAN;

	class Uniform {
		type = ITEM_UNIFORM_MARKSMAN;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_MARKSMAN;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(ACE_Kestrel4500, 1)
			LOADOUT_ITEM(ACE_RangeCard, 1)
			LOADOUT_ITEM(SOCOMD_Item_Primary_Magazine_Marsksman, 8)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_MARKSMAN;
		class Inventory	{
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_BACKPACK_ESSENTIALS
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Sniper

class SOCOMD_Sniper {
	primary		    = ITEM_PRIMARY_SNIPER;
	secondary		= ITEM_SECONDARY_SNIPER;
	handgun		    = ITEM_HANDGUN_SNIPER;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_SNIPER;
	headgear		= ITEM_HEADGEAR_SNIPER;
	binocular		= ITEM_BINOCULAR_SNIPER;
	gps			    = ITEM_GPS_SNIPER;

	class Uniform {
		type = ITEM_UNIFORM_SNIPER;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_SNIPER;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(ACRE_PRC152, 1)
			LOADOUT_ITEM(ACE_Kestrel4500, 1)
			LOADOUT_ITEM(ACE_RangeCard, 1)
			LOADOUT_ITEM(SOCOMD_Item_Primary_Magazine_Sniper, 9)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_SNIPER;
		class Inventory	{
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_ITEM(ClaymoreDirectionalMine_Remote_Mag, 4)
			LOADOUT_ITEM(ACE_DefusalKit, 1)
			LOADOUT_ITEM(ACE_Clacker, 1)
			LOADOUT_ITEM(ACE_FlareTripMine_Mag, 4)
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// LAT

class SOCOMD_LAT {
	primary		    = ITEM_PRIMARY_LAT;
	secondary		= ITEM_SECONDARY_LAT;
	handgun		    = ITEM_HANDGUN_LAT;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_LAT;
	headgear		= ITEM_HEADGEAR_LAT;
	binocular		= ITEM_BINOCULAR_LAT;
	gps			    = ITEM_GPS_LAT;

	class Uniform {
		type = ITEM_UNIFORM_LAT;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_LAT;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Primary_Magazine_LAT, 8)
		};
	};
	class Backpack {
		type = ITEM_BACKPACK_LAT;
		class Inventory	{
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_BACKPACK_ESSENTIALS
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// MAT

class SOCOMD_MAT {
	primary		    = ITEM_PRIMARY_MAT;
	secondary		= ITEM_SECONDARY_MAT;
	handgun		    = ITEM_HANDGUN_MAT;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_MAT;
	headgear		= ITEM_HEADGEAR_MAT;
	binocular		= ITEM_BINOCULAR_MAT;
	gps			    = ITEM_GPS_MAT;

	class Uniform {
		type = ITEM_UNIFORM_MAT;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_MAT;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Primary_Magazine_MAT, 8)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_MAT;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// HAT

class SOCOMD_HAT {
	primary		    = ITEM_PRIMARY_HAT;
	secondary		= ITEM_SECONDARY_HAT;
	handgun		    = ITEM_HANDGUN_HAT;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_HAT;
	headgear		= ITEM_HEADGEAR_HAT;
	binocular		= ITEM_BINOCULAR_HAT;
	gps			    = ITEM_GPS_HAT;

	class Uniform {
		type = ITEM_UNIFORM_HAT;
		class Inventory	{
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_HAT;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Primary_Magazine_HAT, 8)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_HAT;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Pilot

class SOCOMD_Pilot {
    primary = ITEM_PRIMARY_PILOT;
    secondary = ITEM_SECONDARY_PILOT;
	handgun = ITEM_HANDGUN_PILOT;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_PILOT;
	headgear = ITEM_HEADGEAR_PILOT;
	binocular = ITEM_BINOCULAR_PILOT;
	gps = ITEM_GPS_PILOT;

	class Uniform {
		type = ITEM_UNIFORM_PILOT;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_PILOT;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Primary_Magazine_Pilot, 8)
			LOADOUT_ITEM(ACRE_PRC152, 1)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_PILOT;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_ITEM(ACRE_PRC117F, 1)
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Crewman

class SOCOMD_Crewman {
	primary = ITEM_PRIMARY_CREWMAN;
    secondary = ITEM_SECONDARY_CREWMAN;
	handgun = ITEM_HANDGUN_CREWMAN;
	handgunMagazine = ITEM_HANDGUN_MAGAINE_CREWMAN;
	headgear = ITEM_HEADGEAR_CREWMAN;
	binocular = ITEM_BINOCULAR_CREWMAN;
	gps = ITEM_GPS_CREWMAN;

	class Uniform {
		type = ITEM_UNIFORM_CREWMAN;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_CREWMAN;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Primary_Magazine_Crewman, 8)
			LOADOUT_ITEM(ACRE_PRC152, 1)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_CREWMAN;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_ITEM(ACRE_PRC117F, 1)
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// PJ

class SOCOMD_PJ {
	primary = ITEM_PRIMARY_PJ;
    secondary = ITEM_SECONDARY_PJ;
	handgun = ITEM_HANDGUN_PJ;
	handgunMagazine = ITEM_HANDGUN_MAGAINE_PJ;
	headgear = ITEM_HEADGEAR_PJ;
	binocular = ITEM_BINOCULAR_PJ;
	gps = ITEM_GPS_PJ;

	class Uniform {
		type = ITEM_UNIFORM_PJ;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_PJ;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(ACRE_PRC152, 1)
			LOADOUT_ITEM(SOCOMD_Item_Primary_Magazine_PJ, 8)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_PJ;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_ITEM(ACRE_PRC117F, 1)
			LOADOUT_ITEM(ACE_surgicalKit, 8)
			LOADOUT_ITEM(ACE_fieldDressing, 25)
			LOADOUT_ITEM(ACE_elasticBandage, 20)
			LOADOUT_ITEM(ACE_packingBandage, 25)
			LOADOUT_ITEM(ACE_quikclot, 25)
			LOADOUT_ITEM(ACE_epinephrine, 10)
			LOADOUT_ITEM(ACE_morphine, 10)
			LOADOUT_ITEM(ACE_tourniquet, 6)
			LOADOUT_ITEM(ACE_salineIV_500, 6)
			LOADOUT_ITEM(ACE_personalAidKit, 2)
		};
	};
};



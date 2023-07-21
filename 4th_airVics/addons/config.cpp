#define _ARMA_

class CfgPatches
{
	class 4th_UNSC_aircraft
	{
		units[] = {
			"4th_hornet",
			"4th_falcon",
			"4th_falcon_u",
			"4th_falcon_s",
			"4th_falcon_u_s",
			"4th_pelican"};
		weapons[] = {
			"4th_127x99_rotaryCannon",
			"4th_127x99_mGun",
			"4th_25mm_cannon",
			"4th_70mm_cannon",
			"4th_ANVIL_launcher",
			"4th_ASGM_launcher",
			"4th_Scorpion_launcher",
			"4th_GBU_launcher"
			};
		magazines[] = {
			"4th_600Rnd_127x99_API_T",
			"4th_270Rnd_25mm_APDS_T",
			"4th_300Rnd_25mm_HEI_T",
			"4th_130Rnd_70mm_DUAPDS_T",
			"4th_10Rnd_ANVIL2",
			"4th_60Rnd_ANVIL2",
			"4th_10Rnd_ASGM4",
			"4th_5Rnd_ASGM4",
			"4th_2Rnd_ASGM5",
			"4th_2Rnd_ASGM6",
			"4th_2Rnd_JAGM243K",
			"4th_3Rnd_JAGM243K",
			"4th_3Rnd_GBU",
			"4th_1Rnd_GBU",
			"4th_pylon_2Rnd_ASGM5",
			"4th_pylon_2Rnd_ASGM6",
			"4th_pylon_2Rnd_JAGM243K",
			"4th_pylon_3Rnd_JAGM243K",
			"4th_pylon_3Rnd_GBU"
		};
		ammo[] = {
			"4th_ammo_127x99_API_T",
			"4th_ammo_25mm_base",
			"4th_ammo_25mm_APDS_T",
			"4th_ammo_25mm_HEI_T",
			"4th_ammo_70mm_base",
			"4th_ammo_70mm_DUAPDS_T",
			"4th_rkt_ANVIL2",
			"4th_msl_ASGM4",
			"4th_msl_ASGM5",
			"4th_msl_ASGM6",
			"4th_msl_Scorpion",
			"4th_bmb_GBU"};
		requiredVersion = 0.1;
		requiredAddons[] = {}; 
		/*
		CfgAmmo req Addons: 		["A3_Sounds_F","A3_Weapons_F_Jets","A3_Weapons_F","ace_rearm","ace_frag","ace_ballistics","ace_medical_damage","ace_vehicle_damage","ace_hellfire"]
		CfgMagazines req Addons:	
		CfgWeapons req Addons:		
		CfgVehicles req Addons:			
		*/
		author = "Daisy";
	};
};
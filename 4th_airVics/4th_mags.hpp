class CfgMagazines
{
    class CA_Magazine;
	class VehicleMagazine;
	class FakeMagazine;
    //50 bmg
    class 4th_mag_600Rnd_127x99_API_T: 500Rnd_127x99_mag_Tracer_Yellow
    {
        ammo = "4th_ammo_127x99_API_T";
        count = 600;
        mass = 0;
        initSpeed = 0;
        maxLeadSpeed = 0;
        muzzleImpulseFactor[] = {1.0,1.0}; //float OR {torque, force} (coefficient to actual calc)
        tracersEvery = 8;
        displayName = "";
        descriptionShort = "";
        nameSound = "mGun"; //mGun, cannon, shell
        scope = 1;
    };
    //25mm APDS-T
    class 4th_mag_300Rnd_25mm_APDS_T: 300Rnd_25mm_shells
    {
        ammo = "4th_ammo_25mm_APDS_T";
        count = 300;
        mass = 0;
        initSpeed = 0;
        maxLeadSpeed = 0;
        muzzleImpulseFactor[] = {1.0,1.0}; //float OR {torque, force} (coefficient to actual calc)
        tracersEvery = 8;
        displayName = "";
        descriptionShort = "";
        nameSound = "cannon"; //mGun, cannon, shell
        scope = 1;
    };
    //25mm HEI-T
    class 4th_mag_300Rnd_25mm_HEI_T: 300Rnd_25mm_shells
    {
        ammo = "4th_ammo_25mm_HEI_T";
        count = 300;
        mass = 0;
        initSpeed = 0;
        maxLeadSpeed = 0;
        muzzleImpulseFactor[] = {1.0,1.0}; //float OR {torque, force} (coefficient to actual calc)
        tracersEvery = 8;
        displayName = "";
        descriptionShort = "";
        nameSound = "cannon"; //mGun, cannon, shell
        scope = 1;
    };
    //70mm DUAPDS-T
    class 4th_mag_270Rnd_70mm_DUAPDS_T: VehicleMagazine
    {
        ammo = "4th_ammo_70mm_DUAPDS_T";
        count = 270;
        mass = 0;
        initSpeed = 0;
        maxLeadSpeed = 0;
        muzzleImpulseFactor[] = {1.0,1.0}; //float OR {torque, force} (coefficient to actual calc)
        tracersEvery = 8;
        displayName = "";
        descriptionShort = "";
        nameSound = "cannon"; //mGun, cannon, shell
        scope = 1;
    };
    //5x ANVIL II rockets
    class 7Rnd_Rocket_04_AP_F;
    class 4th_mag_5Rnd_ANVIL2: 7Rnd_Rocket_04_AP_F
    {
        ammo = "4th_ammo_rkt_ANVIL2";
        count = 5;
    };
    //8x ANVIL II rockets
    class 4th_mag_8Rnd_ANVIL2: 4th_mag_5Rnd_ANVIL2
    {
        count = 8;
    };
    //5x ASGM-4 missile
    class 4Rnd_Missile_AGM_01_F;
    class 4th_mag_5Rnd_ASGM4: 4Rnd_Missile_AGM_01_F
    {
        ammo = "4th_ammo_msl_ASGM4";
        count = 5;
    };
    //2x Scorpion
    class 2Rnd_LG_scalpel;
    class 4th_mag_2Rnd_Scorpion: 2Rnd_LG_scalpel
    {
        ammo = "4th_ammo_msl_Scorpion";
    };
};
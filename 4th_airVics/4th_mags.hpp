class CfgMagazines
{
    class CA_Magazine;
	class VehicleMagazine;
	class FakeMagazine;
    class 500Rnd_127x99_Tracer_Yellow;
    class 300Rnd_25mm_shells;
    class 7Rnd_Rocket_04_AP_F;
    class 4Rnd_Missile_AGM_01_F;
    class ace_maverick_L_pylonmissile_x2;

    //50 bmg
    class 4th_600Rnd_127x99_API_T: 500Rnd_127x99_Tracer_Yellow
    {
        ammo = "4th_ammo_127x99_API_T";
        count = 600;
        weight = 55;
        initSpeed = 903;
        maxLeadSpeed = 20;
        muzzleImpulseFactor[] = {1.0,1.0}; //float OR {torque, force} (coefficient to actual calc)
        tracersEvery = 8;
        displayName = ".50 BMG API-T";
        descriptionShort = "";
        nameSound = "mGun"; //mGun, cannon, shell
        scope = 1;
    };
    //25mm APDS-T
    class 4th_300Rnd_25mm_APDS_T: 300Rnd_25mm_shells
    {
        ammo = "4th_ammo_25mm_APDS_T";
        count = 300;
        weight = 89;
        initSpeed = 1345;
        maxLeadSpeed = 20;
        muzzleImpulseFactor[] = {1.0,1.0}; //float OR {torque, force} (coefficient to actual calc)
        tracersEvery = 6;
        displayName = "25mm APDS-T";
        descriptionShort = "";
        nameSound = "cannon"; //mGun, cannon, shell
        scope = 1;
    };
    //25mm HEI-T
    class 4th_300Rnd_25mm_HEI_T: 300Rnd_25mm_shells
    {
        ammo = "4th_ammo_25mm_HEI_T";
        count = 300;
        weight = 121;
        initSpeed = 1100;
        maxLeadSpeed = 20;
        muzzleImpulseFactor[] = {1.0,1.0}; //float OR {torque, force} (coefficient to actual calc)
        tracersEvery = 6;
        displayName = "25mm HEI-T";
        descriptionShort = "";
        nameSound = "cannon"; //mGun, cannon, shell
        scope = 1;
    };
    //70mm DUAPDS-T
    class 4th_270Rnd_70mm_DUAPDS_T: VehicleMagazine
    {
        ammo = "4th_ammo_70mm_DUAPDS_T";
        count = 270;
        weight = 5737; // 9637 g each -> 5737 lbs
        initSpeed = 1285;
        maxLeadSpeed = 20;
        muzzleImpulseFactor[] = {1.5,2.0}; //float OR {torque, force} (coefficient to actual calc)
        tracersEvery = 4;
        displayName = "70mm DUAPDS-T";
        descriptionShort = "";
        nameSound = "cannon"; //mGun, cannon, shell
        scope = 1;
    };
    //5x ANVIL II rockets
    class 4th_5Rnd_ANVIL2: 7Rnd_Rocket_04_AP_F
    {
        ammo = "4th_rkt_ANVIL2";
        count = 5;
        displayName = "5x ANVIL-II Hornet Specific [4th]";
        descriptionShort = "";
    };
    //8x ANVIL II rockets
    class 4th_8Rnd_ANVIL2_pylon: 4th_5Rnd_ANVIL2
    {
        count = 8;
        displayName = "8x ANVIL-II (External Pylon) [4th]";
        descriptionShort = "";
    };
    //5x ASGM-4 missile
    class 4th_5Rnd_ASGM4: 4Rnd_Missile_AGM_01_F
    {
        ammo = "4th_msl_ASGM4";
        count = 5;
        displayName = "5x ASGM-4 [4th]";
        descriptionShort = "";
    };
    
    //pylons
    //2x Scorpion
    class 4th_2Rnd_Scorpion_pylon: ace_maverick_L_pylonmissile_x2
    {
        ammo = "4th_msl_Scorpion";
        count = 2;
        displayName = "2x Scorpion (External Pylon) [4th]";
        descriptionShort = "";
    };
};
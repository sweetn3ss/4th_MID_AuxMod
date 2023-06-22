class CfgMagazines
{
    class CA_Magazine;
	class VehicleMagazine;
	class FakeMagazine;
    class 500Rnd_127x99_Tracer_Yellow;
    class 300Rnd_25mm_shells;
    class 7Rnd_Rocket_04_AP_F;
    class 4Rnd_Missile_AGM_01_F;
    class 12Rnd_missiles;
    class 24Rnd_missiles;
    class ace_maverick_L_pylonmissile_x2;
    class Splits_60Rnd_Anvil1_missiles;
    class Splits_PylonMissile_AGM_Bottom_Pelican_x3;
    class Splits_PylonMissile_AA_Pelican_x2;

    //50 bmg
    class 4th_600Rnd_127x99_API_T: 500Rnd_127x99_Tracer_Yellow {
        ammo = "4th_ammo_127x99_API_T";
        count = 600;
        weight = 55; //kg
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
    class 4th_270Rnd_25mm_APDS_T: 300Rnd_25mm_shells {
        ammo = "4th_ammo_25mm_APDS_T";
        count = 270;
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
    class 4th_300Rnd_25mm_HEI_T: 300Rnd_25mm_shells {
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
    class 4th_270Rnd_70mm_DUAPDS_T: VehicleMagazine {
        ammo = "4th_ammo_70mm_DUAPDS_T";
        count = 270;
        weight = 2602; // 9637 g each -> 2602 kg
        initSpeed = 1285;
        maxLeadSpeed = 20;
        muzzleImpulseFactor[] = {2.0,2.5}; //float OR {torque, force} (coefficient to actual calc)
        tracersEvery = 4;
        displayName = "70mm DUAPDS-T";
        descriptionShort = "";
        nameSound = "cannon"; //mGun, cannon, shell
        scope = 1;
    };
    
    //10x ANVIL II rockets
    class 4th_10Rnd_ANVIL2: Splits_60Rnd_Anvil1_missiles {
        ammo = "4th_rkt_ANVIL2";
        count = 5;
        displayName = "10x ANVIL-II [4th]";
        descriptionShort = "";
    };
    //60x ANVIL II rockets
    class 4th_60Rnd_ANVIL2: 4th_10Rnd_ANVIL2 {
        ammo = "4th_rkt_ANVIL2";
        count = 60;
        displayName = "60x ANVIL-II [4th]";
        descriptionShort = "";
    };
    //10x ASGM-4 missile
    class 4th_10Rnd_ASGM4: 4Rnd_Missile_AGM_01_F {
        ammo = "4th_msl_ASGM4";
        count = 10;
        displayName = "10x ASGM-4 [4th]";
        descriptionShort = "";
        weight = 900; //90 x 10
    };
    class 4th_5Rnd_ASGM4: 4th_10Rnd_ASGM4 {
        count = 5;
        displayName = "5x ASGM-4 [4th]";
        weight = 450; //90 x 5
    };
    // 2x ASGM-5 missile
    class 4th_2Rnd_ASGM5 {
        ammo = "4th_msl_ASGM5";
        count = 2;
        displayName = "2x ASGM-5 [4th]";
        descriptionShort = "";
        weight = 320; //160 x 2
    };
    // 2x ASGM-6 missile
    class 4th_2Rnd_ASGM6 {
        ammo = "4th_msl_ASGM6";
        count = 2;
        displayName = "2x 'Stalker' ASGM-6 [4th]";
        descriptionShort = "";
        weight = 720; //360 x 2 = 720
    };
    // 2x Scorpion JAGM
    class 4th_2Rnd_JAGM243K {
        ammo = "4th_msl_Scorpion";
        count = 2;
        displayName = "2x 'Scorpion' JAGM-243K [4th]";
        descriptionShort = "";
        weight = 140; 
    };
    // 3x Scorpion JAGM
    class 4th_3Rnd_JAGM243K: 4th_2Rnd_JAGM243K {
        count = 3;
        displayName = "3x 'Scorpion' JAGM-243K [4th]";
        weight = 210;
    };
    // 3x GBU-79
    class 4th_3Rnd_GBU {
        ammo = "4th_bmb_GBU";
        count = 3;
        displayName = "3x 'Hammerfall II' GBU-79 [4th]";
        descriptionShort = "";
        weight = 340; //250lb x 3 = 340 kg
    };

    //PYLONS
    class 4th_pylon_2Rnd_ASGM5: 4th_2Rnd_ASGM5 {
        hardpoints[] = {"Splits_T_Missiles"};
    };
    class 4th_pylon_2Rnd_ASGM6: 4th_2Rnd_ASGM6 {
        hardpoints[] = {"Splits_T_Missiles"};
    };
    class 4th_pylon_2Rnd_JAGM243K: 4th_2Rnd_JAGM243K {
        hardpoints[] = {"Splits_T_Missiles"};
    };
    class 4th_pylon_3Rnd_JAGM243K: 4th_3Rnd_JAGM243K {
        hardpoints[] = {"Splits_B_Missiles"};
    };
    class 4th_pylon_3Rnd_GBU: 4th_3Rnd_GBU {
        hardpoints[] = {"Splits_B_Missiles"};
    };
};
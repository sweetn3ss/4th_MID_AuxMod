//hornet (gun sound: Yak-130) (handling: RHS apache)
//falcon (suppourt gun sound: XM312 (possibly tarantula); chingun sound: Pandur II) (handling: uh-1)
//pelican (chingun sound: M-ATV (GMG)) (handling: )

class CfgVehicles
{
    class Air;
    class Helicopter;
    class Helicopter_Base_F;
    class Helicopter_Base_H;
    class Splits_Pelican_base;
    class OPTRE_UNSC_hornet;
    class OPTRE_UNSC_falcon;
    class OPTRE_UNSC_falcon_S;
    class OPTRE_UNSC_falcon_armed;
    class OPTRE_UNSC_falcon_armed_S;
    class Splits_UNSC_D77_TC_Pelican;

    class 4th_falcon:OPTRE_UNSC_falcon_armed {
        faction = "4th_UNSC_4thAir";
        displayName = "UH-144A 'Falcon'";
    };
    class 4th_falcon_u:OPTRE_UNSC_falcon {
        faction = "4th_UNSC_4thAir";
        displayName = "UH-144 'Falcon'";
    };
    class 4th_falcon_s:OPTRE_UNSC_falcon_armed_S {
        faction = "4th_UNSC_4thAir";
        displayName = "UH-144S 'Falcon'";
    };
    class 4th_falcon_u_s:OPTRE_UNSC_falcon_S {
        faction = "4th_UNSC_4thAir";
        displayName = "UH-144A/S 'Falcon'";
    };
    class 4th_hornet:OPTRE_UNSC_hornet {
        faction = "4th_UNSC_4thAir";
        displayName = "AV-14 'Hornet'";
    };
    class 4th_pelican:Splits_UNSC_D77_TC_Pelican {
        faction = "4th_UNSC_4thAir";
        displayName = "D77-TCI 'Pelican'";
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				isCopilot = 1;
				CanEject = 0;
				body = "mainturret";
				gun = "maingun";
				animationsourcebody = "mainturret";
				animationSourceGun = "maingun";
				gunAxis = "Osa Hlavne";
				gunBeg = "Usti hlavne";
				gunEnd = "konec hlavne";
				ejectDeadGunner = 0;
				minElev = -51;
				maxElev = 9;
				initElev = 6;
				minTurn = -120;
				maxTurn = 120;
				initTurn = 0;
				turretAxis = "OsaVeze";
				maxHorizontalRotSpeed = 1.75;
				maxVerticalRotSpeed = 1.5;
				gunnerAction = "Splits_Gunner_Pelican";
				gunnerInAction = "Splits_Gunner_Pelican";
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				precisegetinout = 1;
				gunnerName = "Primary Gunner";
				proxyindex = 1;
				gunnerCompartments = "Compartment2";
				hideWeaponsGunner = 1;
				soundServo[] = {"",0.01,1};
				stabilizedInAxes = 3;
				commanding = -2;
				primaryGunner = 1;
				turretInfoType = "RscOptics_crows";
				discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2500};
				discreteDistanceInitIndex = 5;
				showAllTargets = 4;
				playerPosition = 3;
				memoryPointsGetInGunner = "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				gunnerLeftHandAnimName = "lever_pilot";
				gunnerRightHandAnimName = "stick_copilot";
				memoryPointGun = "machinegun";
				weapons[] = {"4th_70mm_cannon","Laserdesignator_mounted"};
				magazines[] = {"4th_ammo_70mm_DUAPDS_T","Laserbatteries"};
				memoryPointGunnerOptics = "PIP2_pos";
				memoryPointGunnerOutOptics = "gunnerview";
				castGunnerShadow = 1;
				startEngine = 0;
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_02_F.p3d";
				gunnerForceOptics = 0;
				hasGunner = 1;
				class OpticsIn
				{
					class Wide
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						opticsDisplayName = "WFOV";
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						opticsDisplayName = "MFOV";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
						opticsDisplayName = "NFOV";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initFov = 0.9;
						minFov = 0.25;
						maxFov = 1.25;
						initAngleX = 0;
						initAngleY = 0;
						minAngleX = -65;
						maxAngleX = 85;
						minAngleY = -150;
						maxAngleY = 150;
						minMoveX = -0.2;
						maxMoveX = 0.2;
						minMoveY = -0.1;
						maxMoveY = 0.1;
						minMoveZ = -0.1;
						maxMoveZ = 0.2;
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
			};
        };
    };
};
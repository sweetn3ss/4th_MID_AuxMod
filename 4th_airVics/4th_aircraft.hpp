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
        faction = "4th_UNSC_aircraft";
        displayName = "UH-144A 'Falcon'";
    };
    class 4th_falcon_u:OPTRE_UNSC_falcon {
        faction = "4th_UNSC_aircraft";
        displayName = "UH-144 'Falcon'";
    };
    class 4th_falcon_s:OPTRE_UNSC_falcon_armed_S {
        faction = "4th_UNSC_aircraft";
        displayName = "UH-144S 'Falcon'";
    };
    class 4th_falcon_u_s:OPTRE_UNSC_falcon_S {
        faction = "4th_UNSC_aircraft";
        displayName = "UH-144A/S 'Falcon'";
    };
    class 4th_hornet:OPTRE_UNSC_hornet {
        faction = "4th_UNSC_aircraft";
        displayName = "AV-14 'Hornet'";
    };
    class 4th_pelican:Splits_UNSC_D77_TC_Pelican {
        faction = "4th_UNSC_aircraft";
        displayName = "D77-TCI 'Pelican'";
        class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\A3\Air_F_Exp\VTOL_02\Data\UI\VTOL_02_3DEN_CA.paa";
				class Pylons
				{ 
					/*Loadout options are as follows:
					L1A: 2x AA missiles
					L1B: 1x Scorpion
					L2A: 2x AA missiles, 2x Scorpion
					L2B: 3x Scorpion, 2x 1000lb JDAM (GBU-16 Paveway), 1x Fuel Pod
					R1A - R2B: Mirror L1A - L2B
					*/
					class PylonRight1 
					{//remove
						attachment = "Splits_PylonMissile_AA_Pelican_x2";
						priority = 4;
						hardpoints[] = {"Splits_T_Missiles"};
						turret[] = {};
						UIposition[] = {0.25,0.1};
					};
					class PylonRight2
					{
						attachment = "Splits_PylonMissile_AGM_Pelican_x2";
						priority = 3;
						hardpoints[] = {"Splits_T_Missiles"};
						turret[] = {};
						UIposition[] = {0.25,0.2};
					};
					class PylonRight3
					{
						attachment = "Splits_PylonMissile_AGM_Bottom_Pelican_x3";
						priority = 2;
						hardpoints[] = {"Splits_B_Missiles"};
						turret[] = {};
						UIposition[] = {0.6,0.1};
					};
					class PylonRight4
					{
						attachment = "Splits_PylonMissile_AGM_Bottom_Pelican_x3";
						priority = 1;
						hardpoints[] = {"Splits_B_Missiles"};
						turret[] = {};
						UIposition[] = {0.6,0.2};
					};
					class PylonsLeft1: PylonRight1
					{// remove
						UIposition[] = {0.25,0.5};
						mirroredMissilePos = 1;
					};
					class PylonsLeft2: PylonRight2
					{
						UIposition[] = {0.25,0.4};
						mirroredMissilePos = 1;
					};
					class PylonsLeft3: PylonRight3
					{
						UIposition[] = {0.6,0.5};
						mirroredMissilePos = 1;
					};
					class PylonsLeft4: PylonRight4
					{
						UIposition[] = {0.6,0.4};
						mirroredMissilePos = 1;
					};
				};
				class Presets
				{
					class Empty
					{
						displayName = "$STR_empty";
						attachment[] = {};
					};
					class Default
					{
						displayName = "$STR_vehicle_default";
						attachment[] = {"Splits_PylonMissile_AA_Pelican_x2","Splits_PylonMissile_AGM_Pelican_x2","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Pelican_x2","Splits_PylonMissile_AA_Pelican_x2"};
					};
					class AT
					{
						displayName = "$STR_A3_cfgmagazines_titan_at_dns";
						attachment[] = {"Splits_PylonMissile_AA_Pelican_x2","Splits_PylonMissile_AGM_Pelican_x2","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Pelican_x2","Splits_PylonMissile_AA_Pelican_x2"};
					};
					class HAT
					{
						displayName = "$STR_A3_Heavy_AT_preset_displayName";
						attachment[] = {"Splits_PylonMissile_AA_Pelican_x2","Splits_PylonMissile_AGM_Pelican_x2","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Pelican_x2","Splits_PylonMissile_AA_Pelican_x2"};
					};
					class CAS
					{
						displayName = "$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[] = {"Splits_PylonMissile_AA_Pelican_x2","Splits_PylonMissile_AGM_Pelican_x2","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Pelican_x2","Splits_PylonMissile_AA_Pelican_x2"};
					};
				};
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 2000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 250;
							maxRange = 2000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 300;
						animDirection = "mainGun";
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						aimdown = -0.25;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 1500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 250;
							maxRange = 1500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 300;
						animDirection = "mainGun";
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						aimdown = -0.25;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 4000;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 3000;
							maxRange = 3000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 300;
						angleRangeHorizontal = 120;
						angleRangeVertical = 90;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						aimDown = 30;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar{};
					class LaserSensorComponent: SensorTemplateLaser{};
					class NVSensorComponent: SensorTemplateNV{};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000,2000,16000,8000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components: components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000,2000,16000,8000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};
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
				weapons[] = {"Splits_M370_70mm_autocannon","Laserdesignator_mounted"};
				magazines[] = {"Splits_1200Rnd_Cannon_70mm_M370_MP","Splits_1200Rnd_Cannon_70mm_M370_HE","Laserbatteries"};
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
			class RearDoorGun: MainTurret
			{
				showAsCargo = 1;
				minElev = -35;
				maxElev = 15;
				initElev = 0;
				minTurn = 120;
				maxTurn = 240;
				initTurn = 180;
				isCopilot = 0;
				stabilizedInAxes = 3;
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				gunnerAction = "Splits_Rear_Gunner_Pelican";
				gunnerInAction = "Splits_Rear_Gunner_Pelican";
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				ejectDeadGunner = 0;
				body = "rearturret";
				gun = "reargun";
				turretAxis = "reargun_turretaxis";
				gunAxis = "reargun_gunaxis";
				gunnerType = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
				animationSourceBody = "rearturret";
				animationSourceGun = "reargun";
				selectionFireAnim = "zasleh3";
				proxyIndex = 26;
				gunnerName = "Rear Gunner";
				weapons[] = {"Splits_M247_Coax"};
				magazines[] = {"Splits_1200Rnd_762x51_AP_Mag_Tracer"};
				commanding = -3;
				gunBeg = "usti hlavne3";
				gunEnd = "konec hlavne3";
				primaryGunner = 0;
				primaryObserver = 0;
				hideWeaponsGunner = 1;
				turretInfoType = "RscOptics_crows";
				discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2500};
				discreteDistanceInitIndex = 5;
				memoryPointGun = "usti hlavne3";
				memoryPointGunnerOptics = "reargunview";
				gunnerCompartments = "Compartment26";
				gunnerLeftHandAnimName = "rear_gun";
				gunnerRightHandAnimName = "rear_gun";
				gunnerLeftLegAnimName = "gunner_2_legs";
				gunnerRightLegAnimName = "gunner_2_legs";
				gunnerOpticsModel = "";
				memoryPointsGetInGunner = "pos_reargunner";
				memoryPointsGetInGunnerDir = "pos_reargunner_dir";
				canUseScanners = 0;
				class OpticsIn
				{
					class Wide
					{
						initAngleX = 0;
						minAngleX = 0;
						maxAngleX = 0;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						opticsDisplayName = "WFOV";
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
					};
					class Medium: Wide
					{
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						opticsDisplayName = "MFOV";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
					};
					class Narrow: Wide
					{
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
						opticsDisplayName = "NFOV";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						minFov = 0.25;
						maxFov = 1.25;
						initFov = 0.75;
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
				class Hitpoints{};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_3";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos_cargo_l";
				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
				gunnerName = "Passenger (Left door)";
				proxyIndex = 1;
				maxElev = 15;
				minElev = -25;
				maxTurn = 10;
				minTurn = -50;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "cargoDoors";
				memoryPointGunnerOptics = "";
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerAction = "passenger_inside_3";
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos_cargo_r";
				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
				gunnerName = "Passenger (Right door)";
				proxyIndex = 2;
				maxElev = 15;
				minElev = -25;
				maxTurn = 50;
				minTurn = -10;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "cargoDoors";
				memoryPointGunnerOptics = "";
			};
			class CargoTurret_03: CargoTurret
			{
				gunnerAction = "Splits_Observer_Pelican";
				gunnerInAction = "Splits_Observer_Pelican";
				gunnerType = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
				gunnerName = "Pelican Observer Seat";
				memoryPointsGetInGunner = "pos_cargo_l";
				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
				gunnerCompartments = "Compartment25";
				proxyIndex = 25;
				isPersonTurret = 0;
				outGunnerMayFire = 0;
				inGunnerMayFire = 0;
				forceHideGunner = 0;
				canHideGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 0;
				hideWeaponsGunner = 1;
				allowLauncherIn = 0;
				allowLauncherOut = 0;
			};
			class CargoTurret_04: CargoTurret
			{
				gunnerAction = "Splits_Standing_Seat_Left_03_Pelican";
				gunnerInAction = "Splits_Standing_Seat_Left_03_Pelican";
				gunnerName = "Standing Seat Left";
				memoryPointsGetInGunner = "pos_cargo_l";
				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
				gunnerCompartments = "Compartment14";
				proxyIndex = 14;
				isPersonTurret = 0;
				outGunnerMayFire = 0;
				inGunnerMayFire = 0;
				forceHideGunner = 0;
				canHideGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 0;
				hideWeaponsGunner = 0;
				allowLauncherIn = 0;
				allowLauncherOut = 0;
			};
			class CargoTurret_05: CargoTurret
			{
				gunnerAction = "Splits_Standing_Seat_Left_01_Pelican";
				gunnerInAction = "Splits_Standing_Seat_Left_01_Pelican";
				gunnerName = "Standing Seat Left";
				memoryPointsGetInGunner = "pos_cargo_l";
				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
				gunnerCompartments = "Compartment15";
				proxyIndex = 15;
				isPersonTurret = 0;
				outGunnerMayFire = 0;
				inGunnerMayFire = 0;
				forceHideGunner = 0;
				canHideGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 0;
				hideWeaponsGunner = 1;
				allowLauncherIn = 0;
				allowLauncherOut = 0;
			};
			class CargoTurret_06: CargoTurret
			{
				gunnerAction = "Splits_Standing_Seat_Left_02_Pelican";
				gunnerInAction = "Splits_Standing_Seat_Left_02_Pelican";
				gunnerName = "Standing Seat Left";
				memoryPointsGetInGunner = "pos_cargo_l";
				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
				gunnerCompartments = "Compartment17";
				proxyIndex = 17;
				isPersonTurret = 0;
				outGunnerMayFire = 0;
				inGunnerMayFire = 0;
				forceHideGunner = 0;
				canHideGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 0;
				hideWeaponsGunner = 1;
				allowLauncherIn = 0;
				allowLauncherOut = 0;
			};
			class CargoTurret_07: CargoTurret
			{
				gunnerAction = "Splits_Standing_Seat_Left_03_Pelican";
				gunnerInAction = "Splits_Standing_Seat_Left_03_Pelican";
				gunnerName = "Standing Seat Left";
				memoryPointsGetInGunner = "pos_cargo_l";
				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
				gunnerCompartments = "Compartment19";
				proxyIndex = 19;
				isPersonTurret = 0;
				outGunnerMayFire = 0;
				inGunnerMayFire = 0;
				forceHideGunner = 0;
				canHideGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 0;
				hideWeaponsGunner = 0;
				allowLauncherIn = 0;
				allowLauncherOut = 0;
			};
			class CargoTurret_08: CargoTurret
			{
				gunnerAction = "Splits_Standing_Seat_Left_01_Pelican";
				gunnerInAction = "Splits_Standing_Seat_Left_01_Pelican";
				gunnerName = "Standing Seat Left";
				memoryPointsGetInGunner = "pos_cargo_l";
				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
				gunnerCompartments = "Compartment21";
				proxyIndex = 21;
				isPersonTurret = 0;
				outGunnerMayFire = 0;
				inGunnerMayFire = 0;
				forceHideGunner = 0;
				canHideGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 0;
				hideWeaponsGunner = 1;
				allowLauncherIn = 0;
				allowLauncherOut = 0;
			};
			class CargoTurret_09: CargoTurret
			{
				gunnerAction = "Splits_Standing_Seat_Left_02_Pelican";
				gunnerInAction = "Splits_Standing_Seat_Left_02_Pelican";
				gunnerName = "Standing Seat Left";
				memoryPointsGetInGunner = "pos_cargo_l";
				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
				gunnerCompartments = "Compartment23";
				proxyIndex = 23;
				isPersonTurret = 0;
				outGunnerMayFire = 0;
				inGunnerMayFire = 0;
				forceHideGunner = 0;
				canHideGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 0;
				hideWeaponsGunner = 1;
				allowLauncherIn = 0;
				allowLauncherOut = 0;
			};
			class CargoTurret_10: CargoTurret
			{
				gunnerAction = "Splits_Standing_Seat_Right_01_Pelican";
				gunnerInAction = "Splits_Standing_Seat_Right_01_Pelican";
				gunnerName = "Standing Seat Right";
				memoryPointsGetInGunner = "pos_cargo_r";
				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
				gunnerCompartments = "Compartment13";
				proxyIndex = 13;
				isPersonTurret = 0;
				outGunnerMayFire = 0;
				inGunnerMayFire = 0;
				forceHideGunner = 0;
				canHideGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 0;
				hideWeaponsGunner = 0;
				allowLauncherIn = 0;
				allowLauncherOut = 0;
			};
			class CargoTurret_11: CargoTurret
			{
				gunnerAction = "Splits_Standing_Seat_Right_03_Pelican";
				gunnerInAction = "Splits_Standing_Seat_Right_03_Pelican";
				gunnerName = "Standing Seat Right";
				memoryPointsGetInGunner = "pos_cargo_r";
				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
				gunnerCompartments = "Compartment16";
				proxyIndex = 16;
				isPersonTurret = 0;
				outGunnerMayFire = 0;
				inGunnerMayFire = 0;
				forceHideGunner = 0;
				canHideGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 0;
				hideWeaponsGunner = 1;
				allowLauncherIn = 0;
				allowLauncherOut = 0;
			};
			class CargoTurret_12: CargoTurret
			{
				gunnerAction = "Splits_Standing_Seat_Right_04_Pelican";
				gunnerInAction = "Splits_Standing_Seat_Right_04_Pelican";
				gunnerName = "Standing Seat Right";
				memoryPointsGetInGunner = "pos_cargo_r";
				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
				gunnerCompartments = "Compartment18";
				proxyIndex = 18;
				isPersonTurret = 0;
				outGunnerMayFire = 0;
				inGunnerMayFire = 0;
				forceHideGunner = 0;
				canHideGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 0;
				hideWeaponsGunner = 1;
				allowLauncherIn = 0;
				allowLauncherOut = 0;
			};
			class CargoTurret_13: CargoTurret
			{
				gunnerAction = "Splits_Standing_Seat_Right_03_Pelican";
				gunnerInAction = "Splits_Standing_Seat_Right_03_Pelican";
				gunnerName = "Standing Seat Right";
				memoryPointsGetInGunner = "pos_cargo_r";
				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
				gunnerCompartments = "Compartment20";
				proxyIndex = 20;
				isPersonTurret = 0;
				outGunnerMayFire = 0;
				inGunnerMayFire = 0;
				forceHideGunner = 0;
				canHideGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 0;
				hideWeaponsGunner = 1;
				allowLauncherIn = 0;
				allowLauncherOut = 0;
			};
			class CargoTurret_14: CargoTurret
			{
				gunnerAction = "Splits_Standing_Seat_Right_01_Pelican";
				gunnerInAction = "Splits_Standing_Seat_Right_01_Pelican";
				gunnerName = "Standing Seat Right";
				memoryPointsGetInGunner = "pos_cargo_r";
				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
				gunnerCompartments = "Compartment22";
				proxyIndex = 22;
				isPersonTurret = 0;
				outGunnerMayFire = 0;
				inGunnerMayFire = 0;
				forceHideGunner = 0;
				canHideGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 0;
				hideWeaponsGunner = 0;
				allowLauncherIn = 0;
				allowLauncherOut = 0;
			};
			class CargoTurret_15: CargoTurret
			{
				gunnerAction = "Splits_Standing_Seat_Right_02_Pelican";
				gunnerInAction = "Splits_Standing_Seat_Right_02_Pelican";
				gunnerName = "Standing Seat Right";
				memoryPointsGetInGunner = "pos_cargo_r";
				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
				gunnerCompartments = "Compartment24";
				proxyIndex = 24;
				isPersonTurret = 0;
				outGunnerMayFire = 0;
				inGunnerMayFire = 0;
				forceHideGunner = 0;
				canHideGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 0;
				hideWeaponsGunner = 1;
				allowLauncherIn = 0;
				allowLauncherOut = 0;
			};
		};
    };
	class 4th_longsword: DMNS_JT_RM2_Longsword_Dynamic {
		faction = "4th_UNSC_aircraft";
        displayName = "GA-TL1 'Longsword'";
	};
};
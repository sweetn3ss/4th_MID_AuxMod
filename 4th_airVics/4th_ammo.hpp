#include "../basicdefines_A3.hpp"

// caliber, SPECIFICATION, ROUND_TYPE, [mass(g), muzzle velocity(m/s), max dispersion(mils OR dispersion/distance)]
class CfgAmmo
{// penetration(mm of MATERIAL) @ degrees, distance(m)
	
    class BulletBase;
	class RocketBase;
	class MissileCore;
	class MissileBase : MissileCore
	{
		class Components;
	};
    class B_127x99_Ball;
	class B_25mm;
	class Rocket_04_AP_F;
	class ACE_Hellfire_AGM114L;
	class Missile_AGM_01_F;
    
    // 12.7x99mm (.50 bmg), M2, API-T [42g, 903m/s, <= 300mm / 550m]
    class 4th_ammo_127x99_API_T: B_127x99_Ball
    {// 20mm RHA @ 100m
        hit = 0;
		indirectHit = 0.0;
		indirectHitRange = 0;
		cost = 1;
		
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 3;
		
		typicalSpeed = 903;
		weaponType = "mGun";
		aiAmmoUsageFlags = "64 + 128";
		ace_vehicle_damage_incendiary = 0.1;
		suppressionRadiusHit = 17;
		suppressionRadiusBulletClose = 11.2;
    };
    

    class 4th_ammo_25mm_base: B_25mm
	{
		suppressionRadiusBulletClose = 10.4;
		weaponType = "cannon";
		ace_rearm_caliber = 25; //mm
		ace_vehicle_damage_incendiary = 0.1;
	};
	
    // 25x137mm, M791, APDS-T [134g, 1345 m/s, ]
    class 4th_ammo_25mm_APDS_T: 4th_ammo_25_base
    {// 14mm RHA @ 45 deg, 2743.2m
        hit = 0;
		indirectHit = 0.0;
		indirectHitRange = 0;
		cost = 5;
		ACE_damageType = "bullet";

		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 3;
		
		typicalSpeed = 0;
		aiAmmoUsageFlags = "128 + 256 + 512";
		suppressionRadiusHit = 12.86;
		
		class CamShakeFire
		{
			power = 15;
			duration = 0.5;
			frequency = 20;
			distance = 30;
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.2;
			frequency = 20;
		};
		class CamShakeHit
		{
			power = 3;
			duration = 1;
			frequency = 20;
		};
    };

	// 25x137mm HEI-T [184g, 1100 m/s, < 0.8 mils]
    class 4th_ammo_25mm_HEI_T: 4th_ammo_25_base
    {// Penetration data NA for HEI
        hit = 0;
		indirectHit = 0.0;
		indirectHitRange = 0;
		cost = 1;
		ACE_damageType = "explosive";

		tracerScale = 1;
		tracerStartTime = 0.2;
		tracerEndTime = 3;
		
		typicalSpeed = 0;
		aiAmmoUsageFlags = 64;
		ace_vehicle_damage_incendiary = 0.35;
		suppressionRadiusHit = 21.34;

		class CamShakeFire
		{
			power = 15;
			duration = 0.5;
			frequency = 20;
			distance = 30;
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.2;
			frequency = 20;
		};
		class CamShakeHit
		{
			power = 100;
			duration = 1;
			frequency = 20;
		};
    };

        class 4th_ammo_70mm_base: BulletBase
	{
		weaponType = "cannon";
		ACE_damageType = "shell";
		ace_rearm_caliber = 70;
	};

    // 70x350mm depleted uranium rounds (1.5kg uranium content)
    // 70x350mm DUAPDS-T []
    class 4th_ammo_70mm_DUAPDS_T: 4th_ammo_70x350_base
    {// Pen data to follow trends
        hit = 0;
		indirectHit = 0.0;
		indirectHitRange = 0;
		cost = 1;
		airFriction = -0.000617;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 1;
		tracerStartTime = 0.2;
		tracerEndTime = 3;
		typicalSpeed = 0;
		suppressionRadiusBulletClose = 20; //suppression radius from projectile pass, meters
		suppressionRadiusHit = 15; //suppression radius from projectile impact, meters
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		class CamShakeFire
		{
			power = 35;
			duration = 0.5;
			frequency = 20;
			distance = 30;
		};
		class CamShakePlayerFire
		{
			power = 3;
			duration = 0.4;
			frequency = 20;
		};
		class CamShakeHit
		{
			power = 100;
			duration = 1;
			frequency = 20;
		};
    };

	// ANVIL II rockets
	class 4th_rkt_ANVIL2: Rocket_04_AP_F
	{
		hit = 210;
		indirectHit = 55;
		indirectHitRange = 15;
	};

	// ASGM-4 missile
	class 4th_msl_ASGM4: ACE_Hellfire_AGM114L
	{
		hit = 200;
		indirectHit = 80;
		indirectHitRange = 8;
	};

	// Scorpion ATGM
	class 4th_msl_Scorpion: Missile_AGM_01_F
	{
		hit = 1200;
		indirectHit = 50;
		indirectHitRange = 4;
		laserLock = 1;
		irLock = 0;
	};
};


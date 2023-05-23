#include "../basicdefines_A3.hpp"
// caliber, SPECIFICATION, ROUND_TYPE, [mass(g), muzzle velocity(m/s), max dispersion(mils OR dispersion/distance)]
class CfgAmmo
{// penetration(mm of MATERIAL) @ degrees, distance(m)
	class BulletBase;
	class RocketBase;
	class GrenadeHand_stone;
	class F_40mm_White;
	class F_40mm_Green;
	class F_40mm_Red;
	class G_40mm_HE;
	class MissileCore;
	class MissileBase : MissileCore
	{
		class Components;
	};
    class B_127x99_Ball;
    // 12.7x99mm (.50 bmg), M2, API-T [42g, 903m/s, <= 300mm / 550m]
    class 4th_ammo_127x99_API_T: B_127x99_Ball
    {// 20mm RHA @ 100m
        hit = 0;
		indirectHit = 0.0;
		indirectHitRange = 0;
		cost = 1;
		airFriction = -0.000617;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 3;
		typicalSpeed = 838.2;
    };
    // 25x137mm, M791, APDS-T [134g, 1345 m/s, ]
    class 4th_ammo_25x137_APDS_T 
    {// 14mm RHA @ 45 deg, 2743.2m
        hit = 0;
		indirectHit = 0.0;
		indirectHitRange = 0;
		cost = 1;
		airFriction = -0.000617;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 3;
		typicalSpeed = 0;
    };
    // 25x137mm HEI-T [184g, 1100 m/s, < 0.8 mils]
    class 4th_ammo_25x137_HEI_T 
    {// Penetration data NA for HEI
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
    };
    // 70x350mm depleted uranium rounds (1.5kg uranium content)
    // 70x350mm APDS-T []
    class 4th_ammo_70x350_APDS_T 
    {// Penetration data NA for HEI
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
    };
};



// ANVIL II rockets
// ASGM-4 missile
// Scorpion ATGM
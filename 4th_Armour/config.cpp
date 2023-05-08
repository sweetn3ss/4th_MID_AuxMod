class cfgPatches {
    class 4th_Armour {
        authors[]={
            "Mesa",
            "Colin"
        };
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={
            "A3_Characters_F",
            "Halo_Marine_02"
        };
    };
};
class cfgVehicles {
    class Man;
    class CAManBase: Man {
        class HitPoints
		{
			class HitHead;
			class HitBody;
			class HitHands;
			class HitLegs;
		};
    };
    class HaloInf_Marine_WDL_F;
    class 4th_HaloInf_Rifleman_BLK: HaloInf_Marine_WDL_F
	{
		scope=2;
		displayName="[4th] Marine Urban";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\Halo_marine_02\Uniform\Textures\Top\Halo_marine_02_top_woodland_co.paa",
			"\Halo_marine_02\Uniform\Textures\Pants\Halo_marine_02_pants_woodland_co.paa",
			"\Halo_marine_02\Uniform\Textures\Armor\Halo_marine_02_armor_woodland_co.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="4th_uni_Rifleman_BLK";
	};
    class 4th_HaloInf_Rifleman_DES: 4th_HaloInf_Rifleman_BLK
	{
		scope=2;
		displayName="[4th] Marine Desert";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\Halo_marine_02\Uniform\Textures\Top\Halo_marine_02_top_woodland_co.paa",
			"\Halo_marine_02\Uniform\Textures\Pants\Halo_marine_02_pants_woodland_co.paa",
			"\Halo_marine_02\Uniform\Textures\Armor\Halo_marine_02_armor_woodland_co.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="4th_uni_Rifleman_DES";
	};
    class 4th_HaloInf_Rifleman_SNO: 4th_HaloInf_Rifleman_BLK
	{
		scope=2;
		displayName="[4th] Marine Snow";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\Halo_marine_02\Uniform\Textures\Top\Halo_marine_02_top_woodland_co.paa",
			"\Halo_marine_02\Uniform\Textures\Pants\Halo_marine_02_pants_woodland_co.paa",
			"\Halo_marine_02\Uniform\Textures\Armor\Halo_marine_02_armor_woodland_co.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="4th_uni_Rifleman_SNO";
	};
    class 4th_HaloInf_Rifleman_WDL: 4th_HaloInf_Rifleman_BLK
	{
		scope=2;
		displayName="[4th] Marine Woodland";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\Halo_marine_02\Uniform\Textures\Top\Halo_marine_02_top_woodland_co.paa",
			"\Halo_marine_02\Uniform\Textures\Pants\Halo_marine_02_pants_woodland_co.paa",
			"\Halo_marine_02\Uniform\Textures\Armor\Halo_marine_02_armor_woodland_co.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="4th_uni_Rifleman_WDL";
	};
};
class cfgWeapons {
    class InventoryItem_Base_F;
	class ItemCore;
	class V_PlateCarrierSpec_blk;
	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
    class haloinfmar_U_WDL_uniform;
	class 4th_uni_Rifleman_BLK: haloinfmar_U_WDL_uniform
	{
		author="Scarecrow";
		scope=2;
		allowedSlots[]={901};
		displayName="[MA:TGE] Woodland Uniform";
		picture="\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\Halo_marine_02\Uniform\Textures\Top\Halo_marine_02_top_woodland_co.paa",
			"\Halo_marine_02\Uniform\Textures\Pants\Halo_marine_02_pants_woodland_co.paa",
			"\Halo_marine_02\Uniform\Textures\Armor\Halo_marine_02_armor_woodland_co.paa"
		};
		class ItemInfo: UniformItem
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"\Halo_marine_02\Uniform\Textures\Top\Halo_marine_02_top_woodland_co.paa",
				"\Halo_marine_02\Uniform\Textures\Pants\Halo_marine_02_pants_woodland_co.paa",
				"\Halo_marine_02\Uniform\Textures\Armor\Halo_marine_02_armor_woodland_co.paa"
			};
			uniformModel="-";
			uniformClass="HaloInf_Marine_WDL_F";
			containerClass="Supply90";
			mass=80;
		};
	};
};
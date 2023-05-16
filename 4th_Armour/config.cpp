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
    class 4th_HaloInf_Rifleman_BASE: HaloInf_Marine_WDL_F
	{
		scope=0;
		scopeArsenal=0;
		displayName="[4th] Marine Urban";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			""
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="4th_uni_Rifleman_BASE";
	};
    class 4th_HaloInf_Rifleman_DES: 4th_HaloInf_Rifleman_BASE
	{
		scope=2;
		scopeArsenal=2;
		displayName="[4th] Marine Desert";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\4th_Armour\Uniform\Top\4th_HaloInf_Rifleman_Top_DES.paa",
			"\4th_Armour\Uniform\Pants\4th_HaloInf_Rifleman_Pants_DES.paa",
			"\4th_Armour\Uniform\Armour\4th_HaloInf_Rifleman_Armour_DES.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="4th_uni_Rifleman_DES";
	};
    class 4th_HaloInf_Rifleman_SNO: 4th_HaloInf_Rifleman_BASE
	{
		scope=2;
		scopeArsenal=2;
		displayName="[4th] Marine Snow";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\4th_Armour\Uniform\Top\4th_HaloInf_Rifleman_Top_SNO.paa",
			"\4th_Armour\Uniform\Pants\4th_HaloInf_Rifleman_Pants_SNO.paa",
			"\4th_Armour\Uniform\Armour\4th_HaloInf_Rifleman_Armour_SNO.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="4th_uni_Rifleman_SNO";
	};
    class 4th_HaloInf_Rifleman_WDL: 4th_HaloInf_Rifleman_BASE
	{
		scope=2;
		scopeArsenal=2;
		displayName="[4th] Marine Woodland";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\4th_Armour\Uniform\Top\4th_HaloInf_Rifleman_Top_WDL.paa",
			"\4th_Armour\Uniform\Pants\4th_HaloInf_Rifleman_Pants_WDL.paa",
			"\4th_Armour\Uniform\Armour\4th_HaloInf_Rifleman_Armour_WDL.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="4th_uni_Rifleman_WDL";
	};
    class 4th_HaloInf_Corpsman_DES: 4th_HaloInf_Rifleman_BASE
	{
		scope=2;
		scopeArsenal=2;
		displayName="[4th] Corpsman Desert";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\4th_Armour\Uniform\Top\4th_HaloInf_Rifleman_Top_DES.paa",
			"\4th_Armour\Uniform\Pants\4th_HaloInf_Rifleman_Pants_DES.paa",
			"\4th_Armour\Uniform\Armour\4th_HaloInf_Corpsman_Armour_DES.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="4th_uni_Corpsman_DES";
	};
    class 4th_HaloInf_Corpsman_SNO: 4th_HaloInf_Rifleman_BASE
	{
		scope=2;
		scopeArsenal=2;
		displayName="[4th] Corpsman Snow";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\4th_Armour\Uniform\Top\4th_HaloInf_Rifleman_Top_SNO.paa",
			"\4th_Armour\Uniform\Pants\4th_HaloInf_Rifleman_Pants_SNO.paa",
			"\4th_Armour\Uniform\Armour\4th_HaloInf_Corpsman_Armour_SNO.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="4th_uni_Corpsman_SNO";
	};
    class 4th_HaloInf_Corpsman_WDL: 4th_HaloInf_Rifleman_BASE
	{
		scope=2;
		scopeArsenal=2;
		displayName="[4th] Corpsman Woodland";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\4th_Armour\Uniform\Top\4th_HaloInf_Rifleman_Top_WDL.paa",
			"\4th_Armour\Uniform\Pants\4th_HaloInf_Rifleman_Pants_WDL.paa",
			"\4th_Armour\Uniform\Armour\4th_HaloInf_Corpsman_Armour_WDL.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="4th_uni_Corpsman_WDL";
	};
    class 4th_HaloInf_Pilot_BLK: 4th_HaloInf_Rifleman_BASE
	{
		scope=2;
		scopeArsenal=2;
		displayName="[4th] Pilot";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\4th_Armour\Uniform\Top\4th_HaloInf_Pilot_Top_BLK.paa",
			"\4th_Armour\Uniform\Pants\4th_HaloInf_Pilot_Pants_BLK.paa",
			"\4th_Armour\Uniform\Armour\4th_HaloInf_Pilot_Armour_BLK.paa"
		};
		model="\Halo_marine_02\Halo_Marine_02_Uniform_F.p3d";
		uniformClass="4th_uni_Pilot_BLK";
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
	class 4th_uni_Rifleman_BASE: haloinfmar_U_WDL_uniform
	{
		author="Mesa + Colin";
		scope=0;
		scopeArsenal=0;
		allowedSlots[]={901};
		displayName="-";
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
			"",
			"",
			""
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
				"",
				"",
				""
			};
			uniformModel="-";
			uniformClass="4th_HaloInf_Rifleman_BASE";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 4th_uni_Rifleman_DES: 4th_uni_Rifleman_BASE
	{
		author="Mesa + Colin";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[4th] Marine Desert";
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
			"\4th_Armour\Uniform\Top\4th_HaloInf_Rifleman_Top_DES.paa",
			"\4th_Armour\Uniform\Pants\4th_HaloInf_Rifleman_Pants_DES.paa",
			"\4th_Armour\Uniform\Armour\4th_HaloInf_Rifleman_Armour_DES.paa"
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
				"\4th_Armour\Uniform\Top\4th_HaloInf_Rifleman_Top_DES.paa",
				"\4th_Armour\Uniform\Pants\4th_HaloInf_Rifleman_Pants_DES.paa",
				"\4th_Armour\Uniform\Armour\4th_HaloInf_Rifleman_Armour_DES.paa"
			};
			uniformModel="-";
			uniformClass="4th_HaloInf_Rifleman_DES";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 4th_uni_Rifleman_SNO: 4th_uni_Rifleman_BASE
	{
		author="Mesa + Colin";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[4th] Marine Snow";
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
			"\4th_Armour\Uniform\Top\4th_HaloInf_Rifleman_Top_SNO.paa",
			"\4th_Armour\Uniform\Pants\4th_HaloInf_Rifleman_Pants_SNO.paa",
			"\4th_Armour\Uniform\Armour\4th_HaloInf_Rifleman_Armour_SNO.paa"
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
				"\4th_Armour\Uniform\Top\4th_HaloInf_Rifleman_Top_SNO.paa",
				"\4th_Armour\Uniform\Pants\4th_HaloInf_Rifleman_Pants_SNO.paa",
				"\4th_Armour\Uniform\Armour\4th_HaloInf_Rifleman_Armour_SNO.paa"
			};
			uniformModel="-";
			uniformClass="4th_HaloInf_Rifleman_SNO";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 4th_uni_Rifleman_WDL: 4th_uni_Rifleman_BASE
	{
		author="Mesa + Colin";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[4th] Marine Woodland";
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
			"\4th_Armour\Uniform\Top\4th_HaloInf_Rifleman_Top_WDL.paa",
			"\4th_Armour\Uniform\Pants\4th_HaloInf_Rifleman_Pants_WDL.paa",
			"\4th_Armour\Uniform\Armour\4th_HaloInf_Rifleman_Armour_WDL.paa"
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
				"\4th_Armour\Uniform\Top\4th_HaloInf_Rifleman_Top_WDL.paa",
				"\4th_Armour\Uniform\Pants\4th_HaloInf_Rifleman_Pants_WDL.paa",
				"\4th_Armour\Uniform\Armour\4th_HaloInf_Rifleman_Armour_WDL.paa"
			};
			uniformModel="-";
			uniformClass="4th_HaloInf_Rifleman_WDL";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 4th_uni_Corpsman_DES: 4th_uni_Rifleman_BASE
	{
		author="Mesa + Colin";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[4th] Corpsman Desert";
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
			"\4th_Armour\Uniform\Top\4th_HaloInf_Rifleman_Top_DES.paa",
			"\4th_Armour\Uniform\Pants\4th_HaloInf_Rifleman_Pants_DES.paa",
			"\4th_Armour\Uniform\Armour\4th_HaloInf_Corpsman_Armour_DES.paa"
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
				"\4th_Armour\Uniform\Top\4th_HaloInf_Rifleman_Top_DES.paa",
				"\4th_Armour\Uniform\Pants\4th_HaloInf_Rifleman_Pants_DES.paa",
				"\4th_Armour\Uniform\Armour\4th_HaloInf_Corpsman_Armour_DES.paa"
			};
			uniformModel="-";
			uniformClass="4th_HaloInf_Corpsman_DES";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 4th_uni_Corpsman_SNO: 4th_uni_Rifleman_BASE
	{
		author="Mesa + Colin";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[4th] Corpsman Snow";
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
			"\4th_Armour\Uniform\Top\4th_HaloInf_Rifleman_Top_SNO.paa",
			"\4th_Armour\Uniform\Pants\4th_HaloInf_Rifleman_Pants_SNO.paa",
			"\4th_Armour\Uniform\Armour\4th_HaloInf_Corpsman_Armour_SNO.paa"
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
				"\4th_Armour\Uniform\Top\4th_HaloInf_Rifleman_Top_SNO.paa",
				"\4th_Armour\Uniform\Pants\4th_HaloInf_Rifleman_Pants_SNO.paa",
				"\4th_Armour\Uniform\Armour\4th_HaloInf_Corpsman_Armour_SNO.paa"
			};
			uniformModel="-";
			uniformClass="4th_HaloInf_Corpsman_SNO";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 4th_uni_Corpsman_WDL: 4th_uni_Rifleman_BASE
	{
		author="Mesa + Colin";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[4th] Corpsman Woodland";
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
			"\4th_Armour\Uniform\Top\4th_HaloInf_Rifleman_Top_WDL.paa",
			"\4th_Armour\Uniform\Pants\4th_HaloInf_Rifleman_Pants_WDL.paa",
			"\4th_Armour\Uniform\Armour\4th_HaloInf_Corpsman_Armour_WDL.paa"
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
				"\4th_Armour\Uniform\Top\4th_HaloInf_Rifleman_Top_WDL.paa",
				"\4th_Armour\Uniform\Pants\4th_HaloInf_Rifleman_Pants_WDL.paa",
				"\4th_Armour\Uniform\Armour\4th_HaloInf_Corpsman_Armour_WDL.paa"
			};
			uniformModel="-";
			uniformClass="4th_HaloInf_Corpsman_WDL";
			containerClass="Supply90";
			mass=80;
		};
	};
	class 4th_uni_Pilot_BLK: 4th_uni_Rifleman_BASE
	{
		author="Mesa + Colin";
		scope=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		displayName="[4th] Pilot";
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
			"\4th_Armour\Uniform\Top\4th_HaloInf_Pilot_Top_BLK.paa",
			"\4th_Armour\Uniform\Pants\4th_HaloInf_Pilot_Pants_BLK.paa",
			"\4th_Armour\Uniform\Armour\4th_HaloInf_Pilot_Armour_BLK.paa"
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
				"\4th_Armour\Uniform\Top\4th_HaloInf_Pilot_Top_BLK.paa",
				"\4th_Armour\Uniform\Pants\4th_HaloInf_Pilot_Pants_BLK.paa",
				"\4th_Armour\Uniform\Armour\4th_HaloInf_Pilot_Armour_BLK.paa"
			};
			uniformModel="-";
			uniformClass="4th_HaloInf_Pilot_BLK";
			containerClass="Supply90";
			mass=80;
		};
	};
	class HeadgearItem: InventoryItem_Base_F
	{
		allowedSlots[]={901,605};
		type=605;
		hiddenSelections[]={};
		hitpointName="HitHead";
	};
    class HaloInf_Marine_WDL_headgear;
	class 4th_CH252_BASE: HaloInf_Marine_WDL_headgear
	{
		author="Mesa + Colin";
		scope=0;
		displayName="-";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=25;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=15;
					passThrough=0.1;
				};
				class Neck
				{
					hitpointName="HitNeck";
					armor=20;
					passThrough=0.1;
				};
			};
		};
	};
	class 4th_CH252_BASENV: 4th_CH252_BASE
	{
		author="Mesa + Colin";
		scope=0;
		displayName="-";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
            "_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1",
                "_Visor"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=25;
					passThrough=0.1;
				};
				class Neck
				{
					hitpointName="HitNeck";
					armor=20;
					passThrough=0.1;
				};
			};
		};
	};
	class 4th_CH252_Rifleman_DES: 4th_CH252_BASE
	{
		author="Mesa + Colin";
		scope=2;
		scopeArsenal=2;
		displayName="[4th] CH252 Rifleman Desert";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\4th_Armour\Helmets\4th_CH252_Rifleman_Helm_DES.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\4th_Armour\Helmets\4th_CH252_Rifleman_Helm_DES.paa"
			};
		};
	};
	class 4th_CH252_RiflemanNV_DES: 4th_CH252_BASENV
	{
		author="Mesa + Colin";
		scope=2;
		scopeArsenal=2;
		displayName="[4th] CH252NV Rifleman Desert";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
            "_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\4th_Armour\Helmets\4th_CH252_Rifleman_Helm_DES.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1",
                "_Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"\4th_Armour\Helmets\4th_CH252_Rifleman_Helm_DES.paa"
			};
		};
	};
	class 4th_CH252_Rifleman_SNO: 4th_CH252_BASE
	{
		author="Mesa + Colin";
		scope=2;
		scopeArsenal=2;
		displayName="[4th] CH252 Rifleman Snow";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\4th_Armour\Helmets\4th_CH252_Rifleman_Helm_SNO.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
			allowedSlots[]={801,901,701,605};
			modelSiSNO[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\4th_Armour\Helmets\4th_CH252_Rifleman_Helm_SNO.paa"
			};
		};
	};
	class 4th_CH252_RiflemanNV_SNO: 4th_CH252_BASENV
	{
		author="Mesa + Colin";
		scope=2;
		scopeArsenal=2;
		displayName="[4th] CH252NV Rifleman Snow";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
            "_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\4th_Armour\Helmets\4th_CH252_Rifleman_Helm_SNO.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
			allowedSlots[]={801,901,701,605};
			modelSiSNO[]={6};
			hiddenSelections[]=
			{
				"Camo1",
                "_Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"\4th_Armour\Helmets\4th_CH252_Rifleman_Helm_SNO.paa"
			};
		};
	};
	class 4th_CH252_Rifleman_WDL: 4th_CH252_BASE
	{
		author="Mesa + Colin";
		scope=2;
		scopeArsenal=2;
		displayName="[4th] CH252 Rifleman Woodland";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\4th_Armour\Helmets\4th_CH252_Rifleman_Helm_WDL.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
			allowedSlots[]={801,901,701,605};
			modelSiWDL[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\4th_Armour\Helmets\4th_CH252_Rifleman_Helm_WDL.paa"
			};
		};
	};
	class 4th_CH252_RiflemanNV_WDL: 4th_CH252_BASENV
	{
		author="Mesa + Colin";
		scope=2;
		scopeArsenal=2;
		displayName="[4th] CH252NV Rifleman Woodland";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
            "_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\4th_Armour\Helmets\4th_CH252_Rifleman_Helm_WDL.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
			allowedSlots[]={801,901,701,605};
			modelSiWDL[]={6};
			hiddenSelections[]=
			{
				"Camo1",
                "_Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"\4th_Armour\Helmets\4th_CH252_Rifleman_Helm_WDL.paa"
			};
		};
	};
	class 4th_CH252_Corpsman_DES: 4th_CH252_BASE
	{
		author="Mesa + Colin";
		scope=2;
		scopeArsenal=2;
		displayName="[4th] CH252 Corpsman Desert";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\4th_Armour\Helmets\4th_CH252_Corpsman_Helm_DES.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\4th_Armour\Helmets\4th_CH252_Corpsman_Helm_DES.paa"
			};
		};
	};
	class 4th_CH252_CorpsmanNV_DES: 4th_CH252_BASENV
	{
		author="Mesa + Colin";
		scope=2;
		scopeArsenal=2;
		displayName="[4th] CH252NV Corpsman Desert";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
            "_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\4th_Armour\Helmets\4th_CH252_Corpsman_Helm_DES.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1",
                "_Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"\4th_Armour\Helmets\4th_CH252_Corpsman_Helm_DES.paa"
			};
		};
	};
	class 4th_CH252_Corpsman_SNO: 4th_CH252_BASE
	{
		author="Mesa + Colin";
		scope=2;
		scopeArsenal=2;
		displayName="[4th] CH252 Corpsman Snow";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\4th_Armour\Helmets\4th_CH252_Corpsman_Helm_SNO.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
			allowedSlots[]={801,901,701,605};
			modelSiSNO[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\4th_Armour\Helmets\4th_CH252_Corpsman_Helm_SNO.paa"
			};
		};
	};
	class 4th_CH252_CorpsmanNV_SNO: 4th_CH252_BASENV
	{
		author="Mesa + Colin";
		scope=2;
		scopeArsenal=2;
		displayName="[4th] CH252NV Corpsman Snow";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
            "_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\4th_Armour\Helmets\4th_CH252_Corpsman_Helm_SNO.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
			allowedSlots[]={801,901,701,605};
			modelSiSNO[]={6};
			hiddenSelections[]=
			{
				"Camo1",
                "_Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"\4th_Armour\Helmets\4th_CH252_Corpsman_Helm_SNO.paa"
			};
		};
	};
	class 4th_CH252_Corpsman_WDL: 4th_CH252_BASE
	{
		author="Mesa + Colin";
		scope=2;
		scopeArsenal=2;
		displayName="[4th] CH252 Corpsman Woodland";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\4th_Armour\Helmets\4th_CH252_Corpsman_Helm_WDL.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
			allowedSlots[]={801,901,701,605};
			modelSiWDL[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\4th_Armour\Helmets\4th_CH252_Corpsman_Helm_WDL.paa"
			};
		};
	};
	class 4th_CH252_CorpsmanNV_WDL: 4th_CH252_BASENV
	{
		author="Mesa + Colin";
		scope=2;
		scopeArsenal=2;
		displayName="[4th] CH252NV Corpsman Woodland";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
            "_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\4th_Armour\Helmets\4th_CH252_Corpsman_Helm_WDL.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
			allowedSlots[]={801,901,701,605};
			modelSiWDL[]={6};
			hiddenSelections[]=
			{
				"Camo1",
                "_Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"\4th_Armour\Helmets\4th_CH252_Corpsman_Helm_WDL.paa"
			};
		};
	};
	class 4th_CH252_Pilot_BLK: 4th_CH252_BASE
	{
		author="Mesa + Colin";
		scope=2;
		scopeArsenal=2;
		displayName="[4th] CH252 Pilot";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\4th_Armour\Helmets\4th_CH252_Pilot_Helm_BLK.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
			allowedSlots[]={801,901,701,605};
			modelSiWDL[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\4th_Armour\Helmets\4th_CH252_Pilot_Helm_BLK.paa"
			};
		};
	};
	class 4th_CH252_PilotNV_BLK: 4th_CH252_BASENV
	{
		author="Mesa + Colin";
		scope=2;
		scopeArsenal=2;
		displayName="[4th] CH252NV Pilot";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		model="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
            "_Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\4th_Armour\Helmets\4th_CH252_Pilot_Helm_BLK.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\Halo_marine_02\Halo_Marine_02_Helmet_F.p3d";
			allowedSlots[]={801,901,701,605};
			modelSiWDL[]={6};
			hiddenSelections[]=
			{
				"Camo1",
                "_Visor"
			};
			hiddenSelectionsTextures[]=
			{
				"\4th_Armour\Helmets\4th_CH252_Pilot_Helm_BLK.paa"
			};
		};
	};
};
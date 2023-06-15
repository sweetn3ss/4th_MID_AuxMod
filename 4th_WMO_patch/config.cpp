#define _ARMA_

class CfgPatches
{
	class DSY_WMO_Patch
	{
		units[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"BW_WalkableMovingObjects"};
		weapons[] = {};
	};
};
class CfgFunctions
{
	class DSY_WMO_patch
	{
		class 4th_WMO_patch
		{
			file = "\4th_WMO_patch";
			class init
			{
				postInit = 1;
			};
			class patch {};
		};
	};
};
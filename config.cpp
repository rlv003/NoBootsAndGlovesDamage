class CfgPatches
{
	class NoBootsAndGlovesDamage
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {};
	};
};
class CfgMods
{
	class NoBootsAndGlovesDamage
	{
		dir = "NoBootsAndGlovesDamage";
		name = "No Boots and Gloves Damage";
		author = "RonDog";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"NoBootsAndGlovesDamage/Scripts/3_Game"};
			}
		};
	};
};

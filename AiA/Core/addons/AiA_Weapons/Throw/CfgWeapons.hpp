// Generated by unRap v1.06 by Kegetys

class CfgWeapons {
	class GrenadeLauncher;	// External class reference
	
	class Throw : GrenadeLauncher {
		muzzles[] = {"HandGrenade_Stone", "TearGasMuzzle", "BottleMuzzle", "TinMuzzle", "CanMuzzle", "RoadFlareMuzzle", "BioGasMuzzle", "HandGrenadeMuzzle", "MiniGrenadeMuzzle", "SmokeShellMuzzle", "SmokeShellYellowMuzzle", "SmokeShellGreenMuzzle", "SmokeShellRedMuzzle", "SmokeShellPurpleMuzzle", "SmokeShellOrangeMuzzle", "SmokeShellBlueMuzzle", "ChemlightGreenMuzzle", "ChemlightRedMuzzle", "ChemlightYellowMuzzle", "ChemlightBlueMuzzle", "IRStrobe"};
		class ThrowMuzzle;	// External class reference
		
		class HandGrenadeMuzzle : ThrowMuzzle {
			magazines[] = {"HandGrenade", "HandGrenade_West", "HandGrenade_East", BAF_L109A1_HE};
		};
        
        class TearGasMuzzle: ThrowMuzzle {
            displayname = "Smoke Grenade (Tear Gas)";
            magazines[] = {"SmokeShellTear"};
        };
        
        class BioGasMuzzle: ThrowMuzzle {
            displayname = "Anti-Bio Hydroflouric Gas";
            magazines[] = {"SmokeShellBio"};
        };
		
		class RoadFlareMuzzle : ThrowMuzzle {
			displayName = "Road Flare";
			magazines[] = {"HandRoadFlare"};
			begin1[] = {"dayz_weapons\sounds\roadflare_start", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 1};
		};
		
		class BottleMuzzle : ThrowMuzzle {
			displayName = "Empty Bottle";
			magazines[] = {"TrashJackDaniels"};
		};
		
		class TinMuzzle : ThrowMuzzle {
			displayName = "Empty Tin Can";
			magazines[] = {"TrashTinCan"};
		};
		
		class CanMuzzle : ThrowMuzzle {
			displayName = "Empty Can";
			magazines[] = {"ItemSodaEmpty", "ItemSodaCokeEmpty", "ItemSodaPepsiEmpty", "ItemSodaMdewEmpty", "ItemSodaLemonadeEmpty"};
		};
		
		class IRStrobe : ThrowMuzzle {};
	};
};

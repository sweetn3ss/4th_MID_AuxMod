//hornet (gun sound: Yak-130) (handling: RHS apache)
//falcon (suppourt gun sound: XM312 (possibly tarantula); chingun sound: Pandur II) (handling: uh-1)
//pelican (chingun sound: M-ATV (GMG)) (handling: )
/*This is the config if you want to give your pelicans custom interiors:

hiddenSelections[] = {"camo1","camo2","camo3","clan","clan_text","insignia","attach_gun"};
hiddenSelectionsTextures[] = {"exteriortexturepath","interiortexturepath",""};*/

class CfgVehicles
{
    class Air;
    class Helicopter;
    class OPTRE_UNSC_hornet;
    class OPTRE_UNSC_falcon;
    class OPTRE_UNSC_falcon_S;
    class OPTRE_UNSC_falcon_armed;
    class OPTRE_UNSC_falcon_armed_S;
    class OPTRE_Pelican_armed;

    class 4th_falcon:OPTRE_UNSC_falcon_armed {
        //value
    };
    class 4th_falcon_u:OPTRE_UNSC_falcon {
        //value = "config!";
    };
    class 4th_falcon_s:OPTRE_UNSC_falcon_armed_S {
        //value = "config!";
    };
    class 4th_falcon_u_s:OPTRE_UNSC_falcon_S {
        //value = "config!";
    };
    class 4th_hornet:OPTRE_UNSC_hornet {
        //value = "config!";
    };
    class 4th_Pelican:OPTRE_Pelican_armed {
        //value = "config!";
    };
    
};
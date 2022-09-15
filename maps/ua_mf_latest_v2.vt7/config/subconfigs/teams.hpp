// limits and vanilla/custom trait values
class MikeForce
{
    name = "UA International Legion [Infantry]";
    icon = "img\Teams\logo_ua_international_legion_HL.paa";
    shortname = "International Legion";
    unit = "b_ngu_sergeant_gp25";

    class rolelimits 
    {
        medic = 1;
        engineer = 0;
        explosiveSpecialist = 1;
        vn_artillery = 0;
    };
    
    class defaultTraits
    {
        camouflageCoef = 0.4;
        audibleCoef = 1;
        loadCoef = 1;
        engineer = false;
        explosiveSpecialist = false;
        medic = false;
        UAVHacker = false;
        vn_artillery = false;
        harassable = true;
        scout = true;
    };

    //Function Calls on team Join
    onJoin = "";
    onLeave = "";
};
class SpikeTeam
{
    name = "UA SSO [Special Forces]";
    icon = "img\Teams\logo_ua_sso_HL.paa";
    shortname = "SSO";
    unit = "b_afougf_rifleman_sso_sard_ak74";

    class rolelimits 
    {
        medic = 2;
        engineer = 2;
        explosiveSpecialist = 0;
        vn_artillery = 1;
    };
    
    class defaultTraits
    {
        camouflageCoef = 1;
        audibleCoef = 0.3;
        loadCoef = 0.5;
        engineer = false;
        explosiveSpecialist = true;
        medic = false;
        UAVHacker = false;
        vn_artillery = false;
        harassable = false;
        scout = true;
        scout_multiple = true;
    };

    //Function Calls on team Join
    onJoin = "";
    onLeave = "";
};
class ACAV
{
    name = "UA Ground Forces [Ground Support]";
    icon = "img\Teams\logo_ua_ground_forces_HL.paa";
    shortname = "UA Ground Forces";
    unit = "b_afougf_sergeant_gp25";

    class rolelimits 
    {
        medic = 4;
        engineer = 40;
        explosiveSpecialist = 10;
        vn_artillery = 4;
    };
    
    class defaultTraits
    {
        camouflageCoef = 0.8;
        audibleCoef = 0.6;
        loadCoef = 1;
        engineer = false;
        explosiveSpecialist = false;
        medic = false;
        UAVHacker = false;
        vn_artillery = false;
        harassable = true;
        scout = false;
    };

    //Function Calls on team Join
    onJoin = "";
    onLeave = "";
};
class GreenHornets
{
    name = "Echo Detachment [Homies]";
    icon = "img\Teams\logo_ua_exo_hl.paa";
    shortname = "EXO";
    unit = "CUP_B_US_SpecOps_JTAC";
    
    class rolelimits 
    {
        medic = 1;
        engineer = 1;
        explosiveSpecialist = 1;
        vn_artillery = 1;
    };
    
    class defaultTraits
    {
        camouflageCoef = 0.8;
        audibleCoef = 0.6;
        loadCoef = 1;
        engineer = false;
        explosiveSpecialist = false;
        medic = false;
        UAVHacker = true;
        vn_artillery = false;
        harassable = true;
        scout = true;
    };

    //Function Calls on team Join
    onJoin = "";
    onLeave = "";
};

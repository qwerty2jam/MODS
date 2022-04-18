#define MCB_UNIFORMS "USP_G3C_KP_MCB_AFP"
class SOCOMD_AFP_Leader {
    class uniforms{
        arid_uniforms[]={
            MCB_UNIFORMS
        };
        temperate_uniforms[]={
            MCB_UNIFORMS
        };
        snow_uniforms[]={
            MCB_UNIFORMS
        };
    };
    weapons[]={
        GENERAL_RIFLE,
        GL_RIFLE,
        HANDGUNS
    };
    vests[]={
        VESTS_COMMON,
        TWO_COMMS_RIGS,
        VESTS_COMMS,
        VESTS_WEAPONS,
        VESTS_COMMANDER
    };
    bags[]={
        BAGS,
        BACKPACK_COMMS
    };
    grenades[]={
        GRENADES_LEADER
    };
};

class SOCOMD_AFP_Rifleman{
    class uniforms{
        arid_uniforms[]={
            MCB_UNIFORMS
        };
        temperate_uniforms[]={
            MCB_UNIFORMS
        };
        snow_uniforms[]={
            MCB_UNIFORMS
        };
    };
    weapons[]={
        GENERAL_RIFLE,
        GL_RIFLE,
        HANDGUNS
    };
    vests[]={
        VESTS_COMMON,
        ONE_COMM_RIGS,
        VESTS_TL,
        VESTS_WEAPONS
        };
    bags[]={
        BAGS
    };
    grenades[]={
        GRENADES_NORMAL
    };
    arsenalExtras[] ={
        RIFLEMAN_EXTRAS
    };
};

class SOCOMD_AFP_Breacher{
    class uniforms{
        arid_uniforms[]={
            UNIFORMS
        };
        temperate_uniforms[]={
            MCB_UNIFORMS
        };
        snow_uniforms[]={
            MCB_UNIFORMS
        };
    };
    weapons[]={
        GENERAL_RIFLE,
        GL_RIFLE,
        HANDGUNS
    };
    vests[]={
        VESTS_COMMON,
        ONE_COMM_RIGS,
        VESTS_TL,
        VESTS_WEAPONS
        };
    bags[]={
        BAGS,
        BACKPACK_SAPPER
    };
    grenades[]={
        GRENADES_BREACHER
    };
};
class SOCOMD_AFP_Marksman{
    class uniforms{
        arid_uniforms[]={
            UNIFORMS
        };
        temperate_uniforms[]={
            MCB_UNIFORMS
        };
        snow_uniforms[]={
            MCB_UNIFORMS
        };
    };
    weapons[]={
        MARKSMAN,
        HANDGUNS
    };
    vests[]={
        VESTS_COMMON,
        ONE_COMM_RIGS,
        VESTS_TL
        };
    bags[]={
        BAGS
    };
    grenades[]={
        GRENADES_NORMAL
    };
};
class SOCOMD_AFP_Medic{
    class uniforms{
        arid_uniforms[]={
            UNIFORMS
        };
        temperate_uniforms[]={
            MCB_UNIFORMS
        };
        snow_uniforms[]={
            MCB_UNIFORMS
        };
    };
    weapons[]={
        GENERAL_RIFLE,
        HANDGUNS
    };
    vests[]={
        VESTS_COMMON,
        ONE_COMM_RIGS,
        VESTS_MED
        };
    bags[]={
        BAGS,
        BACKPACK_MEDIC
    };
    grenades[]={
        GRENADES_NORMAL
    };
};

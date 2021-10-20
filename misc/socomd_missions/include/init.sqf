enableSentences false;
enableRadio false;

//Using ACRE2
[] execVM "include\acre2_compat.sqf";

// FOB initialisation for spawners & group IDs
[] execVM "initFOB.sqf";

// Works fine for me, probably an issue with the Vanilla corpseRemovalManager which is being disabled for testing.
// If this issue persists for others this could be called via module when needed, instead of a scheduled loop.
// Infinate Loop, Fix Zeus group bug (will remove deleted groups so more can be added)
//[] spawn {
//    while {true} do {{
//        deleteGroup _x
//    }forEach allGroups;
//    sleep 61;
//    };
//};

// Fixing warning spam from ambientLife. Also, if I hear "Look a bunny!" one more bloody time...
sleep 0.2;
enableEnvironment [false, true];

missionNamespace setVariable ["SOCOMD_InitComplete", 1];
////////////////////////////////////////////////////////////////////////////////
// ACE Medication

class Epinephrine {
	painReduce=0;
	hrIncreaseLow[]={20,25,25};
	hrIncreaseNormal[]={20,25,25};
	hrIncreaseHigh[]={30,30,25};
	timeInSystem=300;
	maxDose=6;
	inCompatableMedication[]={};
	viscosityChange=15;
};

class Morphine {
	painReduce=1;
	hrIncreaseLow[]={-15,-25,45};
	hrIncreaseNormal[]={-15,-35,45};
	hrIncreaseHigh[]={-15,-35,45};
	timeInSystem=9800;
	maxDose=4;
	inCompatableMedication[]={};
	viscosityChange=-3;
};

class Atropine {
	painReduce=0;
	hrIncreaseLow[]={7,10,15};
	hrIncreaseNormal[]={15,25,20};
	hrIncreaseHigh[]={15,30,10};
	timeInSystem=120;
	maxDose=6;
	inCompatableMedication[]={};
	viscosityChange=-10;
};

class Adenosine {
	painReduce = 0;
	hrIncreaseLow[] = {-7, -10};
	hrIncreaseNormal[] = {-15, -30};
	hrIncreaseHigh[] = {-15, -35};
	timeInSystem = 120;
	timeTillMaxEffect = 15;
	maxDose = 6;
	incompatibleMedication[] = {};
};

class PainKillers {
	painReduce=0.69999999;
	timeInSystem=120;
	maxDose=10;
	inCompatableMedication[]={};
	viscosityChange=5;
};

////////////////////////////////////////////////////////////////////////////////

class Naloxone {
	painReduce=0;
	hrIncreaseLow[]={5,7,60};
	hrIncreaseNormal[]={7,10,60};
	hrIncreaseHigh[]={15,25,60};
	timeInSystem=120;
	maxDose=4;
	onOverDose = "[_target, true, 60, true] call ace_medical_fnc_setUnconscious";
	inCompatableMedication[]={};
	viscosityChange=20;
};

class Fentanyl {
	painReduce=5;
	hrIncreaseLow[]={-10,-20,45};
	hrIncreaseNormal[]={-10,-20,45};
	hrIncreaseHigh[]={-10,-35,45};
	timeInSystem=6800;
	maxDose=4;
	inCompatableMedication[]={};
	viscosityChange=-3;
};

class Ketamine_6mg {
	painReduce=50;
	hrIncreaseLow[]={15,25,45};
	hrIncreaseNormal[]={15,35,45};
	hrIncreaseHigh[]={15,45,45};
	timeInSystem=1800;
	maxDose=12;
	inCompatableMedication[]={};
	viscosityChange=5;
	unconsciousTime=30;
};

class Ketamine_200mg : Ketamine_6mg {
	painReduce=50;
	hrIncreaseLow[]={15,25,45};
	hrIncreaseNormal[]={15,35,45};
	hrIncreaseHigh[]={15,45,45};
	timeInSystem=1800;
	maxDose=12;
	inCompatableMedication[]={};
	viscosityChange=5;
	unconsciousTime=300;
};

class Tetra : PainKillers {
	painReduce=0;
	hrIncreaseLow[]={0,0,1};
	hrIncreaseNormal[]={0,0,1};
	hrIncreaseHigh[]={0,0,1};
	timeInSystem=5000;
	viscosityChange=0;
};

class Apap : PainKillers {
	painReduce=0.4;
	timeInSystem=1200;
	maxDose=15;
	inCompatableMedication[]={};
	viscosityChange=0;
};
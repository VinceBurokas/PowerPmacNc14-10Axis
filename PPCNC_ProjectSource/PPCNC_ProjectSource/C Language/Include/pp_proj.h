
#ifndef _PP_PROJ_H_
#define _PP_PROJ_H_
//***********************************************************************************
// C header for accessing PMAC Global, CSGlobal, Ptr vars
// _PPScriptMode_ for Pmac Script like access global & csglobal
// global Mypvar - access with "Mypvar"
// global Myparray(32) - access with "Myparray(i)"
// csglobal Myqvar - access with "Myqvar(i)" where "i" is Coord #
// csglobal Myqarray(16) - access with "Myqvar(i,j)" where "j" is index
// _EnumMode_ for Pmac enum data type checking on Set & Get global functions
// Example
// global Mypvar
// csglobal Myqvar
// "SetGlobalVar(Myqvar, data)" will give a compile error because its a csglobal var.
// "SetCSGlobalVar(Mypvar, data)" will give a compile error because its a global var.
//************************************************************************************

#ifdef _PPScriptMode_
enum globalP {_globalP_=-1};
enum globalParray {_globalParray_=-1};
enum csglobalQ {_csglobalQ_=-1};
enum csglobalQarray {_csglobalQarray_=-1};

enum ptrM {_ptrM_=-1
,MachineState=1
,CommandReg=2
,StatusReg=3
,JogOptions=4
,RunOptions=5
,MachineMode=6
,HmiCounter=7
,SoftPanelCommand=20
,SoftPanelStatus=21
,MsgFatal=100
,MsgFatalAck=101
,MsgWarning=120
,MsgWarningAck=121
,MsgInfo=140
,MsgInfoAck=141
,MsgLog=160
,SpeedSelect=8192
,AxisSelect=8193
,OvrRapid=8194
,OvrFeed=8195
,OvrSpindle=8196
,HandCounter=8197
,HandEncoder=8198
,KeyCode=8199
,KeyDown=8200
,OutputLED=8201
,OutputLED2=8202};
enum ptrMarray {_ptrMarray_=-1};
#define	PowerPendPresent	pshm->P[8192]
#define	HandwheelActive	pshm->P[8193]
#define	InitHandle	pshm->P[8194]
#define	PrevHandleCount	pshm->P[8195]
#define	HandleWhileLoop	pshm->P[8196]
#define	HandleChange	pshm->P[8197]
#define	HandleSpeed	pshm->P[8198]
#define	TargetPos(i)	pshm->P[(8199+i)%MAX_P]
#define	HandleScaleFactor1	pshm->P[8231]
#define	HandleScaleFactor2	pshm->P[8232]
#define	HandleScaleFactor3	pshm->P[8233]
#define	HandleScaleFactor4	pshm->P[8234]
#define	PrevJogSpeed(i)	pshm->P[(8235+i)%MAX_P]
#define	PrevJogTa(i)	pshm->P[(8267+i)%MAX_P]
#define	PrevJogTs(i)	pshm->P[(8299+i)%MAX_P]
#define	Setup_MotorNumber(i)	pshm->P[(8331+i)%MAX_P]
#define	Setup_AxisIndex(i)	pshm->P[(8342+i)%MAX_P]
#define	Setup_PendantPos(i)	pshm->P[(8353+i)%MAX_P]
#define	Setup_AxisIndexToMotorNumber(i)	pshm->P[(8364+i)%MAX_P]
#define	Setup_AxisIndexToAxisNumber(i)	pshm->P[(8396+i)%MAX_P]
#define	A1position	pshm->P[100]
#define	A2position	pshm->P[101]
#define	A3position	pshm->P[102]
#define	A4position	pshm->P[103]
#define	A5position	pshm->P[104]
#define	A6position	pshm->P[105]
#define	A7position	pshm->P[106]
#define	A8position	pshm->P[107]
#define	A9position	pshm->P[108]
#define	A10position	pshm->P[109]
#define	A1disttogo	pshm->P[110]
#define	A2disttogo	pshm->P[111]
#define	A3disttogo	pshm->P[112]
#define	A4disttogo	pshm->P[113]
#define	A5disttogo	pshm->P[114]
#define	A6disttogo	pshm->P[115]
#define	A7disttogo	pshm->P[116]
#define	A8disttogo	pshm->P[117]
#define	A9disttogo	pshm->P[118]
#define	A10disttogo	pshm->P[119]
#define	A1torque	pshm->P[120]
#define	A2torque	pshm->P[121]
#define	A3torque	pshm->P[122]
#define	A4torque	pshm->P[123]
#define	A5torque	pshm->P[124]
#define	A6torque	pshm->P[125]
#define	A7torque	pshm->P[126]
#define	A8torque	pshm->P[127]
#define	A9torque	pshm->P[128]
#define	A10torque	pshm->P[129]
#define	A1FolErr	pshm->P[140]
#define	A2FolErr	pshm->P[141]
#define	A3FolErr	pshm->P[142]
#define	A4FolErr	pshm->P[143]
#define	A5FolErr	pshm->P[144]
#define	A6FolErr	pshm->P[145]
#define	A7FolErr	pshm->P[146]
#define	A8FolErr	pshm->P[147]
#define	A9FolErr	pshm->P[148]
#define	A10FolErr	pshm->P[149]
#define	GCodesGroup0	pshm->P[200]
#define	GCodesGroup1	pshm->P[201]
#define	GCodesGroup2	pshm->P[202]
#define	GCodesGroup3	pshm->P[203]
#define	GCodesGroup5	pshm->P[205]
#define	GCodesGroup6	pshm->P[206]
#define	GCodesGroup7	pshm->P[207]
#define	GCodesGroup8	pshm->P[208]
#define	GCodesGroup11	pshm->P[211]
#define	GCodesGroup12	pshm->P[212]
#define	GCodesGroup13	pshm->P[213]
#define	GCodesGroup15	pshm->P[215]
#define	GCodesGroup16	pshm->P[216]
#define	GCodesGroup19	pshm->P[219]
#define	GCodesGroup22	pshm->P[222]
#define	MCodesProgramGroup	pshm->P[300]
#define	MCodesSpindleGroup	pshm->P[301]
#define	MCodesCoolantGroup	pshm->P[302]
#define	MCodesChuckGroup	pshm->P[303]
#define	MCodesThreadingGroup	pshm->P[304]
#define	MCodesGearRangeGroup	pshm->P[305]
#define	MCodesFeedrateOverrideGroup	pshm->P[306]
#define	MCodesBAxisGroup	pshm->P[307]
#define	MCodesSubprogramGroup	pshm->P[308]
#define	DispFeedAct	pshm->P[500]
#define	DispFeedCmd	pshm->P[501]
#define	DispFeedOverride	pshm->P[502]
#define	DispFeedMode	pshm->P[503]
#define	AxesDisplayMode	pshm->P[504]
#define	DispSpindleAct	pshm->P[510]
#define	DispSpindleCmd	pshm->P[511]
#define	DispSpinOverride	pshm->P[512]
#define	SpinDisplayMode	pshm->P[513]
#define	CS1ActiveTCode	pshm->P[520]
#define	CS1ActiveHCode	pshm->P[521]
#define	CS1ActiveDCode	pshm->P[522]
#define	CS1ToolNext	pshm->P[523]
#define	LaserPower	pshm->P[530]
#define	LaserFrequency	pshm->P[531]
#define	LaserRatedPower	pshm->P[532]
#define	LaserMinFrequency	pshm->P[533]
#define	LaserMaxFrequency	pshm->P[534]
#define	LaserMinPulseDuty	pshm->P[535]
#define	LaserMaxPulseDuty	pshm->P[536]
#define	LaserMinAnalogVoltage	pshm->P[537]
#define	LaserPfmOutputFrequency	pshm->P[538]
#define	LaserPfmOutputDutyCycle	pshm->P[539]
#define	LaserPfmOutputFirstShotDistance	pshm->P[540]
#define	JogX1	pshm->P[700]
#define	JogX2	pshm->P[701]
#define	JogX3	pshm->P[702]
#define	JogX4	pshm->P[703]
#define	JogX5	pshm->P[704]
#define	JogIncDist	pshm->P[705]
#define	PMACSourceVer	pshm->P[706]
#define	MaxFeedrate	pshm->P[707]
#define	LoopDisplay	pshm->P[720]
#define	G04StartTime	pshm->P[721]
#define	G04EndTime	pshm->P[722]
#define	G04TotalTime	pshm->P[723]
#define	NativeUnits(i)	pshm->Coord[i%MAX_COORDS].Q[1024]
#define	UnitScaling(i)	pshm->Coord[i%MAX_COORDS].Q[1025]
#define	XcentScale(i)	pshm->Coord[i%MAX_COORDS].Q[1026]
#define	YcentScale(i)	pshm->Coord[i%MAX_COORDS].Q[1027]
#define	ZcentScale(i)	pshm->Coord[i%MAX_COORDS].Q[1028]
#define	XcentRot(i)	pshm->Coord[i%MAX_COORDS].Q[1029]
#define	YcentRot(i)	pshm->Coord[i%MAX_COORDS].Q[1030]
#define	ZcentRot(i)	pshm->Coord[i%MAX_COORDS].Q[1031]
#define	XcentMir(i)	pshm->Coord[i%MAX_COORDS].Q[1032]
#define	YcentMir(i)	pshm->Coord[i%MAX_COORDS].Q[1033]
#define	ZcentMir(i)	pshm->Coord[i%MAX_COORDS].Q[1034]
#define	Xscaling(i)	pshm->Coord[i%MAX_COORDS].Q[1035]
#define	Yscaling(i)	pshm->Coord[i%MAX_COORDS].Q[1036]
#define	Zscaling(i)	pshm->Coord[i%MAX_COORDS].Q[1037]
#define	Xrotate(i)	pshm->Coord[i%MAX_COORDS].Q[1038]
#define	Yrotate(i)	pshm->Coord[i%MAX_COORDS].Q[1039]
#define	Zrotate(i)	pshm->Coord[i%MAX_COORDS].Q[1040]
#define	XmirFact(i)	pshm->Coord[i%MAX_COORDS].Q[1041]
#define	YmirFact(i)	pshm->Coord[i%MAX_COORDS].Q[1042]
#define	ZmirFact(i)	pshm->Coord[i%MAX_COORDS].Q[1043]
#define	XworkOfs(i)	pshm->Coord[i%MAX_COORDS].Q[1044]
#define	YworkOfs(i)	pshm->Coord[i%MAX_COORDS].Q[1045]
#define	ZworkOfs(i)	pshm->Coord[i%MAX_COORDS].Q[1046]
#define	XlocOfs(i)	pshm->Coord[i%MAX_COORDS].Q[1047]
#define	YlocOfs(i)	pshm->Coord[i%MAX_COORDS].Q[1048]
#define	ZlocOfs(i)	pshm->Coord[i%MAX_COORDS].Q[1049]
#define	CS1_CutterRadius(i)	pshm->Coord[i%MAX_COORDS].Q[1050]
#define	CS1_CutterWear(i)	pshm->Coord[i%MAX_COORDS].Q[1051]
#define	XtoolOfs(i)	pshm->Coord[i%MAX_COORDS].Q[1052]
#define	YtoolOfs(i)	pshm->Coord[i%MAX_COORDS].Q[1053]
#define	ZtoolOfs(i)	pshm->Coord[i%MAX_COORDS].Q[1054]
#define	XcomOfs(i)	pshm->Coord[i%MAX_COORDS].Q[1055]
#define	YcomOfs(i)	pshm->Coord[i%MAX_COORDS].Q[1056]
#define	ZcomOfs(i)	pshm->Coord[i%MAX_COORDS].Q[1057]
#define	XaxisDesPos(i)	pshm->Coord[i%MAX_COORDS].Q[1058]
#define	YaxisDesPos(i)	pshm->Coord[i%MAX_COORDS].Q[1059]
#define	ZaxisDesPos(i)	pshm->Coord[i%MAX_COORDS].Q[1060]
#define	CannedCycleCode(i)	pshm->Coord[i%MAX_COORDS].Q[1061]
#define	CannedCycleRepeats(i)	pshm->Coord[i%MAX_COORDS].Q[1062]
#define	R_PlanePos(i)	pshm->Coord[i%MAX_COORDS].Q[1063]
#define	Init_PlanePos(i)	pshm->Coord[i%MAX_COORDS].Q[1064]
#define	ReturnLevel(i)	pshm->Coord[i%MAX_COORDS].Q[1065]
#define	PeckDepth(i)	pshm->Coord[i%MAX_COORDS].Q[1066]
#define	RetractDistance(i)	pshm->Coord[i%MAX_COORDS].Q[1067]
#define	LastPeckCycle(i)	pshm->Coord[i%MAX_COORDS].Q[1068]
#define	PeckCycles(i)	pshm->Coord[i%MAX_COORDS].Q[1069]
#define	Z_PrevDepth(i)	pshm->Coord[i%MAX_COORDS].Q[1070]
#define	X_Pos(i)	pshm->Coord[i%MAX_COORDS].Q[1071]
#define	Y_Pos(i)	pshm->Coord[i%MAX_COORDS].Q[1072]
#define	Z_Pos(i)	pshm->Coord[i%MAX_COORDS].Q[1073]
#define	Z_Depth(i)	pshm->Coord[i%MAX_COORDS].Q[1074]
#define	R_Plane(i)	pshm->Coord[i%MAX_COORDS].Q[1075]
#define	Abs_Mode(i)	pshm->Coord[i%MAX_COORDS].Q[1076]
#define	CycleDwell(i)	pshm->Coord[i%MAX_COORDS].Q[1077]
#define	XreadFlag(i)	pshm->Coord[i%MAX_COORDS].Q[1078]
#define	YreadFlag(i)	pshm->Coord[i%MAX_COORDS].Q[1079]
#define	ZreadFlag(i)	pshm->Coord[i%MAX_COORDS].Q[1080]
#define	BoreShift(i)	pshm->Coord[i%MAX_COORDS].Q[1081]
#define	X_inter_point(i)	pshm->Coord[i%MAX_COORDS].Q[1082]
#define	Y_inter_point(i)	pshm->Coord[i%MAX_COORDS].Q[1083]
#define	Z_inter_point(i)	pshm->Coord[i%MAX_COORDS].Q[1084]
#define	X_final_point(i)	pshm->Coord[i%MAX_COORDS].Q[1085]
#define	Y_final_point(i)	pshm->Coord[i%MAX_COORDS].Q[1086]
#define	Z_final_point(i)	pshm->Coord[i%MAX_COORDS].Q[1087]
#define	OverrideDisable(i)	pshm->Coord[i%MAX_COORDS].Q[1088]
#define	CoordFeedTemp(i)	pshm->Coord[i%MAX_COORDS].Q[1089]
#define	IncDistance	pshm->P[8428]
#define	FeedOverrideInput	pshm->P[8429]
#define	DryRunMode	pshm->P[8430]
#define	OverrideTemp	pshm->P[8431]
#define	OverrideTemp2	pshm->P[8432]
#define	OverrideInc	pshm->P[8433]
#define	OverrideMax	pshm->P[8434]
#define	SpindleOverrideTemp	pshm->P[8435]
#define	SpindleOverrideInc	pshm->P[8436]
#define	SpindleOverrideMax	pshm->P[8437]
#define	StepLatch	pshm->P[8438]
#define	StepCycleLatch	pshm->P[8439]
#define	AutoJogFlag	pshm->P[8440]
#define	CS1WorkG54X	pshm->P[900]
#define	CS1WorkG54Y	pshm->P[901]
#define	CS1WorkG54Z	pshm->P[902]
#define	CS1WorkG55X	pshm->P[910]
#define	CS1WorkG55Y	pshm->P[911]
#define	CS1WorkG55Z	pshm->P[912]
#define	CS1WorkG56X	pshm->P[920]
#define	CS1WorkG56Y	pshm->P[921]
#define	CS1WorkG56Z	pshm->P[922]
#define	CS1WorkG57X	pshm->P[930]
#define	CS1WorkG57Y	pshm->P[931]
#define	CS1WorkG57Z	pshm->P[932]
#define	CS1WorkG58X	pshm->P[940]
#define	CS1WorkG58Y	pshm->P[941]
#define	CS1WorkG58Z	pshm->P[942]
#define	CS1WorkG59X	pshm->P[950]
#define	CS1WorkG59Y	pshm->P[951]
#define	CS1WorkG59Z	pshm->P[952]
#define	CS1WorkG54_1P1X	pshm->P[1000]
#define	CS1WorkG54_1P1Y	pshm->P[1001]
#define	CS1WorkG54_1P1Z	pshm->P[1002]
#define	CS1WorkG54_1P2X	pshm->P[1010]
#define	CS1WorkG54_1P2Y	pshm->P[1011]
#define	CS1WorkG54_1P2Z	pshm->P[1012]
#define	CS1WorkG54_1P3X	pshm->P[1020]
#define	CS1WorkG54_1P3Y	pshm->P[1021]
#define	CS1WorkG54_1P3Z	pshm->P[1022]
#define	CS1WorkG54_1P4X	pshm->P[1030]
#define	CS1WorkG54_1P4Y	pshm->P[1031]
#define	CS1WorkG54_1P4Z	pshm->P[1032]
#define	CS1WorkG54_1P5X	pshm->P[1040]
#define	CS1WorkG54_1P5Y	pshm->P[1041]
#define	CS1WorkG54_1P5Z	pshm->P[1042]
#define	CS1WorkG54_1P6X	pshm->P[1050]
#define	CS1WorkG54_1P6Y	pshm->P[1051]
#define	CS1WorkG54_1P6Z	pshm->P[1052]
#define	CS1WorkG54_1P7X	pshm->P[1060]
#define	CS1WorkG54_1P7Y	pshm->P[1061]
#define	CS1WorkG54_1P7Z	pshm->P[1062]
#define	CS1WorkG54_1P8X	pshm->P[1070]
#define	CS1WorkG54_1P8Y	pshm->P[1071]
#define	CS1WorkG54_1P8Z	pshm->P[1072]
#define	CS1WorkG54_1P9X	pshm->P[1080]
#define	CS1WorkG54_1P9Y	pshm->P[1081]
#define	CS1WorkG54_1P9Z	pshm->P[1082]
#define	CS1WorkG54_1P10X	pshm->P[1090]
#define	CS1WorkG54_1P10Y	pshm->P[1091]
#define	CS1WorkG54_1P10Z	pshm->P[1092]
#define	CS1WorkG54_1P11X	pshm->P[1100]
#define	CS1WorkG54_1P11Y	pshm->P[1101]
#define	CS1WorkG54_1P11Z	pshm->P[1102]
#define	CS1WorkG54_1P12X	pshm->P[1110]
#define	CS1WorkG54_1P12Y	pshm->P[1111]
#define	CS1WorkG54_1P12Z	pshm->P[1112]
#define	CS1WorkG54_1P13X	pshm->P[1120]
#define	CS1WorkG54_1P13Y	pshm->P[1121]
#define	CS1WorkG54_1P13Z	pshm->P[1122]
#define	CS1WorkG54_1P14X	pshm->P[1130]
#define	CS1WorkG54_1P14Y	pshm->P[1131]
#define	CS1WorkG54_1P14Z	pshm->P[1132]
#define	CS1WorkG54_1P15X	pshm->P[1140]
#define	CS1WorkG54_1P15Y	pshm->P[1141]
#define	CS1WorkG54_1P15Z	pshm->P[1142]
#define	CS1WorkG54_1P16X	pshm->P[1150]
#define	CS1WorkG54_1P16Y	pshm->P[1151]
#define	CS1WorkG54_1P16Z	pshm->P[1152]
#define	CS1Tool1ZGeom	pshm->P[2000]
#define	CS1Tool1ZWear	pshm->P[2001]
#define	CS1Tool1CCGeom	pshm->P[2002]
#define	CS1Tool1CCWear	pshm->P[2003]
#define	CS1Tool2ZGeom	pshm->P[2010]
#define	CS1Tool2ZWear	pshm->P[2011]
#define	CS1Tool2CCGeom	pshm->P[2012]
#define	CS1Tool2CCWear	pshm->P[2013]
#define	CS1Tool3ZGeom	pshm->P[2020]
#define	CS1Tool3ZWear	pshm->P[2021]
#define	CS1Tool3CCGeom	pshm->P[2022]
#define	CS1Tool3CCWear	pshm->P[2023]
#define	CS1Tool4ZGeom	pshm->P[2030]
#define	CS1Tool4ZWear	pshm->P[2031]
#define	CS1Tool4CCGeom	pshm->P[2032]
#define	CS1Tool4CCWear	pshm->P[2033]
#define	CS1Tool5ZGeom	pshm->P[2040]
#define	CS1Tool5ZWear	pshm->P[2041]
#define	CS1Tool5CCGeom	pshm->P[2042]
#define	CS1Tool5CCWear	pshm->P[2043]
#define	CS1Tool6ZGeom	pshm->P[2050]
#define	CS1Tool6ZWear	pshm->P[2051]
#define	CS1Tool6CCGeom	pshm->P[2052]
#define	CS1Tool6CCWear	pshm->P[2053]
#define	CS1Tool7ZGeom	pshm->P[2060]
#define	CS1Tool7ZWear	pshm->P[2061]
#define	CS1Tool7CCGeom	pshm->P[2062]
#define	CS1Tool7CCWear	pshm->P[2063]
#define	CS1Tool8ZGeom	pshm->P[2070]
#define	CS1Tool8ZWear	pshm->P[2071]
#define	CS1Tool8CCGeom	pshm->P[2072]
#define	CS1Tool8CCWear	pshm->P[2073]
#define	CS1Tool9ZGeom	pshm->P[2080]
#define	CS1Tool9ZWear	pshm->P[2081]
#define	CS1Tool9CCGeom	pshm->P[2082]
#define	CS1Tool9CCWear	pshm->P[2083]
#define	CS1Tool10ZGeom	pshm->P[2090]
#define	CS1Tool10ZWear	pshm->P[2091]
#define	CS1Tool10CCGeom	pshm->P[2092]
#define	CS1Tool10CCWear	pshm->P[2093]
#define	CS1Tool11ZGeom	pshm->P[2100]
#define	CS1Tool11ZWear	pshm->P[2101]
#define	CS1Tool11CCGeom	pshm->P[2102]
#define	CS1Tool11CCWear	pshm->P[2103]
#define	CS1Tool12ZGeom	pshm->P[2110]
#define	CS1Tool12ZWear	pshm->P[2111]
#define	CS1Tool12CCGeom	pshm->P[2112]
#define	CS1Tool12CCWear	pshm->P[2113]
#define	CS1Tool13ZGeom	pshm->P[2120]
#define	CS1Tool13ZWear	pshm->P[2121]
#define	CS1Tool13CCGeom	pshm->P[2122]
#define	CS1Tool13CCWear	pshm->P[2123]
#define	CS1Tool14ZGeom	pshm->P[2130]
#define	CS1Tool14ZWear	pshm->P[2131]
#define	CS1Tool14CCGeom	pshm->P[2132]
#define	CS1Tool14CCWear	pshm->P[2133]
#define	CS1Tool15ZGeom	pshm->P[2140]
#define	CS1Tool15ZWear	pshm->P[2141]
#define	CS1Tool15CCGeom	pshm->P[2142]
#define	CS1Tool15CCWear	pshm->P[2143]
#define	CS1Tool16ZGeom	pshm->P[2150]
#define	CS1Tool16ZWear	pshm->P[2151]
#define	CS1Tool16CCGeom	pshm->P[2152]
#define	CS1Tool16CCWear	pshm->P[2153]
#define	CS1Tool17ZGeom	pshm->P[2160]
#define	CS1Tool17ZWear	pshm->P[2161]
#define	CS1Tool17CCGeom	pshm->P[2162]
#define	CS1Tool17CCWear	pshm->P[2163]
#define	CS1Tool18ZGeom	pshm->P[2170]
#define	CS1Tool18ZWear	pshm->P[2171]
#define	CS1Tool18CCGeom	pshm->P[2172]
#define	CS1Tool18CCWear	pshm->P[2173]
#define	CS1Tool19ZGeom	pshm->P[2180]
#define	CS1Tool19ZWear	pshm->P[2181]
#define	CS1Tool19CCGeom	pshm->P[2182]
#define	CS1Tool19CCWear	pshm->P[2183]
#define	CS1Tool20ZGeom	pshm->P[2190]
#define	CS1Tool20ZWear	pshm->P[2191]
#define	CS1Tool20CCGeom	pshm->P[2192]
#define	CS1Tool20CCWear	pshm->P[2193]
#define	CS1Tool21ZGeom	pshm->P[2200]
#define	CS1Tool21ZWear	pshm->P[2201]
#define	CS1Tool21CCGeom	pshm->P[2202]
#define	CS1Tool21CCWear	pshm->P[2203]
#define	CS1Tool22ZGeom	pshm->P[2210]
#define	CS1Tool22ZWear	pshm->P[2211]
#define	CS1Tool22CCGeom	pshm->P[2212]
#define	CS1Tool22CCWear	pshm->P[2213]
#define	CS1Tool23ZGeom	pshm->P[2220]
#define	CS1Tool23ZWear	pshm->P[2221]
#define	CS1Tool23CCGeom	pshm->P[2222]
#define	CS1Tool23CCWear	pshm->P[2223]
#define	CS1Tool24ZGeom	pshm->P[2230]
#define	CS1Tool24ZWear	pshm->P[2231]
#define	CS1Tool24CCGeom	pshm->P[2232]
#define	CS1Tool24CCWear	pshm->P[2233]
#define	CS1Tool25ZGeom	pshm->P[2240]
#define	CS1Tool25ZWear	pshm->P[2241]
#define	CS1Tool25CCGeom	pshm->P[2242]
#define	CS1Tool25CCWear	pshm->P[2243]
#define	LaserParametersT1Power	pshm->P[2004]
#define	LaserParametersT1Frequency	pshm->P[2005]
#define	LaserParametersT1Speed	pshm->P[2006]
#define	LaserParametersT2Power	pshm->P[2014]
#define	LaserParametersT2Frequency	pshm->P[2015]
#define	LaserParametersT2Speed	pshm->P[2016]
#define	LaserParametersT3Power	pshm->P[2024]
#define	LaserParametersT3Frequency	pshm->P[2025]
#define	LaserParametersT3Speed	pshm->P[2026]
#define	LaserParametersT4Power	pshm->P[2034]
#define	LaserParametersT4Frequency	pshm->P[2035]
#define	LaserParametersT4Speed	pshm->P[2036]
#define	LaserParametersT5Power	pshm->P[2044]
#define	LaserParametersT5Frequency	pshm->P[2045]
#define	LaserParametersT5Speed	pshm->P[2046]
#define	LaserParametersT6Power	pshm->P[2054]
#define	LaserParametersT6Frequency	pshm->P[2055]
#define	LaserParametersT6Speed	pshm->P[2056]
#define	LaserParametersT7Power	pshm->P[2064]
#define	LaserParametersT7Frequency	pshm->P[2065]
#define	LaserParametersT7Speed	pshm->P[2066]
#define	LaserParametersT8Power	pshm->P[2074]
#define	LaserParametersT8Frequency	pshm->P[2075]
#define	LaserParametersT8Speed	pshm->P[2076]
#define	LaserParametersT9Power	pshm->P[2084]
#define	LaserParametersT9Frequency	pshm->P[2085]
#define	LaserParametersT9Speed	pshm->P[2086]
#define	LaserParametersT10Power	pshm->P[2094]
#define	LaserParametersT10Frequency	pshm->P[2095]
#define	LaserParametersT10Speed	pshm->P[2096]
#define	LaserParametersT11Power	pshm->P[2104]
#define	LaserParametersT11Frequency	pshm->P[2105]
#define	LaserParametersT11Speed	pshm->P[2106]
#define	LaserParametersT12Power	pshm->P[2114]
#define	LaserParametersT12Frequency	pshm->P[2115]
#define	LaserParametersT12Speed	pshm->P[2116]
#define	LaserParametersT13Power	pshm->P[2124]
#define	LaserParametersT13Frequency	pshm->P[2125]
#define	LaserParametersT13Speed	pshm->P[2126]
#define	LaserParametersT14Power	pshm->P[2134]
#define	LaserParametersT14Frequency	pshm->P[2135]
#define	LaserParametersT14Speed	pshm->P[2136]
#define	LaserParametersT15Power	pshm->P[2144]
#define	LaserParametersT15Frequency	pshm->P[2145]
#define	LaserParametersT15Speed	pshm->P[2146]
#define	LaserParametersT16Power	pshm->P[2154]
#define	LaserParametersT16Frequency	pshm->P[2155]
#define	LaserParametersT16Speed	pshm->P[2156]
#define	LaserParametersT17Power	pshm->P[2164]
#define	LaserParametersT17Frequency	pshm->P[2165]
#define	LaserParametersT17Speed	pshm->P[2166]
#define	LaserParametersT18Power	pshm->P[2174]
#define	LaserParametersT18Frequency	pshm->P[2175]
#define	LaserParametersT18Speed	pshm->P[2176]
#define	LaserParametersT19Power	pshm->P[2184]
#define	LaserParametersT19Frequency	pshm->P[2185]
#define	LaserParametersT19Speed	pshm->P[2186]
#define	LaserParametersT20Power	pshm->P[2194]
#define	LaserParametersT20Frequency	pshm->P[2195]
#define	LaserParametersT20Speed	pshm->P[2196]
#define	SpindleMode(i)	pshm->Coord[i%MAX_COORDS].Q[1090]
#define	SpindleTemp(i)	pshm->Coord[i%MAX_COORDS].Q[1091]
#define	SpindleOutput(i)	pshm->Coord[i%MAX_COORDS].Q[1092]
#define	SpindleOutputTemp(i)	pshm->Coord[i%MAX_COORDS].Q[1093]
#define	SpindlePrevCommand(i)	pshm->Coord[i%MAX_COORDS].Q[1094]
#define	SpindleOverrideInput(i)	pshm->Coord[i%MAX_COORDS].Q[1095]
#define	Xpos	pshm->P[8441]
#define	Ypos	pshm->P[8442]
#define	Zpos	pshm->P[8443]
#define	Apos	pshm->P[8444]
#define	Bpos	pshm->P[8445]
#define	Cpos	pshm->P[8446]
#define	Upos	pshm->P[8447]
#define	Vpos	pshm->P[8448]
#define	Wpos	pshm->P[8449]
void SetEnumGlobalVar(enum globalP var, double data)
{
  pshm->P[var] = data;
}

double GetEnumGlobalVar(enum globalP var)
{
  return pshm->P[var];
}

void SetEnumGlobalArrayVar(enum globalParray var, unsigned index, double data)
{
  pshm->P[(var + index)%MAX_P] = data;
}

double GetEnumGlobalArrayVar(enum globalParray var, unsigned index)
{
  return pshm->P[(var + index)%MAX_P];
}

void SetEnumCSGlobalVar(enum csglobalQ var, unsigned cs, double data)
{
  pshm->Coord[cs % MAX_COORDS].Q[var] = data;
}

double GetEnumCSGlobalVar(enum csglobalQ var, unsigned cs)
{
  return pshm->Coord[cs % MAX_COORDS].Q[var];
}

void SetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs, double data)
{
  pshm->Coord[cs % MAX_COORDS].Q[(var + index)%MAX_Q] = data;
}

double GetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs)
{
  return pshm->Coord[cs % MAX_COORDS].Q[(var + index)%MAX_Q];
}

void SetEnumPtrVar(enum ptrM var, double data)
{
  im_write(pshm->Mdef + var, data, &pshm->Ldata);
}

double GetEnumPtrVar(enum ptrM var)
{
  return im_read(pshm->Mdef + var, &pshm->Ldata);
}

void SetEnumPtrArrayVar(enum ptrMarray var, unsigned index, double data)
{
  im_write(pshm->Mdef + ((var + index)%MAX_M), data, &pshm->Ldata);
}

double GetEnumPtrArrayVar(enum ptrMarray var, unsigned index)
{
  return im_read(pshm->Mdef + ((var + index)%MAX_M), &pshm->Ldata);
}

#define SetGlobalVar(i, x)              SetEnumGlobalVar(i, x)
#define SetGlobalArrayVar(i, j, x)      SetEnumGlobalArrayVar(i, j, x)
#define GetGlobalVar(i)                 GetEnumGlobalVar(i)
#define GetGlobalArrayVar(i, j)         GetEnumGlobalArrayVar(i, j)

#define SetCSGlobalVar(i, j, x)         SetEnumCSGlobalVar(i, j, x)
#define SetCSGlobalArrayVar(i, j, k, x) SetEnumCSGlobalArrayVar(i, j, k, x)
#define GetCSGlobalVar(i, j)            GetEnumCSGlobalVar(i, j)
#define GetCSGlobalArrayVar(i, j, k)    GetEnumCSGlobalArrayVar(i, j, k)

#define SetPtrVar(i, x)                 SetEnumPtrVar(i, x)
#define SetPtrArrayVar(i, j, x)         SetEnumPtrArrayVar(i, j, x)
#define GetPtrVar(i)                    GetEnumPtrVar(i)
#define GetPtrArrayVar(i, j)            GetEnumPtrArrayVar(i, j)
// end of #ifdef _PPScriptMode_
#else
#ifdef _EnumMode_
enum globalP {_globalP_=-1
,PowerPendPresent=8192
,HandwheelActive=8193
,InitHandle=8194
,PrevHandleCount=8195
,HandleWhileLoop=8196
,HandleChange=8197
,HandleSpeed=8198
,HandleScaleFactor1=8231
,HandleScaleFactor2=8232
,HandleScaleFactor3=8233
,HandleScaleFactor4=8234
,A1position=100
,A2position=101
,A3position=102
,A4position=103
,A5position=104
,A6position=105
,A7position=106
,A8position=107
,A9position=108
,A10position=109
,A1disttogo=110
,A2disttogo=111
,A3disttogo=112
,A4disttogo=113
,A5disttogo=114
,A6disttogo=115
,A7disttogo=116
,A8disttogo=117
,A9disttogo=118
,A10disttogo=119
,A1torque=120
,A2torque=121
,A3torque=122
,A4torque=123
,A5torque=124
,A6torque=125
,A7torque=126
,A8torque=127
,A9torque=128
,A10torque=129
,A1FolErr=140
,A2FolErr=141
,A3FolErr=142
,A4FolErr=143
,A5FolErr=144
,A6FolErr=145
,A7FolErr=146
,A8FolErr=147
,A9FolErr=148
,A10FolErr=149
,GCodesGroup0=200
,GCodesGroup1=201
,GCodesGroup2=202
,GCodesGroup3=203
,GCodesGroup5=205
,GCodesGroup6=206
,GCodesGroup7=207
,GCodesGroup8=208
,GCodesGroup11=211
,GCodesGroup12=212
,GCodesGroup13=213
,GCodesGroup15=215
,GCodesGroup16=216
,GCodesGroup19=219
,GCodesGroup22=222
,MCodesProgramGroup=300
,MCodesSpindleGroup=301
,MCodesCoolantGroup=302
,MCodesChuckGroup=303
,MCodesThreadingGroup=304
,MCodesGearRangeGroup=305
,MCodesFeedrateOverrideGroup=306
,MCodesBAxisGroup=307
,MCodesSubprogramGroup=308
,DispFeedAct=500
,DispFeedCmd=501
,DispFeedOverride=502
,DispFeedMode=503
,AxesDisplayMode=504
,DispSpindleAct=510
,DispSpindleCmd=511
,DispSpinOverride=512
,SpinDisplayMode=513
,CS1ActiveTCode=520
,CS1ActiveHCode=521
,CS1ActiveDCode=522
,CS1ToolNext=523
,LaserPower=530
,LaserFrequency=531
,LaserRatedPower=532
,LaserMinFrequency=533
,LaserMaxFrequency=534
,LaserMinPulseDuty=535
,LaserMaxPulseDuty=536
,LaserMinAnalogVoltage=537
,LaserPfmOutputFrequency=538
,LaserPfmOutputDutyCycle=539
,LaserPfmOutputFirstShotDistance=540
,JogX1=700
,JogX2=701
,JogX3=702
,JogX4=703
,JogX5=704
,JogIncDist=705
,PMACSourceVer=706
,MaxFeedrate=707
,LoopDisplay=720
,G04StartTime=721
,G04EndTime=722
,G04TotalTime=723
,IncDistance=8428
,FeedOverrideInput=8429
,DryRunMode=8430
,OverrideTemp=8431
,OverrideTemp2=8432
,OverrideInc=8433
,OverrideMax=8434
,SpindleOverrideTemp=8435
,SpindleOverrideInc=8436
,SpindleOverrideMax=8437
,StepLatch=8438
,StepCycleLatch=8439
,AutoJogFlag=8440
,CS1WorkG54X=900
,CS1WorkG54Y=901
,CS1WorkG54Z=902
,CS1WorkG55X=910
,CS1WorkG55Y=911
,CS1WorkG55Z=912
,CS1WorkG56X=920
,CS1WorkG56Y=921
,CS1WorkG56Z=922
,CS1WorkG57X=930
,CS1WorkG57Y=931
,CS1WorkG57Z=932
,CS1WorkG58X=940
,CS1WorkG58Y=941
,CS1WorkG58Z=942
,CS1WorkG59X=950
,CS1WorkG59Y=951
,CS1WorkG59Z=952
,CS1WorkG54_1P1X=1000
,CS1WorkG54_1P1Y=1001
,CS1WorkG54_1P1Z=1002
,CS1WorkG54_1P2X=1010
,CS1WorkG54_1P2Y=1011
,CS1WorkG54_1P2Z=1012
,CS1WorkG54_1P3X=1020
,CS1WorkG54_1P3Y=1021
,CS1WorkG54_1P3Z=1022
,CS1WorkG54_1P4X=1030
,CS1WorkG54_1P4Y=1031
,CS1WorkG54_1P4Z=1032
,CS1WorkG54_1P5X=1040
,CS1WorkG54_1P5Y=1041
,CS1WorkG54_1P5Z=1042
,CS1WorkG54_1P6X=1050
,CS1WorkG54_1P6Y=1051
,CS1WorkG54_1P6Z=1052
,CS1WorkG54_1P7X=1060
,CS1WorkG54_1P7Y=1061
,CS1WorkG54_1P7Z=1062
,CS1WorkG54_1P8X=1070
,CS1WorkG54_1P8Y=1071
,CS1WorkG54_1P8Z=1072
,CS1WorkG54_1P9X=1080
,CS1WorkG54_1P9Y=1081
,CS1WorkG54_1P9Z=1082
,CS1WorkG54_1P10X=1090
,CS1WorkG54_1P10Y=1091
,CS1WorkG54_1P10Z=1092
,CS1WorkG54_1P11X=1100
,CS1WorkG54_1P11Y=1101
,CS1WorkG54_1P11Z=1102
,CS1WorkG54_1P12X=1110
,CS1WorkG54_1P12Y=1111
,CS1WorkG54_1P12Z=1112
,CS1WorkG54_1P13X=1120
,CS1WorkG54_1P13Y=1121
,CS1WorkG54_1P13Z=1122
,CS1WorkG54_1P14X=1130
,CS1WorkG54_1P14Y=1131
,CS1WorkG54_1P14Z=1132
,CS1WorkG54_1P15X=1140
,CS1WorkG54_1P15Y=1141
,CS1WorkG54_1P15Z=1142
,CS1WorkG54_1P16X=1150
,CS1WorkG54_1P16Y=1151
,CS1WorkG54_1P16Z=1152
,CS1Tool1ZGeom=2000
,CS1Tool1ZWear=2001
,CS1Tool1CCGeom=2002
,CS1Tool1CCWear=2003
,CS1Tool2ZGeom=2010
,CS1Tool2ZWear=2011
,CS1Tool2CCGeom=2012
,CS1Tool2CCWear=2013
,CS1Tool3ZGeom=2020
,CS1Tool3ZWear=2021
,CS1Tool3CCGeom=2022
,CS1Tool3CCWear=2023
,CS1Tool4ZGeom=2030
,CS1Tool4ZWear=2031
,CS1Tool4CCGeom=2032
,CS1Tool4CCWear=2033
,CS1Tool5ZGeom=2040
,CS1Tool5ZWear=2041
,CS1Tool5CCGeom=2042
,CS1Tool5CCWear=2043
,CS1Tool6ZGeom=2050
,CS1Tool6ZWear=2051
,CS1Tool6CCGeom=2052
,CS1Tool6CCWear=2053
,CS1Tool7ZGeom=2060
,CS1Tool7ZWear=2061
,CS1Tool7CCGeom=2062
,CS1Tool7CCWear=2063
,CS1Tool8ZGeom=2070
,CS1Tool8ZWear=2071
,CS1Tool8CCGeom=2072
,CS1Tool8CCWear=2073
,CS1Tool9ZGeom=2080
,CS1Tool9ZWear=2081
,CS1Tool9CCGeom=2082
,CS1Tool9CCWear=2083
,CS1Tool10ZGeom=2090
,CS1Tool10ZWear=2091
,CS1Tool10CCGeom=2092
,CS1Tool10CCWear=2093
,CS1Tool11ZGeom=2100
,CS1Tool11ZWear=2101
,CS1Tool11CCGeom=2102
,CS1Tool11CCWear=2103
,CS1Tool12ZGeom=2110
,CS1Tool12ZWear=2111
,CS1Tool12CCGeom=2112
,CS1Tool12CCWear=2113
,CS1Tool13ZGeom=2120
,CS1Tool13ZWear=2121
,CS1Tool13CCGeom=2122
,CS1Tool13CCWear=2123
,CS1Tool14ZGeom=2130
,CS1Tool14ZWear=2131
,CS1Tool14CCGeom=2132
,CS1Tool14CCWear=2133
,CS1Tool15ZGeom=2140
,CS1Tool15ZWear=2141
,CS1Tool15CCGeom=2142
,CS1Tool15CCWear=2143
,CS1Tool16ZGeom=2150
,CS1Tool16ZWear=2151
,CS1Tool16CCGeom=2152
,CS1Tool16CCWear=2153
,CS1Tool17ZGeom=2160
,CS1Tool17ZWear=2161
,CS1Tool17CCGeom=2162
,CS1Tool17CCWear=2163
,CS1Tool18ZGeom=2170
,CS1Tool18ZWear=2171
,CS1Tool18CCGeom=2172
,CS1Tool18CCWear=2173
,CS1Tool19ZGeom=2180
,CS1Tool19ZWear=2181
,CS1Tool19CCGeom=2182
,CS1Tool19CCWear=2183
,CS1Tool20ZGeom=2190
,CS1Tool20ZWear=2191
,CS1Tool20CCGeom=2192
,CS1Tool20CCWear=2193
,CS1Tool21ZGeom=2200
,CS1Tool21ZWear=2201
,CS1Tool21CCGeom=2202
,CS1Tool21CCWear=2203
,CS1Tool22ZGeom=2210
,CS1Tool22ZWear=2211
,CS1Tool22CCGeom=2212
,CS1Tool22CCWear=2213
,CS1Tool23ZGeom=2220
,CS1Tool23ZWear=2221
,CS1Tool23CCGeom=2222
,CS1Tool23CCWear=2223
,CS1Tool24ZGeom=2230
,CS1Tool24ZWear=2231
,CS1Tool24CCGeom=2232
,CS1Tool24CCWear=2233
,CS1Tool25ZGeom=2240
,CS1Tool25ZWear=2241
,CS1Tool25CCGeom=2242
,CS1Tool25CCWear=2243
,LaserParametersT1Power=2004
,LaserParametersT1Frequency=2005
,LaserParametersT1Speed=2006
,LaserParametersT2Power=2014
,LaserParametersT2Frequency=2015
,LaserParametersT2Speed=2016
,LaserParametersT3Power=2024
,LaserParametersT3Frequency=2025
,LaserParametersT3Speed=2026
,LaserParametersT4Power=2034
,LaserParametersT4Frequency=2035
,LaserParametersT4Speed=2036
,LaserParametersT5Power=2044
,LaserParametersT5Frequency=2045
,LaserParametersT5Speed=2046
,LaserParametersT6Power=2054
,LaserParametersT6Frequency=2055
,LaserParametersT6Speed=2056
,LaserParametersT7Power=2064
,LaserParametersT7Frequency=2065
,LaserParametersT7Speed=2066
,LaserParametersT8Power=2074
,LaserParametersT8Frequency=2075
,LaserParametersT8Speed=2076
,LaserParametersT9Power=2084
,LaserParametersT9Frequency=2085
,LaserParametersT9Speed=2086
,LaserParametersT10Power=2094
,LaserParametersT10Frequency=2095
,LaserParametersT10Speed=2096
,LaserParametersT11Power=2104
,LaserParametersT11Frequency=2105
,LaserParametersT11Speed=2106
,LaserParametersT12Power=2114
,LaserParametersT12Frequency=2115
,LaserParametersT12Speed=2116
,LaserParametersT13Power=2124
,LaserParametersT13Frequency=2125
,LaserParametersT13Speed=2126
,LaserParametersT14Power=2134
,LaserParametersT14Frequency=2135
,LaserParametersT14Speed=2136
,LaserParametersT15Power=2144
,LaserParametersT15Frequency=2145
,LaserParametersT15Speed=2146
,LaserParametersT16Power=2154
,LaserParametersT16Frequency=2155
,LaserParametersT16Speed=2156
,LaserParametersT17Power=2164
,LaserParametersT17Frequency=2165
,LaserParametersT17Speed=2166
,LaserParametersT18Power=2174
,LaserParametersT18Frequency=2175
,LaserParametersT18Speed=2176
,LaserParametersT19Power=2184
,LaserParametersT19Frequency=2185
,LaserParametersT19Speed=2186
,LaserParametersT20Power=2194
,LaserParametersT20Frequency=2195
,LaserParametersT20Speed=2196
,Xpos=8441
,Ypos=8442
,Zpos=8443
,Apos=8444
,Bpos=8445
,Cpos=8446
,Upos=8447
,Vpos=8448
,Wpos=8449};
enum globalParray {_globalParray_=-1
,TargetPos=8199
,PrevJogSpeed=8235
,PrevJogTa=8267
,PrevJogTs=8299
,Setup_MotorNumber=8331
,Setup_AxisIndex=8342
,Setup_PendantPos=8353
,Setup_AxisIndexToMotorNumber=8364
,Setup_AxisIndexToAxisNumber=8396};
enum csglobalQ {_csglobalQ_=-1
,NativeUnits=1024
,UnitScaling=1025
,XcentScale=1026
,YcentScale=1027
,ZcentScale=1028
,XcentRot=1029
,YcentRot=1030
,ZcentRot=1031
,XcentMir=1032
,YcentMir=1033
,ZcentMir=1034
,Xscaling=1035
,Yscaling=1036
,Zscaling=1037
,Xrotate=1038
,Yrotate=1039
,Zrotate=1040
,XmirFact=1041
,YmirFact=1042
,ZmirFact=1043
,XworkOfs=1044
,YworkOfs=1045
,ZworkOfs=1046
,XlocOfs=1047
,YlocOfs=1048
,ZlocOfs=1049
,CS1_CutterRadius=1050
,CS1_CutterWear=1051
,XtoolOfs=1052
,YtoolOfs=1053
,ZtoolOfs=1054
,XcomOfs=1055
,YcomOfs=1056
,ZcomOfs=1057
,XaxisDesPos=1058
,YaxisDesPos=1059
,ZaxisDesPos=1060
,CannedCycleCode=1061
,CannedCycleRepeats=1062
,R_PlanePos=1063
,Init_PlanePos=1064
,ReturnLevel=1065
,PeckDepth=1066
,RetractDistance=1067
,LastPeckCycle=1068
,PeckCycles=1069
,Z_PrevDepth=1070
,X_Pos=1071
,Y_Pos=1072
,Z_Pos=1073
,Z_Depth=1074
,R_Plane=1075
,Abs_Mode=1076
,CycleDwell=1077
,XreadFlag=1078
,YreadFlag=1079
,ZreadFlag=1080
,BoreShift=1081
,X_inter_point=1082
,Y_inter_point=1083
,Z_inter_point=1084
,X_final_point=1085
,Y_final_point=1086
,Z_final_point=1087
,OverrideDisable=1088
,CoordFeedTemp=1089
,SpindleMode=1090
,SpindleTemp=1091
,SpindleOutput=1092
,SpindleOutputTemp=1093
,SpindlePrevCommand=1094
,SpindleOverrideInput=1095};
enum csglobalQarray {_csglobalQarray_=-1};
enum ptrM {_ptrM_=-1
,MachineState=1
,CommandReg=2
,StatusReg=3
,JogOptions=4
,RunOptions=5
,MachineMode=6
,HmiCounter=7
,SoftPanelCommand=20
,SoftPanelStatus=21
,MsgFatal=100
,MsgFatalAck=101
,MsgWarning=120
,MsgWarningAck=121
,MsgInfo=140
,MsgInfoAck=141
,MsgLog=160
,SpeedSelect=8192
,AxisSelect=8193
,OvrRapid=8194
,OvrFeed=8195
,OvrSpindle=8196
,HandCounter=8197
,HandEncoder=8198
,KeyCode=8199
,KeyDown=8200
,OutputLED=8201
,OutputLED2=8202};
enum ptrMarray {_ptrMarray_=-1};
void SetEnumGlobalVar(enum globalP var, double data)
{
  pshm->P[var] = data;
}

double GetEnumGlobalVar(enum globalP var)
{
  return pshm->P[var];
}

void SetEnumGlobalArrayVar(enum globalParray var, unsigned index, double data)
{
  pshm->P[(var + index)%MAX_P] = data;
}

double GetEnumGlobalArrayVar(enum globalParray var, unsigned index)
{
  return pshm->P[(var + index)%MAX_P];
}

void SetEnumCSGlobalVar(enum csglobalQ var, unsigned cs, double data)
{
  pshm->Coord[cs % MAX_COORDS].Q[var] = data;
}

double GetEnumCSGlobalVar(enum csglobalQ var, unsigned cs)
{
  return pshm->Coord[cs % MAX_COORDS].Q[var];
}

void SetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs, double data)
{
  pshm->Coord[cs % MAX_COORDS].Q[(var + index)%MAX_Q] = data;
}

double GetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs)
{
  return pshm->Coord[cs % MAX_COORDS].Q[(var + index)%MAX_Q];
}

void SetEnumPtrVar(enum ptrM var, double data)
{
  im_write(pshm->Mdef + var, data, &pshm->Ldata);
}

double GetEnumPtrVar(enum ptrM var)
{
  return im_read(pshm->Mdef + var, &pshm->Ldata);
}

void SetEnumPtrArrayVar(enum ptrMarray var, unsigned index, double data)
{
  im_write(pshm->Mdef + ((var + index)%MAX_M), data, &pshm->Ldata);
}

double GetEnumPtrArrayVar(enum ptrMarray var, unsigned index)
{
  return im_read(pshm->Mdef + ((var + index)%MAX_M), &pshm->Ldata);
}

#define SetGlobalVar(i, x)              SetEnumGlobalVar(i, x)
#define SetGlobalArrayVar(i, j, x)      SetEnumGlobalArrayVar(i, j, x)
#define GetGlobalVar(i)                 GetEnumGlobalVar(i)
#define GetGlobalArrayVar(i, j)         GetEnumGlobalArrayVar(i, j)

#define SetCSGlobalVar(i, j, x)         SetEnumCSGlobalVar(i, j, x)
#define SetCSGlobalArrayVar(i, j, k, x) SetEnumCSGlobalArrayVar(i, j, k, x)
#define GetCSGlobalVar(i, j)            GetEnumCSGlobalVar(i, j)
#define GetCSGlobalArrayVar(i, j, k)    GetEnumCSGlobalArrayVar(i, j, k)

#define SetPtrVar(i, x)                 SetEnumPtrVar(i, x)
#define SetPtrArrayVar(i, j, x)         SetEnumPtrArrayVar(i, j, x)
#define GetPtrVar(i)                    GetEnumPtrVar(i)
#define GetPtrArrayVar(i, j)            GetEnumPtrArrayVar(i, j)
// end of #ifdef _EnumMode_
#else
// ***** Standard default mode *****
#define PowerPendPresent 8192
#define HandwheelActive 8193
#define InitHandle 8194
#define PrevHandleCount 8195
#define HandleWhileLoop 8196
#define HandleChange 8197
#define HandleSpeed 8198
#define TargetPos 8199
#define HandleScaleFactor1 8231
#define HandleScaleFactor2 8232
#define HandleScaleFactor3 8233
#define HandleScaleFactor4 8234
#define PrevJogSpeed 8235
#define PrevJogTa 8267
#define PrevJogTs 8299
#define Setup_MotorNumber 8331
#define Setup_AxisIndex 8342
#define Setup_PendantPos 8353
#define Setup_AxisIndexToMotorNumber 8364
#define Setup_AxisIndexToAxisNumber 8396
#define MachineState 1
#define CommandReg 2
#define StatusReg 3
#define JogOptions 4
#define RunOptions 5
#define MachineMode 6
#define HmiCounter 7
#define SoftPanelCommand 20
#define SoftPanelStatus 21
#define MsgFatal 100
#define MsgFatalAck 101
#define MsgWarning 120
#define MsgWarningAck 121
#define MsgInfo 140
#define MsgInfoAck 141
#define MsgLog 160
#define A1position 100
#define A2position 101
#define A3position 102
#define A4position 103
#define A5position 104
#define A6position 105
#define A7position 106
#define A8position 107
#define A9position 108
#define A10position 109
#define A1disttogo 110
#define A2disttogo 111
#define A3disttogo 112
#define A4disttogo 113
#define A5disttogo 114
#define A6disttogo 115
#define A7disttogo 116
#define A8disttogo 117
#define A9disttogo 118
#define A10disttogo 119
#define A1torque 120
#define A2torque 121
#define A3torque 122
#define A4torque 123
#define A5torque 124
#define A6torque 125
#define A7torque 126
#define A8torque 127
#define A9torque 128
#define A10torque 129
#define A1FolErr 140
#define A2FolErr 141
#define A3FolErr 142
#define A4FolErr 143
#define A5FolErr 144
#define A6FolErr 145
#define A7FolErr 146
#define A8FolErr 147
#define A9FolErr 148
#define A10FolErr 149
#define GCodesGroup0 200
#define GCodesGroup1 201
#define GCodesGroup2 202
#define GCodesGroup3 203
#define GCodesGroup5 205
#define GCodesGroup6 206
#define GCodesGroup7 207
#define GCodesGroup8 208
#define GCodesGroup11 211
#define GCodesGroup12 212
#define GCodesGroup13 213
#define GCodesGroup15 215
#define GCodesGroup16 216
#define GCodesGroup19 219
#define GCodesGroup22 222
#define MCodesProgramGroup 300
#define MCodesSpindleGroup 301
#define MCodesCoolantGroup 302
#define MCodesChuckGroup 303
#define MCodesThreadingGroup 304
#define MCodesGearRangeGroup 305
#define MCodesFeedrateOverrideGroup 306
#define MCodesBAxisGroup 307
#define MCodesSubprogramGroup 308
#define DispFeedAct 500
#define DispFeedCmd 501
#define DispFeedOverride 502
#define DispFeedMode 503
#define AxesDisplayMode 504
#define DispSpindleAct 510
#define DispSpindleCmd 511
#define DispSpinOverride 512
#define SpinDisplayMode 513
#define CS1ActiveTCode 520
#define CS1ActiveHCode 521
#define CS1ActiveDCode 522
#define CS1ToolNext 523
#define LaserPower 530
#define LaserFrequency 531
#define LaserRatedPower 532
#define LaserMinFrequency 533
#define LaserMaxFrequency 534
#define LaserMinPulseDuty 535
#define LaserMaxPulseDuty 536
#define LaserMinAnalogVoltage 537
#define LaserPfmOutputFrequency 538
#define LaserPfmOutputDutyCycle 539
#define LaserPfmOutputFirstShotDistance 540
#define JogX1 700
#define JogX2 701
#define JogX3 702
#define JogX4 703
#define JogX5 704
#define JogIncDist 705
#define PMACSourceVer 706
#define MaxFeedrate 707
#define LoopDisplay 720
#define G04StartTime 721
#define G04EndTime 722
#define G04TotalTime 723
#define NativeUnits 1024
#define UnitScaling 1025
#define XcentScale 1026
#define YcentScale 1027
#define ZcentScale 1028
#define XcentRot 1029
#define YcentRot 1030
#define ZcentRot 1031
#define XcentMir 1032
#define YcentMir 1033
#define ZcentMir 1034
#define Xscaling 1035
#define Yscaling 1036
#define Zscaling 1037
#define Xrotate 1038
#define Yrotate 1039
#define Zrotate 1040
#define XmirFact 1041
#define YmirFact 1042
#define ZmirFact 1043
#define XworkOfs 1044
#define YworkOfs 1045
#define ZworkOfs 1046
#define XlocOfs 1047
#define YlocOfs 1048
#define ZlocOfs 1049
#define CS1_CutterRadius 1050
#define CS1_CutterWear 1051
#define XtoolOfs 1052
#define YtoolOfs 1053
#define ZtoolOfs 1054
#define XcomOfs 1055
#define YcomOfs 1056
#define ZcomOfs 1057
#define XaxisDesPos 1058
#define YaxisDesPos 1059
#define ZaxisDesPos 1060
#define CannedCycleCode 1061
#define CannedCycleRepeats 1062
#define R_PlanePos 1063
#define Init_PlanePos 1064
#define ReturnLevel 1065
#define PeckDepth 1066
#define RetractDistance 1067
#define LastPeckCycle 1068
#define PeckCycles 1069
#define Z_PrevDepth 1070
#define X_Pos 1071
#define Y_Pos 1072
#define Z_Pos 1073
#define Z_Depth 1074
#define R_Plane 1075
#define Abs_Mode 1076
#define CycleDwell 1077
#define XreadFlag 1078
#define YreadFlag 1079
#define ZreadFlag 1080
#define BoreShift 1081
#define X_inter_point 1082
#define Y_inter_point 1083
#define Z_inter_point 1084
#define X_final_point 1085
#define Y_final_point 1086
#define Z_final_point 1087
#define OverrideDisable 1088
#define CoordFeedTemp 1089
#define IncDistance 8428
#define FeedOverrideInput 8429
#define DryRunMode 8430
#define OverrideTemp 8431
#define OverrideTemp2 8432
#define OverrideInc 8433
#define OverrideMax 8434
#define SpindleOverrideTemp 8435
#define SpindleOverrideInc 8436
#define SpindleOverrideMax 8437
#define StepLatch 8438
#define StepCycleLatch 8439
#define AutoJogFlag 8440
#define CS1WorkG54X 900
#define CS1WorkG54Y 901
#define CS1WorkG54Z 902
#define CS1WorkG55X 910
#define CS1WorkG55Y 911
#define CS1WorkG55Z 912
#define CS1WorkG56X 920
#define CS1WorkG56Y 921
#define CS1WorkG56Z 922
#define CS1WorkG57X 930
#define CS1WorkG57Y 931
#define CS1WorkG57Z 932
#define CS1WorkG58X 940
#define CS1WorkG58Y 941
#define CS1WorkG58Z 942
#define CS1WorkG59X 950
#define CS1WorkG59Y 951
#define CS1WorkG59Z 952
#define CS1WorkG54_1P1X 1000
#define CS1WorkG54_1P1Y 1001
#define CS1WorkG54_1P1Z 1002
#define CS1WorkG54_1P2X 1010
#define CS1WorkG54_1P2Y 1011
#define CS1WorkG54_1P2Z 1012
#define CS1WorkG54_1P3X 1020
#define CS1WorkG54_1P3Y 1021
#define CS1WorkG54_1P3Z 1022
#define CS1WorkG54_1P4X 1030
#define CS1WorkG54_1P4Y 1031
#define CS1WorkG54_1P4Z 1032
#define CS1WorkG54_1P5X 1040
#define CS1WorkG54_1P5Y 1041
#define CS1WorkG54_1P5Z 1042
#define CS1WorkG54_1P6X 1050
#define CS1WorkG54_1P6Y 1051
#define CS1WorkG54_1P6Z 1052
#define CS1WorkG54_1P7X 1060
#define CS1WorkG54_1P7Y 1061
#define CS1WorkG54_1P7Z 1062
#define CS1WorkG54_1P8X 1070
#define CS1WorkG54_1P8Y 1071
#define CS1WorkG54_1P8Z 1072
#define CS1WorkG54_1P9X 1080
#define CS1WorkG54_1P9Y 1081
#define CS1WorkG54_1P9Z 1082
#define CS1WorkG54_1P10X 1090
#define CS1WorkG54_1P10Y 1091
#define CS1WorkG54_1P10Z 1092
#define CS1WorkG54_1P11X 1100
#define CS1WorkG54_1P11Y 1101
#define CS1WorkG54_1P11Z 1102
#define CS1WorkG54_1P12X 1110
#define CS1WorkG54_1P12Y 1111
#define CS1WorkG54_1P12Z 1112
#define CS1WorkG54_1P13X 1120
#define CS1WorkG54_1P13Y 1121
#define CS1WorkG54_1P13Z 1122
#define CS1WorkG54_1P14X 1130
#define CS1WorkG54_1P14Y 1131
#define CS1WorkG54_1P14Z 1132
#define CS1WorkG54_1P15X 1140
#define CS1WorkG54_1P15Y 1141
#define CS1WorkG54_1P15Z 1142
#define CS1WorkG54_1P16X 1150
#define CS1WorkG54_1P16Y 1151
#define CS1WorkG54_1P16Z 1152
#define CS1Tool1ZGeom 2000
#define CS1Tool1ZWear 2001
#define CS1Tool1CCGeom 2002
#define CS1Tool1CCWear 2003
#define CS1Tool2ZGeom 2010
#define CS1Tool2ZWear 2011
#define CS1Tool2CCGeom 2012
#define CS1Tool2CCWear 2013
#define CS1Tool3ZGeom 2020
#define CS1Tool3ZWear 2021
#define CS1Tool3CCGeom 2022
#define CS1Tool3CCWear 2023
#define CS1Tool4ZGeom 2030
#define CS1Tool4ZWear 2031
#define CS1Tool4CCGeom 2032
#define CS1Tool4CCWear 2033
#define CS1Tool5ZGeom 2040
#define CS1Tool5ZWear 2041
#define CS1Tool5CCGeom 2042
#define CS1Tool5CCWear 2043
#define CS1Tool6ZGeom 2050
#define CS1Tool6ZWear 2051
#define CS1Tool6CCGeom 2052
#define CS1Tool6CCWear 2053
#define CS1Tool7ZGeom 2060
#define CS1Tool7ZWear 2061
#define CS1Tool7CCGeom 2062
#define CS1Tool7CCWear 2063
#define CS1Tool8ZGeom 2070
#define CS1Tool8ZWear 2071
#define CS1Tool8CCGeom 2072
#define CS1Tool8CCWear 2073
#define CS1Tool9ZGeom 2080
#define CS1Tool9ZWear 2081
#define CS1Tool9CCGeom 2082
#define CS1Tool9CCWear 2083
#define CS1Tool10ZGeom 2090
#define CS1Tool10ZWear 2091
#define CS1Tool10CCGeom 2092
#define CS1Tool10CCWear 2093
#define CS1Tool11ZGeom 2100
#define CS1Tool11ZWear 2101
#define CS1Tool11CCGeom 2102
#define CS1Tool11CCWear 2103
#define CS1Tool12ZGeom 2110
#define CS1Tool12ZWear 2111
#define CS1Tool12CCGeom 2112
#define CS1Tool12CCWear 2113
#define CS1Tool13ZGeom 2120
#define CS1Tool13ZWear 2121
#define CS1Tool13CCGeom 2122
#define CS1Tool13CCWear 2123
#define CS1Tool14ZGeom 2130
#define CS1Tool14ZWear 2131
#define CS1Tool14CCGeom 2132
#define CS1Tool14CCWear 2133
#define CS1Tool15ZGeom 2140
#define CS1Tool15ZWear 2141
#define CS1Tool15CCGeom 2142
#define CS1Tool15CCWear 2143
#define CS1Tool16ZGeom 2150
#define CS1Tool16ZWear 2151
#define CS1Tool16CCGeom 2152
#define CS1Tool16CCWear 2153
#define CS1Tool17ZGeom 2160
#define CS1Tool17ZWear 2161
#define CS1Tool17CCGeom 2162
#define CS1Tool17CCWear 2163
#define CS1Tool18ZGeom 2170
#define CS1Tool18ZWear 2171
#define CS1Tool18CCGeom 2172
#define CS1Tool18CCWear 2173
#define CS1Tool19ZGeom 2180
#define CS1Tool19ZWear 2181
#define CS1Tool19CCGeom 2182
#define CS1Tool19CCWear 2183
#define CS1Tool20ZGeom 2190
#define CS1Tool20ZWear 2191
#define CS1Tool20CCGeom 2192
#define CS1Tool20CCWear 2193
#define CS1Tool21ZGeom 2200
#define CS1Tool21ZWear 2201
#define CS1Tool21CCGeom 2202
#define CS1Tool21CCWear 2203
#define CS1Tool22ZGeom 2210
#define CS1Tool22ZWear 2211
#define CS1Tool22CCGeom 2212
#define CS1Tool22CCWear 2213
#define CS1Tool23ZGeom 2220
#define CS1Tool23ZWear 2221
#define CS1Tool23CCGeom 2222
#define CS1Tool23CCWear 2223
#define CS1Tool24ZGeom 2230
#define CS1Tool24ZWear 2231
#define CS1Tool24CCGeom 2232
#define CS1Tool24CCWear 2233
#define CS1Tool25ZGeom 2240
#define CS1Tool25ZWear 2241
#define CS1Tool25CCGeom 2242
#define CS1Tool25CCWear 2243
#define LaserParametersT1Power 2004
#define LaserParametersT1Frequency 2005
#define LaserParametersT1Speed 2006
#define LaserParametersT2Power 2014
#define LaserParametersT2Frequency 2015
#define LaserParametersT2Speed 2016
#define LaserParametersT3Power 2024
#define LaserParametersT3Frequency 2025
#define LaserParametersT3Speed 2026
#define LaserParametersT4Power 2034
#define LaserParametersT4Frequency 2035
#define LaserParametersT4Speed 2036
#define LaserParametersT5Power 2044
#define LaserParametersT5Frequency 2045
#define LaserParametersT5Speed 2046
#define LaserParametersT6Power 2054
#define LaserParametersT6Frequency 2055
#define LaserParametersT6Speed 2056
#define LaserParametersT7Power 2064
#define LaserParametersT7Frequency 2065
#define LaserParametersT7Speed 2066
#define LaserParametersT8Power 2074
#define LaserParametersT8Frequency 2075
#define LaserParametersT8Speed 2076
#define LaserParametersT9Power 2084
#define LaserParametersT9Frequency 2085
#define LaserParametersT9Speed 2086
#define LaserParametersT10Power 2094
#define LaserParametersT10Frequency 2095
#define LaserParametersT10Speed 2096
#define LaserParametersT11Power 2104
#define LaserParametersT11Frequency 2105
#define LaserParametersT11Speed 2106
#define LaserParametersT12Power 2114
#define LaserParametersT12Frequency 2115
#define LaserParametersT12Speed 2116
#define LaserParametersT13Power 2124
#define LaserParametersT13Frequency 2125
#define LaserParametersT13Speed 2126
#define LaserParametersT14Power 2134
#define LaserParametersT14Frequency 2135
#define LaserParametersT14Speed 2136
#define LaserParametersT15Power 2144
#define LaserParametersT15Frequency 2145
#define LaserParametersT15Speed 2146
#define LaserParametersT16Power 2154
#define LaserParametersT16Frequency 2155
#define LaserParametersT16Speed 2156
#define LaserParametersT17Power 2164
#define LaserParametersT17Frequency 2165
#define LaserParametersT17Speed 2166
#define LaserParametersT18Power 2174
#define LaserParametersT18Frequency 2175
#define LaserParametersT18Speed 2176
#define LaserParametersT19Power 2184
#define LaserParametersT19Frequency 2185
#define LaserParametersT19Speed 2186
#define LaserParametersT20Power 2194
#define LaserParametersT20Frequency 2195
#define LaserParametersT20Speed 2196
#define SpindleMode 1090
#define SpindleTemp 1091
#define SpindleOutput 1092
#define SpindleOutputTemp 1093
#define SpindlePrevCommand 1094
#define SpindleOverrideInput 1095
#define Xpos 8441
#define Ypos 8442
#define Zpos 8443
#define Apos 8444
#define Bpos 8445
#define Cpos 8446
#define Upos 8447
#define Vpos 8448
#define Wpos 8449
#define SpeedSelect 8192
#define AxisSelect 8193
#define OvrRapid 8194
#define OvrFeed 8195
#define OvrSpindle 8196
#define HandCounter 8197
#define HandEncoder 8198
#define KeyCode 8199
#define KeyDown 8200
#define OutputLED 8201
#define OutputLED2 8202
#endif
#endif
#endif //_PP_PROJ_H_

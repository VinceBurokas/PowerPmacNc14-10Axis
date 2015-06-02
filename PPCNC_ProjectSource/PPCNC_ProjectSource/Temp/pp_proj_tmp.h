#else
// ***** Standard default mode *****
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
#endif
#endif
#endif //_PP_PROJ_H_
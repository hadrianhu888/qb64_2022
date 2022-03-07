/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef _IA64REG_
#define _IA64REG_

typedef enum IA64_REG_INDEX {
  CV_IA64_BrRp = 512,CV_IA64_BrS0 = 513,CV_IA64_BrS1 = 514,CV_IA64_BrS2 = 515,CV_IA64_BrS3 = 516,CV_IA64_BrS4 = 517,CV_IA64_BrT0 = 518,
  CV_IA64_BrT1 = 519,CV_IA64_Preds = 768,CV_IA64_IntH0 = 832,CV_IA64_IntH1 = 833,CV_IA64_IntH2 = 834,CV_IA64_IntH3 = 835,CV_IA64_IntH4 = 836,
  CV_IA64_IntH5 = 837,CV_IA64_IntH6 = 838,CV_IA64_IntH7 = 839,CV_IA64_IntH8 = 840,CV_IA64_IntH9 = 841,CV_IA64_IntH10 = 842,CV_IA64_IntH11 = 843,
  CV_IA64_IntH12 = 844,CV_IA64_IntH13 = 845,CV_IA64_IntH14 = 846,CV_IA64_IntH15 = 847,CV_IA64_Ip = 1016,CV_IA64_Umask = 1017,CV_IA64_Cfm = 1018,
  CV_IA64_Psr = 1019,CV_IA64_Nats = 1020,CV_IA64_Nats2 = 1021,CV_IA64_Nats3 = 1022,CV_IA64_IntZero = 1024,CV_IA64_IntGp = 1025,CV_IA64_IntT0 = 1026,
  CV_IA64_IntT1 = 1027,CV_IA64_IntS0 = 1028,CV_IA64_IntS1 = 1029,CV_IA64_IntS2 = 1030,CV_IA64_IntS3 = 1031,CV_IA64_IntV0 = 1032,CV_IA64_IntAp = 1033,
  CV_IA64_IntT2 = 1034,CV_IA64_IntT3 = 1035,CV_IA64_IntSp = 1036,CV_IA64_IntT4 = 1037,CV_IA64_IntT5 = 1038,CV_IA64_IntT6 = 1039,CV_IA64_IntT7 = 1040,
  CV_IA64_IntT8 = 1041,CV_IA64_IntT9 = 1042,CV_IA64_IntT10 = 1043,CV_IA64_IntT11 = 1044,CV_IA64_IntT12 = 1045,CV_IA64_IntT13 = 1046,
  CV_IA64_IntT14 = 1047,CV_IA64_IntT15 = 1048,CV_IA64_IntT16 = 1049,CV_IA64_IntT17 = 1050,CV_IA64_IntT18 = 1051,CV_IA64_IntT19 = 1052,
  CV_IA64_IntT20 = 1053,CV_IA64_IntT21 = 1054,CV_IA64_IntT22 = 1055,CV_IA64_IntR32 = 1056,CV_IA64_IntR33 = 1057,CV_IA64_IntR34 = 1058,
  CV_IA64_IntR35 = 1059,CV_IA64_IntR36 = 1060,CV_IA64_IntR37 = 1061,CV_IA64_IntR38 = 1062,CV_IA64_IntR39 = 1063,CV_IA64_IntR40 = 1064,
  CV_IA64_IntR41 = 1065,CV_IA64_IntR42 = 1066,CV_IA64_IntR43 = 1067,CV_IA64_IntR44 = 1068,CV_IA64_IntR45 = 1069,CV_IA64_IntR46 = 1070,
  CV_IA64_IntR47 = 1071,CV_IA64_IntR48 = 1072,CV_IA64_IntR49 = 1073,CV_IA64_IntR50 = 1074,CV_IA64_IntR51 = 1075,CV_IA64_IntR52 = 1076,
  CV_IA64_IntR53 = 1077,CV_IA64_IntR54 = 1078,CV_IA64_IntR55 = 1079,CV_IA64_IntR56 = 1080,CV_IA64_IntR57 = 1081,CV_IA64_IntR58 = 1082,
  CV_IA64_IntR59 = 1083,CV_IA64_IntR60 = 1084,CV_IA64_IntR61 = 1085,CV_IA64_IntR62 = 1086,CV_IA64_IntR63 = 1087,CV_IA64_IntR64 = 1088,
  CV_IA64_IntR65 = 1089,CV_IA64_IntR66 = 1090,CV_IA64_IntR67 = 1091,CV_IA64_IntR68 = 1092,CV_IA64_IntR69 = 1093,CV_IA64_IntR70 = 1094,
  CV_IA64_IntR71 = 1095,CV_IA64_IntR72 = 1096,CV_IA64_IntR73 = 1097,CV_IA64_IntR74 = 1098,CV_IA64_IntR75 = 1099,CV_IA64_IntR76 = 1100,
  CV_IA64_IntR77 = 1101,CV_IA64_IntR78 = 1102,CV_IA64_IntR79 = 1103,CV_IA64_IntR80 = 1104,CV_IA64_IntR81 = 1105,CV_IA64_IntR82 = 1106,
  CV_IA64_IntR83 = 1107,CV_IA64_IntR84 = 1108,CV_IA64_IntR85 = 1109,CV_IA64_IntR86 = 1110,CV_IA64_IntR87 = 1111,CV_IA64_IntR88 = 1112,
  CV_IA64_IntR89 = 1113,CV_IA64_IntR90 = 1114,CV_IA64_IntR91 = 1115,CV_IA64_IntR92 = 1116,CV_IA64_IntR93 = 1117,CV_IA64_IntR94 = 1118,
  CV_IA64_IntR95 = 1119,CV_IA64_IntR96 = 1120,CV_IA64_IntR97 = 1121,CV_IA64_IntR98 = 1122,CV_IA64_IntR99 = 1123,CV_IA64_IntR100 = 1124,
  CV_IA64_IntR101 = 1125,CV_IA64_IntR102 = 1126,CV_IA64_IntR103 = 1127,CV_IA64_IntR104 = 1128,CV_IA64_IntR105 = 1129,CV_IA64_IntR106 = 1130,
  CV_IA64_IntR107 = 1131,CV_IA64_IntR108 = 1132,CV_IA64_IntR109 = 1133,CV_IA64_IntR110 = 1134,CV_IA64_IntR111 = 1135,CV_IA64_IntR112 = 1136,
  CV_IA64_IntR113 = 1137,CV_IA64_IntR114 = 1138,CV_IA64_IntR115 = 1139,CV_IA64_IntR116 = 1140,CV_IA64_IntR117 = 1141,CV_IA64_IntR118 = 1142,
  CV_IA64_IntR119 = 1143,CV_IA64_IntR120 = 1144,CV_IA64_IntR121 = 1145,CV_IA64_IntR122 = 1146,CV_IA64_IntR123 = 1147,CV_IA64_IntR124 = 1148,
  CV_IA64_IntR125 = 1149,CV_IA64_IntR126 = 1150,CV_IA64_IntR127 = 1151,CV_IA64_FltZero = 2048,CV_IA64_FltOne = 2049,CV_IA64_FltS0 = 2050,
  CV_IA64_FltS1 = 2051,CV_IA64_FltS2 = 2052,CV_IA64_FltS3 = 2053,CV_IA64_FltT0 = 2054,CV_IA64_FltT1 = 2055,CV_IA64_FltT2 = 2056,
  CV_IA64_FltT3 = 2057,CV_IA64_FltT4 = 2058,CV_IA64_FltT5 = 2059,CV_IA64_FltT6 = 2060,CV_IA64_FltT7 = 2061,CV_IA64_FltT8 = 2062,
  CV_IA64_FltT9 = 2063,CV_IA64_FltS4 = 2064,CV_IA64_FltS5 = 2065,CV_IA64_FltS6 = 2066,CV_IA64_FltS7 = 2067,CV_IA64_FltS8 = 2068,
  CV_IA64_FltS9 = 2069,CV_IA64_FltS10 = 2070,CV_IA64_FltS11 = 2071,CV_IA64_FltS12 = 2072,CV_IA64_FltS13 = 2073,CV_IA64_FltS14 = 2074,
  CV_IA64_FltS15 = 2075,CV_IA64_FltS16 = 2076,CV_IA64_FltS17 = 2077,CV_IA64_FltS18 = 2078,CV_IA64_FltS19 = 2079,CV_IA64_FltF32 = 2080,
  CV_IA64_FltF33 = 2081,CV_IA64_FltF34 = 2082,CV_IA64_FltF35 = 2083,CV_IA64_FltF36 = 2084,CV_IA64_FltF37 = 2085,CV_IA64_FltF38 = 2086,
  CV_IA64_FltF39 = 2087,CV_IA64_FltF40 = 2088,CV_IA64_FltF41 = 2089,CV_IA64_FltF42 = 2090,CV_IA64_FltF43 = 2091,CV_IA64_FltF44 = 2092,
  CV_IA64_FltF45 = 2093,CV_IA64_FltF46 = 2094,CV_IA64_FltF47 = 2095,CV_IA64_FltF48 = 2096,CV_IA64_FltF49 = 2097,CV_IA64_FltF50 = 2098,
  CV_IA64_FltF51 = 2099,CV_IA64_FltF52 = 2100,CV_IA64_FltF53 = 2101,CV_IA64_FltF54 = 2102,CV_IA64_FltF55 = 2103,CV_IA64_FltF56 = 2104,
  CV_IA64_FltF57 = 2105,CV_IA64_FltF58 = 2106,CV_IA64_FltF59 = 2107,CV_IA64_FltF60 = 2108,CV_IA64_FltF61 = 2109,CV_IA64_FltF62 = 2110,
  CV_IA64_FltF63 = 2111,CV_IA64_FltF64 = 2112,CV_IA64_FltF65 = 2113,CV_IA64_FltF66 = 2114,CV_IA64_FltF67 = 2115,CV_IA64_FltF68 = 2116,
  CV_IA64_FltF69 = 2117,CV_IA64_FltF70 = 2118,CV_IA64_FltF71 = 2119,CV_IA64_FltF72 = 2120,CV_IA64_FltF73 = 2121,CV_IA64_FltF74 = 2122,
  CV_IA64_FltF75 = 2123,CV_IA64_FltF76 = 2124,CV_IA64_FltF77 = 2125,CV_IA64_FltF78 = 2126,CV_IA64_FltF79 = 2127,CV_IA64_FltF80 = 2128,
  CV_IA64_FltF81 = 2129,CV_IA64_FltF82 = 2130,CV_IA64_FltF83 = 2131,CV_IA64_FltF84 = 2132,CV_IA64_FltF85 = 2133,CV_IA64_FltF86 = 2134,
  CV_IA64_FltF87 = 2135,CV_IA64_FltF88 = 2136,CV_IA64_FltF89 = 2137,CV_IA64_FltF90 = 2138,CV_IA64_FltF91 = 2139,CV_IA64_FltF92 = 2140,
  CV_IA64_FltF93 = 2141,CV_IA64_FltF94 = 2142,CV_IA64_FltF95 = 2143,CV_IA64_FltF96 = 2144,CV_IA64_FltF97 = 2145,CV_IA64_FltF98 = 2146,
  CV_IA64_FltF99 = 2147,CV_IA64_FltF100 = 2148,CV_IA64_FltF101 = 2149,CV_IA64_FltF102 = 2150,CV_IA64_FltF103 = 2151,CV_IA64_FltF104 = 2152,
  CV_IA64_FltF105 = 2153,CV_IA64_FltF106 = 2154,CV_IA64_FltF107 = 2155,CV_IA64_FltF108 = 2156,CV_IA64_FltF109 = 2157,CV_IA64_FltF110 = 2158,
  CV_IA64_FltF111 = 2159,CV_IA64_FltF112 = 2160,CV_IA64_FltF113 = 2161,CV_IA64_FltF114 = 2162,CV_IA64_FltF115 = 2163,CV_IA64_FltF116 = 2164,
  CV_IA64_FltF117 = 2165,CV_IA64_FltF118 = 2166,CV_IA64_FltF119 = 2167,CV_IA64_FltF120 = 2168,CV_IA64_FltF121 = 2169,CV_IA64_FltF122 = 2170,
  CV_IA64_FltF123 = 2171,CV_IA64_FltF124 = 2172,CV_IA64_FltF125 = 2173,CV_IA64_FltF126 = 2174,CV_IA64_FltF127 = 2175,CV_IA64_ApKR0 = 3072,
  CV_IA64_ApKR1 = 3073,CV_IA64_ApKR2 = 3074,CV_IA64_ApKR3 = 3075,CV_IA64_ApKR4 = 3076,CV_IA64_ApKR5 = 3077,CV_IA64_ApKR6 = 3078,
  CV_IA64_ApKR7 = 3079,CV_IA64_AR8 = 3080,CV_IA64_AR9 = 3081,CV_IA64_AR10 = 3082,CV_IA64_AR11 = 3083,CV_IA64_AR12 = 3084,CV_IA64_AR13 = 3085,
  CV_IA64_AR14 = 3086,CV_IA64_AR15 = 3087,CV_IA64_RsRSC = 3088,CV_IA64_RsBSP = 3089,CV_IA64_RsBSPSTORE = 3090,CV_IA64_RsRNAT = 3091,
  CV_IA64_AR20 = 3092,CV_IA64_AR21 = 3093,CV_IA64_AR22 = 3094,CV_IA64_AR23 = 3095,CV_IA64_AR24 = 3096,CV_IA64_AR25 = 3097,CV_IA64_AR26 = 3098,
  CV_IA64_AR27 = 3099,CV_IA64_AR28 = 3100,CV_IA64_AR29 = 3101,CV_IA64_AR30 = 3102,CV_IA64_AR31 = 3103,CV_IA64_ApCCV = 3104,CV_IA64_AR33 = 3105,
  CV_IA64_AR34 = 3106,CV_IA64_AR35 = 3107,CV_IA64_ApUNAT = 3108,CV_IA64_AR37 = 3109,CV_IA64_AR38 = 3110,CV_IA64_AR39 = 3111,CV_IA64_StFPSR = 3112,
  CV_IA64_AR41 = 3113,CV_IA64_AR42 = 3114,CV_IA64_AR43 = 3115,CV_IA64_ApITC = 3116,CV_IA64_AR45 = 3117,CV_IA64_AR46 = 3118,CV_IA64_AR47 = 3119,
  CV_IA64_AR48 = 3120,CV_IA64_AR49 = 3121,CV_IA64_AR50 = 3122,CV_IA64_AR51 = 3123,CV_IA64_AR52 = 3124,CV_IA64_AR53 = 3125,CV_IA64_AR54 = 3126,
  CV_IA64_AR55 = 3127,CV_IA64_AR56 = 3128,CV_IA64_AR57 = 3129,CV_IA64_AR58 = 3130,CV_IA64_AR59 = 3131,CV_IA64_AR60 = 3132,CV_IA64_AR61 = 3133,
  CV_IA64_AR62 = 3134,CV_IA64_AR63 = 3135,CV_IA64_RsPFS = 3136,CV_IA64_ApLC = 3137,CV_IA64_ApEC = 3138,CV_IA64_AR67 = 3139,CV_IA64_AR68 = 3140,
  CV_IA64_AR69 = 3141,CV_IA64_AR70 = 3142,CV_IA64_AR71 = 3143,CV_IA64_AR72 = 3144,CV_IA64_AR73 = 3145,CV_IA64_AR74 = 3146,CV_IA64_AR75 = 3147,
  CV_IA64_AR76 = 3148,CV_IA64_AR77 = 3149,CV_IA64_AR78 = 3150,CV_IA64_AR79 = 3151,CV_IA64_AR80 = 3152,CV_IA64_AR81 = 3153,CV_IA64_AR82 = 3154,
  CV_IA64_AR83 = 3155,CV_IA64_AR84 = 3156,CV_IA64_AR85 = 3157,CV_IA64_AR86 = 3158,CV_IA64_AR87 = 3159,CV_IA64_AR88 = 3160,CV_IA64_AR89 = 3161,
  CV_IA64_AR90 = 3162,CV_IA64_AR91 = 3163,CV_IA64_AR92 = 3164,CV_IA64_AR93 = 3165,CV_IA64_AR94 = 3166,CV_IA64_AR95 = 3167,CV_IA64_AR96 = 3168,
  CV_IA64_AR97 = 3169,CV_IA64_AR98 = 3170,CV_IA64_AR99 = 3171,CV_IA64_AR100 = 3172,CV_IA64_AR101 = 3173,CV_IA64_AR102 = 3174,CV_IA64_AR103 = 3175,
  CV_IA64_AR104 = 3176,CV_IA64_AR105 = 3177,CV_IA64_AR106 = 3178,CV_IA64_AR107 = 3179,CV_IA64_AR108 = 3180,CV_IA64_AR109 = 3181,
  CV_IA64_AR110 = 3182,CV_IA64_AR111 = 3183,CV_IA64_AR112 = 3184,CV_IA64_AR113 = 3185,CV_IA64_AR114 = 3186,CV_IA64_AR115 = 3187,
  CV_IA64_AR116 = 3188,CV_IA64_AR117 = 3189,CV_IA64_AR118 = 3190,CV_IA64_AR119 = 3191,CV_IA64_AR120 = 3192,CV_IA64_AR121 = 3193,
  CV_IA64_AR122 = 3194,CV_IA64_AR123 = 3195,CV_IA64_AR124 = 3196,CV_IA64_AR125 = 3197,CV_IA64_AR126 = 3198,CV_IA64_AR127 = 3199,
  CV_IA64_CPUID0 = 3328,CV_IA64_CPUID1 = 3329,CV_IA64_CPUID2 = 3330,CV_IA64_CPUID3 = 3331,CV_IA64_CPUID4 = 3332,CV_IA64_ApDCR = 4096,
  CV_IA64_ApITM = 4097,CV_IA64_ApIVA = 4098,CV_IA64_CR3 = 4099,CV_IA64_CR4 = 4100,CV_IA64_CR5 = 4101,CV_IA64_CR6 = 4102,CV_IA64_CR7 = 4103,
  CV_IA64_ApPTA = 4104,CV_IA64_ApGPTA = 4105,CV_IA64_CR10 = 4106,CV_IA64_CR11 = 4107,CV_IA64_CR12 = 4108,CV_IA64_CR13 = 4109,CV_IA64_CR14 = 4110,
  CV_IA64_CR15 = 4111,CV_IA64_StIPSR = 4112,CV_IA64_StISR = 4113,CV_IA64_CR18 = 4114,CV_IA64_StIIP = 4115,CV_IA64_StIFA = 4116,CV_IA64_StITIR = 4117,
  CV_IA64_StIIPA = 4118,CV_IA64_StIFS = 4119,CV_IA64_StIIM = 4120,CV_IA64_StIHA = 4121,CV_IA64_CR26 = 4122,CV_IA64_CR27 = 4123,CV_IA64_CR28 = 4124,
  CV_IA64_CR29 = 4125,CV_IA64_CR30 = 4126,CV_IA64_CR31 = 4127,CV_IA64_CR32 = 4128,CV_IA64_CR33 = 4129,CV_IA64_CR34 = 4130,CV_IA64_CR35 = 4131,
  CV_IA64_CR36 = 4132,CV_IA64_CR37 = 4133,CV_IA64_CR38 = 4134,CV_IA64_CR39 = 4135,CV_IA64_CR40 = 4136,CV_IA64_CR41 = 4137,CV_IA64_CR42 = 4138,
  CV_IA64_CR43 = 4139,CV_IA64_CR44 = 4140,CV_IA64_CR45 = 4141,CV_IA64_CR46 = 4142,CV_IA64_CR47 = 4143,CV_IA64_CR48 = 4144,CV_IA64_CR49 = 4145,
  CV_IA64_CR50 = 4146,CV_IA64_CR51 = 4147,CV_IA64_CR52 = 4148,CV_IA64_CR53 = 4149,CV_IA64_CR54 = 4150,CV_IA64_CR55 = 4151,CV_IA64_CR56 = 4152,
  CV_IA64_CR57 = 4153,CV_IA64_CR58 = 4154,CV_IA64_CR59 = 4155,CV_IA64_CR60 = 4156,CV_IA64_CR61 = 4157,CV_IA64_CR62 = 4158,CV_IA64_CR63 = 4159,
  CV_IA64_SaLID = 4160,CV_IA64_SaIVR = 4161,CV_IA64_SaTPR = 4162,CV_IA64_SaEOI = 4163,CV_IA64_SaIRR0 = 4164,CV_IA64_SaIRR1 = 4165,
  CV_IA64_SaIRR2 = 4166,CV_IA64_SaIRR3 = 4167,CV_IA64_SaITV = 4168,CV_IA64_SaPMV = 4169,CV_IA64_SaCMCV = 4170,CV_IA64_CR75 = 4171,
  CV_IA64_CR76 = 4172,CV_IA64_CR77 = 4173,CV_IA64_CR78 = 4174,CV_IA64_CR79 = 4175,CV_IA64_SaLRR0 = 4176,CV_IA64_SaLRR1 = 4177,CV_IA64_CR82 = 4178,
  CV_IA64_CR83 = 4179,CV_IA64_CR84 = 4180,CV_IA64_CR85 = 4181,CV_IA64_CR86 = 4182,CV_IA64_CR87 = 4183,CV_IA64_CR88 = 4184,CV_IA64_CR89 = 4185,
  CV_IA64_CR90 = 4186,CV_IA64_CR91 = 4187,CV_IA64_CR92 = 4188,CV_IA64_CR93 = 4189,CV_IA64_CR94 = 4190,CV_IA64_CR95 = 4191,CV_IA64_CR96 = 4192,
  CV_IA64_CR97 = 4193,CV_IA64_CR98 = 4194,CV_IA64_CR99 = 4195,CV_IA64_CR100 = 4196,CV_IA64_CR101 = 4197,CV_IA64_CR102 = 4198,CV_IA64_CR103 = 4199,
  CV_IA64_CR104 = 4200,CV_IA64_CR105 = 4201,CV_IA64_CR106 = 4202,CV_IA64_CR107 = 4203,CV_IA64_CR108 = 4204,CV_IA64_CR109 = 4205,CV_IA64_CR110 = 4206,
  CV_IA64_CR111 = 4207,CV_IA64_CR112 = 4208,CV_IA64_CR113 = 4209,CV_IA64_CR114 = 4210,CV_IA64_CR115 = 4211,CV_IA64_CR116 = 4212,CV_IA64_CR117 = 4213,
  CV_IA64_CR118 = 4214,CV_IA64_CR119 = 4215,CV_IA64_CR120 = 4216,CV_IA64_CR121 = 4217,CV_IA64_CR122 = 4218,CV_IA64_CR123 = 4219,CV_IA64_CR124 = 4220,
  CV_IA64_CR125 = 4221,CV_IA64_CR126 = 4222,CV_IA64_CR127 = 4223,CV_IA64_Pkr0 = 5120,CV_IA64_Pkr1 = 5121,CV_IA64_Pkr2 = 5122,CV_IA64_Pkr3 = 5123,
  CV_IA64_Pkr4 = 5124,CV_IA64_Pkr5 = 5125,CV_IA64_Pkr6 = 5126,CV_IA64_Pkr7 = 5127,CV_IA64_Pkr8 = 5128,CV_IA64_Pkr9 = 5129,CV_IA64_Pkr10 = 5130,
  CV_IA64_Pkr11 = 5131,CV_IA64_Pkr12 = 5132,CV_IA64_Pkr13 = 5133,CV_IA64_Pkr14 = 5134,CV_IA64_Pkr15 = 5135,CV_IA64_Rr0 = 6144,CV_IA64_Rr1 = 6145,
  CV_IA64_Rr2 = 6146,CV_IA64_Rr3 = 6147,CV_IA64_Rr4 = 6148,CV_IA64_Rr5 = 6149,CV_IA64_Rr6 = 6150,CV_IA64_Rr7 = 6151,CV_IA64_PFD0 = 7168,
  CV_IA64_PFD1 = 7169,CV_IA64_PFD2 = 7170,CV_IA64_PFD3 = 7171,CV_IA64_PFD4 = 7172,CV_IA64_PFD5 = 7173,CV_IA64_PFD6 = 7174,CV_IA64_PFD7 = 7175,
  CV_IA64_PFC0 = 7424,CV_IA64_PFC1 = 7425,CV_IA64_PFC2 = 7426,CV_IA64_PFC3 = 7427,CV_IA64_PFC4 = 7428,CV_IA64_PFC5 = 7429,CV_IA64_PFC6 = 7430,
  CV_IA64_PFC7 = 7431,CV_IA64_TrI0 = 8192,CV_IA64_TrI1 = 8193,CV_IA64_TrI2 = 8194,CV_IA64_TrI3 = 8195,CV_IA64_TrI4 = 8196,CV_IA64_TrI5 = 8197,
  CV_IA64_TrI6 = 8198,CV_IA64_TrI7 = 8199,CV_IA64_TrD0 = 8320,CV_IA64_TrD1 = 8321,CV_IA64_TrD2 = 8322,CV_IA64_TrD3 = 8323,CV_IA64_TrD4 = 8324,
  CV_IA64_TrD5 = 8325,CV_IA64_TrD6 = 8326,CV_IA64_TrD7 = 8327,CV_IA64_DbI0 = 8448,CV_IA64_DbI1 = 8449,CV_IA64_DbI2 = 8450,CV_IA64_DbI3 = 8451,
  CV_IA64_DbI4 = 8452,CV_IA64_DbI5 = 8453,CV_IA64_DbI6 = 8454,CV_IA64_DbI7 = 8455,CV_IA64_DbD0 = 8576,CV_IA64_DbD1 = 8577,CV_IA64_DbD2 = 8578,
  CV_IA64_DbD3 = 8579,CV_IA64_DbD4 = 8580,CV_IA64_DbD5 = 8581,CV_IA64_DbD6 = 8582,CV_IA64_DbD7 = 8583
} IA64_REG_INDEX;

#define MD_LFHINT_NONE 0x00
#define MD_LFHINT_NT1 0x01
#define MD_LFHINT_NT2 0x02
#define MD_LFHINT_NTA 0x03

#endif

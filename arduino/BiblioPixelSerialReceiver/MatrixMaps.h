#ifdef ULTIM8x8
#define MatrixWidth 8
#define MatrixHeight 8
uint16_t MatrixMap[MatrixHeight][MatrixWidth] = {
{7,8,23,24,39,40,55,56},
{6,9,22,25,38,41,54,57},
{5,10,21,26,37,42,53,58},
{4,11,20,27,36,43,52,59},
{3,12,19,28,35,44,51,60},
{2,13,18,29,34,45,50,61},
{1,14,17,30,33,46,49,62},
{0,15,16,31,32,47,48,63},
};
#endif

#ifdef ULTIM8x24
#define MatrixWidth 24
#define MatrixHeight 8
uint16_t MatrixMap[MatrixHeight][MatrixWidth] = {
{7,8,23,24,39,40,55,56,71,72,87,88,103,104,119,120,135,136,151,152,167,168,183,184},
{6,9,22,25,38,41,54,57,70,73,86,89,102,105,118,121,134,137,150,153,166,169,182,185},
{5,10,21,26,37,42,53,58,69,74,85,90,101,106,117,122,133,138,149,154,165,170,181,186},
{4,11,20,27,36,43,52,59,68,75,84,91,100,107,116,123,132,139,148,155,164,171,180,187},
{3,12,19,28,35,44,51,60,67,76,83,92,99,108,115,124,131,140,147,156,163,172,179,188},
{2,13,18,29,34,45,50,61,66,77,82,93,98,109,114,125,130,141,146,157,162,173,178,189},
{1,14,17,30,33,46,49,62,65,78,81,94,97,110,113,126,129,142,145,158,161,174,177,190},
{0,15,16,31,32,47,48,63,64,79,80,95,96,111,112,127,128,143,144,159,160,175,176,191},
};
#endif

#ifdef ULTIM24x24
#define MatrixWidth 24
#define MatrixHeight 24
uint16_t MatrixMap[MatrixHeight][MatrixWidth] = {
{7,8,23,24,39,40,55,56,71,72,87,88,103,104,119,120,135,136,151,152,167,168,183,184},
{6,9,22,25,38,41,54,57,70,73,86,89,102,105,118,121,134,137,150,153,166,169,182,185},
{5,10,21,26,37,42,53,58,69,74,85,90,101,106,117,122,133,138,149,154,165,170,181,186},
{4,11,20,27,36,43,52,59,68,75,84,91,100,107,116,123,132,139,148,155,164,171,180,187},
{3,12,19,28,35,44,51,60,67,76,83,92,99,108,115,124,131,140,147,156,163,172,179,188},
{2,13,18,29,34,45,50,61,66,77,82,93,98,109,114,125,130,141,146,157,162,173,178,189},
{1,14,17,30,33,46,49,62,65,78,81,94,97,110,113,126,129,142,145,158,161,174,177,190},
{0,15,16,31,32,47,48,63,64,79,80,95,96,111,112,127,128,143,144,159,160,175,176,191},
{383,368,367,352,351,336,335,320,319,304,303,288,287,272,271,256,255,240,239,224,223,208,207,192},
{382,369,366,353,350,337,334,321,318,305,302,289,286,273,270,257,254,241,238,225,222,209,206,193},
{381,370,365,354,349,338,333,322,317,306,301,290,285,274,269,258,253,242,237,226,221,210,205,194},
{380,371,364,355,348,339,332,323,316,307,300,291,284,275,268,259,252,243,236,227,220,211,204,195},
{379,372,363,356,347,340,331,324,315,308,299,292,283,276,267,260,251,244,235,228,219,212,203,196},
{378,373,362,357,346,341,330,325,314,309,298,293,282,277,266,261,250,245,234,229,218,213,202,197},
{377,374,361,358,345,342,329,326,313,310,297,294,281,278,265,262,249,246,233,230,217,214,201,198},
{376,375,360,359,344,343,328,327,312,311,296,295,280,279,264,263,248,247,232,231,216,215,200,199},
{391,392,407,408,423,424,439,440,455,456,471,472,487,488,503,504,519,520,535,536,551,552,567,568},
{390,393,406,409,422,425,438,441,454,457,470,473,486,489,502,505,518,521,534,537,550,553,566,569},
{389,394,405,410,421,426,437,442,453,458,469,474,485,490,501,506,517,522,533,538,549,554,565,570},
{388,395,404,411,420,427,436,443,452,459,468,475,484,491,500,507,516,523,532,539,548,555,564,571},
{387,396,403,412,419,428,435,444,451,460,467,476,483,492,499,508,515,524,531,540,547,556,563,572},
{386,397,402,413,418,429,434,445,450,461,466,477,482,493,498,509,514,525,530,541,546,557,562,573},
{385,398,401,414,417,430,433,446,449,462,465,478,481,494,497,510,513,526,529,542,545,558,561,574},
{384,399,400,415,416,431,432,447,448,463,464,479,480,495,496,511,512,527,528,543,544,559,560,575},
};
#endif

#ifdef ULTIM48x24
#define MatrixWidth 24
#define MatrixHeight 48
uint16_t MatrixMap[MatrixHeight][MatrixWidth] = {
{7,8,23,24,39,40,55,56,71,72,87,88,103,104,119,120,135,136,151,152,167,168,183,184},
{6,9,22,25,38,41,54,57,70,73,86,89,102,105,118,121,134,137,150,153,166,169,182,185},
{5,10,21,26,37,42,53,58,69,74,85,90,101,106,117,122,133,138,149,154,165,170,181,186},
{4,11,20,27,36,43,52,59,68,75,84,91,100,107,116,123,132,139,148,155,164,171,180,187},
{3,12,19,28,35,44,51,60,67,76,83,92,99,108,115,124,131,140,147,156,163,172,179,188},
{2,13,18,29,34,45,50,61,66,77,82,93,98,109,114,125,130,141,146,157,162,173,178,189},
{1,14,17,30,33,46,49,62,65,78,81,94,97,110,113,126,129,142,145,158,161,174,177,190},
{0,15,16,31,32,47,48,63,64,79,80,95,96,111,112,127,128,143,144,159,160,175,176,191},
{383,368,367,352,351,336,335,320,319,304,303,288,287,272,271,256,255,240,239,224,223,208,207,192},
{382,369,366,353,350,337,334,321,318,305,302,289,286,273,270,257,254,241,238,225,222,209,206,193},
{381,370,365,354,349,338,333,322,317,306,301,290,285,274,269,258,253,242,237,226,221,210,205,194},
{380,371,364,355,348,339,332,323,316,307,300,291,284,275,268,259,252,243,236,227,220,211,204,195},
{379,372,363,356,347,340,331,324,315,308,299,292,283,276,267,260,251,244,235,228,219,212,203,196},
{378,373,362,357,346,341,330,325,314,309,298,293,282,277,266,261,250,245,234,229,218,213,202,197},
{377,374,361,358,345,342,329,326,313,310,297,294,281,278,265,262,249,246,233,230,217,214,201,198},
{376,375,360,359,344,343,328,327,312,311,296,295,280,279,264,263,248,247,232,231,216,215,200,199},
{391,392,407,408,423,424,439,440,455,456,471,472,487,488,503,504,519,520,535,536,551,552,567,568},
{390,393,406,409,422,425,438,441,454,457,470,473,486,489,502,505,518,521,534,537,550,553,566,569},
{389,394,405,410,421,426,437,442,453,458,469,474,485,490,501,506,517,522,533,538,549,554,565,570},
{388,395,404,411,420,427,436,443,452,459,468,475,484,491,500,507,516,523,532,539,548,555,564,571},
{387,396,403,412,419,428,435,444,451,460,467,476,483,492,499,508,515,524,531,540,547,556,563,572},
{386,397,402,413,418,429,434,445,450,461,466,477,482,493,498,509,514,525,530,541,546,557,562,573},
{385,398,401,414,417,430,433,446,449,462,465,478,481,494,497,510,513,526,529,542,545,558,561,574},
{384,399,400,415,416,431,432,447,448,463,464,479,480,495,496,511,512,527,528,543,544,559,560,575},
{583,584,599,600,615,616,631,632,647,648,663,664,679,680,695,696,711,712,727,728,743,744,759,760},
{582,585,598,601,614,617,630,633,646,649,662,665,678,681,694,697,710,713,726,729,742,745,758,761},
{581,586,597,602,613,618,629,634,645,650,661,666,677,682,693,698,709,714,725,730,741,746,757,762},
{580,587,596,603,612,619,628,635,644,651,660,667,676,683,692,699,708,715,724,731,740,747,756,763},
{579,588,595,604,611,620,627,636,643,652,659,668,675,684,691,700,707,716,723,732,739,748,755,764},
{578,589,594,605,610,621,626,637,642,653,658,669,674,685,690,701,706,717,722,733,738,749,754,765},
{577,590,593,606,609,622,625,638,641,654,657,670,673,686,689,702,705,718,721,734,737,750,753,766},
{576,591,592,607,608,623,624,639,640,655,656,671,672,687,688,703,704,719,720,735,736,751,752,767},
{959,944,943,928,927,912,911,896,895,880,879,864,863,848,847,832,831,816,815,800,799,784,783,768},
{958,945,942,929,926,913,910,897,894,881,878,865,862,849,846,833,830,817,814,801,798,785,782,769},
{957,946,941,930,925,914,909,898,893,882,877,866,861,850,845,834,829,818,813,802,797,786,781,770},
{956,947,940,931,924,915,908,899,892,883,876,867,860,851,844,835,828,819,812,803,796,787,780,771},
{955,948,939,932,923,916,907,900,891,884,875,868,859,852,843,836,827,820,811,804,795,788,779,772},
{954,949,938,933,922,917,906,901,890,885,874,869,858,853,842,837,826,821,810,805,794,789,778,773},
{953,950,937,934,921,918,905,902,889,886,873,870,857,854,841,838,825,822,809,806,793,790,777,774},
{952,951,936,935,920,919,904,903,888,887,872,871,856,855,840,839,824,823,808,807,792,791,776,775},
{967,968,983,984,999,1000,1015,1016,1031,1032,1047,1048,1063,1064,1079,1080,1095,1096,1111,1112,1127,1128,1143,1144},
{966,969,982,985,998,1001,1014,1017,1030,1033,1046,1049,1062,1065,1078,1081,1094,1097,1110,1113,1126,1129,1142,1145},
{965,970,981,986,997,1002,1013,1018,1029,1034,1045,1050,1061,1066,1077,1082,1093,1098,1109,1114,1125,1130,1141,1146},
{964,971,980,987,996,1003,1012,1019,1028,1035,1044,1051,1060,1067,1076,1083,1092,1099,1108,1115,1124,1131,1140,1147},
{963,972,979,988,995,1004,1011,1020,1027,1036,1043,1052,1059,1068,1075,1084,1091,1100,1107,1116,1123,1132,1139,1148},
{962,973,978,989,994,1005,1010,1021,1026,1037,1042,1053,1058,1069,1074,1085,1090,1101,1106,1117,1122,1133,1138,1149},
{961,974,977,990,993,1006,1009,1022,1025,1038,1041,1054,1057,1070,1073,1086,1089,1102,1105,1118,1121,1134,1137,1150},
{960,975,976,991,992,1007,1008,1023,1024,1039,1040,1055,1056,1071,1072,1087,1088,1103,1104,1119,1120,1135,1136,1151},
};
#endif

#ifdef ULTIM8x72
#define MatrixWidth 72
#define MatrixHeight 8
uint16_t MatrixMap[MatrixHeight][MatrixWidth] = {
{7,8,23,24,39,40,55,56,71,72,87,88,103,104,119,120,135,136,151,152,167,168,183,184,199,200,215,216,231,232,247,248,263,264,279,280,295,296,311,312,327,328,343,344,359,360,375,376,391,392,407,408,423,424,439,440,455,456,471,472,487,488,503,504,519,520,535,536,551,552,567,568},
{6,9,22,25,38,41,54,57,70,73,86,89,102,105,118,121,134,137,150,153,166,169,182,185,198,201,214,217,230,233,246,249,262,265,278,281,294,297,310,313,326,329,342,345,358,361,374,377,390,393,406,409,422,425,438,441,454,457,470,473,486,489,502,505,518,521,534,537,550,553,566,569},
{5,10,21,26,37,42,53,58,69,74,85,90,101,106,117,122,133,138,149,154,165,170,181,186,197,202,213,218,229,234,245,250,261,266,277,282,293,298,309,314,325,330,341,346,357,362,373,378,389,394,405,410,421,426,437,442,453,458,469,474,485,490,501,506,517,522,533,538,549,554,565,570},
{4,11,20,27,36,43,52,59,68,75,84,91,100,107,116,123,132,139,148,155,164,171,180,187,196,203,212,219,228,235,244,251,260,267,276,283,292,299,308,315,324,331,340,347,356,363,372,379,388,395,404,411,420,427,436,443,452,459,468,475,484,491,500,507,516,523,532,539,548,555,564,571},
{3,12,19,28,35,44,51,60,67,76,83,92,99,108,115,124,131,140,147,156,163,172,179,188,195,204,211,220,227,236,243,252,259,268,275,284,291,300,307,316,323,332,339,348,355,364,371,380,387,396,403,412,419,428,435,444,451,460,467,476,483,492,499,508,515,524,531,540,547,556,563,572},
{2,13,18,29,34,45,50,61,66,77,82,93,98,109,114,125,130,141,146,157,162,173,178,189,194,205,210,221,226,237,242,253,258,269,274,285,290,301,306,317,322,333,338,349,354,365,370,381,386,397,402,413,418,429,434,445,450,461,466,477,482,493,498,509,514,525,530,541,546,557,562,573},
{1,14,17,30,33,46,49,62,65,78,81,94,97,110,113,126,129,142,145,158,161,174,177,190,193,206,209,222,225,238,241,254,257,270,273,286,289,302,305,318,321,334,337,350,353,366,369,382,385,398,401,414,417,430,433,446,449,462,465,478,481,494,497,510,513,526,529,542,545,558,561,574},
{0,15,16,31,32,47,48,63,64,79,80,95,96,111,112,127,128,143,144,159,160,175,176,191,192,207,208,223,224,239,240,255,256,271,272,287,288,303,304,319,320,335,336,351,352,367,368,383,384,399,400,415,416,431,432,447,448,463,464,479,480,495,496,511,512,527,528,543,544,559,560,575},
};
#endif

#ifdef ULTIM16x56
#define MatrixWidth 56
#define MatrixHeight 16
uint16_t MatrixMap[MatrixHeight][MatrixWidth] = {
{7,8,23,24,39,40,55,56,71,72,87,88,103,104,119,120,135,136,151,152,167,168,183,184,199,200,215,216,231,232,247,248,263,264,279,280,295,296,311,312,327,328,343,344,359,360,375,376,391,392,407,408,423,424,439,440},
{6,9,22,25,38,41,54,57,70,73,86,89,102,105,118,121,134,137,150,153,166,169,182,185,198,201,214,217,230,233,246,249,262,265,278,281,294,297,310,313,326,329,342,345,358,361,374,377,390,393,406,409,422,425,438,441},
{5,10,21,26,37,42,53,58,69,74,85,90,101,106,117,122,133,138,149,154,165,170,181,186,197,202,213,218,229,234,245,250,261,266,277,282,293,298,309,314,325,330,341,346,357,362,373,378,389,394,405,410,421,426,437,442},
{4,11,20,27,36,43,52,59,68,75,84,91,100,107,116,123,132,139,148,155,164,171,180,187,196,203,212,219,228,235,244,251,260,267,276,283,292,299,308,315,324,331,340,347,356,363,372,379,388,395,404,411,420,427,436,443},
{3,12,19,28,35,44,51,60,67,76,83,92,99,108,115,124,131,140,147,156,163,172,179,188,195,204,211,220,227,236,243,252,259,268,275,284,291,300,307,316,323,332,339,348,355,364,371,380,387,396,403,412,419,428,435,444},
{2,13,18,29,34,45,50,61,66,77,82,93,98,109,114,125,130,141,146,157,162,173,178,189,194,205,210,221,226,237,242,253,258,269,274,285,290,301,306,317,322,333,338,349,354,365,370,381,386,397,402,413,418,429,434,445},
{1,14,17,30,33,46,49,62,65,78,81,94,97,110,113,126,129,142,145,158,161,174,177,190,193,206,209,222,225,238,241,254,257,270,273,286,289,302,305,318,321,334,337,350,353,366,369,382,385,398,401,414,417,430,433,446},
{0,15,16,31,32,47,48,63,64,79,80,95,96,111,112,127,128,143,144,159,160,175,176,191,192,207,208,223,224,239,240,255,256,271,272,287,288,303,304,319,320,335,336,351,352,367,368,383,384,399,400,415,416,431,432,447},
{895,880,879,864,863,848,847,832,831,816,815,800,799,784,783,768,767,752,751,736,735,720,719,704,703,688,687,672,671,656,655,640,639,624,623,608,607,592,591,576,575,560,559,544,543,528,527,512,511,496,495,480,479,464,463,448},
{894,881,878,865,862,849,846,833,830,817,814,801,798,785,782,769,766,753,750,737,734,721,718,705,702,689,686,673,670,657,654,641,638,625,622,609,606,593,590,577,574,561,558,545,542,529,526,513,510,497,494,481,478,465,462,449},
{893,882,877,866,861,850,845,834,829,818,813,802,797,786,781,770,765,754,749,738,733,722,717,706,701,690,685,674,669,658,653,642,637,626,621,610,605,594,589,578,573,562,557,546,541,530,525,514,509,498,493,482,477,466,461,450},
{892,883,876,867,860,851,844,835,828,819,812,803,796,787,780,771,764,755,748,739,732,723,716,707,700,691,684,675,668,659,652,643,636,627,620,611,604,595,588,579,572,563,556,547,540,531,524,515,508,499,492,483,476,467,460,451},
{891,884,875,868,859,852,843,836,827,820,811,804,795,788,779,772,763,756,747,740,731,724,715,708,699,692,683,676,667,660,651,644,635,628,619,612,603,596,587,580,571,564,555,548,539,532,523,516,507,500,491,484,475,468,459,452},
{890,885,874,869,858,853,842,837,826,821,810,805,794,789,778,773,762,757,746,741,730,725,714,709,698,693,682,677,666,661,650,645,634,629,618,613,602,597,586,581,570,565,554,549,538,533,522,517,506,501,490,485,474,469,458,453},
{889,886,873,870,857,854,841,838,825,822,809,806,793,790,777,774,761,758,745,742,729,726,713,710,697,694,681,678,665,662,649,646,633,630,617,614,601,598,585,582,569,566,553,550,537,534,521,518,505,502,489,486,473,470,457,454},
{888,887,872,871,856,855,840,839,824,823,808,807,792,791,776,775,760,759,744,743,728,727,712,711,696,695,680,679,664,663,648,647,632,631,616,615,600,599,584,583,568,567,552,551,536,535,520,519,504,503,488,487,472,471,456,455},
};
#endif

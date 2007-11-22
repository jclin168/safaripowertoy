/* C code produced by gperf version 3.0.1 */
/* Command-line: gperf -F trad2simp_init -H trad2simp_hash -N trad2simp_lookup -C -c -G -D -W trad2simp_wordlist trad2simp.in  */
/* Computed positions: -k'1-2' */

#line 5 "trad2simp.in"

/*
   This is a part of SafariPowerToy source code
   (C)2006 written by jclin (jiancheng@gmail.com)
*/
#line 12 "trad2simp.in"
struct char_map_s {
  char * src;
  char * dst;
};

#define TOTAL_KEYWORDS 2552
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 2
#define MIN_HASH_VALUE 6
#define MAX_HASH_VALUE 8001
/* maximum key range = 7996, duplicates = 11 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
trad2simp_hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static const unsigned short asso_values[] =
    {
      8002, 8002, 1678,  919,   43, 1703, 1184, 3320,  489, 3615,
      1375, 2805,    4,   18,  518, 1925, 1988, 3924,  319, 1503,
      1545,   33,  329, 1640, 3275, 2243, 2435,  289, 2673, 2705,
      2023, 3979, 2240, 2239, 2428, 1883, 1334,  159,  825, 4019,
      2839, 2699,  973, 3113, 1658, 4045, 3944, 3914, 3435, 2543,
       468, 3704, 1849, 1215,  528,  483,  699, 1844, 2339,  128,
      1144, 1233, 1395, 4059, 1915, 1769, 2368, 1743, 3489, 2328,
       233, 1869, 1535,  414,    3,  114,  378, 1638, 3264,  213,
      3070, 1348, 2333, 3314, 1830, 1228, 3234, 1579,  449, 3745,
      1860, 3750,   83, 1399, 1264, 4040, 3454, 2655, 2505,  734,
       615, 1054, 1940, 1408,    9, 3510,  918, 2940,  829,  914,
      1040, 2559, 4024, 2120, 3865, 3644, 3775, 2944, 2548, 3964,
      1398, 3605,  519, 1138,  338, 1740, 3634, 3755, 3940, 2498,
      3764, 1548, 1214,  323, 4070, 1808, 1740, 3144, 3849,  938,
      1780, 3800, 1303, 1563, 3350, 2945, 2758, 3934, 1103, 3155,
       568, 3269, 3609, 3974, 2514, 3590,   24,  753, 3795, 3875,
       584,  563,  973,  308, 2679, 1208, 3128,  283,  184,  953,
      2129,  819, 4095,   84,  869,  243,  425, 3894, 1598, 2739,
      1030,  580,  153, 2743, 2910, 2978, 1163, 2258, 2740, 2804,
      3105,  108, 1088,  679, 1544,  360,  480, 3059,   68, 2573,
        69,  220,  738,   88,  249, 3550,  588, 1449, 1064, 3119,
       520,  783,   20, 3019,  209,  703,  353,  503, 2398,   64,
        34,  768,  349, 1700, 2355,  760,   48, 2155,  395, 1114,
      3935, 3384, 2463, 2069, 1659, 2254, 1295,  535,  185,  340,
      3079, 1320,  140,  100,  800,  115, 1445, 2760,  135,  720,
       290,  400, 1185,  810,   60,  229,  925,   30, 1460,  174,
      1505,  584, 1720,  385, 1605, 2375,  649,  680,  365, 1570,
       870, 2780, 1395,  190, 3735, 1140, 3980, 2985, 3560, 1915,
      3075, 1070,    5,  740,  614, 2280, 2835, 2870, 2655, 2095,
       665, 2430, 3650, 2130,  975,    0, 1590,   15, 2875,  605,
       660, 1890, 2845,   10,  125, 2055, 1870, 3240, 3825,  150,
        25, 1715,   20, 1020,  545, 1780, 1435, 8002, 8002, 8002,
      8002, 8002, 8002, 8002, 8002, 8002, 8002, 8002, 8002, 8002,
      8002, 8002, 8002, 8002, 8002, 8002, 8002, 8002, 8002, 8002,
      8002, 8002, 8002, 8002, 8002, 8002, 8002, 8002, 8002, 8002,
      8002, 8002, 8002, 8002, 8002, 8002, 8002, 8002, 8002, 8002,
      8002, 8002, 8002, 8002, 8002, 8002, 8002, 8002, 8002, 8002,
      8002, 8002, 8002, 8002, 8002, 8002, 8002, 8002, 8002, 8002,
      8002, 8002, 8002, 8002, 8002, 8002, 8002, 8002, 8002, 8002,
      8002, 8002, 8002, 8002, 8002, 8002, 8002, 8002, 8002, 8002,
      8002, 8002, 8002, 8002, 8002, 8002, 8002, 8002, 8002, 8002,
      8002, 8002, 8002
    };
  return len + asso_values[(unsigned char)str[1]+2] + asso_values[(unsigned char)str[0]+157];
}

static const unsigned char lengthtable[] =
  {
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2
  };

static const struct char_map_s trad2simp_wordlist[] =
  {
#line 1485 "trad2simp.in"
    {"\212\012", "\x8B\xAF"},
#line 1523 "trad2simp.in"
    {"\212f", "\x8B\xD5"},
#line 1896 "trad2simp.in"
    {"\222H", "\x94\xCA"},
#line 1146 "trad2simp.in"
    {"}f", "\x7E\xD9"},
#line 405 "trad2simp.in"
    {"\214H", "\x5C\x82"},
#line 1873 "trad2simp.in"
    {"\222f", "\x94\xB2"},
#line 1571 "trad2simp.in"
    {"\212\322", "\x8C\x05"},
#line 1114 "trad2simp.in"
    {"}\013", "\x7E\xB9"},
#line 1548 "trad2simp.in"
    {"\212\232", "\x8B\xEE"},
#line 1163 "trad2simp.in"
    {"}\322", "\x7E\xEA"},
#line 2257 "trad2simp.in"
    {"\231H", "\x99\x90"},
#line 117 "trad2simp.in"
    {"\231\012", "\x51\x7B"},
#line 1956 "trad2simp.in"
    {"\222\322", "\x95\x0B"},
#line 1483 "trad2simp.in"
    {"\212\023", "\x8B\xAD"},
#line 1924 "trad2simp.in"
    {"\222\232", "\x94\xEB"},
#line 1667 "trad2simp.in"
    {"\214\322", "\x8D\x4A"},
#line 1119 "trad2simp.in"
    {"}\023", "\x7E\xBE"},
#line 1120 "trad2simp.in"
    {"}\332", "\x7E\xBF"},
#line 1201 "trad2simp.in"
    {"}\332", "\x7F\x10"},
#line 2376 "trad2simp.in"
    {"\233\322", "\x9C\xAC"},
#line 1473 "trad2simp.in"
    {"\212\002", "\x8B\xA2"},
#line 2350 "trad2simp.in"
    {"\233\232", "\x9C\x92"},
#line 2276 "trad2simp.in"
    {"\231\322", "\x9A\x79"},
#line 1092 "trad2simp.in"
    {"}\002", "\x7E\xA3"},
#line 1666 "trad2simp.in"
    {"\214\332", "\x8D\x49"},
#line 2406 "trad2simp.in"
    {"\233\377", "\x9C\xCA"},
#line 1205 "trad2simp.in"
    {"}\340", "\x7F\x14"},
#line 584 "trad2simp.in"
    {"d\232", "\x63\x7B"},
#line 2298 "trad2simp.in"
    {"\231\377", "\x9A\x8F"},
#line 2240 "trad2simp.in"
    {"\231\023", "\x99\x7F"},
#line 1587 "trad2simp.in"
    {"\212\374", "\x8C\x16"},
#line 1677 "trad2simp.in"
    {"\214\340", "\x8D\x54"},
#line 583 "trad2simp.in"
    {"d\332", "\x63\x6E"},
#line 1572 "trad2simp.in"
    {"\212\304", "\x8C\x06"},
#line 1187 "trad2simp.in"
    {"}\331", "\x7F\x02"},
#line 1857 "trad2simp.in"
    {"\222\374", "\x94\xA2"},
#line 1171 "trad2simp.in"
    {"}\304", "\x7E\xF2"},
#line 1940 "trad2simp.in"
    {"\222\331", "\x94\xFB"},
#line 1638 "trad2simp.in"
    {"\214\374", "\x8D\x2D"},
#line 575 "trad2simp.in"
    {"d\340", "\x63\x24"},
#line 1675 "trad2simp.in"
    {"\214\331", "\x8D\x52"},
#line 1656 "trad2simp.in"
    {"\214\304", "\x8D\x3F"},
#line 518 "trad2simp.in"
    {"a\232", "\x60\xEE"},
#line 1565 "trad2simp.in"
    {"\212\311", "\x8B\xFF"},
#line 2275 "trad2simp.in"
    {"\231\331", "\x9A\x78"},
#line 609 "trad2simp.in"
    {"d\374", "\x64\xB8"},
#line 1893 "trad2simp.in"
    {"\222Z", "\x94\xC6"},
#line 1928 "trad2simp.in"
    {"\222\253", "\x94\xEF"},
#line 585 "trad2simp.in"
    {"d\304", "\x63\xB3"},
#line 1640 "trad2simp.in"
    {"\214\253", "\x8D\x2F"},
#line 1489 "trad2simp.in"
    {"\212\361", "\x8B\xB3"},
#line 2329 "trad2simp.in"
    {"\233Z", "\x9C\x7C"},
#line 2359 "trad2simp.in"
    {"\233\253", "\x9C\x9B"},
#line 1202 "trad2simp.in"
    {"}\361", "\x7F\x11"},
#line 2368 "trad2simp.in"
    {"\233\311", "\x9C\xA4"},
#line 252 "trad2simp.in"
    {"Vf", "\x54\xD5"},
#line 1942 "trad2simp.in"
    {"\222\361", "\x94\xFD"},
#line 1169 "trad2simp.in"
    {"}\275", "\x7E\xF0"},
#line 547 "trad2simp.in"
    {"d\253", "\x62\x9A"},
#line 1590 "trad2simp.in"
    {"\212\363", "\x8C\x19"},
#line 313 "trad2simp.in"
    {"X\012", "\x57\xA9"},
#line 512 "trad2simp.in"
    {"a\374", "\x60\xE7"},
#line 1652 "trad2simp.in"
    {"\214\275", "\x8D\x3B"},
#line 1895 "trad2simp.in"
    {"\222I", "\x94\xC9"},
#line 2289 "trad2simp.in"
    {"\231\361", "\x9A\x86"},
#line 1991 "trad2simp.in"
    {"\223H", "\x95\x33"},
#line 595 "trad2simp.in"
    {"d\361", "\x64\x01"},
#line 1134 "trad2simp.in"
    {"}9", "\x7E\xCD"},
#line 1577 "trad2simp.in"
    {"\212\366", "\x8C\x0C"},
#line 1898 "trad2simp.in"
    {"\2229", "\x94\xCD"},
#line 2258 "trad2simp.in"
    {"\231I", "\x99\x91"},
#line 1200 "trad2simp.in"
    {"}\366", "\x7F\x0F"},
#line 517 "trad2simp.in"
    {"aZ", "\x60\xED"},
#line 510 "trad2simp.in"
    {"a\253", "\x60\xAF"},
#line 1958 "trad2simp.in"
    {"\222\366", "\x95\x0D"},
#line 458 "trad2simp.in"
    {"a\311", "\x5E\x94"},
#line 309 "trad2simp.in"
    {"X\332", "\x57\x86"},
#line 1947 "trad2simp.in"
    {"\222\360", "\x95\x02"},
#line 365 "trad2simp.in"
    {"[\013", "\x5A\x75"},
#line 2153 "trad2simp.in"
    {"\230\012", "\x98\x7C"},
#line 1185 "trad2simp.in"
    {"}\264", "\x7F\x00"},
#line 1502 "trad2simp.in"
    {"\212#", "\x8B\xC0"},
#line 2339 "trad2simp.in"
    {"\233\360", "\x9C\x87"},
#line 2386 "trad2simp.in"
    {"\233\360", "\x9C\xB6"},
#line 264 "trad2simp.in"
    {"U\232", "\x55\x24"},
#line 2286 "trad2simp.in"
    {"\231\360", "\x9A\x83"},
#line 1646 "trad2simp.in"
    {"\214\264", "\x8D\x35"},
#line 1849 "trad2simp.in"
    {"\222#", "\x94\x99"},
#line 561 "trad2simp.in"
    {"d\360", "\x62\xE7"},
#line 237 "trad2simp.in"
    {"U\332", "\x54\x5C"},
#line 333 "trad2simp.in"
    {"X\374", "\x58\xF8"},
#line 2266 "trad2simp.in"
    {"\231\264", "\x9A\x6F"},
#line 295 "trad2simp.in"
    {"X\331", "\x57\x39"},
#line 2228 "trad2simp.in"
    {"\230\377", "\x99\x73"},
#line 2156 "trad2simp.in"
    {"\230\023", "\x98\x7F"},
#line 1555 "trad2simp.in"
    {"\212\246", "\x8B\xF5"},
#line 270 "trad2simp.in"
    {"V\311", "\x55\x70"},
#line 1190 "trad2simp.in"
    {"}\354", "\x7F\x05"},
#line 2147 "trad2simp.in"
    {"\230\002", "\x98\x76"},
#line 1913 "trad2simp.in"
    {"\222\246", "\x94\xDF"},
#line 529 "trad2simp.in"
    {"a\366", "\x61\xD2"},
#line 126 "trad2simp.in"
    {"XZ", "\x51\xA2"},
#line 1631 "trad2simp.in"
    {"\214\354", "\x8D\x26"},
#line 2354 "trad2simp.in"
    {"\233\246", "\x9C\x96"},
#line 1846 "trad2simp.in"
    {"\223Z", "\x94\x96"},
#line 236 "trad2simp.in"
    {"U\306", "\x54\x5B"},
#line 2227 "trad2simp.in"
    {"\230\374", "\x99\x72"},
#line 1170 "trad2simp.in"
    {"}\324", "\x7E\xF1"},
#line 556 "trad2simp.in"
    {"d\354", "\x62\xDF"},
#line 2207 "trad2simp.in"
    {"\230\304", "\x98\xD8"},
#line 2208 "trad2simp.in"
    {"\230\306", "\x98\xD9"},
#line 2209 "trad2simp.in"
    {"\230\306", "\x98\xDA"},
#line 1574 "trad2simp.in"
    {"\212\307", "\x8C\x08"},
#line 624 "trad2simp.in"
    {"f\340", "\x65\xF7"},
#line 1897 "trad2simp.in"
    {"\222M", "\x94\xCB"},
#line 930 "trad2simp.in"
    {"t\332", "\x74\xD2"},
#line 1186 "trad2simp.in"
    {"}\307", "\x7F\x01"},
#line 92 "trad2simp.in"
    {"Q\002", "\x4F\xAC"},
#line 2391 "trad2simp.in"
    {"\233\324", "\x9C\xBB"},
#line 1856 "trad2simp.in"
    {"\222\307", "\x94\xA1"},
#line 2272 "trad2simp.in"
    {"\231\324", "\x9A\x75"},
#line 1661 "trad2simp.in"
    {"\214\307", "\x8D\x44"},
#line 1125 "trad2simp.in"
    {"}D", "\x7E\xC4"},
#line 555 "trad2simp.in"
    {"d\324", "\x62\xC5"},
#line 2373 "trad2simp.in"
    {"\233\307", "\x9C\xA9"},
#line 633 "trad2simp.in"
    {"f\304", "\x66\x54"},
#line 194 "trad2simp.in"
    {"f\306", "\x53\x86"},
#line 1684 "trad2simp.in"
    {"\214\375", "\x8D\x5B"},
#line 1173 "trad2simp.in"
    {"}\255", "\x7E\xF4"},
#line 2375 "trad2simp.in"
    {"\233\375", "\x9C\xAB"},
#line 563 "trad2simp.in"
    {"d\307", "\x62\xE9"},
#line 28 "trad2simp.in"
    {"V\264", "\x4E\x25"},
#line 1086 "trad2simp.in"
    {"}\312", "\x7D\x27"},
#line 636 "trad2simp.in"
    {"f\253", "\x66\x82"},
#line 632 "trad2simp.in"
    {"f\311", "\x66\x53"},
#line 2349 "trad2simp.in"
    {"\233\255", "\x9C\x91"},
#line 1653 "trad2simp.in"
    {"\214\312", "\x8D\x3C"},
#line 2024 "trad2simp.in"
    {"\223\360", "\x95\x5A"},
#line 2264 "trad2simp.in"
    {"\231\255", "\x9A\x6D"},
#line 2372 "trad2simp.in"
    {"\233\312", "\x9C\xA8"},
#line 376 "trad2simp.in"
    {"[\366", "\x5B\x9D"},
#line 521 "trad2simp.in"
    {"aM", "\x61\x20"},
#line 920 "trad2simp.in"
    {"t\253", "\x73\xF0"},
#line 251 "trad2simp.in"
    {"U\366", "\x54\xD4"},
#line 2176 "trad2simp.in"
    {"\2309", "\x98\x93"},
#line 144 "trad2simp.in"
    {"d\312", "\x51\xFB"},
#line 498 "trad2simp.in"
    {"a\307", "\x60\x73"},
#line 1550 "trad2simp.in"
    {"\212\245", "\x8B\xF0"},
#line 232 "trad2simp.in"
    {"V\246", "\x54\x56"},
#line 143 "trad2simp.in"
    {"Q\361", "\x51\xEF"},
#line 630 "trad2simp.in"
    {"fI", "\x66\x4B"},
#line 1558 "trad2simp.in"
    {"\212\370", "\x8B\xF8"},
#line 1930 "trad2simp.in"
    {"\222\245", "\x94\xF1"},
#line 1113 "trad2simp.in"
    {"}\031", "\x7E\xB8"},
#line 915 "trad2simp.in"
    {"t\275", "\x73\xBA"},
#line 1987 "trad2simp.in"
    {"\222\370", "\x95\x2F"},
#line 916 "trad2simp.in"
    {"tI", "\x73\xC9"},
#line 1545 "trad2simp.in"
    {"\212\241", "\x8B\xEB"},
#line 2016 "trad2simp.in"
    {"\223\246", "\x95\x4F"},
#line 422 "trad2simp.in"
    {"]\322", "\x5C\xE6"},
#line 562 "trad2simp.in"
    {"d\245", "\x62\xE8"},
#line 2297 "trad2simp.in"
    {"\231\370", "\x9A\x8E"},
#line 1477 "trad2simp.in"
    {"\212\020", "\x8B\xA6"},
#line 382 "trad2simp.in"
    {"[\354", "\x5B\xBD"},
#line 1627 "trad2simp.in"
    {"\214\241", "\x8D\x22"},
#line 1118 "trad2simp.in"
    {"}\020", "\x7E\xBD"},
#line 277 "trad2simp.in"
    {"U\354", "\x54\x75"},
#line 1154 "trad2simp.in"
    {"}\203", "\x7E\xE1"},
#line 1859 "trad2simp.in"
    {"\222\020", "\x94\xA4"},
#line 1932 "trad2simp.in"
    {"\222\203", "\x94\xF3"},
#line 1104 "trad2simp.in"
    {"}\024", "\x7E\xAF"},
#line 301 "trad2simp.in"
    {"X\307", "\x57\x5B"},
#line 2004 "trad2simp.in"
    {"\223M", "\x95\x40"},
#line 1853 "trad2simp.in"
    {"\222\024", "\x94\x9E"},
#line 1586 "trad2simp.in"
    {"\212\355", "\x8C\x15"},
#line 2338 "trad2simp.in"
    {"\233\203", "\x9C\x86"},
#line 388 "trad2simp.in"
    {"X\375", "\x5B\xFF"},
#line 2029 "trad2simp.in"
    {"\223\307", "\x95\x5F"},
#line 1903 "trad2simp.in"
    {"\222z", "\x94\xD2"},
#line 1578 "trad2simp.in"
    {"\212\334", "\x8C\x0D"},
#line 508 "trad2simp.in"
    {"a\370", "\x60\xAC"},
#line 1496 "trad2simp.in"
    {"\212\326", "\x8B\xBA"},
#line 1953 "trad2simp.in"
    {"\223\375", "\x95\x08"},
#line 1669 "trad2simp.in"
    {"\214\355", "\x8D\x4C"},
#line 2336 "trad2simp.in"
    {"\233z", "\x9C\x84"},
#line 631 "trad2simp.in"
    {"f\354", "\x66\x52"},
#line 267 "trad2simp.in"
    {"U\307", "\x55\x6C"},
#line 2186 "trad2simp.in"
    {"\230M", "\x98\x9D"},
#line 1673 "trad2simp.in"
    {"\214\334", "\x8D\x50"},
#line 2290 "trad2simp.in"
    {"\231\355", "\x9A\x87"},
#line 819 "trad2simp.in"
    {"o\012", "\x6E\x87"},
#line 1911 "trad2simp.in"
    {"\222\301", "\x94\xDD"},
#line 2377 "trad2simp.in"
    {"\233\326", "\x9C\xAD"},
#line 927 "trad2simp.in"
    {"t\246", "\x74\x77"},
#line 1643 "trad2simp.in"
    {"\214\301", "\x8D\x32"},
#line 2226 "trad2simp.in"
    {"\230\375", "\x99\x71"},
#line 2364 "trad2simp.in"
    {"\233\301", "\x9C\xA0"},
#line 2270 "trad2simp.in"
    {"\231\301", "\x9A\x73"},
#line 680 "trad2simp.in"
    {"jH", "\x68\x61"},
#line 259 "trad2simp.in"
    {"U\312", "\x55\x1D"},
#line 559 "trad2simp.in"
    {"d\301", "\x62\xE5"},
#line 2199 "trad2simp.in"
    {"\230\255", "\x98\xD0"},
#line 626 "trad2simp.in"
    {"f\307", "\x66\x19"},
#line 1542 "trad2simp.in"
    {"\212\342", "\x8B\xE8"},
#line 413 "trad2simp.in"
    {"]\275", "\x5C\xB3"},
#line 929 "trad2simp.in"
    {"t\324", "\x74\x8E"},
#line 2260 "trad2simp.in"
    {"\231J", "\x99\x93"},
#line 167 "trad2simp.in"
    {"R\331", "\x52\xA1"},
#line 1192 "trad2simp.in"
    {"}\371", "\x7F\x07"},
#line 1629 "trad2simp.in"
    {"\214\342", "\x8D\x24"},
#line 1989 "trad2simp.in"
    {"\223\031", "\x95\x31"},
#line 2385 "trad2simp.in"
    {"\233\342", "\x9C\xB5"},
#line 699 "trad2simp.in"
    {"j\023", "\x69\x7C"},
#line 702 "trad2simp.in"
    {"j\332", "\x69\x88"},
#line 2291 "trad2simp.in"
    {"\231\342", "\x9A\x88"},
#line 370 "trad2simp.in"
    {"[\031", "\x5A\xF1"},
#line 762 "trad2simp.in"
    {"o\374", "\x6C\xFA"},
#line 40 "trad2simp.in"
    {"j\002", "\x4E\x50"},
#line 231 "trad2simp.in"
    {"V\024", "\x54\x55"},
#line 434 "trad2simp.in"
    {"]\360", "\x5D\xEF"},
#line 2007 "trad2simp.in"
    {"\223\241", "\x95\x43"},
#line 203 "trad2simp.in"
    {"^\332", "\x53\xA8"},
#line 925 "trad2simp.in"
    {"t\312", "\x74\x3C"},
#line 168 "trad2simp.in"
    {"R\361", "\x52\xA2"},
#line 409 "trad2simp.in"
    {"]\264", "\x5C\x99"},
#line 1979 "trad2simp.in"
    {"\223\020", "\x95\x25"},
#line 2360 "trad2simp.in"
    {"\233\256", "\x9C\x9C"},
#line 192 "trad2simp.in"
    {"^\340", "\x53\x82"},
#line 1518 "trad2simp.in"
    {"\212V", "\x8B\xD0"},
#line 127 "trad2simp.in"
    {"\231\256", "\x51\xAF"},
#line 174 "trad2simp.in"
    {"R\363", "\x52\xCB"},
#line 276 "trad2simp.in"
    {"V\301", "\x55\xEB"},
#line 1968 "trad2simp.in"
    {"\223z", "\x95\x17"},
#line 44 "trad2simp.in"
    {"f\370", "\x4E\x66"},
#line 830 "trad2simp.in"
    {"o\361", "\x6E\xE8"},
#line 204 "trad2simp.in"
    {"^\304", "\x53\xA9"},
#line 2161 "trad2simp.in"
    {"\230\020", "\x98\x84"},
#line 1127 "trad2simp.in"
    {"}0", "\x7E\xC6"},
#line 2022 "trad2simp.in"
    {"\223\334", "\x95\x57"},
#line 1894 "trad2simp.in"
    {"\2220", "\x94\xC8"},
#line 1570 "trad2simp.in"
    {"\212\302", "\x8C\x04"},
#line 457 "trad2simp.in"
    {"^\253", "\x5E\x93"},
#line 489 "trad2simp.in"
    {"a\256", "\x60\x03"},
#line 1116 "trad2simp.in"
    {"}5", "\x7E\xBB"},
#line 2221 "trad2simp.in"
    {"\230\355", "\x99\x6C"},
#line 299 "trad2simp.in"
    {"XJ", "\x57\x57"},
#line 1090 "trad2simp.in"
    {"}\006", "\x7E\xA1"},
#line 1659 "trad2simp.in"
    {"\214\302", "\x8D\x42"},
#line 922 "trad2simp.in"
    {"t\241", "\x74\x0E"},
#line 432 "trad2simp.in"
    {"]\324", "\x5D\xC5"},
#line 669 "trad2simp.in"
    {"j\363", "\x68\x0A"},
#line 1568 "trad2simp.in"
    {"\212\327", "\x8C\x02"},
#line 106 "trad2simp.in"
    {"Q\020", "\x50\xA7"},
#line 837 "trad2simp.in"
    {"o\360", "\x6F\x4D"},
#line 1188 "trad2simp.in"
    {"}\327", "\x7F\x03"},
#line 2557 "trad2simp.in"
    {"\233\006", "\x67\x7E"},
#line 302 "trad2simp.in"
    {"X\342", "\x57\x5C"},
#line 674 "trad2simp.in"
    {"j9", "\x68\x11"},
#line 94 "trad2simp.in"
    {"Q\024", "\x4F\xE6"},
#line 193 "trad2simp.in"
    {"^\363", "\x53\x85"},
#line 1478 "trad2simp.in"
    {"\212\014", "\x8B\xA7"},
#line 2021 "trad2simp.in"
    {"\223\342", "\x95\x56"},
#line 2362 "trad2simp.in"
    {"\233\327", "\x9C\x9E"},
#line 792 "trad2simp.in"
    {"o#", "\x6D\x9F"},
#line 2040 "trad2simp.in"
    {"\223\371", "\x95\x6A"},
#line 637 "trad2simp.in"
    {"f\326", "\x66\xA7"},
#line 1511 "trad2simp.in"
    {"\2124", "\x8B\xC9"},
#line 1929 "trad2simp.in"
    {"\222x", "\x94\xF0"},
#line 384 "trad2simp.in"
    {"[\342", "\x5B\xDD"},
#line 138 "trad2simp.in"
    {"Q\334", "\x51\xDB"},
#line 1580 "trad2simp.in"
    {"\212\353", "\x8C\x0F"},
#line 1890 "trad2simp.in"
    {"\2224", "\x94\xC3"},
#line 1992 "trad2simp.in"
    {"\223G", "\x95\x34"},
#line 326 "trad2simp.in"
    {"X\256", "\x58\x15"},
#line 2230 "trad2simp.in"
    {"\231\014", "\x99\x75"},
#line 676 "trad2simp.in"
    {"j#", "\x68\x37"},
#line 2278 "trad2simp.in"
    {"\231\320", "\x9A\x7B"},
#line 832 "trad2simp.in"
    {"o\246", "\x6E\xEA"},
#line 2009 "trad2simp.in"
    {"\223\256", "\x95\x47"},
#line 30 "trad2simp.in"
    {"P\013", "\x4E\x2A"},
#line 2380 "trad2simp.in"
    {"\233\353", "\x9C\xB0"},
#line 532 "trad2simp.in"
    {"b\024", "\x62\x0B"},
#line 381 "trad2simp.in"
    {"[\256", "\x5B\xAB"},
#line 184 "trad2simp.in"
    {"U\256", "\x53\x55"},
#line 218 "trad2simp.in"
    {"V0", "\x53\xFD"},
#line 2487 "trad2simp.in"
    {"\235\232", "\x9E\x57"},
#line 701 "trad2simp.in"
    {"j\354", "\x69\x87"},
#line 156 "trad2simp.in"
    {"RD", "\x52\x2D"},
#line 756 "trad2simp.in"
    {"o\324", "\x6C\xB5"},
#line 2200 "trad2simp.in"
    {"\230\256", "\x98\xD1"},
#line 1625 "trad2simp.in"
    {"\214\237", "\x8D\x20"},
#line 2503 "trad2simp.in"
    {"\235\332", "\x9E\x68"},
#line 284 "trad2simp.in"
    {"V\302", "\x56\xA3"},
#line 250 "trad2simp.in"
    {"V5", "\x54\xD3"},
#line 1547 "trad2simp.in"
    {"\212\236", "\x8B\xED"},
#line 455 "trad2simp.in"
    {"^\354", "\x5E\x90"},
#line 492 "trad2simp.in"
    {"a4", "\x60\x06"},
#line 1198 "trad2simp.in"
    {"}\236", "\x7F\x0D"},
#line 1961 "trad2simp.in"
    {"\222\263", "\x95\x10"},
#line 573 "trad2simp.in"
    {"d\237", "\x63\x22"},
#line 1641 "trad2simp.in"
    {"\214\263", "\x8D\x30"},
#line 1918 "trad2simp.in"
    {"\222\314", "\x94\xE4"},
#line 1623 "trad2simp.in"
    {"\214\236", "\x8D\x1E"},
#line 2351 "trad2simp.in"
    {"\233\263", "\x9C\x93"},
#line 364 "trad2simp.in"
    {"[0", "\x5A\x74"},
#line 2353 "trad2simp.in"
    {"\233\236", "\x9C\x95"},
#line 2267 "trad2simp.in"
    {"\231\263", "\x9A\x70"},
#line 2455 "trad2simp.in"
    {"\235\331", "\x9E\x37"},
#line 593 "trad2simp.in"
    {"d\263", "\x63\xFF"},
#line 1967 "trad2simp.in"
    {"\223\006", "\x95\x16"},
#line 1536 "trad2simp.in"
    {"\212b", "\x8B\xE2"},
#line 2167 "trad2simp.in"
    {"\2300", "\x98\x8A"},
#line 225 "trad2simp.in"
    {"Vx", "\x54\x28"},
#line 1147 "trad2simp.in"
    {"}b", "\x7E\xDA"},
#line 83 "trad2simp.in"
    {"P\311", "\x4F\x65"},
#line 1724 "trad2simp.in"
    {"\216\322", "\x8F\x69"},
#line 1944 "trad2simp.in"
    {"\223\327", "\x94\xFF"},
#line 1707 "trad2simp.in"
    {"\216\232", "\x8D\xF9"},
#line 165 "trad2simp.in"
    {"R\370", "\x52\x9D"},
#line 42 "trad2simp.in"
    {"\177\322", "\x4E\x60"},
#line 2331 "trad2simp.in"
    {"\233b", "\x9C\x7E"},
#line 2151 "trad2simp.in"
    {"\230\006", "\x98\x7A"},
#line 2262 "trad2simp.in"
    {"\231b", "\x99\x95"},
#line 296 "trad2simp.in"
    {"X4", "\x57\x3A"},
#line 2030 "trad2simp.in"
    {"\223\320", "\x95\x60"},
#line 496 "trad2simp.in"
    {"a\314", "\x60\x3F"},
#line 72 "trad2simp.in"
    {"PI", "\x4F\x1F"},
#line 466 "trad2simp.in"
    {"h\304", "\x5F\x03"},
#line 358 "trad2simp.in"
    {"[\014", "\x5A\x07"},
#line 373 "trad2simp.in"
    {"[x", "\x5B\x66"},
#line 2471 "trad2simp.in"
    {"\235\363", "\x9E\x47"},
#line 148 "trad2simp.in"
    {"R\203", "\x52\x12"},
#line 1745 "trad2simp.in"
    {"\217\012", "\x8F\x7E"},
#line 1737 "trad2simp.in"
    {"\216\374", "\x8F\x76"},
#line 2159 "trad2simp.in"
    {"\230\014", "\x98\x82"},
#line 133 "trad2simp.in"
    {"m\322", "\x51\xC4"},
#line 123 "trad2simp.in"
    {"[\353", "\x51\x99"},
#line 666 "trad2simp.in"
    {"j\031", "\x68\x07"},
#line 703 "trad2simp.in"
    {"j\370", "\x69\x89"},
#line 2178 "trad2simp.in"
    {"\2304", "\x98\x95"},
#line 1569 "trad2simp.in"
    {"\212\277", "\x8C\x03"},
#line 275 "trad2simp.in"
    {"V\263", "\x55\xBE"},
#line 758 "trad2simp.in"
    {"m\332", "\x6C\xEA"},
#line 1174 "trad2simp.in"
    {"}\277", "\x7E\xF5"},
#line 2220 "trad2simp.in"
    {"\230\353", "\x99\x6B"},
#line 70 "trad2simp.in"
    {"P\264", "\x4F\x1B"},
#line 191 "trad2simp.in"
    {"]\371", "\x53\x7A"},
#line 2020 "trad2simp.in"
    {"\223\224", "\x95\x55"},
#line 1649 "trad2simp.in"
    {"\214\277", "\x8D\x38"},
#line 305 "trad2simp.in"
    {"X\263", "\x57\x5F"},
#line 535 "trad2simp.in"
    {"b0", "\x62\x18"},
#line 2499 "trad2simp.in"
    {"\235\264", "\x9E\x64"},
#line 1505 "trad2simp.in"
    {"\2126", "\x8B\xC3"},
#line 171 "trad2simp.in"
    {"R\301", "\x52\xB2"},
#line 2442 "trad2simp.in"
    {"\235#", "\x9E\x2A"},
#line 2014 "trad2simp.in"
    {"\223\263", "\x95\x4D"},
#line 580 "trad2simp.in"
    {"d\277", "\x63\x61"},
#line 825 "trad2simp.in"
    {"n\377", "\x6E\xE1"},
#line 2008 "trad2simp.in"
    {"\223\314", "\x95\x46"},
#line 786 "trad2simp.in"
    {"o\334", "\x6D\x55"},
#line 425 "trad2simp.in"
    {"]\256", "\x5D\x04"},
#line 1664 "trad2simp.in"
    {"\214\325", "\x8D\x47"},
#line 691 "trad2simp.in"
    {"h\366", "\x68\xBE"},
#line 1499 "trad2simp.in"
    {"\212\367", "\x8B\xBD"},
#line 2379 "trad2simp.in"
    {"\233\325", "\x9C\xAF"},
#line 2250 "trad2simp.in"
    {"\2316", "\x99\x89"},
#line 776 "trad2simp.in"
    {"o\301", "\x6D\x4A"},
#line 2281 "trad2simp.in"
    {"\231\325", "\x9A\x7E"},
#line 552 "trad2simp.in"
    {"d6", "\x62\xA2"},
#line 304 "trad2simp.in"
    {"Xb", "\x57\x5E"},
#line 1543 "trad2simp.in"
    {"\212a", "\x8B\xE9"},
#line 173 "trad2simp.in"
    {"R\342", "\x52\xBF"},
#line 386 "trad2simp.in"
    {"\\\013", "\x5B\xFB"},
#line 1149 "trad2simp.in"
    {"}a", "\x7E\xDC"},
#line 2396 "trad2simp.in"
    {"\233\367", "\x9C\xC0"},
#line 1446 "trad2simp.in"
    {"~H", "\x89\x41"},
#line 1219 "trad2simp.in"
    {"~\012", "\x7F\x22"},
#line 752 "trad2simp.in"
    {"n\304", "\x6C\xA7"},
#line 608 "trad2simp.in"
    {"d\367", "\x64\xB7"},
#line 1655 "trad2simp.in"
    {"\214\310", "\x8D\x3E"},
#line 150 "trad2simp.in"
    {"RG", "\x52\x19"},
#line 261 "trad2simp.in"
    {"Ub", "\x55\x21"},
#line 1203 "trad2simp.in"
    {"~\013", "\x7F\x12"},
#line 199 "trad2simp.in"
    {"^\301", "\x53\x95"},
#line 1920 "trad2simp.in"
    {"\222\233", "\x94\xE6"},
#line 812 "trad2simp.in"
    {"n\253", "\x6E\x29"},
#line 2188 "trad2simp.in"
    {"\230b", "\x98\x9F"},
#line 1566 "trad2simp.in"
    {"\212\333", "\x8C\x00"},
#line 678 "trad2simp.in"
    {"h\354", "\x68\x4A"},
#line 1964 "trad2simp.in"
    {"\222\337", "\x95\x13"},
#line 1727 "trad2simp.in"
    {"\217I", "\x8F\x6C"},
#line 82 "trad2simp.in"
    {"P\255", "\x4F\x63"},
#line 486 "trad2simp.in"
    {"a\367", "\x60\x00"},
#line 1562 "trad2simp.in"
    {"\212\321", "\x8B\xFC"},
#line 791 "trad2simp.in"
    {"m\366", "\x6D\x9E"},
#line 2274 "trad2simp.in"
    {"\231\337", "\x9A\x77"},
#line 2387 "trad2simp.in"
    {"\233\333", "\x9C\xB7"},
#line 1719 "trad2simp.in"
    {"\216\246", "\x8E\x9C"},
#line 778 "trad2simp.in"
    {"o\256", "\x6D\x4D"},
#line 2273 "trad2simp.in"
    {"\231\333", "\x9A\x76"},
#line 2492 "trad2simp.in"
    {"\235\312", "\x9E\x5D"},
#line 461 "trad2simp.in"
    {"^\342", "\x5E\x9F"},
#line 1665 "trad2simp.in"
    {"\214\321", "\x8D\x48"},
#line 1250 "trad2simp.in"
    {"\177\354", "\x7F\xDA"},
#line 1314 "trad2simp.in"
    {"\205\366", "\x82\xC8"},
#line 2015 "trad2simp.in"
    {"\223\277", "\x95\x4E"},
#line 1193 "trad2simp.in"
    {"}\362", "\x7F\x08"},
#line 2280 "trad2simp.in"
    {"\231\321", "\x9A\x7D"},
#line 690 "trad2simp.in"
    {"j\256", "\x68\xBC"},
#line 1726 "trad2simp.in"
    {"\216\324", "\x8F\x6B"},
#line 291 "trad2simp.in"
    {"W\013", "\x56\xFD"},
#line 495 "trad2simp.in"
    {"a\337", "\x60\x3C"},
#line 1230 "trad2simp.in"
    {"~Z", "\x7F\x2D"},
#line 1373 "trad2simp.in"
    {"\205#", "\x84\x8B"},
#line 1682 "trad2simp.in"
    {"\214\373", "\x8D\x59"},
#line 2490 "trad2simp.in"
    {"\235\245", "\x9E\x5B"},
#line 1919 "trad2simp.in"
    {"\222\251", "\x94\xE5"},
#line 587 "trad2simp.in"
    {"d\362", "\x63\xB7"},
#line 293 "trad2simp.in"
    {"W\023", "\x57\x06"},
#line 1634 "trad2simp.in"
    {"\214\251", "\x8D\x29"},
#line 2507 "trad2simp.in"
    {"\235\370", "\x9E\x6C"},
#line 230 "trad2simp.in"
    {"V\310", "\x54\x53"},
#line 611 "trad2simp.in"
    {"d\373", "\x64\xDE"},
#line 1249 "trad2simp.in"
    {"\177\375", "\x7F\xD9"},
#line 166 "trad2simp.in"
    {"\217\246", "\x52\x9E"},
#line 2034 "trad2simp.in"
    {"\223\367", "\x95\x64"},
#line 818 "trad2simp.in"
    {"o5", "\x6E\x86"},
#line 1329 "trad2simp.in"
    {"\205\246", "\x83\x50"},
#line 2486 "trad2simp.in"
    {"\235\241", "\x9E\x56"},
#line 1721 "trad2simp.in"
    {"\216\312", "\x8F\x66"},
#line 411 "trad2simp.in"
    {"\\\366", "\x5C\x9B"},
#line 428 "trad2simp.in"
    {"]\224", "\x5D\x5A"},
#line 514 "trad2simp.in"
    {"a\362", "\x60\xE9"},
#line 1943 "trad2simp.in"
    {"\223\310", "\x94\xFE"},
#line 755 "trad2simp.in"
    {"n\354", "\x6C\xAA"},
#line 1222 "trad2simp.in"
    {"~9", "\x7F\x25"},
#line 928 "trad2simp.in"
    {"t\277", "\x74\x87"},
#line 1772 "trad2simp.in"
    {"\217M", "\x8F\x99"},
#line 1175 "trad2simp.in"
    {"}\254", "\x7E\xF6"},
#line 307 "trad2simp.in"
    {"X\337", "\x57\x84"},
#line 308 "trad2simp.in"
    {"X\337", "\x57\x85"},
#line 2010 "trad2simp.in"
    {"\223\233", "\x95\x48"},
#line 1901 "trad2simp.in"
    {"\222\254", "\x94\xD0"},
#line 200 "trad2simp.in"
    {"^\302", "\x53\xA2"},
#line 281 "trad2simp.in"
    {"V\321", "\x56\x31"},
#line 1628 "trad2simp.in"
    {"\214\254", "\x8D\x23"},
#line 1931 "trad2simp.in"
    {"\223\337", "\x94\xF2"},
#line 1717 "trad2simp.in"
    {"\216\245", "\x8E\x7F"},
#line 490 "trad2simp.in"
    {"aj", "\x60\x04"},
#line 863 "trad2simp.in"
    {"q\322", "\x70\xE7"},
#line 1769 "trad2simp.in"
    {"\217D", "\x8F\x96"},
#line 2263 "trad2simp.in"
    {"\231\254", "\x9A\x6C"},
#line 1735 "trad2simp.in"
    {"\216\370", "\x8F\x74"},
#line 1246 "trad2simp.in"
    {"\177\245", "\x7F\x9F"},
#line 2500 "trad2simp.in"
    {"\235\326", "\x9E\x65"},
#line 206 "trad2simp.in"
    {"~#", "\x53\xBF"},
#line 828 "trad2simp.in"
    {"o\353", "\x6E\xE5"},
#line 833 "trad2simp.in"
    {"o\353", "\x6F\x24"},
#line 1774 "trad2simp.in"
    {"\217\255", "\x8F\x9E"},
#line 2497 "trad2simp.in"
    {"\235\301", "\x9E\x62"},
#line 2027 "trad2simp.in"
    {"\223\321", "\x95\x5D"},
#line 504 "trad2simp.in"
    {"`\361", "\x60\x7C"},
#line 1714 "trad2simp.in"
    {"\216\241", "\x8E\x51"},
#line 1541 "trad2simp.in"
    {"\212k", "\x8B\xE7"},
#line 2210 "trad2simp.in"
    {"\230\333", "\x98\xDE"},
#line 1471 "trad2simp.in"
    {"\212\001", "\x8B\xA0"},
#line 711 "trad2simp.in"
    {"j\353", "\x6A\x65"},
#line 1139 "trad2simp.in"
    {"}h", "\x7E\xD2"},
#line 1703 "trad2simp.in"
    {"\216\020", "\x8D\xF5"},
#line 1560 "trad2simp.in"
    {"\212\376", "\x8B\xFA"},
#line 537 "trad2simp.in"
    {"b6", "\x62\x37"},
#line 1866 "trad2simp.in"
    {"\222\001", "\x94\xAB"},
#line 867 "trad2simp.in"
    {"q\374", "\x70\xEC"},
#line 394 "trad2simp.in"
    {"\\M", "\x5C\x38"},
#line 866 "trad2simp.in"
    {"q\331", "\x70\xEB"},
#line 65 "trad2simp.in"
    {"P\371", "\x4E\xF7"},
#line 657 "trad2simp.in"
    {"h\326", "\x67\xA8"},
#line 2333 "trad2simp.in"
    {"\233h", "\x9C\x80"},
#line 943 "trad2simp.in"
    {"\233\001", "\x75\xAC"},
#line 1685 "trad2simp.in"
    {"\214\376", "\x8D\x5C"},
#line 1705 "trad2simp.in"
    {"\216z", "\x8D\xF7"},
#line 2510 "trad2simp.in"
    {"\235\371", "\x9E\x70"},
#line 704 "trad2simp.in"
    {"j\237", "\x69\xDA"},
#line 418 "trad2simp.in"
    {"\\\375", "\x5C\xE1"},
#line 2223 "trad2simp.in"
    {"\230\362", "\x99\x6E"},
#line 682 "trad2simp.in"
    {"j\224", "\x68\x63"},
#line 546 "trad2simp.in"
    {"d\376", "\x62\x70"},
#line 851 "trad2simp.in"
    {"q\311", "\x70\x96"},
#line 545 "trad2simp.in"
    {"c\332", "\x62\x6C"},
#line 371 "trad2simp.in"
    {"[$", "\x5B\x37"},
#line 540 "trad2simp.in"
    {"ba", "\x62\x66"},
#line 706 "trad2simp.in"
    {"j\263", "\x69\xDF"},
#line 1636 "trad2simp.in"
    {"\214\247", "\x8D\x2B"},
#line 796 "trad2simp.in"
    {"n\031", "\x6D\xA3"},
#line 783 "trad2simp.in"
    {"n\370", "\x6D\x52"},
#line 1528 "trad2simp.in"
    {"\212\240", "\x8B\xDA"},
#line 488 "trad2simp.in"
    {"ak", "\x60\x02"},
#line 2173 "trad2simp.in"
    {"\230$", "\x98\x90"},
#line 1184 "trad2simp.in"
    {"}\240", "\x7E\xFF"},
#line 1902 "trad2simp.in"
    {"\222\240", "\x94\xD1"},
#line 855 "trad2simp.in"
    {"qI", "\x70\xBC"},
#line 525 "trad2simp.in"
    {"a\376", "\x61\x51"},
#line 1624 "trad2simp.in"
    {"\214\240", "\x8D\x1F"},
#line 1752 "trad2simp.in"
    {"\217\024", "\x8F\x85"},
#line 2561 "trad2simp.in"
    {"\233(", "\x95\xF9"},
#line 2017 "trad2simp.in"
    {"\223\254", "\x95\x50"},
#line 2247 "trad2simp.in"
    {"\231(", "\x99\x86"},
#line 698 "trad2simp.in"
    {"jb", "\x69\x2D"},
#line 1736 "trad2simp.in"
    {"\216\371", "\x8F\x75"},
#line 41 "trad2simp.in"
    {"U\254", "\x4E\x54"},
#line 2457 "trad2simp.in"
    {"\2350", "\x9E\x39"},
#line 1248 "trad2simp.in"
    {"\177\371", "\x7F\xD8"},
#line 102 "trad2simp.in"
    {"P\302", "\x50\x7B"},
#line 910 "trad2simp.in"
    {"tj", "\x73\x9B"},
#line 2417 "trad2simp.in"
    {"\234H", "\x9C\xD5"},
#line 96 "trad2simp.in"
    {"P\006", "\x4F\xE9"},
#line 2493 "trad2simp.in"
    {"\235\302", "\x9E\x5E"},
#line 121 "trad2simp.in"
    {"\\\241", "\x51\x88"},
#line 1564 "trad2simp.in"
    {"\212\262", "\x8B\xFE"},
#line 507 "trad2simp.in"
    {"a(", "\x60\xAB"},
#line 2441 "trad2simp.in"
    {"\235\006", "\x9E\x29"},
#line 1240 "trad2simp.in"
    {"}\262", "\x7F\x51"},
#line 1533 "trad2simp.in"
    {"\212l", "\x8B\xDF"},
#line 169 "trad2simp.in"
    {"R\325", "\x52\xA8"},
#line 1972 "trad2simp.in"
    {"\223\001", "\x95\x1E"},
#line 1657 "trad2simp.in"
    {"\214\262", "\x8D\x40"},
#line 2437 "trad2simp.in"
    {"\235\327", "\x9E\x25"},
#line 372 "trad2simp.in"
    {"[k", "\x5B\x59"},
#line 1883 "trad2simp.in"
    {"\222l", "\x94\xBC"},
#line 2399 "trad2simp.in"
    {"\234\023", "\x9C\xC3"},
#line 1537 "trad2simp.in"
    {"\212c", "\x8B\xE3"},
#line 902 "trad2simp.in"
    {"\214l", "\x73\x2A"},
#line 137 "trad2simp.in"
    {"nJ", "\x51\xD1"},
#line 1130 "trad2simp.in"
    {"~\020", "\x7E\xC9"},
#line 539 "trad2simp.in"
    {"d\262", "\x62\x51"},
#line 2355 "trad2simp.in"
    {"\234\002", "\x9C\x97"},
#line 2193 "trad2simp.in"
    {"\230k", "\x98\xA4"},
#line 1384 "trad2simp.in"
    {"\205\371", "\x85\x3C"},
#line 815 "trad2simp.in"
    {"o\325", "\x6E\x7F"},
#line 2146 "trad2simp.in"
    {"\230\001", "\x98\x75"},
#line 2459 "trad2simp.in"
    {"\2354", "\x9E\x3B"},
#line 2225 "trad2simp.in"
    {"\230\376", "\x99\x70"},
#line 1914 "trad2simp.in"
    {"\223\247", "\x94\xE0"},
#line 2484 "trad2simp.in"
    {"\235\353", "\x9E\x54"},
#line 1455 "trad2simp.in"
    {"\211\275", "\x89\xC8"},
#line 591 "trad2simp.in"
    {"dc", "\x63\xF8"},
#line 1776 "trad2simp.in"
    {"\217\256", "\x8F\xAB"},
#line 654 "trad2simp.in"
    {"h\327", "\x67\xA3"},
#line 380 "trad2simp.in"
    {"a\262", "\x5B\xAA"},
#line 1164 "trad2simp.in"
    {"}\276", "\x7E\xEB"},
#line 1970 "trad2simp.in"
    {"\223(", "\x95\x1A"},
#line 442 "trad2simp.in"
    {"^6", "\x5E\x26"},
#line 1556 "trad2simp.in"
    {"\212\222", "\x8B\xF6"},
#line 775 "trad2simp.in"
    {"n\256", "\x6D\x49"},
#line 1467 "trad2simp.in"
    {"\211\366", "\x89\xEF"},
#line 635 "trad2simp.in"
    {"f\211", "\x66\x56"},
#line 519 "trad2simp.in"
    {"ac", "\x60\xEF"},
#line 73 "trad2simp.in"
    {"P\263", "\x4F\x20"},
#line 568 "trad2simp.in"
    {"d\276", "\x63\x1D"},
#line 1209 "trad2simp.in"
    {"}\343", "\x7F\x18"},
#line 2343 "trad2simp.in"
    {"\233\222", "\x9C\x8B"},
#line 1906 "trad2simp.in"
    {"\222\343", "\x94\xD8"},
#line 779 "trad2simp.in"
    {"o\337", "\x6D\x4E"},
#line 923 "trad2simp.in"
    {"t\211", "\x74\x0F"},
#line 185 "trad2simp.in"
    {"\214\343", "\x53\x56"},
#line 57 "trad2simp.in"
    {"V\262", "\x4E\xB8"},
#line 1709 "trad2simp.in"
    {"\2164", "\x8E\x0A"},
#line 2418 "trad2simp.in"
    {"\234I", "\x9C\xD6"},
#line 140 "trad2simp.in"
    {"\234\363", "\x51\xE4"},
#line 202 "trad2simp.in"
    {"^\310", "\x53\xA6"},
#line 1739 "trad2simp.in"
    {"\216\353", "\x8F\x78"},
#line 1155 "trad2simp.in"
    {"}y", "\x7E\xE2"},
#line 1512 "trad2simp.in"
    {"\212:", "\x8B\xCA"},
#line 672 "trad2simp.in"
    {"j\337", "\x68\x0E"},
#line 660 "trad2simp.in"
    {"h\237", "\x67\xAD"},
#line 2367 "trad2simp.in"
    {"\2349", "\x9C\xA3"},
#line 1121 "trad2simp.in"
    {"}:", "\x7E\xC0"},
#line 177 "trad2simp.in"
    {"R\373", "\x53\x00"},
#line 664 "trad2simp.in"
    {"h\224", "\x68\x00"},
#line 668 "trad2simp.in"
    {"j\333", "\x68\x09"},
#line 1871 "trad2simp.in"
    {"\222:", "\x94\xB0"},
#line 2434 "trad2simp.in"
    {"\234\366", "\x9E\x22"},
#line 945 "trad2simp.in"
    {"v\013", "\x75\xAF"},
#line 1461 "trad2simp.in"
    {"\211\246", "\x89\xCE"},
#line 459 "trad2simp.in"
    {"^\337", "\x5E\x99"},
#line 523 "trad2simp.in"
    {"a\222", "\x61\x26"},
#line 968 "trad2simp.in"
    {"v\232", "\x76\x91"},
#line 1997 "trad2simp.in"
    {"\223l", "\x95\x39"},
#line 1111 "trad2simp.in"
    {"}\270", "\x7E\xB6"},
#line 2255 "trad2simp.in"
    {"\231:", "\x99\x8E"},
#line 257 "trad2simp.in"
    {"U\262", "\x54\xDF"},
#line 953 "trad2simp.in"
    {"v\023", "\x75\xEA"},
#line 528 "trad2simp.in"
    {"a\343", "\x61\xD1"},
#line 1648 "trad2simp.in"
    {"\214\270", "\x8D\x37"},
#line 2369 "trad2simp.in"
    {"\234#", "\x9C\xA5"},
#line 951 "trad2simp.in"
    {"v\002", "\x75\xD6"},
#line 759 "trad2simp.in"
    {"o\251", "\x6C\xF6"},
#line 1591 "trad2simp.in"
    {"\212\372", "\x8C\x1A"},
#line 471 "trad2simp.in"
    {"_H", "\x5F\x39"},
#line 1095 "trad2simp.in"
    {"}\004", "\x7E\xA6"},
#line 2194 "trad2simp.in"
    {"\230l", "\x98\xA5"},
#line 1723 "trad2simp.in"
    {"\216\314", "\x8F\x68"},
#line 1868 "trad2simp.in"
    {"\222\004", "\x94\xAD"},
#line 710 "trad2simp.in"
    {"j\373", "\x6A\x31"},
#line 1058 "trad2simp.in"
    {"|9", "\x7B\x5C"},
#line 1683 "trad2simp.in"
    {"\214\372", "\x8D\x5A"},
#line 311 "trad2simp.in"
    {"X\276", "\x57\xA6"},
#line 223 "trad2simp.in"
    {"U\316", "\x54\x17"},
#line 1079 "trad2simp.in"
    {"|\366", "\x7C\x9C"},
#line 1546 "trad2simp.in"
    {"\212\243", "\x8B\xEC"},
#line 2233 "trad2simp.in"
    {"\231\004", "\x99\x78"},
#line 860 "trad2simp.in"
    {"q\355", "\x70\xDB"},
#line 1180 "trad2simp.in"
    {"}\243", "\x7E\xFB"},
#line 601 "trad2simp.in"
    {"d\372", "\x64\x46"},
#line 1936 "trad2simp.in"
    {"\222\243", "\x94\xF7"},
#line 870 "trad2simp.in"
    {"q\334", "\x71\x16"},
#line 1126 "trad2simp.in"
    {"}3", "\x7E\xC5"},
#line 1223 "trad2simp.in"
    {"~5", "\x7F\x26"},
#line 2489 "trad2simp.in"
    {"\235\277", "\x9E\x5A"},
#line 1877 "trad2simp.in"
    {"\2223", "\x94\xB6"},
#line 1357 "trad2simp.in"
    {"\205\237", "\x83\xB6"},
#line 1070 "trad2simp.in"
    {"|#", "\x7B\xD1"},
#line 864 "trad2simp.in"
    {"q\301", "\x70\xE8"},
#line 1381 "trad2simp.in"
    {"\205\224", "\x85\x37"},
#line 588 "trad2simp.in"
    {"d\243", "\x63\xB8"},
#line 2216 "trad2simp.in"
    {"\2313", "\x99\x67"},
#line 417 "trad2simp.in"
    {"]\247", "\x5C\xC4"},
#line 924 "trad2simp.in"
    {"tc", "\x74\x10"},
#line 483 "trad2simp.in"
    {"a\372", "\x5F\xCF"},
#line 544 "trad2simp.in"
    {"c\203", "\x62\x6B"},
#line 325 "trad2simp.in"
    {"Xy", "\x58\x11"},
#line 956 "trad2simp.in"
    {"vI", "\x76\x05"},
#line 1460 "trad2simp.in"
    {"\211\245", "\x89\xCD"},
#line 795 "trad2simp.in"
    {"n\263", "\x6D\xA2"},
#line 420 "trad2simp.in"
    {"]\240", "\x5C\xE4"},
#line 2213 "trad2simp.in"
    {"\230\343", "\x99\x64"},
#line 1466 "trad2simp.in"
    {"\211\370", "\x89\xE6"},
#line 797 "trad2simp.in"
    {"n\314", "\x6D\xA4"},
#line 484 "trad2simp.in"
    {"a\202", "\x5F\xE7"},
#line 1740 "trad2simp.in"
    {"\217b", "\x8F\x79"},
#line 149 "trad2simp.in"
    {"R\211", "\x52\x18"},
#line 2473 "trad2simp.in"
    {"\235a", "\x9E\x49"},
#line 1372 "trad2simp.in"
    {"\205b", "\x84\x89"},
#line 1458 "trad2simp.in"
    {"\211\241", "\x89\xCB"},
#line 809 "trad2simp.in"
    {"o\001", "\x6E\x14"},
#line 2212 "trad2simp.in"
    {"\231\\", "\x99\x0D"},
#line 827 "trad2simp.in"
    {"o\376", "\x6E\xE4"},
#line 527 "trad2simp.in"
    {"`5", "\x61\xB7"},
#line 590 "trad2simp.in"
    {"d\\", "\x63\xBC"},
#line 708 "trad2simp.in"
    {"jk", "\x6A\x2A"},
#line 332 "trad2simp.in"
    {"X\372", "\x58\xF6"},
#line 2550 "trad2simp.in"
    {"\212\214", "\x5F\xD7"},
#line 688 "trad2simp.in"
    {"j\001", "\x68\x69"},
#line 1939 "trad2simp.in"
    {"\222\352", "\x94\xFA"},
#line 1157 "trad2simp.in"
    {"}\214", "\x7E\xE4"},
#line 475 "trad2simp.in"
    {"\223\004", "\x5F\x55"},
#line 1633 "trad2simp.in"
    {"\214\352", "\x8D\x28"},
#line 2203 "trad2simp.in"
    {"\230\270", "\x98\xD4"},
#line 444 "trad2simp.in"
    {"^k", "\x5E\x2E"},
#line 2378 "trad2simp.in"
    {"\233\352", "\x9C\xAE"},
#line 89 "trad2simp.in"
    {"P\321", "\x4F\xA8"},
#line 873 "trad2simp.in"
    {"|\312", "\x71\x73"},
#line 663 "trad2simp.in"
    {"j\211", "\x67\xFD"},
#line 233 "trad2simp.in"
    {"U\004", "\x54\x57"},
#line 1101 "trad2simp.in"
    {"}\357", "\x7E\xAC"},
#line 279 "trad2simp.in"
    {"VS", "\x56\x18"},
#line 108 "trad2simp.in"
    {"Q:", "\x50\xA9"},
#line 1951 "trad2simp.in"
    {"\222\357", "\x95\x06"},
#line 1379 "trad2simp.in"
    {"\223\243", "\x84\xE5"},
#line 918 "trad2simp.in"
    {"t:", "\x73\xD0"},
#line 401 "trad2simp.in"
    {"\\b", "\x5C\x61"},
#line 808 "trad2simp.in"
    {"o\240", "\x6E\x11"},
#line 2005 "trad2simp.in"
    {"\223\202", "\x95\x41"},
#line 1988 "trad2simp.in"
    {"\2233", "\x95\x30"},
#line 84 "trad2simp.in"
    {"O\340", "\x4F\xA0"},
#line 670 "trad2simp.in"
    {"h\337", "\x68\x0B"},
#line 2506 "trad2simp.in"
    {"\235\362", "\x9E\x6B"},
#line 744 "trad2simp.in"
    {"m6", "\x6C\x79"},
#line 603 "trad2simp.in"
    {"d\357", "\x64\x48"},
#line 1122 "trad2simp.in"
    {"}O", "\x7E\xC1"},
#line 2326 "trad2simp.in"
    {"\233\"", "\x9B\x13"},
#line 1196 "trad2simp.in"
    {"~b", "\x7F\x0B"},
#line 2365 "trad2simp.in"
    {"\234z", "\x9C\xA1"},
#line 1088 "trad2simp.in"
    {"|\370", "\x7E\x9F"},
#line 2491 "trad2simp.in"
    {"\235\251", "\x9E\x5C"},
#line 1730 "trad2simp.in"
    {"\216\337", "\x8F\x6F"},
#line 58 "trad2simp.in"
    {"Q\004", "\x4E\xBF"},
#line 1728 "trad2simp.in"
    {"\216\333", "\x8F\x6D"},
#line 2476 "trad2simp.in"
    {"\235j", "\x9E\x4C"},
#line 1472 "trad2simp.in"
    {"\212\010", "\x8B\xA1"},
#line 2184 "trad2simp.in"
    {"\230S", "\x98\x9B"},
#line 1097 "trad2simp.in"
    {"}\010", "\x7E\xA8"},
#line 2174 "trad2simp.in"
    {"\230;", "\x98\x91"},
#line 675 "trad2simp.in"
    {"h\362", "\x68\x16"},
#line 1850 "trad2simp.in"
    {"\222\010", "\x94\x9A"},
#line 1725 "trad2simp.in"
    {"\216\321", "\x8F\x6A"},
#line 1443 "trad2simp.in"
    {"\211G", "\x88\xE5"},
#line 1767 "trad2simp.in"
    {"\217a", "\x8F\x94"},
#line 288 "trad2simp.in"
    {"V\352", "\x56\xF1"},
#line 907 "trad2simp.in"
    {"t\243", "\x73\x91"},
#line 1507 "trad2simp.in"
    {"\212[", "\x8B\xC5"},
#line 1132 "trad2simp.in"
    {"}<", "\x7E\xCB"},
#line 255 "trad2simp.in"
    {"V\214", "\x54\xDC"},
#line 1159 "trad2simp.in"
    {"}[", "\x7E\xE6"},
#line 1732 "trad2simp.in"
    {"\216\362", "\x8F\x71"},
#line 1900 "trad2simp.in"
    {"\222v", "\x94\xCF"},
#line 1892 "trad2simp.in"
    {"\222[", "\x94\xC5"},
#line 327 "trad2simp.in"
    {"X\352", "\x58\x46"},
#line 1621 "trad2simp.in"
    {"\214v", "\x8C\x6E"},
#line 2439 "trad2simp.in"
    {"\235\254", "\x9E\x27"},
#line 1733 "trad2simp.in"
    {"\216\373", "\x8F\x72"},
#line 105 "trad2simp.in"
    {"Q;", "\x50\xA5"},
#line 2330 "trad2simp.in"
    {"\233[", "\x9C\x7D"},
#line 2218 "trad2simp.in"
    {"\231<", "\x99\x69"},
#line 1431 "trad2simp.in"
    {"\211V", "\x88\x84"},
#line 549 "trad2simp.in"
    {"dv", "\x62\x9F"},
#line 38 "trad2simp.in"
    {"\177\251", "\x4E\x49"},
#line 329 "trad2simp.in"
    {"X\357", "\x58\xEE"},
#line 1087 "trad2simp.in"
    {"~6", "\x7D\x77"},
#line 445 "trad2simp.in"
    {"^l", "\x5E\x31"},
#line 2541 "trad2simp.in"
    {"\237f", "\x9F\x88"},
#line 2219 "trad2simp.in"
    {"\230\352", "\x99\x6A"},
#line 1538 "trad2simp.in"
    {"\212\315", "\x8B\xE4"},
#line 1124 "trad2simp.in"
    {"}\364", "\x7E\xC3"},
#line 427 "trad2simp.in"
    {"]\270", "\x5D\x58"},
#line 435 "trad2simp.in"
    {"^c", "\x5E\x01"},
#line 454 "trad2simp.in"
    {"av", "\x5E\x86"},
#line 1872 "trad2simp.in"
    {"\223\"", "\x94\xB1"},
#line 1679 "trad2simp.in"
    {"\214\364", "\x8D\x56"},
#line 318 "trad2simp.in"
    {"XO", "\x57\xB2"},
#line 462 "trad2simp.in"
    {"^\316", "\x5E\xBC"},
#line 2390 "trad2simp.in"
    {"\233\364", "\x9C\xBA"},
#line 2423 "trad2simp.in"
    {"\234V", "\x9C\xDC"},
#line 2222 "trad2simp.in"
    {"\230\357", "\x99\x6D"},
#line 1320 "trad2simp.in"
    {"j\276", "\x82\xD8"},
#line 1156 "trad2simp.in"
    {"~a", "\x7E\xE3"},
#line 542 "trad2simp.in"
    {"d\364", "\x62\x69"},
#line 2525 "trad2simp.in"
    {"\237\002", "\x9F\x0C"},
#line 811 "trad2simp.in"
    {"n\362", "\x6E\x17"},
#line 2481 "trad2simp.in"
    {"\235\211", "\x9E\x51"},
#line 1369 "trad2simp.in"
    {"\205\251", "\x84\x28"},
#line 1326 "trad2simp.in"
    {"qb", "\x83\x15"},
#line 2059 "trad2simp.in"
    {"UO", "\x95\xEE"},
#line 975 "trad2simp.in"
    {"v\334", "\x76\xD7"},
#line 781 "trad2simp.in"
    {"n\373", "\x6D\x50"},
#line 1439 "trad2simp.in"
    {"\211\014", "\x88\xC8"},
#line 1310 "trad2simp.in"
    {"\205j", "\x82\x9C"},
#line 2185 "trad2simp.in"
    {"\230O", "\x98\x9C"},
#line 1982 "trad2simp.in"
    {"\223\010", "\x95\x29"},
#line 2420 "trad2simp.in"
    {"\2345", "\x9C\xD8"},
#line 429 "trad2simp.in"
    {"]3", "\x5D\x5B"},
#line 256 "trad2simp.in"
    {"Ve", "\x54\xDD"},
#line 530 "trad2simp.in"
    {"a\315", "\x61\xD4"},
#line 357 "trad2simp.in"
    {"[\010", "\x5A\x06"},
#line 1858 "trad2simp.in"
    {"\222\021", "\x94\xA3"},
#line 452 "trad2simp.in"
    {"^\343", "\x5E\x7F"},
#line 2445 "trad2simp.in"
    {"\235(", "\x9E\x2D"},
#line 541 "trad2simp.in"
    {"W\367", "\x62\x67"},
#line 1994 "trad2simp.in"
    {"\223v", "\x95\x36"},
#line 1999 "trad2simp.in"
    {"\223[", "\x95\x3B"},
#line 2152 "trad2simp.in"
    {"\230\010", "\x98\x7B"},
#line 2238 "trad2simp.in"
    {"\231\021", "\x99\x7D"},
#line 685 "trad2simp.in"
    {"j:", "\x68\x66"},
#line 1743 "trad2simp.in"
    {"\216\376", "\x8F\x7C"},
#line 1990 "trad2simp.in"
    {"\223e", "\x95\x32"},
#line 1513 "trad2simp.in"
    {"\212F", "\x8B\xCB"},
#line 450 "trad2simp.in"
    {"^y", "\x5E\x72"},
#line 2340 "trad2simp.in"
    {"\234x", "\x9C\x88"},
#line 1131 "trad2simp.in"
    {"}F", "\x7E\xCA"},
#line 1698 "trad2simp.in"
    {"\216\211", "\x8D\xB8"},
#line 1487 "trad2simp.in"
    {"\212\022", "\x8B\xB1"},
#line 662 "trad2simp.in"
    {"j\270", "\x67\xE0"},
#line 2189 "trad2simp.in"
    {"\230[", "\x98\xA0"},
#line 817 "trad2simp.in"
    {"o\372", "\x6E\x85"},
#line 1138 "trad2simp.in"
    {"}\201", "\x7E\xD1"},
#line 954 "trad2simp.in"
    {"vG", "\x75\xEB"},
#line 1841 "trad2simp.in"
    {"\222\022", "\x94\x91"},
#line 2191 "trad2simp.in"
    {"\230e", "\x98\xA2"},
#line 1651 "trad2simp.in"
    {"\214\300", "\x8D\x3A"},
#line 90 "trad2simp.in"
    {"Q\010", "\x4F\xA9"},
#line 1475 "trad2simp.in"
    {"\212\215", "\x8B\xA4"},
#line 2371 "trad2simp.in"
    {"\233\300", "\x9C\xA7"},
#line 2337 "trad2simp.in"
    {"\233\201", "\x9C\x85"},
#line 1145 "trad2simp.in"
    {"~j", "\x7E\xD8"},
#line 2242 "trad2simp.in"
    {"\231\022", "\x99\x81"},
#line 1908 "trad2simp.in"
    {"\222\215", "\x94\xDA"},
#line 2023 "trad2simp.in"
    {"\223\315", "\x95\x59"},
#line 2494 "trad2simp.in"
    {"\235\262", "\x9E\x5F"},
#line 1506 "trad2simp.in"
    {"\212U", "\x8B\xC4"},
#line 95 "trad2simp.in"
    {"Q<", "\x4F\xE8"},
#line 2347 "trad2simp.in"
    {"\233\215", "\x9C\x8F"},
#line 1150 "trad2simp.in"
    {"}U", "\x7E\xDD"},
#line 2479 "trad2simp.in"
    {"\235l", "\x9E\x4F"},
#line 810 "trad2simp.in"
    {"p\013", "\x6E\x16"},
#line 1878 "trad2simp.in"
    {"\222U", "\x94\xB7"},
#line 709 "trad2simp.in"
    {"j\243", "\x6A\x2F"},
#line 1579 "trad2simp.in"
    {"\213\012", "\x8C\x0E"},
#line 2229 "trad2simp.in"
    {"\230\364", "\x99\x74"},
#line 1567 "trad2simp.in"
    {"\212\260", "\x8C\x01"},
#line 1183 "trad2simp.in"
    {"}\260", "\x7E\xFE"},
#line 821 "trad2simp.in"
    {"n\376", "\x6E\xDA"},
#line 1014 "trad2simp.in"
    {"n\376", "\x78\xD9"},
#line 845 "trad2simp.in"
    {"q\310", "\x70\x6F"},
#line 644 "trad2simp.in"
    {"k\012", "\x67\x43"},
#line 505 "trad2simp.in"
    {"`\362", "\x60\x7D"},
#line 1644 "trad2simp.in"
    {"\214\260", "\x8D\x33"},
#line 1687 "trad2simp.in"
    {"\213\232", "\x8D\x5E"},
#line 439 "trad2simp.in"
    {"^3", "\x5E\x10"},
#line 566 "trad2simp.in"
    {"e#", "\x63\x1B"},
#line 503 "trad2simp.in"
    {"`\373", "\x60\x7B"},
#line 100 "trad2simp.in"
    {"P\276", "\x50\x3E"},
#line 421 "trad2simp.in"
    {"]\"", "\x5C\xE5"},
#line 896 "trad2simp.in"
    {"sD", "\x72\xF1"},
#line 1366 "trad2simp.in"
    {"q\337", "\x84\x25"},
#line 1584 "trad2simp.in"
    {"\213\002", "\x8C\x13"},
#line 131 "trad2simp.in"
    {"Q\315", "\x51\xBB"},
#line 734 "trad2simp.in"
    {"k\377", "\x6B\xF5"},
#line 402 "trad2simp.in"
    {"\\h", "\x5C\x66"},
#line 1481 "trad2simp.in"
    {"\212\025", "\x8B\xAA"},
#line 158 "trad2simp.in"
    {"R\214", "\x52\x3F"},
#line 268 "trad2simp.in"
    {"V\300", "\x55\x6D"},
#line 1105 "trad2simp.in"
    {"}\025", "\x7E\xB0"},
#line 1869 "trad2simp.in"
    {"\222\025", "\x94\xAE"},
#line 2154 "trad2simp.in"
    {"\230\021", "\x98\x7D"},
#line 1459 "trad2simp.in"
    {"\211\277", "\x89\xCC"},
#line 93 "trad2simp.in"
    {"O\301", "\x4F\xE3"},
#line 1501 "trad2simp.in"
    {"\212*", "\x8B\xBF"},
#line 1715 "trad2simp.in"
    {"\216c", "\x8E\x52"},
#line 1844 "trad2simp.in"
    {"\223F", "\x94\x94"},
#line 2249 "trad2simp.in"
    {"\231K", "\x99\x88"},
#line 1207 "trad2simp.in"
    {"}\350", "\x7F\x16"},
#line 2243 "trad2simp.in"
    {"\231\025", "\x99\x82"},
#line 467 "trad2simp.in"
    {"_5", "\x5F\x20"},
#line 1952 "trad2simp.in"
    {"\222\350", "\x95\x07"},
#line 1966 "trad2simp.in"
    {"\223\022", "\x95\x15"},
#line 1610 "trad2simp.in"
    {"\213Z", "\x8C\x2D"},
#line 728 "trad2simp.in"
    {"k\306", "\x6B\xB4"},
#line 564 "trad2simp.in"
    {"c\233", "\x63\x02"},
#line 2388 "trad2simp.in"
    {"\233\350", "\x9C\xB8"},
#line 655 "trad2simp.in"
    {"j\352", "\x67\xA5"},
#line 1099 "trad2simp.in"
    {"}\000", "\x7E\xAA"},
#line 895 "trad2simp.in"
    {"s\031", "\x72\xF0"},
#line 2180 "trad2simp.in"
    {"\230F", "\x98\x97"},
#line 1870 "trad2simp.in"
    {"\222\000", "\x94\xAF"},
#line 726 "trad2simp.in"
    {"k\253", "\x6B\x9A"},
#line 125 "trad2simp.in"
    {"\217\262", "\x51\x9C"},
#line 581 "trad2simp.in"
    {"c\333", "\x63\x62"},
#line 2206 "trad2simp.in"
    {"\230\300", "\x98\xD7"},
#line 2158 "trad2simp.in"
    {"\230\022", "\x98\x81"},
#line 487 "trad2simp.in"
    {"aK", "\x60\x01"},
#line 741 "trad2simp.in"
    {"o\"", "\x6C\x49"},
#line 1595 "trad2simp.in"
    {"\212\335", "\x8C\x1E"},
#line 1474 "trad2simp.in"
    {"\212\003", "\x8B\xA3"},
#line 1503 "trad2simp.in"
    {"\213I", "\x8B\xC1"},
#line 1194 "trad2simp.in"
    {"}\335", "\x7F\x09"},
#line 1702 "trad2simp.in"
    {"\216\222", "\x8D\xDE"},
#line 79 "trad2simp.in"
    {"OG", "\x4F\x2B"},
#line 1955 "trad2simp.in"
    {"\222\335", "\x95\x0A"},
#line 1848 "trad2simp.in"
    {"\222\003", "\x94\x98"},
#line 239 "trad2simp.in"
    {"T\342", "\x54\x94"},
#line 1605 "trad2simp.in"
    {"\2139", "\x8C\x28"},
#line 501 "trad2simp.in"
    {"a\350", "\x60\x79"},
#line 2384 "trad2simp.in"
    {"\233\335", "\x9C\xB4"},
#line 2019 "trad2simp.in"
    {"\223\260", "\x95\x52"},
#line 2321 "trad2simp.in"
    {"\232f", "\x9A\xA6"},
#line 2279 "trad2simp.in"
    {"\231\335", "\x9A\x7C"},
#line 2235 "trad2simp.in"
    {"\231\003", "\x99\x7A"},
#line 1344 "trad2simp.in"
    {"\205\316", "\x83\x69"},
#line 2508 "trad2simp.in"
    {"\235\372", "\x9E\x6D"},
#line 906 "trad2simp.in"
    {"sz", "\x73\x6D"},
#line 520 "trad2simp.in"
    {"nc", "\x61\x0D"},
#line 1279 "trad2simp.in"
    {"\232\322", "\x81\x0F"},
#line 151 "trad2simp.in"
    {"R[", "\x52\x1A"},
#line 1521 "trad2simp.in"
    {"\212\206", "\x8B\xD3"},
#line 1504 "trad2simp.in"
    {"\212A", "\x8B\xC2"},
#line 1340 "trad2simp.in"
    {"n\316", "\x83\x65"},
#line 1153 "trad2simp.in"
    {"}\206", "\x7E\xE0"},
#line 594 "trad2simp.in"
    {"e\031", "\x64\x00"},
#line 1925 "trad2simp.in"
    {"\222{", "\x94\xEC"},
#line 1325 "trad2simp.in"
    {"XK", "\x83\x14"},
#line 950 "trad2simp.in"
    {"vb", "\x75\xD2"},
#line 2296 "trad2simp.in"
    {"\232\002", "\x9A\x8D"},
#line 400 "trad2simp.in"
    {"\\l", "\x5C\x5E"},
#line 1950 "trad2simp.in"
    {"\223K", "\x95\x05"},
#line 838 "trad2simp.in"
    {"o[", "\x6F\x5C"},
#line 1973 "trad2simp.in"
    {"\223\025", "\x95\x1F"},
#line 2253 "trad2simp.in"
    {"\231A", "\x99\x8C"},
#line 60 "trad2simp.in"
    {"_\236", "\x4E\xCE"},
#line 589 "trad2simp.in"
    {"d{", "\x63\xBA"},
#line 2465 "trad2simp.in"
    {"\235S", "\x9E\x41"},
#line 1137 "trad2simp.in"
    {"}?", "\x7E\xD0"},
#line 2555 "trad2simp.in"
    {"O\302", "\x7C\xFB"},
#line 2463 "trad2simp.in"
    {"\235;", "\x9E\x3F"},
#line 1886 "trad2simp.in"
    {"\222?", "\x94\xBF"},
#line 263 "trad2simp.in"
    {"U\025", "\x55\x23"},
#line 732 "trad2simp.in"
    {"e\203", "\x6B\xD9"},
#line 1829 "trad2simp.in"
    {"\223\350", "\x93\x3E"},
#line 770 "trad2simp.in"
    {"my", "\x6D\x43"},
#line 912 "trad2simp.in"
    {"t\260", "\x73\xAF"},
#line 560 "trad2simp.in"
    {"e\024", "\x62\xE6"},
#line 1741 "trad2simp.in"
    {"\216\372", "\x8F\x7A"},
#line 369 "trad2simp.in"
    {"[*", "\x5A\xD4"},
#line 2251 "trad2simp.in"
    {"\231?", "\x99\x8A"},
#line 871 "trad2simp.in"
    {"q\376", "\x71\x18"},
#line 511 "trad2simp.in"
    {"\232Z", "\x60\xCA"},
#line 2344 "trad2simp.in"
    {"\233\212", "\x9C\x8C"},
#line 824 "trad2simp.in"
    {"pD", "\x6E\xE0"},
#line 1434 "trad2simp.in"
    {"\211j", "\x88\x9C"},
#line 1529 "trad2simp.in"
    {"\212\205", "\x8B\xDB"},
#line 2472 "trad2simp.in"
    {"\235\\", "\x9E\x48"},
#line 2524 "trad2simp.in"
    {"\236\377", "\x9F\x0B"},
#line 2530 "trad2simp.in"
    {"\237J", "\x9F\x50"},
#line 1910 "trad2simp.in"
    {"\222\205", "\x94\xDC"},
#line 1704 "trad2simp.in"
    {"\216\202", "\x8D\xF6"},
#line 2436 "trad2simp.in"
    {"\234\362", "\x9E\x24"},
#line 91 "trad2simp.in"
    {"Q\025", "\x4F\xAA"},
#line 911 "trad2simp.in"
    {"tK", "\x73\xAE"},
#line 1520 "trad2simp.in"
    {"\212R", "\x8B\xD2"},
#line 628 "trad2simp.in"
    {"f\350", "\x66\x3D"},
#line 771 "trad2simp.in"
    {"m\372", "\x6D\x45"},
#line 687 "trad2simp.in"
    {"i\363", "\x68\x68"},
#line 430 "trad2simp.in"
    {"]\201", "\x5D\x5D"},
#line 543 "trad2simp.in"
    {"ck", "\x62\x6A"},
#line 515 "trad2simp.in"
    {"a\212", "\x60\xEB"},
#line 67 "trad2simp.in"
    {"Q*", "\x4F\x18"},
#line 1457 "trad2simp.in"
    {"\211\254", "\x89\xCA"},
#line 2529 "trad2simp.in"
    {"\237G", "\x9F\x44"},
#line 1383 "trad2simp.in"
    {"\205\372", "\x85\x3A"},
#line 2148 "trad2simp.in"
    {"\230\003", "\x98\x77"},
#line 1875 "trad2simp.in"
    {"\2227", "\x94\xB4"},
#line 2231 "trad2simp.in"
    {"\231R", "\x99\x76"},
#line 1516 "trad2simp.in"
    {"\212X", "\x8B\xCE"},
#line 63 "trad2simp.in"
    {"Q\000", "\x4E\xEA"},
#line 2504 "trad2simp.in"
    {"\235\357", "\x9E\x69"},
#line 1981 "trad2simp.in"
    {"\223A", "\x95\x28"},
#line 2248 "trad2simp.in"
    {"\2317", "\x99\x87"},
#line 1080 "trad2simp.in"
    {"|\362", "\x7C\x9D"},
#line 955 "trad2simp.in"
    {"va", "\x75\xF4"},
#line 1762 "trad2simp.in"
    {"\2173", "\x8F\x8F"},
#line 1135 "trad2simp.in"
    {"~y", "\x7E\xCE"},
#line 1603 "trad2simp.in"
    {"\213\031", "\x8C\x26"},
#line 2327 "trad2simp.in"
    {"\233X", "\x9B\x47"},
#line 1012 "trad2simp.in"
    {"X?", "\x78\xB1"},
#line 1115 "trad2simp.in"
    {"}!", "\x7E\xBA"},
#line 2101 "trad2simp.in"
    {"\225\322", "\x96\x18"},
#line 1763 "trad2simp.in"
    {"\217;", "\x8F\x90"},
#line 2259 "trad2simp.in"
    {"\231E", "\x99\x92"},
#line 314 "trad2simp.in"
    {"X\212", "\x57\xAB"},
#line 323 "trad2simp.in"
    {"X\212", "\x57\xDD"},
#line 1074 "trad2simp.in"
    {"|j", "\x7C\x16"},
#line 2171 "trad2simp.in"
    {"q\262", "\x98\x8E"},
#line 162 "trad2simp.in"
    {"R\215", "\x52\x51"},
#line 502 "trad2simp.in"
    {"a7", "\x60\x7A"},
#line 2018 "trad2simp.in"
    {"\223\212", "\x95\x51"},
#line 497 "trad2simp.in"
    {"b\000", "\x60\x4B"},
#line 2246 "trad2simp.in"
    {"\231!", "\x99\x85"},
#line 1604 "trad2simp.in"
    {"\213\020", "\x8C\x27"},
#line 849 "trad2simp.in"
    {"ql", "\x70\x80"},
#line 118 "trad2simp.in"
    {"sx", "\x51\x7D"},
#line 2520 "trad2simp.in"
    {"\236\366", "\x9E\xE1"},
#line 2096 "trad2simp.in"
    {"\225\340", "\x96\x13"},
#line 285 "trad2simp.in"
    {"\213\024", "\x56\xAF"},
#line 1582 "trad2simp.in"
    {"\213\024", "\x8C\x11"},
#line 513 "trad2simp.in"
    {"aX", "\x60\xE8"},
#line 80 "trad2simp.in"
    {"\232\324", "\x4F\x53"},
#line 1887 "trad2simp.in"
    {"\222>", "\x94\xC0"},
#line 2284 "trad2simp.in"
    {"\232M", "\x9A\x81"},
#line 1108 "trad2simp.in"
    {"}\015", "\x7E\xB3"},
#line 716 "trad2simp.in"
    {"j\201", "\x6A\xA9"},
#line 1852 "trad2simp.in"
    {"\222\015", "\x94\x9D"},
#line 2395 "trad2simp.in"
    {"\234h", "\x9C\xBF"},
#line 2404 "trad2simp.in"
    {"\234\001", "\x9C\xC8"},
#line 2256 "trad2simp.in"
    {"\231>", "\x99\x8F"},
#line 751 "trad2simp.in"
    {"m\352", "\x6C\xA6"},
#line 320 "trad2simp.in"
    {"XR", "\x57\xD8"},
#line 2317 "trad2simp.in"
    {"\232D", "\x9A\xA2"},
#line 607 "trad2simp.in"
    {"e\006", "\x64\xB5"},
#line 1864 "trad2simp.in"
    {"\222d", "\x94\xA9"},
#line 2080 "trad2simp.in"
    {"\225\253", "\x96\x03"},
#line 579 "trad2simp.in"
    {"d\015", "\x63\x5F"},
#line 856 "trad2simp.in"
    {"q\276", "\x70\xBD"},
#line 921 "trad2simp.in"
    {"t?", "\x73\xF2"},
#line 1387 "trad2simp.in"
    {"\205\352", "\x85\xAE"},
#line 2528 "trad2simp.in"
    {"\2374", "\x9F\x39"},
#line 122 "trad2simp.in"
    {"Q\212", "\x51\x8C"},
#line 1309 "trad2simp.in"
    {"\205\214", "\x82\x97"},
#line 244 "trad2simp.in"
    {"VE", "\x54\xB4"},
#line 1342 "trad2simp.in"
    {"q\222", "\x83\x67"},
#line 485 "trad2simp.in"
    {"a>", "\x5F\xFE"},
#line 2090 "trad2simp.in"
    {"\225\275", "\x96\x0D"},
#line 615 "trad2simp.in"
    {"ex", "\x65\x70"},
#line 2182 "trad2simp.in"
    {"\230R", "\x98\x99"},
#line 1041 "trad2simp.in"
    {"z\304", "\x7A\x9C"},
#line 398 "trad2simp.in"
    {"\\\\", "\x5C\x49"},
#line 1915 "trad2simp.in"
    {"\223X", "\x94\xE1"},
#line 1479 "trad2simp.in"
    {"\212\016", "\x8B\xA8"},
#line 2410 "trad2simp.in"
    {"\234(", "\x9C\xCE"},
#line 2177 "trad2simp.in"
    {"\2307", "\x98\x94"},
#line 1089 "trad2simp.in"
    {"|\376", "\x7E\xA0"},
#line 153 "trad2simp.in"
    {"R*", "\x52\x20"},
#line 2168 "trad2simp.in"
    {"\2302", "\x98\x8B"},
#line 822 "trad2simp.in"
    {"n\357", "\x6E\xDE"},
#line 2547 "trad2simp.in"
    {"\237\224", "\x9F\x9A"},
#line 2306 "trad2simp.in"
    {"\232\031", "\x9A\x97"},
#line 1463 "trad2simp.in"
    {"\211\262", "\x89\xD0"},
#line 1971 "trad2simp.in"
    {"\223!", "\x95\x1C"},
#line 2523 "trad2simp.in"
    {"\236\375", "\x9E\xFE"},
#line 524 "trad2simp.in"
    {"\230X", "\x61\x3F"},
#line 2234 "trad2simp.in"
    {"\231\016", "\x99\x79"},
#line 753 "trad2simp.in"
    {"n\"", "\x6C\xA8"},
#line 109 "trad2simp.in"
    {"QR", "\x51\x3F"},
#line 368 "trad2simp.in"
    {"[!", "\x5A\xD2"},
#line 909 "trad2simp.in"
    {"tR", "\x73\x9A"},
#line 684 "trad2simp.in"
    {"jK", "\x68\x65"},
#line 274 "trad2simp.in"
    {"V\015", "\x55\xBD"},
#line 1102 "trad2simp.in"
    {"}\034", "\x7E\xAD"},
#line 97 "trad2simp.in"
    {"Q7", "\x4F\xEA"},
#line 725 "trad2simp.in"
    {"k\256", "\x6B\x93"},
#line 2166 "trad2simp.in"
    {"\230!", "\x98\x89"},
#line 107 "trad2simp.in"
    {"Q2", "\x50\xA8"},
#line 1747 "trad2simp.in"
    {"\217\010", "\x8F\x80"},
#line 64 "trad2simp.in"
    {"P\021", "\x4E\xEC"},
#line 1611 "trad2simp.in"
    {"\213V", "\x8C\x2E"},
#line 1271 "trad2simp.in"
    {"R\335", "\x80\xDC"},
#line 1166 "trad2simp.in"
    {"~\214", "\x7E\xED"},
#line 671 "trad2simp.in"
    {"j\350", "\x68\x0C"},
#line 2244 "trad2simp.in"
    {"\231\034", "\x99\x83"},
#line 1789 "trad2simp.in"
    {"\220#", "\x8F\xDE"},
#line 1047 "trad2simp.in"
    {"z\366", "\x7A\xDE"},
#line 124 "trad2simp.in"
    {"\216\315", "\x51\x9B"},
#line 321 "trad2simp.in"
    {"Xd", "\x57\xD9"},
#line 806 "trad2simp.in"
    {"p\006", "\x6E\x0E"},
#line 2516 "trad2simp.in"
    {"\236\245", "\x9E\xA6"},
#line 1996 "trad2simp.in"
    {"\223d", "\x95\x38"},
#line 2324 "trad2simp.in"
    {"\232\326", "\x9A\xCB"},
#line 1581 "trad2simp.in"
    {"\212\347", "\x8C\x10"},
#line 1933 "trad2simp.in"
    {"\224\013", "\x94\xF4"},
#line 2430 "trad2simp.in"
    {"\234c", "\x9C\xE3"},
#line 533 "trad2simp.in"
    {"b2", "\x62\x0F"},
#line 2099 "trad2simp.in"
    {"\225\324", "\x96\x16"},
#line 1388 "trad2simp.in"
    {"i\301", "\x85\xC1"},
#line 516 "trad2simp.in"
    {"a\034", "\x60\xEC"},
#line 1678 "trad2simp.in"
    {"\214\347", "\x8D\x55"},
#line 695 "trad2simp.in"
    {"j\335", "\x69\x1F"},
#line 2036 "trad2simp.in"
    {"\224\023", "\x95\x66"},
#line 2383 "trad2simp.in"
    {"\233\347", "\x9C\xB3"},
#line 2448 "trad2simp.in"
    {"\235\022", "\x9E\x30"},
#line 2288 "trad2simp.in"
    {"\232J", "\x9A\x85"},
#line 886 "trad2simp.in"
    {"s6", "\x72\xB9"},
#line 21 "trad2simp.in"
    {"\\\010", "\x4E\x13"},
#line 647 "trad2simp.in"
    {"iJ", "\x67\x68"},
#line 1353 "trad2simp.in"
    {"\204\012", "\x83\xB1"},
#line 205 "trad2simp.in"
    {"^\335", "\x53\xAE"},
#line 1313 "trad2simp.in"
    {"\204f", "\x82\xC7"},
#line 773 "trad2simp.in"
    {"o\206", "\x6D\x47"},
#line 2170 "trad2simp.in"
    {"oA", "\x98\x8D"},
#line 1544 "trad2simp.in"
    {"\213x", "\x8B\xEA"},
#line 1073 "trad2simp.in"
    {"|l", "\x7B\xF1"},
#line 2075 "trad2simp.in"
    {"\225\255", "\x95\xFE"},
#line 1375 "trad2simp.in"
    {"\205\315", "\x84\xDD"},
#line 1367 "trad2simp.in"
    {"~\010", "\x84\x26"},
#line 2515 "trad2simp.in"
    {"\236z", "\x9E\x7E"},
#line 2097 "trad2simp.in"
    {"\225\312", "\x96\x14"},
#line 157 "trad2simp.in"
    {"R\212", "\x52\x3D"},
#line 258 "trad2simp.in"
    {"V\034", "\x55\x1B"},
#line 473 "trad2simp.in"
    {"kx", "\x5F\x52"},
#line 1028 "trad2simp.in"
    {"zM", "\x79\xEF"},
#line 1552 "trad2simp.in"
    {"\212\250", "\x8B\xF2"},
#line 926 "trad2simp.in"
    {"td", "\x74\x76"},
#line 772 "trad2simp.in"
    {"o?", "\x6D\x46"},
#line 1044 "trad2simp.in"
    {"z\307", "\x7A\xA6"},
#line 2157 "trad2simp.in"
    {"\230\016", "\x98\x80"},
#line 1934 "trad2simp.in"
    {"\222\250", "\x94\xF5"},
#line 2334 "trad2simp.in"
    {"\233o", "\x9C\x81"},
#line 1632 "trad2simp.in"
    {"\214\250", "\x8D\x27"},
#line 1338 "trad2simp.in"
    {"i\256", "\x83\x63"},
#line 1720 "trad2simp.in"
    {"\216\300", "\x8E\xAF"},
#line 565 "trad2simp.in"
    {"do", "\x63\x1A"},
#line 2077 "trad2simp.in"
    {"\225\245", "\x96\x00"},
#line 1602 "trad2simp.in"
    {"\212\341", "\x8C\x25"},
#line 480 "trad2simp.in"
    {"_\240", "\x5F\x95"},
#line 1208 "trad2simp.in"
    {"}\341", "\x7F\x17"},
#line 1038 "trad2simp.in"
    {"z\312", "\x7A\x83"},
#line 408 "trad2simp.in"
    {"\\\364", "\x5C\x98"},
#line 1699 "trad2simp.in"
    {"\216\215", "\x8D\xC3"},
#line 2537 "trad2simp.in"
    {"\237a", "\x9F\x84"},
#line 1676 "trad2simp.in"
    {"\214\341", "\x8D\x53"},
#line 2169 "trad2simp.in"
    {"\230\034", "\x98\x8C"},
#line 1616 "trad2simp.in"
    {"\213\236", "\x8C\x33"},
#line 2381 "trad2simp.in"
    {"\233\341", "\x9C\xB1"},
#line 2079 "trad2simp.in"
    {"\225\241", "\x96\x02"},
#line 1785 "trad2simp.in"
    {"\220\031", "\x8F\xD9"},
#line 965 "trad2simp.in"
    {"vl", "\x76\x63"},
#line 1295 "trad2simp.in"
    {"\2320", "\x81\x7E"},
#line 1706 "trad2simp.in"
    {"\216U", "\x8D\xF8"},
#line 2453 "trad2simp.in"
    {"\235\025", "\x9E\x35"},
#line 724 "trad2simp.in"
    {"k\236", "\x6B\x92"},
#line 1440 "trad2simp.in"
    {"\2113", "\x88\xE2"},
#line 2055 "trad2simp.in"
    {"\225\203", "\x95\xEA"},
#line 103 "trad2simp.in"
    {"P\350", "\x50\x7E"},
#line 1771 "trad2simp.in"
    {"\217F", "\x8F\x98"},
#line 1371 "trad2simp.in"
    {"\205F", "\x84\x87"},
#line 375 "trad2simp.in"
    {"[\347", "\x5B\x81"},
#line 1751 "trad2simp.in"
    {"\217\022", "\x8F\x84"},
#line 56 "trad2simp.in"
    {"\211;", "\x4E\xB5"},
#line 215 "trad2simp.in"
    {"\204I", "\x53\xF6"},
#line 75 "trad2simp.in"
    {"P\000", "\x4F\x25"},
#line 800 "trad2simp.in"
    {"o2", "\x6D\xA8"},
#line 424 "trad2simp.in"
    {"]\015", "\x5D\x03"},
#line 1254 "trad2simp.in"
    {"`e", "\x80\x3B"},
#line 114 "trad2simp.in"
    {"\225\334", "\x51\x73"},
#line 278 "trad2simp.in"
    {"Vo", "\x55\xF3"},
#line 2060 "trad2simp.in"
    {"\225\326", "\x95\xEF"},
#line 894 "trad2simp.in"
    {"sj", "\x72\xEF"},
#line 1800 "trad2simp.in"
    {"\220z", "\x90\x57"},
#line 240 "trad2simp.in"
    {"V\250", "\x54\x99"},
#line 2303 "trad2simp.in"
    {"\232\014", "\x9A\x94"},
#line 2415 "trad2simp.in"
    {"\2343", "\x9C\xD3"},
#line 1498 "trad2simp.in"
    {"\212\037", "\x8B\xBC"},
#line 1220 "trad2simp.in"
    {"~\021", "\x7F\x23"},
#line 1359 "trad2simp.in"
    {"\205U", "\x83\xB8"},
#line 1106 "trad2simp.in"
    {"}\027", "\x7E\xB1"},
#line 1862 "trad2simp.in"
    {"\222\036", "\x94\xA7"},
#line 2419 "trad2simp.in"
    {"\234;", "\x9C\xD7"},
#line 973 "trad2simp.in"
    {"v\343", "\x76\xD1"},
#line 399 "trad2simp.in"
    {"\\F", "\x5C\x4A"},
#line 1563 "trad2simp.in"
    {"\212\271", "\x8B\xFD"},
#line 1204 "trad2simp.in"
    {"}\351", "\x7F\x13"},
#line 446 "trad2simp.in"
    {"^X", "\x5E\x3B"},
#line 1179 "trad2simp.in"
    {"}\271", "\x7E\xFA"},
#line 2543 "trad2simp.in"
    {"\237j", "\x9F\x8A"},
#line 2224 "trad2simp.in"
    {"\231\036", "\x99\x6F"},
#line 813 "trad2simp.in"
    {"\220J", "\x6E\x38"},
#line 629 "trad2simp.in"
    {"\230o", "\x66\x3E"},
#line 582 "trad2simp.in"
    {"d\027", "\x63\x63"},
#line 341 "trad2simp.in"
    {"Yj", "\x59\x3A"},
#line 1227 "trad2simp.in"
    {"~F", "\x7F\x2A"},
#line 869 "trad2simp.in"
    {"qe", "\x71\x15"},
#line 2197 "trad2simp.in"
    {"\230\250", "\x98\xCE"},
#line 2026 "trad2simp.in"
    {"\223\341", "\x95\x5C"},
#line 2269 "trad2simp.in"
    {"\231\271", "\x9A\x72"},
#line 959 "trad2simp.in"
    {"v:", "\x76\x18"},
#line 604 "trad2simp.in"
    {"e$", "\x64\x4A"},
#line 1937 "trad2simp.in"
    {"\224D", "\x94\xF8"},
#line 1406 "trad2simp.in"
    {"\210#", "\x86\xCE"},
#line 2511 "trad2simp.in"
    {"\236\014", "\x9E\x71"},
#line 1742 "trad2simp.in"
    {"\217\025", "\x8F\x7B"},
#line 970 "trad2simp.in"
    {"v\270", "\x76\xB2"},
#line 798 "trad2simp.in"
    {"od", "\x6D\xA6"},
#line 132 "trad2simp.in"
    {"m\350", "\x51\xC0"},
#line 898 "trad2simp.in"
    {"sk", "\x73\x03"},
#line 891 "trad2simp.in"
    {"sh", "\x72\xEC"},
#line 2461 "trad2simp.in"
    {"\235?", "\x9E\x3D"},
#line 865 "trad2simp.in"
    {"q\364", "\x70\xE9"},
#line 1729 "trad2simp.in"
    {"\217*", "\x8F\x6E"},
#line 1231 "trad2simp.in"
    {"~U", "\x7F\x2E"},
#line 913 "trad2simp.in"
    {"s\376", "\x73\xB0"},
#line 1436 "trad2simp.in"
    {"\211O", "\x88\xAF"},
#line 1333 "trad2simp.in"
    {"\204\375", "\x83\x5C"},
#line 2482 "trad2simp.in"
    {"\235\212", "\x9E\x52"},
#line 619 "trad2simp.in"
    {"e\254", "\x65\xA9"},
#line 2271 "trad2simp.in"
    {"\232b", "\x9A\x74"},
#line 1510 "trad2simp.in"
    {"\212P", "\x8B\xC8"},
#line 1066 "trad2simp.in"
    {"|\\", "\x7B\xA8"},
#line 1140 "trad2simp.in"
    {"}P", "\x7E\xD3"},
#line 717 "trad2simp.in"
    {"ka", "\x6B\x22"},
#line 1037 "trad2simp.in"
    {"z\256", "\x7A\x77"},
#line 2560 "trad2simp.in"
    {"V\027", "\x5C\x1D"},
#line 2041 "trad2simp.in"
    {"\224\031", "\x95\x6B"},
#line 287 "trad2simp.in"
    {"W\022", "\x56\xED"},
#line 32 "trad2simp.in"
    {"\214P", "\x4E\x30"},
#line 1880 "trad2simp.in"
    {"\2228", "\x94\xB9"},
#line 2254 "trad2simp.in"
    {"\231C", "\x99\x8D"},
#line 1244 "trad2simp.in"
    {"\177\206", "\x7F\x74"},
#line 1594 "trad2simp.in"
    {"\212\336", "\x8C\x1D"},
#line 2551 "trad2simp.in"
    {"\210\375", "\x52\x36"},
#line 1199 "trad2simp.in"
    {"}\336", "\x7F\x0E"},
#line 1750 "trad2simp.in"
    {"\217\003", "\x8F\x83"},
#line 1984 "trad2simp.in"
    {"\223\037", "\x95\x2C"},
#line 1306 "trad2simp.in"
    {"\205\335", "\x82\x7A"},
#line 2519 "trad2simp.in"
    {"\236\314", "\x9E\xC9"},
#line 303 "trad2simp.in"
    {"X\351", "\x57\x5D"},
#line 1672 "trad2simp.in"
    {"\214\336", "\x8D\x4F"},
#line 1133 "trad2simp.in"
    {"}@", "\x7E\xCC"},
#line 2033 "trad2simp.in"
    {"\224\020", "\x95\x63"},
#line 2470 "trad2simp.in"
    {"\235R", "\x9E\x46"},
#line 1885 "trad2simp.in"
    {"\222@", "\x94\xBE"},
#line 1195 "trad2simp.in"
    {"~\025", "\x7F\x0A"},
#line 2031 "trad2simp.in"
    {"\224\024", "\x95\x61"},
#line 1710 "trad2simp.in"
    {"\216\212", "\x8E\x0C"},
#line 379 "trad2simp.in"
    {"[\351", "\x5B\xA1"},
#line 2100 "trad2simp.in"
    {"\225\320", "\x96\x17"},
#line 2164 "trad2simp.in"
    {"\230\027", "\x98\x87"},
#line 262 "trad2simp.in"
    {"U\351", "\x55\x22"},
#line 2393 "trad2simp.in"
    {"\234\010", "\x9C\xBD"},
#line 683 "trad2simp.in"
    {"i\277", "\x68\x64"},
#line 469 "trad2simp.in"
    {"_3", "\x5F\x2A"},
#line 1189 "trad2simp.in"
    {"}\330", "\x7F\x04"},
#line 2217 "trad2simp.in"
    {"\230\351", "\x99\x68"},
#line 872 "trad2simp.in"
    {"qF", "\x71\x45"},
#line 1343 "trad2simp.in"
    {"\205A", "\x83\x68"},
#line 1795 "trad2simp.in"
    {"\220x", "\x90\x09"},
#line 2277 "trad2simp.in"
    {"\2326", "\x9A\x7A"},
#line 2422 "trad2simp.in"
    {"\234<", "\x9C\xDB"},
#line 2325 "trad2simp.in"
    {"\232\325", "\x9A\xCC"},
#line 416 "trad2simp.in"
    {"]\250", "\x5C\xC3"},
#line 1465 "trad2simp.in"
    {"\211\364", "\x89\xDE"},
#line 1241 "trad2simp.in"
    {"\177\205", "\x7F\x57"},
#line 2283 "trad2simp.in"
    {"\231\330", "\x9A\x80"},
#line 104 "trad2simp.in"
    {"Q\037", "\x50\x7F"},
#line 1298 "trad2simp.in"
    {"\217?", "\x82\x06"},
#line 2042 "trad2simp.in"
    {"\224J", "\x95\x6C"},
#line 1386 "trad2simp.in"
    {"\206\012", "\x85\x74"},
#line 1486 "trad2simp.in"
    {"\212\030", "\x8B\xB0"},
#line 2066 "trad2simp.in"
    {"\225\224", "\x95\xF5"},
#line 229 "trad2simp.in"
    {"V8", "\x54\x52"},
#line 1103 "trad2simp.in"
    {"}\030", "\x7E\xAE"},
#line 1376 "trad2simp.in"
    {"\205\212", "\x84\xDF"},
#line 1321 "trad2simp.in"
    {"\206\013", "\x82\xF9"},
#line 1413 "trad2simp.in"
    {"\210\020", "\x86\xF4"},
#line 2552 "trad2simp.in"
    {"\214\030", "\x54\xA8"},
#line 707 "trad2simp.in"
    {"j\347", "\x69\xE0"},
#line 2094 "trad2simp.in"
    {"\225\314", "\x96\x11"},
#line 1403 "trad2simp.in"
    {"\210\024", "\x86\x9D"},
#line 81 "trad2simp.in"
    {"\231\030", "\x4F\x59"},
#line 2241 "trad2simp.in"
    {"\231\030", "\x99\x80"},
#line 1592 "trad2simp.in"
    {"\212\346", "\x8C\x1B"},
#line 1941 "trad2simp.in"
    {"\2238", "\x94\xFC"},
#line 2435 "trad2simp.in"
    {"\234\364", "\x9E\x23"},
#line 1197 "trad2simp.in"
    {"}\346", "\x7F\x0C"},
#line 558 "trad2simp.in"
    {"c\300", "\x62\xE3"},
#line 298 "trad2simp.in"
    {"X\336", "\x57\x4F"},
#line 1965 "trad2simp.in"
    {"\222\346", "\x95\x14"},
#line 366 "trad2simp.in"
    {"[8", "\x5A\x76"},
#line 2542 "trad2simp.in"
    {"\237l", "\x9F\x89"},
#line 1668 "trad2simp.in"
    {"\214\346", "\x8D\x4B"},
#line 1428 "trad2simp.in"
    {"\210\334", "\x88\x65"},
#line 2025 "trad2simp.in"
    {"\223\336", "\x95\x5B"},
#line 785 "trad2simp.in"
    {"oo", "\x6D\x54"},
#line 220 "trad2simp.in"
    {"_\214", "\x54\x0E"},
#line 2165 "trad2simp.in"
    {"\2308", "\x98\x88"},
#line 1347 "trad2simp.in"
    {"\205R", "\x83\x6C"},
#line 1524 "trad2simp.in"
    {"\212\177", "\x8B\xD6"},
#line 2521 "trad2simp.in"
    {"\236\367", "\x9E\xE9"},
#line 145 "trad2simp.in"
    {"l9", "\x51\xFC"},
#line 1618 "trad2simp.in"
    {"\213k", "\x8C\x35"},
#line 238 "trad2simp.in"
    {"\212`", "\x54\x8F"},
#line 1923 "trad2simp.in"
    {"\222\177", "\x94\xEA"},
#line 1583 "trad2simp.in"
    {"\213\001", "\x8C\x12"},
#line 449 "trad2simp.in"
    {"\211F", "\x5E\x5E"},
#line 310 "trad2simp.in"
    {"X\330", "\x57\x92"},
#line 1551 "trad2simp.in"
    {"\212\230", "\x8B\xF1"},
#line 1076 "trad2simp.in"
    {"|\364", "\x7C\x74"},
#line 1449 "trad2simp.in"
    {"\211\300", "\x89\xC2"},
#line 1098 "trad2simp.in"
    {"~\212", "\x7E\xA9"},
#line 1993 "trad2simp.in"
    {"\223\330", "\x95\x35"},
#line 1926 "trad2simp.in"
    {"\222\230", "\x94\xED"},
#line 1332 "trad2simp.in"
    {"\205X", "\x83\x5B"},
#line 1768 "trad2simp.in"
    {"\217E", "\x8F\x95"},
#line 1030 "trad2simp.in"
    {"zb", "\x79\xFD"},
#line 407 "trad2simp.in"
    {"]\027", "\x5C\x97"},
#line 736 "trad2simp.in"
    {"l#", "\x6C\x14"},
#line 228 "trad2simp.in"
    {"T3", "\x54\x34"},
#line 1888 "trad2simp.in"
    {"\2245", "\x94\xC1"},
#line 2308 "trad2simp.in"
    {"\232$", "\x9A\x99"},
#line 841 "trad2simp.in"
    {"p(", "\x6F\xD1"},
#line 2293 "trad2simp.in"
    {"\232j", "\x9A\x8A"},
#line 1711 "trad2simp.in"
    {"\216d", "\x8E\x2A"},
#line 2089 "trad2simp.in"
    {"\225\277", "\x96\x0C"},
#line 1985 "trad2simp.in"
    {"\223 ", "\x95\x2D"},
#line 456 "trad2simp.in"
    {"^\341", "\x5E\x91"},
#line 1535 "trad2simp.in"
    {"\212m", "\x8B\xE1"},
#line 1978 "trad2simp.in"
    {"\223\030", "\x95\x24"},
#line 1596 "trad2simp.in"
    {"\213(", "\x8C\x1F"},
#line 393 "trad2simp.in"
    {"\\7", "\x5C\x34"},
#line 2402 "trad2simp.in"
    {"\234\022", "\x9C\xC6"},
#line 2335 "trad2simp.in"
    {"\233t", "\x9C\x82"},
#line 1884 "trad2simp.in"
    {"\222m", "\x94\xBD"},
#line 1232 "trad2simp.in"
    {"~R", "\x7F\x2F"},
#line 2102 "trad2simp.in"
    {"\225\325", "\x96\x19"},
#line 1770 "trad2simp.in"
    {"\217>", "\x8F\x97"},
#line 1356 "trad2simp.in"
    {"\2045", "\x83\xB4"},
#line 2522 "trad2simp.in"
    {"\236\362", "\x9E\xEA"},
#line 1957 "trad2simp.in"
    {"\222\305", "\x95\x0C"},
#line 1206 "trad2simp.in"
    {"~7", "\x7F\x15"},
#line 2163 "trad2simp.in"
    {"\230\030", "\x98\x86"},
#line 1662 "trad2simp.in"
    {"\214\305", "\x8D\x45"},
#line 1224 "trad2simp.in"
    {"~2", "\x7F\x27"},
#line 477 "trad2simp.in"
    {"_e", "\x5F\x66"},
#line 176 "trad2simp.in"
    {"R\351", "\x52\xDA"},
#line 782 "trad2simp.in"
    {"n>", "\x6D\x51"},
#line 377 "trad2simp.in"
    {"[\346", "\x5B\x9E"},
#line 2517 "trad2simp.in"
    {"\236\251", "\x9E\xB8"},
#line 1734 "trad2simp.in"
    {"\217d", "\x8F\x73"},
#line 249 "trad2simp.in"
    {"V`", "\x54\xD2"},
#line 2062 "trad2simp.in"
    {"\225\310", "\x95\xF1"},
#line 1228 "trad2simp.in"
    {"~E", "\x7F\x2B"},
#line 506 "trad2simp.in"
    {"`\205", "\x60\xA6"},
#line 1398 "trad2simp.in"
    {"\210\006", "\x86\x7F"},
#line 2568 "trad2simp.in"
    {"Q\030", "\x5C\x3D"},
#line 410 "trad2simp.in"
    {"]P", "\x5C\x9A"},
#line 814 "trad2simp.in"
    {"pc", "\x6E\x7E"},
#line 653 "trad2simp.in"
    {"j\036", "\x67\xA2"},
#line 897 "trad2simp.in"
    {"s;", "\x72\xF2"},
#line 2292 "trad2simp.in"
    {"\232k", "\x9A\x89"},
#line 2001 "trad2simp.in"
    {"\223`", "\x95\x3D"},
#line 374 "trad2simp.in"
    {"[\177", "\x5B\x6A"},
#line 2294 "trad2simp.in"
    {"\232\001", "\x9A\x8B"},
#line 720 "trad2simp.in"
    {"k\262", "\x6B\x7C"},
#line 681 "trad2simp.in"
    {"ih", "\x68\x62"},
#line 2011 "trad2simp.in"
    {"\223\230", "\x95\x49"},
#line 272 "trad2simp.in"
    {"V/", "\x55\x78"},
#line 600 "trad2simp.in"
    {"e\004", "\x64\x45"},
#line 385 "trad2simp.in"
    {"\\\015", "\x5B\xF9"},
#line 273 "trad2simp.in"
    {"Vt", "\x55\xB7"},
#line 1036 "trad2simp.in"
    {"za", "\x7A\x51"},
#line 1811 "trad2simp.in"
    {"\220\337", "\x90\xCF"},
#line 667 "trad2simp.in"
    {"h\347", "\x68\x08"},
#line 463 "trad2simp.in"
    {"^\351", "\x5E\xEA"},
#line 1162 "trad2simp.in"
    {"~>", "\x7E\xE9"},
#line 392 "trad2simp.in"
    {"X/", "\x5C\x27"},
#line 396 "trad2simp.in"
    {"\\d", "\x5C\x42"},
#line 1355 "trad2simp.in"
    {"\204\224", "\x83\xB3"},
#line 2478 "trad2simp.in"
    {"\235o", "\x9E\x4E"},
#line 1969 "trad2simp.in"
    {"\223/", "\x95\x19"},
#line 119 "trad2simp.in"
    {"V\305", "\x51\x81"},
#line 614 "trad2simp.in"
    {"e\202", "\x65\x5B"},
#line 952 "trad2simp.in"
    {"vF", "\x75\xE8"},
#line 1096 "trad2simp.in"
    {"}\032", "\x7E\xA7"},
#line 1351 "trad2simp.in"
    {"\204\236", "\x83\x85"},
#line 1761 "trad2simp.in"
    {"\217\034", "\x8F\x8E"},
#line 1177 "trad2simp.in"
    {"}\242", "\x7E\xF8"},
#line 596 "trad2simp.in"
    {"d_", "\x64\x02"},
#line 625 "trad2simp.in"
    {"f\230", "\x65\xF8"},
#line 2074 "trad2simp.in"
    {"\225\251", "\x95\xFD"},
#line 1588 "trad2simp.in"
    {"\213\222", "\x8C\x17"},
#line 1626 "trad2simp.in"
    {"\214\242", "\x8D\x21"},
#line 172 "trad2simp.in"
    {"R\336", "\x52\xB3"},
#line 2196 "trad2simp.in"
    {"\230t", "\x98\xA7"},
#line 2540 "trad2simp.in"
    {"\237\\", "\x9F\x87"},
#line 852 "trad2simp.in"
    {"qR", "\x70\x9C"},
#line 807 "trad2simp.in"
    {"o8", "\x6E\x10"},
#line 1495 "trad2simp.in"
    {"\212\033", "\x8B\xB9"},
#line 387 "trad2simp.in"
    {"\\\016", "\x5B\xFC"},
#line 1865 "trad2simp.in"
    {"\222'", "\x94\xAA"},
#line 1112 "trad2simp.in"
    {"}\033", "\x7E\xB7"},
#line 129 "trad2simp.in"
    {"lz", "\x51\xB3"},
#line 1430 "trad2simp.in"
    {"\210\236", "\x88\x6E"},
#line 500 "trad2simp.in"
    {"a_", "\x60\x78"},
#line 414 "trad2simp.in"
    {"] ", "\x5C\xBD"},
#line 2070 "trad2simp.in"
    {"\233'", "\x95\xF9"},
#line 2565 "trad2simp.in"
    {"_F", "\x52\x2B"},
#line 2398 "trad2simp.in"
    {"\234\003", "\x9C\xC2"},
#line 640 "trad2simp.in"
    {"j8", "\x67\x34"},
#line 289 "trad2simp.in"
    {"W\015", "\x56\xF4"},
#line 438 "trad2simp.in"
    {"^C", "\x5E\x0F"},
#line 294 "trad2simp.in"
    {"\200V", "\x57\x23"},
#line 2245 "trad2simp.in"
    {"\231\033", "\x99\x84"},
#line 1042 "trad2simp.in"
    {"z\251", "\x7A\x9D"},
#line 130 "trad2simp.in"
    {"l\301", "\x51\xB5"},
#line 946 "trad2simp.in"
    {"v\260", "\x75\xB1"},
#line 2083 "trad2simp.in"
    {"\225\254", "\x96\x06"},
#line 714 "trad2simp.in"
    {"j\336", "\x6A\x7C"},
#line 1247 "trad2simp.in"
    {"\177\250", "\x7F\xA1"},
#line 1107 "trad2simp.in"
    {"}\261", "\x7E\xB2"},
#line 1167 "trad2simp.in"
    {"}\272", "\x7E\xEE"},
#line 1064 "trad2simp.in"
    {"|\000", "\x7B\xA6"},
#line 1912 "trad2simp.in"
    {"\222\261", "\x94\xDE"},
#line 621 "trad2simp.in"
    {"q!", "\x65\xE0"},
#line 2044 "trad2simp.in"
    {"\2246", "\x95\x6E"},
#line 1647 "trad2simp.in"
    {"\214\272", "\x8D\x36"},
#line 2361 "trad2simp.in"
    {"\233\272", "\x9C\x9D"},
#line 757 "trad2simp.in"
    {"o\330", "\x6C\xDE"},
#line 2265 "trad2simp.in"
    {"\231\261", "\x9A\x6E"},
#line 875 "trad2simp.in"
    {"a\033", "\x72\x31"},
#line 443 "trad2simp.in"
    {"^@", "\x5E\x27"},
#line 348 "trad2simp.in"
    {"Zf", "\x59\x87"},
#line 1084 "trad2simp.in"
    {"|\335", "\x7C\xC1"},
#line 1470 "trad2simp.in"
    {"\213\004", "\x8A\x8A"},
#line 1680 "trad2simp.in"
    {"\214\365", "\x8D\x57"},
#line 2348 "trad2simp.in"
    {"\233\220", "\x9C\x90"},
#line 689 "trad2simp.in"
    {"Y\"", "\x68\xA6"},
#line 2389 "trad2simp.in"
    {"\233\365", "\x9C\xB9"},
#line 2531 "trad2simp.in"
    {"\237O", "\x9F\x51"},
#line 2449 "trad2simp.in"
    {"\235\037", "\x9E\x31"},
#line 2446 "trad2simp.in"
    {"\235\036", "\x9E\x2E"},
#line 606 "trad2simp.in"
    {"d\220", "\x64\x91"},
#line 673 "trad2simp.in"
    {"k\004", "\x68\x0F"},
#line 363 "trad2simp.in"
    {"Z\377", "\x5A\x73"},
#line 612 "trad2simp.in"
    {"e\"", "\x65\x12"},
#line 227 "trad2simp.in"
    {"U_", "\x54\x2F"},
#line 1927 "trad2simp.in"
    {"\223\032", "\x94\xEE"},
#line 743 "trad2simp.in"
    {"no", "\x6C\x64"},
#line 2495 "trad2simp.in"
    {"\235\271", "\x9E\x60"},
#line 1863 "trad2simp.in"
    {"\223\242", "\x94\xA8"},
#line 1490 "trad2simp.in"
    {"\2133", "\x8B\xB4"},
#line 2058 "trad2simp.in"
    {"\225\211", "\x95\xED"},
#line 1182 "trad2simp.in"
    {"}\273", "\x7E\xFD"},
#line 1100 "trad2simp.in"
    {"}\011", "\x7E\xAB"},
#line 224 "trad2simp.in"
    {"U\032", "\x54\x23"},
#line 1962 "trad2simp.in"
    {"\222\273", "\x95\x11"},
#line 1855 "trad2simp.in"
    {"\222\011", "\x94\xA0"},
#line 493 "trad2simp.in"
    {"a\220", "\x60\x1C"},
#line 1650 "trad2simp.in"
    {"\214\273", "\x8D\x39"},
#line 1442 "trad2simp.in"
    {"\2112", "\x88\xE4"},
#line 1402 "trad2simp.in"
    {"\2106", "\x86\x95"},
#line 2232 "trad2simp.in"
    {"\231\011", "\x99\x77"},
#line 1291 "trad2simp.in"
    {"\237v", "\x81\x6D"},
#line 569 "trad2simp.in"
    {"d\273", "\x63\x1E"},
#line 52 "trad2simp.in"
    {"N\236", "\x4E\x9A"},
#line 431 "trad2simp.in"
    {"\201\012", "\x5D\x74"},
#line 570 "trad2simp.in"
    {"c>", "\x63\x1F"},
#line 1281 "trad2simp.in"
    {"\201f", "\x81\x11"},
#line 1815 "trad2simp.in"
    {"\221H", "\x90\xE6"},
#line 1851 "trad2simp.in"
    {"\222&", "\x94\x9B"},
#line 2426 "trad2simp.in"
    {"\234R", "\x9C\xDF"},
#line 935 "trad2simp.in"
    {"f\242", "\x75\x45"},
#line 1614 "trad2simp.in"
    {"\213\\", "\x8C\x31"},
#line 967 "trad2simp.in"
    {"\201\322", "\x76\x6F"},
#line 2559 "trad2simp.in"
    {"V\220", "\x5C\x1D"},
#line 1264 "trad2simp.in"
    {"\201\232", "\x80\xA4"},
#line 1236 "trad2simp.in"
    {"~o", "\x7F\x33"},
#line 793 "trad2simp.in"
    {"o\177", "\x6D\xA0"},
#line 2370 "trad2simp.in"
    {"\2347", "\x9C\xA6"},
#line 243 "trad2simp.in"
    {"T\022", "\x54\xA4"},
#line 349 "trad2simp.in"
    {"Z\275", "\x59\x88"},
#line 1274 "trad2simp.in"
    {"\201\332", "\x80\xEA"},
#line 2460 "trad2simp.in"
    {"\235C", "\x9E\x3C"},
#line 622 "trad2simp.in"
    {"\202\012", "\x65\xE7"},
#line 2464 "trad2simp.in"
    {"\235P", "\x9E\x40"},
#line 1300 "trad2simp.in"
    {"\202f", "\x82\x30"},
#line 2363 "trad2simp.in"
    {"\234X", "\x9C\x9F"},
#line 1283 "trad2simp.in"
    {"\201\340", "\x81\x14"},
#line 1921 "trad2simp.in"
    {"\223\365", "\x94\xE7"},
#line 159 "trad2simp.in"
    {"Rt", "\x52\x40"},
#line 2421 "trad2simp.in"
    {"\234E", "\x9C\xD9"},
#line 2198 "trad2simp.in"
    {"\230\272", "\x98\xCF"},
#line 735 "trad2simp.in"
    {"l\014", "\x6C\x07"},
#line 353 "trad2simp.in"
    {"Y\315", "\x59\xD7"},
#line 378 "trad2simp.in"
    {"[\365", "\x5B\xA0"},
#line 1760 "trad2simp.in"
    {"\217\037", "\x8F\x8D"},
#line 1758 "trad2simp.in"
    {"\217\036", "\x8F\x8B"},
#line 135 "trad2simp.in"
    {"m\351", "\x51\xCC"},
#line 1374 "trad2simp.in"
    {"\205\036", "\x84\x8C"},
#line 1660 "trad2simp.in"
    {"\215\023", "\x8D\x43"},
#line 1835 "trad2simp.in"
    {"\221\331", "\x94\x8B"},
#line 1573 "trad2simp.in"
    {"\212\266", "\x8C\x07"},
#line 715 "trad2simp.in"
    {"|7", "\x6A\x90"},
#line 1445 "trad2simp.in"
    {"\211d", "\x89\x34"},
#line 245 "trad2simp.in"
    {"\236y", "\x54\xB8"},
#line 1311 "trad2simp.in"
    {"\206\006", "\x82\xA6"},
#line 1287 "trad2simp.in"
    {"\201\311", "\x81\x38"},
#line 1637 "trad2simp.in"
    {"\214\266", "\x8D\x2C"},
#line 534 "trad2simp.in"
    {"b'", "\x62\x17"},
#line 181 "trad2simp.in"
    {"\221\253", "\x53\x3B"},
#line 2374 "trad2simp.in"
    {"\233\266", "\x9C\xAA"},
#line 908 "trad2simp.in"
    {"t\265", "\x73\x99"},
#line 2416 "trad2simp.in"
    {"\234>", "\x9C\xD4"},
#line 1476 "trad2simp.in"
    {"\213O", "\x8B\xA5"},
#line 1525 "trad2simp.in"
    {"\212i", "\x8B\xD7"},
#line 1270 "trad2simp.in"
    {"\201\275", "\x80\xC6"},
#line 1540 "trad2simp.in"
    {"\212s", "\x8B\xE6"},
#line 2401 "trad2simp.in"
    {"\234\015", "\x9C\xC5"},
#line 659 "trad2simp.in"
    {"iS", "\x67\xAB"},
#line 1148 "trad2simp.in"
    {"}s", "\x7E\xDB"},
#line 1158 "trad2simp.in"
    {"}\217", "\x7E\xE5"},
#line 1062 "trad2simp.in"
    {"|!", "\x7B\x80"},
#line 2205 "trad2simp.in"
    {"\230\273", "\x98\xD6"},
#line 315 "trad2simp.in"
    {"W\341", "\x57\xAD"},
#line 2085 "trad2simp.in"
    {"\225\276", "\x96\x08"},
#line 2428 "trad2simp.in"
    {"\234d", "\x9C\xE1"},
#line 1268 "trad2simp.in"
    {"\2019", "\x80\xC0"},
#line 1980 "trad2simp.in"
    {"\223&", "\x95\x26"},
#line 499 "trad2simp.in"
    {"`\341", "\x60\x76"},
#line 419 "trad2simp.in"
    {"]\242", "\x5C\xE3"},
#line 482 "trad2simp.in"
    {"a\266", "\x5F\xC6"},
#line 2566 "trad2simp.in"
    {"\225\222", "\x95\xF2"},
#line 550 "trad2simp.in"
    {"ds", "\x62\xA0"},
#line 577 "trad2simp.in"
    {"d\217", "\x63\x26"},
#line 1212 "trad2simp.in"
    {"~\037", "\x7F\x1B"},
#line 1216 "trad2simp.in"
    {"~\036", "\x7F\x1F"},
#line 1215 "trad2simp.in"
    {"~\027", "\x7F\x1E"},
#line 440 "trad2simp.in"
    {"|>", "\x5E\x18"},
#line 1945 "trad2simp.in"
    {"\222\267", "\x95\x00"},
#line 2172 "trad2simp.in"
    {"\230&", "\x98\x8F"},
#line 98 "trad2simp.in"
    {"Q\011", "\x4F\xED"},
#line 45 "trad2simp.in"
    {"\214\267", "\x4E\x70"},
#line 1071 "trad2simp.in"
    {"|\015", "\x7B\xD3"},
#line 2546 "trad2simp.in"
    {"\237\215", "\x9F\x99"},
#line 1766 "trad2simp.in"
    {"\2178", "\x8F\x93"},
#line 941 "trad2simp.in"
    {"vX", "\x75\xA0"},
#line 509 "trad2simp.in"
    {"as", "\x60\xAD"},
#line 2505 "trad2simp.in"
    {"\235\346", "\x9E\x6A"},
#line 887 "trad2simp.in"
    {"r\375", "\x72\xC8"},
#line 280 "trad2simp.in"
    {"V\266", "\x56\x24"},
#line 2534 "trad2simp.in"
    {"\237U", "\x9F\x81"},
#line 859 "trad2simp.in"
    {"p\364", "\x70\xC3"},
#line 992 "trad2simp.in"
    {"x\332", "\x78\x16"},
#line 944 "trad2simp.in"
    {"v!", "\x75\xAE"},
#line 1165 "trad2simp.in"
    {"}\323", "\x7E\xEC"},
#line 316 "trad2simp.in"
    {"X\266", "\x57\xAF"},
#line 1765 "trad2simp.in"
    {"\217@", "\x8F\x92"},
#line 472 "trad2simp.in"
    {"_7", "\x5F\x3A"},
#line 882 "trad2simp.in"
    {"_7", "\x72\x9F"},
#line 412 "trad2simp.in"
    {"]\272", "\x5C\xAD"},
#line 1328 "trad2simp.in"
    {"\203J", "\x83\x46"},
#line 383 "trad2simp.in"
    {"\214\323", "\x5B\xBE"},
#line 646 "trad2simp.in"
    {"O\206", "\x67\x65"},
#line 749 "trad2simp.in"
    {"o\032", "\x6C\xA4"},
#line 641 "trad2simp.in"
    {"j_", "\x67\x3A"},
#line 2414 "trad2simp.in"
    {"\234\034", "\x9C\xD2"},
#line 71 "trad2simp.in"
    {"P\230", "\x4F\x1E"},
#line 2468 "trad2simp.in"
    {"\235`", "\x9E\x44"},
#line 1831 "trad2simp.in"
    {"\221\324", "\x94\x87"},
#line 441 "trad2simp.in"
    {"^_", "\x5E\x1C"},
#line 2485 "trad2simp.in"
    {"\235\230", "\x9E\x55"},
#line 2202 "trad2simp.in"
    {"\230\266", "\x98\xD3"},
#line 2318 "trad2simp.in"
    {"\232O", "\x9A\xA3"},
#line 692 "trad2simp.in"
    {"j\242", "\x68\xC0"},
#line 942 "trad2simp.in"
    {"v\015", "\x75\xA1"},
#line 1176 "trad2simp.in"
    {"~C", "\x7E\xF7"},
#line 1963 "trad2simp.in"
    {"\222\303", "\x95\x12"},
#line 1491 "trad2simp.in"
    {"\212N", "\x8B\xB5"},
#line 616 "trad2simp.in"
    {"\237K", "\x65\x8B"},
#line 1658 "trad2simp.in"
    {"\214\303", "\x8D\x41"},
#line 1144 "trad2simp.in"
    {"}N", "\x7E\xD7"},
#line 2078 "trad2simp.in"
    {"\225\243", "\x96\x01"},
#line 1589 "trad2simp.in"
    {"\212\356", "\x8C\x18"},
#line 938 "trad2simp.in"
    {"vd", "\x75\x96"},
#line 88 "trad2simp.in"
    {"Pt", "\x4F\xA7"},
#line 2054 "trad2simp.in"
    {"\225\202", "\x95\xE9"},
#line 1046 "trad2simp.in"
    {"\214N", "\x7A\xD6"},
#line 2456 "trad2simp.in"
    {"\235/", "\x9E\x38"},
#line 141 "trad2simp.in"
    {"\234\347", "\x51\xEB"},
#line 2328 "trad2simp.in"
    {"\233N", "\x9B\x49"},
#line 2187 "trad2simp.in"
    {"\230s", "\x98\x9E"},
#line 1429 "trad2simp.in"
    {"\211o", "\x88\x6C"},
#line 656 "trad2simp.in"
    {"h\230", "\x67\xA7"},
#line 850 "trad2simp.in"
    {"r\020", "\x70\x89"},
#line 170 "trad2simp.in"
    {"R\365", "\x52\xB1"},
#line 1425 "trad2simp.in"
    {"\210(", "\x87\xCF"},
#line 802 "trad2simp.in"
    {"o\261", "\x6D\xC0"},
#line 1575 "trad2simp.in"
    {"\212\274", "\x8C\x0A"},
#line 59 "trad2simp.in"
    {"P\305", "\x4E\xC5"},
#line 2049 "trad2simp.in"
    {"\224c", "\x95\x73"},
#line 1701 "trad2simp.in"
    {"\216`", "\x8D\xD6"},
#line 1497 "trad2simp.in"
    {"\212)", "\x8B\xBB"},
#line 2282 "trad2simp.in"
    {"\232[", "\x9A\x7F"},
#line 1954 "trad2simp.in"
    {"\222\274", "\x95\x09"},
#line 597 "trad2simp.in"
    {"e*", "\x64\x05"},
#line 1559 "trad2simp.in"
    {"\212\317", "\x8B\xF9"},
#line 1645 "trad2simp.in"
    {"\214\274", "\x8D\x34"},
#line 2320 "trad2simp.in"
    {"\232e", "\x9A\xA5"},
#line 27 "trad2simp.in"
    {"Qi", "\x4E\x24"},
#line 1549 "trad2simp.in"
    {"\212\244", "\x8B\xEF"},
#line 1905 "trad2simp.in"
    {"\222\317", "\x94\xD7"},
#line 1360 "trad2simp.in"
    {"ti", "\x83\xB9"},
#line 2088 "trad2simp.in"
    {"\233)", "\x96\x0B"},
#line 196 "trad2simp.in"
    {"X\323", "\x53\x8B"},
#line 905 "trad2simp.in"
    {"s{", "\x73\x2E"},
#line 885 "trad2simp.in"
    {"sA", "\x72\xB8"},
#line 1083 "trad2simp.in"
    {"|\347", "\x7C\xAE"},
#line 2427 "trad2simp.in"
    {"\234o", "\x9C\xE0"},
#line 2556 "trad2simp.in"
    {"{\304", "\x83\x03"},
#line 339 "trad2simp.in"
    {"\212\207", "\x59\x38"},
#line 729 "trad2simp.in"
    {"k\300", "\x6B\xC1"},
#line 677 "trad2simp.in"
    {"k\022", "\x68\x3E"},
#line 1796 "trad2simp.in"
    {"\220\\", "\x90\x0A"},
#line 936 "trad2simp.in"
    {"OX", "\x75\x72"},
#line 1294 "trad2simp.in"
    {"\201\203", "\x81\x7D"},
#line 1136 "trad2simp.in"
    {"}\223", "\x7E\xCF"},
#line 1055 "trad2simp.in"
    {"{\311", "\x7B\x51"},
#line 1922 "trad2simp.in"
    {"\222\223", "\x94\xE8"},
#line 1289 "trad2simp.in"
    {"\221\203", "\x81\x4C"},
#line 658 "trad2simp.in"
    {"i\315", "\x67\xAA"},
#line 903 "trad2simp.in"
    {"\214\223", "\x73\x2B"},
#line 2067 "trad2simp.in"
    {"\225\214", "\x95\xF6"},
#line 1804 "trad2simp.in"
    {"\221\024", "\x90\xAC"},
#line 2342 "trad2simp.in"
    {"\233\223", "\x9C\x8A"},
#line 1330 "trad2simp.in"
    {"\205\230", "\x83\x59"},
#line 892 "trad2simp.in"
    {"r\371", "\x72\xED"},
#line 2028 "trad2simp.in"
    {"\223\303", "\x95\x5E"},
#line 571 "trad2simp.in"
    {"d\223", "\x63\x20"},
#line 522 "trad2simp.in"
    {"a\244", "\x61\x24"},
#line 705 "trad2simp.in"
    {"j\273", "\x69\xDB"},
#line 1056 "trad2simp.in"
    {"{\363", "\x7B\x5A"},
#line 2039 "trad2simp.in"
    {"\224y", "\x95\x69"},
#line 1663 "trad2simp.in"
    {"\215\020", "\x8D\x46"},
#line 1909 "trad2simp.in"
    {"\224:", "\x94\xDB"},
#line 1764 "trad2simp.in"
    {"\217/", "\x8F\x91"},
#line 1674 "trad2simp.in"
    {"\215\024", "\x8D\x51"},
#line 1426 "trad2simp.in"
    {"\221\301", "\x88\x45"},
#line 69 "trad2simp.in"
    {"g\003", "\x4F\x1A"},
#line 186 "trad2simp.in"
    {"v\347", "\x53\x62"},
#line 842 "trad2simp.in"
    {"p\025", "\x6F\xD2"},
#line 253 "trad2simp.in"
    {"V)", "\x54\xD7"},
#line 1004 "trad2simp.in"
    {"x\375", "\x78\x57"},
#line 2183 "trad2simp.in"
    {"\230N", "\x98\x9A"},
#line 1368 "trad2simp.in"
    {"\205m", "\x84\x27"},
#line 2129 "trad2simp.in"
    {"\236\364", "\x97\x09"},
#line 990 "trad2simp.in"
    {"x\255", "\x78\x00"},
#line 1297 "trad2simp.in"
    {"\201\342", "\x81\xDC"},
#line 201 "trad2simp.in"
    {"S\264", "\x53\xA3"},
#line 1517 "trad2simp.in"
    {"\212T", "\x8B\xCF"},
#line 286 "trad2simp.in"
    {"W\030", "\x56\xE2"},
#line 1974 "trad2simp.in"
    {"\223)", "\x95\x20"},
#line 1414 "trad2simp.in"
    {"\206\373", "\x87\x15"},
#line 221 "trad2simp.in"
    {"V\207", "\x54\x13"},
#line 1845 "trad2simp.in"
    {"\221\371", "\x94\x95"},
#line 1304 "trad2simp.in"
    {"\214T", "\x82\x73"},
#line 2451 "trad2simp.in"
    {"\235\033", "\x9E\x33"},
#line 844 "trad2simp.in"
    {"n\305", "\x70\x6D"},
#line 1238 "trad2simp.in"
    {"~\230", "\x7F\x35"},
#line 2204 "trad2simp.in"
    {"\230\274", "\x98\xD5"},
#line 2413 "trad2simp.in"
    {"\234\037", "\x9C\xD1"},
#line 351 "trad2simp.in"
    {"Z\327", "\x59\xAA"},
#line 893 "trad2simp.in"
    {"sE", "\x72\xEE"},
#line 2532 "trad2simp.in"
    {"\237R", "\x9F\x7F"},
#line 1576 "trad2simp.in"
    {"\213\000", "\x8C\x0B"},
#line 1532 "trad2simp.in"
    {"\212\225", "\x8B\xDE"},
#line 2043 "trad2simp.in"
    {"\2243", "\x95\x6D"},
#line 2432 "trad2simp.in"
    {"\234\351", "\x9E\x20"},
#line 1482 "trad2simp.in"
    {"\212\026", "\x8B\xAB"},
#line 99 "trad2simp.in"
    {"P\265", "\x50\x3A"},
#line 397 "trad2simp.in"
    {"\\m", "\x5C\x43"},
#line 1117 "trad2simp.in"
    {"}\026", "\x7E\xBC"},
#line 1273 "trad2simp.in"
    {"\201V", "\x80\xE8"},
#line 2496 "trad2simp.in"
    {"\235\272", "\x9E\x61"},
#line 1049 "trad2simp.in"
    {"{M", "\x7B\x0B"},
#line 2261 "trad2simp.in"
    {"\231L", "\x99\x94"},
#line 1026 "trad2simp.in"
    {"z\010", "\x79\xC6"},
#line 2287 "trad2simp.in"
    {"\232U", "\x9A\x84"},
#line 395 "trad2simp.in"
    {"v\341", "\x5C\x3D"},
#line 1327 "trad2simp.in"
    {"~m", "\x83\x27"},
#line 2239 "trad2simp.in"
    {"\231\026", "\x99\x7E"},
#line 210 "trad2simp.in"
    {"\226\331", "\x53\xCC"},
#line 602 "trad2simp.in"
    {"d\026", "\x64\x47"},
#line 919 "trad2simp.in"
    {"t\317", "\x73\xD1"},
#line 1068 "trad2simp.in"
    {"|\036", "\x7B\xAA"},
#line 1808 "trad2simp.in"
    {"\2210", "\x90\xBB"},
#line 1444 "trad2simp.in"
    {"\2118", "\x89\x1B"},
#line 1731 "trad2simp.in"
    {"\217_", "\x8F\x70"},
#line 2084 "trad2simp.in"
    {"\225\315", "\x96\x07"},
#line 213 "trad2simp.in"
    {"eX", "\x53\xD9"},
#line 197 "trad2simp.in"
    {"S\255", "\x53\x8C"},
#line 1889 "trad2simp.in"
    {"\222Q", "\x94\xC2"},
#line 1091 "trad2simp.in"
    {"}\005", "\x7E\xA2"},
#line 2558 "trad2simp.in"
    {"Q\207", "\x6C\xA1"},
#line 848 "trad2simp.in"
    {"q\346", "\x70\x7F"},
#line 1814 "trad2simp.in"
    {"\221\006", "\x90\xD3"},
#line 2214 "trad2simp.in"
    {"\231Q", "\x99\x65"},
#line 62 "trad2simp.in"
    {"P\011", "\x4E\xD3"},
#line 536 "trad2simp.in"
    {"b)", "\x62\x2C"},
#line 586 "trad2simp.in"
    {"dQ", "\x63\xB4"},
#line 2237 "trad2simp.in"
    {"\231\005", "\x99\x7C"},
#line 1834 "trad2simp.in"
    {"\221\327", "\x94\x8A"},
#line 2488 "trad2simp.in"
    {"\235\273", "\x9E\x58"},
#line 2438 "trad2simp.in"
    {"\235\011", "\x9E\x26"},
#line 1263 "trad2simp.in"
    {"\201x", "\x80\xA0"},
#line 639 "trad2simp.in"
    {"\210S", "\x67\x2F"},
#line 1995 "trad2simp.in"
    {"\223T", "\x95\x37"},
#line 340 "trad2simp.in"
    {"Y>", "\x59\x39"},
#line 1408 "trad2simp.in"
    {"\210;", "\x86\xEE"},
#line 1753 "trad2simp.in"
    {"\217\033", "\x8F\x86"},
#line 282 "trad2simp.in"
    {"V\225", "\x56\x5C"},
#line 212 "trad2simp.in"
    {"\213\212", "\x53\xD8"},
#line 1807 "trad2simp.in"
    {"\2214", "\x90\xBA"},
#line 266 "trad2simp.in"
    {"V\026", "\x55\x67"},
#line 694 "trad2simp.in"
    {"i\350", "\x69\x01"},
#line 958 "trad2simp.in"
    {"v\036", "\x76\x17"},
#line 2447 "trad2simp.in"
    {"\235&", "\x9E\x2F"},
#line 136 "trad2simp.in"
    {"n\033", "\x51\xCF"},
#line 1305 "trad2simp.in"
    {"\202x", "\x82\x79"},
#line 319 "trad2simp.in"
    {"X\026", "\x57\xB4"},
#line 2112 "trad2simp.in"
    {"\226\264", "\x96\x47"},
#line 1948 "trad2simp.in"
    {"\222\345", "\x95\x03"},
#line 403 "trad2simp.in"
    {"]\274", "\x5C\x7F"},
#line 1072 "trad2simp.in"
    {"|C", "\x7B\xEE"},
#line 359 "trad2simp.in"
    {"[L", "\x5A\x08"},
#line 713 "trad2simp.in"
    {"j\323", "\x6A\x79"},
#line 1336 "trad2simp.in"
    {"\205\272", "\x83\x60"},
#line 803 "trad2simp.in"
    {"m\365", "\x6E\x0A"},
#line 1433 "trad2simp.in"
    {"\211\030", "\x88\x86"},
#line 2181 "trad2simp.in"
    {"\230L", "\x98\x98"},
#line 1312 "trad2simp.in"
    {"\204\357", "\x82\xC1"},
#line 1258 "trad2simp.in"
    {"\200y", "\x80\x4D"},
#line 836 "trad2simp.in"
    {"p2", "\x6F\x4B"},
#line 2444 "trad2simp.in"
    {"\236\025", "\x9E\x2C"},
#line 784 "trad2simp.in"
    {"o\303", "\x6D\x53"},
#line 1082 "trad2simp.in"
    {"|\336", "\x7C\xAA"},
#line 1818 "trad2simp.in"
    {"\221\236", "\x91\x5D"},
#line 831 "trad2simp.in"
    {"pX", "\x6E\xE9"},
#line 406 "trad2simp.in"
    {"]\207", "\x5C\x96"},
#line 300 "trad2simp.in"
    {"X\005", "\x57\x5A"},
#line 1782 "trad2simp.in"
    {"\220\201", "\x8F\xC8"},
#line 112 "trad2simp.in"
    {"\236\350", "\x51\x5A"},
#line 538 "trad2simp.in"
    {"}.", "\x62\x4E"},
#line 478 "trad2simp.in"
    {"_\271", "\x5F\x7B"},
#line 661 "trad2simp.in"
    {"j\303", "\x67\xDC"},
#line 1211 "trad2simp.in"
    {"~\033", "\x7F\x1A"},
#line 2407 "trad2simp.in"
    {"\234 ", "\x9C\xCB"},
#line 110 "trad2simp.in"
    {"QL", "\x51\x51"},
#line 1508 "trad2simp.in"
    {"\213X", "\x8B\xC6"},
#line 1515 "trad2simp.in"
    {"\212^", "\x8B\xCD"},
#line 2081 "trad2simp.in"
    {"\233.", "\x96\x04"},
#line 2311 "trad2simp.in"
    {"\232A", "\x9A\x9C"},
#line 1151 "trad2simp.in"
    {"}^", "\x7E\xDE"},
#line 2035 "trad2simp.in"
    {"\224e", "\x95\x65"},
#line 1881 "trad2simp.in"
    {"\222^", "\x94\xBA"},
#line 1744 "trad2simp.in"
    {"\217\011", "\x8F\x7D"},
#line 46 "trad2simp.in"
    {"N\202", "\x4E\x71"},
#line 1788 "trad2simp.in"
    {"\220U", "\x8F\xDD"},
#line 2150 "trad2simp.in"
    {"\230\005", "\x98\x79"},
#line 23 "trad2simp.in"
    {"S\342", "\x4E\x1B"},
#line 234 "trad2simp.in"
    {"T\341", "\x54\x58"},
#line 747 "trad2simp.in"
    {"l\222", "\x6C\xA1"},
#line 2252 "trad2simp.in"
    {"\231^", "\x99\x8B"},
#line 1438 "trad2simp.in"
    {"\211`", "\x88\xC6"},
#line 598 "trad2simp.in"
    {"e\034", "\x64\x3A"},
#line 164 "trad2simp.in"
    {"R\207", "\x52\x67"},
#line 840 "trad2simp.in"
    {"p>", "\x6F\x9C"},
#line 1454 "trad2simp.in"
    {"\211\230", "\x89\xC7"},
#line 765 "trad2simp.in"
    {"o\244", "\x6C\xFD"},
#line 1129 "trad2simp.in"
    {"}B", "\x7E\xC8"},
#line 971 "trad2simp.in"
    {"v\336", "\x76\xCF"},
#line 1754 "trad2simp.in"
    {"\217&", "\x8F\x87"},
#line 1324 "trad2simp.in"
    {"\205&", "\x83\x11"},
#line 1606 "trad2simp.in"
    {"\213>", "\x8C\x29"},
#line 790 "trad2simp.in"
    {"o\207", "\x6D\x9D"},
#line 829 "trad2simp.in"
    {"pd", "\x6E\xE6"},
#line 74 "trad2simp.in"
    {"P\267", "\x4F\x24"},
#line 1282 "trad2simp.in"
    {"\201\277", "\x81\x13"},
#line 794 "trad2simp.in"
    {"n&", "\x6D\xA1"},
#line 1447 "trad2simp.in"
    {"\211t", "\x89\x55"},
#line 917 "trad2simp.in"
    {"s\250", "\x73\xCF"},
#line 2357 "trad2simp.in"
    {"\234`", "\x9C\x99"},
#line 1783 "trad2simp.in"
    {"\220K", "\x8F\xD0"},
#line 189 "trad2simp.in"
    {"\210[", "\x53\x6B"},
#line 1792 "trad2simp.in"
    {"\220\025", "\x8F\xF3"},
#line 878 "trad2simp.in"
    {"r\233", "\x72\x66"},
#line 2215 "trad2simp.in"
    {"\230\345", "\x99\x66"},
#line 260 "trad2simp.in"
    {"V.", "\x55\x20"},
#line 1362 "trad2simp.in"
    {"\204\364", "\x83\xBC"},
#line 324 "trad2simp.in"
    {"W\265", "\x57\xEF"},
#line 1812 "trad2simp.in"
    {"\2216", "\x90\xD0"},
#line 1210 "trad2simp.in"
    {"~\011", "\x7F\x19"},
#line 1836 "trad2simp.in"
    {"\221\325", "\x94\x8C"},
#line 1557 "trad2simp.in"
    {"\212\313", "\x8B\xF7"},
#line 491 "trad2simp.in"
    {"`\265", "\x60\x05"},
#line 1168 "trad2simp.in"
    {"}\313", "\x7E\xEF"},
#line 2309 "trad2simp.in"
    {"\2327", "\x9A\x9A"},
#line 1976 "trad2simp.in"
    {"\223.", "\x95\x22"},
#line 2502 "trad2simp.in"
    {"\235\323", "\x9E\x67"},
#line 1837 "trad2simp.in"
    {"\221\367", "\x94\x8D"},
#line 1286 "trad2simp.in"
    {"\201a", "\x81\x36"},
#line 362 "trad2simp.in"
    {"Z\373", "\x5A\x34"},
#line 1377 "trad2simp.in"
    {"\206:", "\x84\xE0"},
#line 1053 "trad2simp.in"
    {"|`", "\x7B\x3C"},
#line 1593 "trad2simp.in"
    {"\213\016", "\x8C\x1C"},
#line 2358 "trad2simp.in"
    {"\234m", "\x9C\x9A"},
#line 572 "trad2simp.in"
    {"d\313", "\x63\x21"},
#line 2268 "trad2simp.in"
    {"\232E", "\x9A\x71"},
#line 2175 "trad2simp.in"
    {"\230.", "\x98\x92"},
#line 888 "trad2simp.in"
    {"\236\205", "\x72\xCD"},
#line 643 "trad2simp.in"
    {"\226\334", "\x67\x42"},
#line 739 "trad2simp.in"
    {"l3", "\x6C\x32"},
#line 1396 "trad2simp.in"
    {"\226\326", "\x86\x7D"},
#line 248 "trad2simp.in"
    {"U^", "\x54\xD1"},
#line 2569 "trad2simp.in"
    {"\201\337", "\x81\x0F"},
#line 767 "trad2simp.in"
    {"oT", "\x6D\x01"},
#line 1938 "trad2simp.in"
    {"\224\022", "\x94\xF9"},
#line 2032 "trad2simp.in"
    {"\224\201", "\x95\x62"},
#line 1077 "trad2simp.in"
    {"\230^", "\x7C\x7B"},
#line 1337 "trad2simp.in"
    {"\205i", "\x83\x61"},
#line 1315 "trad2simp.in"
    {"\203\247", "\x82\xCB"},
#line 868 "trad2simp.in"
    {"q\261", "\x70\xED"},
#line 2056 "trad2simp.in"
    {"\225\206", "\x95\xEB"},
#line 1385 "trad2simp.in"
    {"\206\004", "\x85\x72"},
#line 1410 "trad2simp.in"
    {"\206\372", "\x86\xF1"},
#line 1916 "trad2simp.in"
    {"\222\226", "\x94\xE2"},
#line 1094 "trad2simp.in"
    {"}\007", "\x7E\xA5"},
#line 2332 "trad2simp.in"
    {"\233w", "\x9C\x7F"},
#line 2316 "trad2simp.in"
    {"\232>", "\x9A\xA1"},
#line 1422 "trad2simp.in"
    {"\210\021", "\x87\x7E"},
#line 1527 "trad2simp.in"
    {"\212|", "\x8B\xD9"},
#line 1024 "trad2simp.in"
    {"\226\342", "\x79\xBB"},
#line 1345 "trad2simp.in"
    {"\204\300", "\x83\x6A"},
#line 2301 "trad2simp.in"
    {"\232\015", "\x9A\x92"},
#line 1531 "trad2simp.in"
    {"\212q", "\x8B\xDD"},
#line 1152 "trad2simp.in"
    {"}q", "\x7E\xDF"},
#line 2498 "trad2simp.in"
    {"\235\274", "\x9E\x63"},
#line 1292 "trad2simp.in"
    {"\201\251", "\x81\x7B"},
#line 2322 "trad2simp.in"
    {"\232d", "\x9A\xA7"},
#line 1397 "trad2simp.in"
    {"\207f", "\x86\x7E"},
#line 2155 "trad2simp.in"
    {"\230g", "\x98\x7E"},
#line 623 "trad2simp.in"
    {"fB", "\x65\xF6"},
#line 317 "trad2simp.in"
    {"X\313", "\x57\xB1"},
#line 526 "trad2simp.in"
    {"a\226", "\x61\x6D"},
#line 1777 "trad2simp.in"
    {"\220\212", "\x8F\xB9"},
#line 2477 "trad2simp.in"
    {"\235\244", "\x9E\x4D"},
#line 2346 "trad2simp.in"
    {"\234_", "\x9C\x8E"},
#line 1255 "trad2simp.in"
    {"\200v", "\x80\x42"},
#line 764 "trad2simp.in"
    {"oQ", "\x6C\xFC"},
#line 1172 "trad2simp.in"
    {"~i", "\x7E\xF3"},
#line 1237 "trad2simp.in"
    {"~s", "\x7F\x34"},
#line 1217 "trad2simp.in"
    {"~\217", "\x7F\x20"},
#line 2443 "trad2simp.in"
    {"\235\207", "\x9E\x2B"},
#line 476 "trad2simp.in"
    {"_`", "\x5F\x5F"},
#line 1390 "trad2simp.in"
    {"\206\\", "\x86\x4F"},
#line 120 "trad2simp.in"
    {"Qg", "\x51\x85"},
#line 963 "trad2simp.in"
    {"vm", "\x76\x3F"},
#line 2475 "trad2simp.in"
    {"\235\223", "\x9E\x4B"},
#line 2300 "trad2simp.in"
    {"\232\016", "\x9A\x91"},
#line 1494 "trad2simp.in"
    {"\2121", "\x8B\xB8"},
#line 652 "trad2simp.in"
    {"j\005", "\x67\x9E"},
#line 1123 "trad2simp.in"
    {"}1", "\x7E\xC2"},
#line 1519 "trad2simp.in"
    {"\213o", "\x8B\xD1"},
#line 361 "trad2simp.in"
    {"Z\247", "\x5A\x32"},
#line 1820 "trad2simp.in"
    {"\221\254", "\x91\x71"},
#line 1456 "trad2simp.in"
    {"\211\272", "\x89\xC9"},
#line 1409 "trad2simp.in"
    {"\207\304", "\x86\xF0"},
#line 2068 "trad2simp.in"
    {"`\266", "\x95\xF7"},
#line 1809 "trad2simp.in"
    {"\2331", "\x90\xC1"},
#line 1075 "trad2simp.in"
    {"|_", "\x7C\x41"},
#line 1085 "trad2simp.in"
    {"\2311", "\x7C\xC7"},
#line 1746 "trad2simp.in"
    {"\217N", "\x8F\x7F"},
#line 880 "trad2simp.in"
    {"r\247", "\x72\x7A"},
#line 1946 "trad2simp.in"
    {"\223\226", "\x95\x01"},
#line 1334 "trad2simp.in"
    {"\205N", "\x83\x5E"},
#line 1786 "trad2simp.in"
    {"\2202", "\x8F\xDB"},
#line 1983 "trad2simp.in"
    {"\223\007", "\x95\x2B"},
#line 481 "trad2simp.in"
    {"y\246", "\x5F\xA1"},
#line 1509 "trad2simp.in"
    {"\212W", "\x8B\xC7"},
#line 1267 "trad2simp.in"
    {"\201k", "\x80\xBF"},
#line 733 "trad2simp.in"
    {"l\010", "\x6B\xE1"},
#line 134 "trad2simp.in"
    {"m\274", "\x51\xC9"},
#line 1874 "trad2simp.in"
    {"\222W", "\x94\xB3"},
#line 1907 "trad2simp.in"
    {"\224\003", "\x94\xD9"},
#line 2111 "trad2simp.in"
    {"\226x", "\x96\x46"},
#line 1712 "trad2simp.in"
    {"\216\223", "\x8E\x2C"},
#line 1323 "trad2simp.in"
    {"\206\"", "\x83\x0F"},
#line 2149 "trad2simp.in"
    {"\230\007", "\x98\x78"},
#line 1005 "trad2simp.in"
    {"x\321", "\x78\x59"},
#line 712 "trad2simp.in"
    {"j\345", "\x6A\x71"},
#line 2211 "trad2simp.in"
    {"\231W", "\x98\xE8"},
#line 1755 "trad2simp.in"
    {"\217)", "\x8F\x88"},
#line 1935 "trad2simp.in"
    {"\222\200", "\x94\xF6"},
#line 1539 "trad2simp.in"
    {"\212r", "\x8B\xE5"},
#line 343 "trad2simp.in"
    {"YP", "\x59\x42"},
#line 548 "trad2simp.in"
    {"b\313", "\x62\x9B"},
#line 25 "trad2simp.in"
    {"}r", "\x4E\x1D"},
#line 1302 "trad2simp.in"
    {"\202k", "\x82\x3B"},
#line 1407 "trad2simp.in"
    {"\207\366", "\x86\xCF"},
#line 696 "trad2simp.in"
    {"i\347", "\x69\x20"},
#line 766 "trad2simp.in"
    {"m\207", "\x6C\xFE"},
#line 2162 "trad2simp.in"
    {"\230q", "\x98\x85"},
#line 960 "trad2simp.in"
    {"v_", "\x76\x2A"},
#line 949 "trad2simp.in"
    {"u\331", "\x75\xC9"},
#line 1181 "trad2simp.in"
    {"}\234", "\x7E\xFC"},
#line 1002 "trad2simp.in"
    {"x\251", "\x78\x55"},
#line 1427 "trad2simp.in"
    {"\222\234", "\x88\x54"},
#line 1276 "trad2simp.in"
    {"\201\240", "\x80\xF6"},
#line 835 "trad2simp.in"
    {"p\037", "\x6F\x47"},
#line 862 "trad2simp.in"
    {"qi", "\x70\xE6"},
#line 1081 "trad2simp.in"
    {"|\265", "\x7C\xA4"},
#line 2356 "trad2simp.in"
    {"\233\234", "\x9C\x98"},
#line 554 "trad2simp.in"
    {"X1", "\x62\xA5"},
#line 2341 "trad2simp.in"
    {"\233\213", "\x9C\x89"},
#line 2047 "trad2simp.in"
    {"\224?", "\x95\x71"},
#line 2403 "trad2simp.in"
    {"\234\011", "\x9C\xC7"},
#line 846 "trad2simp.in"
    {"\227H", "\x70\x75"},
#line 1392 "trad2simp.in"
    {"\206[", "\x86\x5A"},
#line 1437 "trad2simp.in"
    {"\210\335", "\x88\xC5"},
#line 1601 "trad2simp.in"
    {"\213\027", "\x8C\x24"},
#line 1293 "trad2simp.in"
    {"\227f", "\x81\x7C"},
#line 1419 "trad2simp.in"
    {"\207\354", "\x87\x49"},
#line 940 "trad2simp.in"
    {"v'", "\x75\x9F"},
#line 415 "trad2simp.in"
    {"]\313", "\x5C\xBF"},
#line 531 "trad2simp.in"
    {"b\007", "\x62\x06"},
#line 693 "trad2simp.in"
    {"k\036", "\x68\xC2"},
#line 1009 "trad2simp.in"
    {"y\031", "\x78\x8D"},
#line 1161 "trad2simp.in"
    {"}\210", "\x7E\xE8"},
#line 247 "trad2simp.in"
    {"\227\377", "\x54\xCD"},
#line 2467 "trad2simp.in"
    {"\235Q", "\x9E\x43"},
#line 787 "trad2simp.in"
    {"XW", "\x6D\x82"},
#line 241 "trad2simp.in"
    {"V\200", "\x54\x9B"},
#line 1526 "trad2simp.in"
    {"\212p", "\x8B\xD8"},
#line 1700 "trad2simp.in"
    {"\216L", "\x8D\xC4"},
#line 1143 "trad2simp.in"
    {"}p", "\x7E\xD6"},
#line 337 "trad2simp.in"
    {"Y ", "\x59\x1F"},
#line 1716 "trad2simp.in"
    {"\216\225", "\x8E\x70"},
#line 254 "trad2simp.in"
    {"Vr", "\x54\xD9"},
#line 1239 "trad2simp.in"
    {"\177L", "\x7F\x42"},
#line 578 "trad2simp.in"
    {"d\210", "\x63\x5E"},
#line 969 "trad2simp.in"
    {"v\272", "\x76\xB1"},
#line 2192 "trad2simp.in"
    {"~\207", "\x98\xA3"},
#line 1827 "trad2simp.in"
    {"\224R", "\x92\x74"},
#line 2142 "trad2simp.in"
    {"\227\331", "\x97\xEA"},
#line 1622 "trad2simp.in"
    {"\214\235", "\x8D\x1D"},
#line 1773 "trad2simp.in"
    {"\217T", "\x8F\x9A"},
#line 1225 "trad2simp.in"
    {"~\223", "\x7F\x28"},
#line 748 "trad2simp.in"
    {"pC", "\x6C\xA3"},
#line 1178 "trad2simp.in"
    {"}\257", "\x7E\xF9"},
#line 2190 "trad2simp.in"
    {"\230Y", "\x98\xA1"},
#line 993 "trad2simp.in"
    {"xh", "\x78\x17"},
#line 2045 "trad2simp.in"
    {"\2242", "\x95\x6F"},
#line 1697 "trad2simp.in"
    {"\215\262", "\x8D\xB1"},
#line 2131 "trad2simp.in"
    {"\227Z", "\x97\x53"},
#line 1639 "trad2simp.in"
    {"\214\257", "\x8D\x2E"},
#line 306 "trad2simp.in"
    {"X\234", "\x57\x60"},
#line 2136 "trad2simp.in"
    {"\227\311", "\x97\xAF"},
#line 1500 "trad2simp.in"
    {"\212-", "\x8B\xBE"},
#line 1693 "trad2simp.in"
    {"\215l", "\x8D\x6A"},
#line 86 "trad2simp.in"
    {"P\345", "\x4F\xA5"},
#line 1451 "trad2simp.in"
    {"\211\217", "\x89\xC4"},
#line 1278 "trad2simp.in"
    {"\201\276", "\x81\x0D"},
#line 876 "trad2simp.in"
    {"r:", "\x72\x37"},
#line 1348 "trad2simp.in"
    {"\204R", "\x83\x6D"},
#line 2454 "trad2simp.in"
    {"\235\345", "\x9E\x36"},
#line 111 "trad2simp.in"
    {"QW", "\x51\x56"},
#line 2135 "trad2simp.in"
    {"\227\275", "\x97\x92"},
#line 1553 "trad2simp.in"
    {"\212\221", "\x8B\xF3"},
#line 1585 "trad2simp.in"
    {"\212\344", "\x8C\x14"},
#line 719 "trad2simp.in"
    {"kP", "\x6B\x27"},
#line 208 "trad2simp.in"
    {"\227I", "\x53\xC6"},
#line 2539 "trad2simp.in"
    {"\237`", "\x9F\x86"},
#line 1917 "trad2simp.in"
    {"\222\221", "\x94\xE3"},
#line 1949 "trad2simp.in"
    {"\222\344", "\x95\x04"},
#line 2236 "trad2simp.in"
    {"\231\017", "\x99\x7B"},
#line 1642 "trad2simp.in"
    {"\214\344", "\x8D\x31"},
#line 1464 "trad2simp.in"
    {"\211\267", "\x89\xD1"},
#line 2345 "trad2simp.in"
    {"\233\221", "\x9C\x8D"},
#line 2382 "trad2simp.in"
    {"\233\344", "\x9C\xB2"},
#line 1843 "trad2simp.in"
    {"\221\343", "\x94\x93"},
#line 1530 "trad2simp.in"
    {"\212u", "\x8B\xDC"},
#line 914 "trad2simp.in"
    {"tr", "\x73\xB1"},
#line 820 "trad2simp.in"
    {"ow", "\x6E\xD7"},
#line 1128 "trad2simp.in"
    {"~T", "\x7E\xC7"},
#line 182 "trad2simp.in"
    {"\203\357", "\x53\x4E"},
#line 1492 "trad2simp.in"
    {"\212\035", "\x8B\xB6"},
#line 1749 "trad2simp.in"
    {"\217\005", "\x8F\x82"},
#line 1109 "trad2simp.in"
    {"}\035", "\x7E\xB4"},
#line 1015 "trad2simp.in"
    {"y\256", "\x79\x3C"},
#line 1803 "trad2simp.in"
    {"\221:", "\x90\x9D"},
#line 2002 "trad2simp.in"
    {"\223p", "\x95\x3E"},
#line 2110 "trad2simp.in"
    {"\226\233", "\x96\x45"},
#line 142 "trad2simp.in"
    {"a\221", "\x51\xED"},
#line 834 "trad2simp.in"
    {"p ", "\x6F\x46"},
#line 2071 "trad2simp.in"
    {"\225\250", "\x95\xFA"},
#line 576 "trad2simp.in"
    {"c\356", "\x63\x25"},
#line 761 "trad2simp.in"
    {"p\030", "\x6C\xF8"},
#line 2124 "trad2simp.in"
    {"\226\333", "\x96\xCF"},
#line 334 "trad2simp.in"
    {"\206U", "\x59\x04"},
#line 1054 "trad2simp.in"
    {"|i", "\x7B\x3E"},
#line 985 "trad2simp.in"
    {"w\332", "\x77\xA9"},
#line 2195 "trad2simp.in"
    {"\230p", "\x98\xA6"},
#line 1600 "trad2simp.in"
    {"\213 ", "\x8C\x23"},
#line 1493 "trad2simp.in"
    {"\212%", "\x8B\xB7"},
#line 2462 "trad2simp.in"
    {"\236\036", "\x9E\x3E"},
#line 634 "trad2simp.in"
    {"f\210", "\x66\x55"},
#line 1534 "trad2simp.in"
    {"\212n", "\x8B\xE0"},
#line 2093 "trad2simp.in"
    {"\225\341", "\x96\x10"},
#line 1867 "trad2simp.in"
    {"\222%", "\x94\xAC"},
#line 1838 "trad2simp.in"
    {"\221\372", "\x94\x8E"},
#line 804 "trad2simp.in"
    {"m\345", "\x6E\x0C"},
#line 2458 "trad2simp.in"
    {"\235B", "\x9E\x3A"},
#line 1349 "trad2simp.in"
    {"\204d", "\x83\x6E"},
#line 618 "trad2simp.in"
    {"\233%", "\x65\x97"},
#line 50 "trad2simp.in"
    {"\226\362", "\x4E\x91"},
#line 2315 "trad2simp.in"
    {"\232C", "\x9A\xA0"},
#line 2201 "trad2simp.in"
    {"\230\257", "\x98\xD2"},
#line 1141 "trad2simp.in"
    {"}]", "\x7E\xD4"},
#line 1350 "trad2simp.in"
    {"\205\345", "\x83\x6F"},
#line 933 "trad2simp.in"
    {"\226\373", "\x75\x35"},
#line 2314 "trad2simp.in"
    {"\2328", "\x9A\x9F"},
#line 1420 "trad2simp.in"
    {"\210\015", "\x87\x4E"},
#line 2130 "trad2simp.in"
    {"\227D", "\x97\x2D"},
#line 1654 "trad2simp.in"
    {"\215\004", "\x8D\x3D"},
#line 2006 "trad2simp.in"
    {"\223\344", "\x95\x42"},
#line 338 "trad2simp.in"
    {"\230-", "\x59\x34"},
#line 1854 "trad2simp.in"
    {"\223~", "\x94\x9F"},
#line 1998 "trad2simp.in"
    {"\223~", "\x95\x3A"},
#line 1879 "trad2simp.in"
    {"\222=", "\x94\xB8"},
#line 1522 "trad2simp.in"
    {"\212\204", "\x8B\xD4"},
#line 2160 "trad2simp.in"
    {"\230\017", "\x98\x83"},
#line 292 "trad2simp.in"
    {"W\026", "\x56\xFE"},
#line 391 "trad2simp.in"
    {"Xu", "\x5C\x18"},
#line 964 "trad2simp.in"
    {"vi", "\x76\x5E"},
#line 1380 "trad2simp.in"
    {"\232@", "\x84\xE6"},
#line 1391 "trad2simp.in"
    {"an", "\x86\x51"},
#line 155 "trad2simp.in"
    {"RW", "\x52\x2C"},
#line 1262 "trad2simp.in"
    {"\200\205", "\x80\x83"},
#line 1986 "trad2simp.in"
    {"\223u", "\x95\x2E"},
#line 2536 "trad2simp.in"
    {"\237_", "\x9F\x83"},
#line 322 "trad2simp.in"
    {"X\035", "\x57\xDA"},
#line 1554 "trad2simp.in"
    {"\212\252", "\x8B\xF4"},
#line 1011 "trad2simp.in"
    {"x\343", "\x78\x9C"},
#line 175 "trad2simp.in"
    {"s\033", "\x52\xD0"},
#line 721 "trad2simp.in"
    {"k\177", "\x6B\x81"},
#line 1904 "trad2simp.in"
    {"\222\252", "\x94\xD5"},
#line 1363 "trad2simp.in"
    {"\206\000", "\x84\x1A"},
#line 195 "trad2simp.in"
    {"S\262", "\x53\x89"},
#line 1635 "trad2simp.in"
    {"\214\252", "\x8D\x2A"},
#line 2352 "trad2simp.in"
    {"\233\252", "\x9C\x94"},
#line 723 "trad2simp.in"
    {"k\230", "\x6B\x8B"},
#line 335 "trad2simp.in"
    {"P\231", "\x59\x07"},
#line 2086 "trad2simp.in"
    {"\225\271", "\x96\x09"},
#line 801 "trad2simp.in"
    {"o\200", "\x6D\xA9"},
#line 1452 "trad2simp.in"
    {"\211\223", "\x89\xC5"},
#line 2412 "trad2simp.in"
    {"\234)", "\x9C\xD0"},
#line 774 "trad2simp.in"
    {"n^", "\x6D\x48"},
#line 854 "trad2simp.in"
    {"\236\336", "\x70\xB9"},
#line 1617 "trad2simp.in"
    {"\213t", "\x8C\x34"},
#line 1404 "trad2simp.in"
    {"\207\006", "\x86\xAC"},
#line 242 "trad2simp.in"
    {"V]", "\x54\x9D"},
#line 77 "trad2simp.in"
    {"P\226", "\x4F\x27"},
#line 447 "trad2simp.in"
    {"^W", "\x5E\x3C"},
#line 995 "trad2simp.in"
    {"x\270", "\x78\x1C"},
#line 730 "trad2simp.in"
    {"\217B", "\x6B\xC2"},
#line 2483 "trad2simp.in"
    {"\235w", "\x9E\x53"},
#line 1021 "trad2simp.in"
    {"z\037", "\x79\x80"},
#line 1722 "trad2simp.in"
    {"\216\313", "\x8F\x67"},
#line 271 "trad2simp.in"
    {"V=", "\x55\x74"},
#line 2440 "trad2simp.in"
    {"\235\007", "\x9E\x28"},
#line 1352 "trad2simp.in"
    {"\204\347", "\x83\x9C"},
#line 610 "trad2simp.in"
    {"e\033", "\x64\xBA"},
#line 1415 "trad2simp.in"
    {"\207x", "\x87\x17"},
#line 1975 "trad2simp.in"
    {"\223+", "\x95\x21"},
#line 2144 "trad2simp.in"
    {"\227\334", "\x97\xEC"},
#line 1226 "trad2simp.in"
    {"~.", "\x7F\x29"},
#line 2116 "trad2simp.in"
    {"\226\211", "\x96\x67"},
#line 686 "trad2simp.in"
    {"j\234", "\x68\x67"},
#line 1233 "trad2simp.in"
    {"\227\301", "\x7F\x30"},
#line 283 "trad2simp.in"
    {"R\210", "\x56\x7C"},
#line 788 "trad2simp.in"
    {"ng", "\x6D\x8C"},
#line 460 "trad2simp.in"
    {"\237\220", "\x5E\x9E"},
#line 1142 "trad2simp.in"
    {"~^", "\x7E\xD5"},
#line 2003 "trad2simp.in"
    {"\223\204", "\x95\x3F"},
#line 1364 "trad2simp.in"
    {"\206?", "\x84\x1D"},
#line 1272 "trad2simp.in"
    {"g'", "\x80\xE7"},
#line 85 "trad2simp.in"
    {"O\266", "\x4F\xA3"},
#line 1001 "trad2simp.in"
    {"w\375", "\x78\x45"},
#line 1277 "trad2simp.in"
    {"\201\010", "\x81\x09"},
#line 627 "trad2simp.in"
    {"f]", "\x66\x3C"},
#line 2514 "trad2simp.in"
    {"\236\030", "\x9E\x74"},
#line 1243 "trad2simp.in"
    {"\177w", "\x7F\x62"},
#line 2000 "trad2simp.in"
    {"\223\252", "\x95\x3C"},
#line 2103 "trad2simp.in"
    {"\225\336", "\x96\x1A"},
#line 816 "trad2simp.in"
    {"op", "\x6E\x83"},
#line 1401 "trad2simp.in"
    {"\207\236", "\x86\x82"},
#line 29 "trad2simp.in"
    {"U\252", "\x4E\x27"},
#line 1025 "trad2simp.in"
    {"y\277", "\x79\xC3"},
#line 2526 "trad2simp.in"
    {"\237\011", "\x9F\x0D"},
#line 115 "trad2simp.in"
    {"\202\010", "\x51\x74"},
#line 1000 "trad2simp.in"
    {"x\\", "\x78\x41"},
#line 1689 "trad2simp.in"
    {"\215\010", "\x8D\x60"},
#line 932 "trad2simp.in"
    {"u\014", "\x74\xEF"},
#line 2424 "trad2simp.in"
    {"\234T", "\x9C\xDD"},
#line 470 "trad2simp.in"
    {"_N", "\x5F\x2F"},
#line 718 "trad2simp.in"
    {"k_", "\x6B\x24"},
#line 423 "trad2simp.in"
    {"]\227", "\x5D\x02"},
#line 665 "trad2simp.in"
    {"g\365", "\x68\x05"},
#line 760 "trad2simp.in"
    {"p'", "\x6C\xF7"},
#line 1378 "trad2simp.in"
    {"\205w", "\x84\xE3"},
#line 160 "trad2simp.in"
    {"R\221", "\x52\x42"},
#line 1748 "trad2simp.in"
    {"\217\007", "\x8F\x81"},
#line 22 "trad2simp.in"
    {"im", "\x4E\x1A"},
#line 448 "trad2simp.in"
    {"Q\252", "\x5E\x42"},
#line 1620 "trad2simp.in"
    {"z@", "\x8C\x37"},
#line 1280 "trad2simp.in"
    {"\201\315", "\x81\x10"},
#line 2554 "trad2simp.in"
    {"\210\341", "\x91\xCC"},
#line 2563 "trad2simp.in"
    {"n\226", "\x51\xC6"},
#line 78 "trad2simp.in"
    {"P}", "\x4F\x2A"},
#line 2108 "trad2simp.in"
    {"\226c", "\x96\x35"},
#line 1488 "trad2simp.in"
    {"\213\033", "\x8B\xB2"},
#line 1078 "trad2simp.in"
    {"y\310", "\x7C\x7C"},
#line 789 "trad2simp.in"
    {"o\344", "\x6D\x9B"},
#line 152 "trad2simp.in"
    {"Ru", "\x52\x1B"},
#line 987 "trad2simp.in"
    {"x\357", "\x77\xF6"},
#line 805 "trad2simp.in"
    {"o,", "\x6E\x0D"},
#line 34 "trad2simp.in"
    {"p\272", "\x4E\x3A"},
#line 328 "trad2simp.in"
    {"rF", "\x58\x99"},
#line 2474 "trad2simp.in"
    {"\235r", "\x9E\x4A"},
#line 883 "trad2simp.in"
    {"r\300", "\x72\xB6"},
#line 1450 "trad2simp.in"
    {"\211\216", "\x89\xC3"},
#line 1423 "trad2simp.in"
    {"\207\277", "\x87\x80"},
#line 1060 "trad2simp.in"
    {"|L", "\x7B\x79"},
#line 389 "trad2simp.in"
    {"\\\007", "\x5C\x06"},
#line 799 "trad2simp.in"
    {"o\227", "\x6D\xA7"},
#line 139 "trad2simp.in"
    {"^~", "\x51\xE0"},
#line 642 "trad2simp.in"
    {"k\272", "\x67\x40"},
#line 1093 "trad2simp.in"
    {"~\226", "\x7E\xA4"},
#line 731 "trad2simp.in"
    {"ub", "\x6B\xD5"},
#line 2123 "trad2simp.in"
    {"\226\343", "\x96\xBE"},
#line 154 "trad2simp.in"
    {"R%", "\x52\x2B"},
#line 426 "trad2simp.in"
    {"]\204", "\x5D\x2D"},
#line 161 "trad2simp.in"
    {"Rn", "\x52\x50"},
#line 1416 "trad2simp.in"
    {"\210\037", "\x87\x21"},
#line 2319 "trad2simp.in"
    {"\232_", "\x9A\xA4"},
#line 1160 "trad2simp.in"
    {"~|", "\x7E\xE7"},
#line 763 "trad2simp.in"
    {"p\011", "\x6C\xFB"},
#line 163 "trad2simp.in"
    {"R]", "\x52\x65"},
#line 1265 "trad2simp.in"
    {"\201\201", "\x80\xB7"},
#line 2069 "trad2simp.in"
    {"\225\230", "\x95\xF8"},
#line 342 "trad2simp.in"
    {"Yi", "\x59\x41"},
#line 1418 "trad2simp.in"
    {"\207\310", "\x87\x48"},
#line 1823 "trad2simp.in"
    {"\221\300", "\x91\x7F"},
#line 1806 "trad2simp.in"
    {"\221\022", "\x90\xB9"},
#line 1899 "trad2simp.in"
    {"\2248", "\x94\xCE"},
#line 1787 "trad2simp.in"
    {"\220`", "\x8F\xDC"},
#line 1259 "trad2simp.in"
    {"\200o", "\x80\x54"},
#line 2121 "trad2simp.in"
    {"\226\270", "\x96\xB6"},
#line 2431 "trad2simp.in"
    {"\234\345", "\x9E\x1F"},
#line 1708 "trad2simp.in"
    {"\216\213", "\x8D\xFB"},
#line 839 "trad2simp.in"
    {"p&", "\x6F\x74"},
#line 638 "trad2simp.in"
    {"R\204", "\x67\x2D"},
#line 2139 "trad2simp.in"
    {"\227\314", "\x97\xE7"},
#line 1308 "trad2simp.in"
    {"\177\213", "\x82\x88"},
#line 290 "trad2simp.in"
    {"W\007", "\x56\xF5"},
#line 436 "trad2simp.in"
    {"^%", "\x5E\x05"},
#line 1031 "trad2simp.in"
    {"z`", "\x79\xFE"},
#line 235 "trad2simp.in"
    {"T\274", "\x54\x59"},
#line 101 "trad2simp.in"
    {"P\257", "\x50\x6C"},
#line 453 "trad2simp.in"
    {"\203\212", "\x5E\x84"},
#line 620 "trad2simp.in"
    {"e\267", "\x65\xAD"},
#line 1361 "trad2simp.in"
    {"\235\257", "\x83\xBA"},
#line 2562 "trad2simp.in"
    {"\227b", "\x97\x62"},
#line 1110 "trad2simp.in"
    {"~1", "\x7E\xB5"},
#line 437 "trad2simp.in"
    {"^+", "\x5E\x08"},
#line 468 "trad2simp.in"
    {"_L", "\x5F\x25"},
#line 1393 "trad2simp.in"
    {"\207\362", "\x86\x6B"},
#line 2501 "trad2simp.in"
    {"\236\032", "\x9E\x66"},
#line 2397 "trad2simp.in"
    {"\234.", "\x9C\xC1"},
#line 645 "trad2simp.in"
    {"h\235", "\x67\x61"},
#line 1400 "trad2simp.in"
    {"\207\373", "\x86\x81"},
#line 1245 "trad2simp.in"
    {"\177\210", "\x7F\x81"},
#line 345 "trad2simp.in"
    {"sN", "\x59\x56"},
#line 649 "trad2simp.in"
    {"P\221", "\x67\x70"},
#line 947 "trad2simp.in"
    {"\\Y", "\x75\xB4"},
#line 1032 "trad2simp.in"
    {"zm", "\x7A\x06"},
#line 874 "trad2simp.in"
    {"n\234", "\x71\x98"},
#line 1242 "trad2simp.in"
    {"\177p", "\x7F\x5A"},
#line 2038 "trad2simp.in"
    {"\224 ", "\x95\x68"},
#line 2513 "trad2simp.in"
    {"\236\033", "\x9E\x73"},
#line 1039 "trad2simp.in"
    {"z\305", "\x7A\x8D"},
#line 2452 "trad2simp.in"
    {"\235,", "\x9E\x34"},
#line 2564 "trad2simp.in"
    {"\224\030", "\x94\x9F"},
#line 26 "trad2simp.in"
    {"N\037", "\x4E\x22"},
#line 33 "trad2simp.in"
    {"\201\350", "\x4E\x34"},
#line 1221 "trad2simp.in"
    {"~}", "\x7F\x24"},
#line 87 "trad2simp.in"
    {"Pu", "\x4F\xA6"},
#line 355 "trad2simp.in"
    {"ZA", "\x5A\x04"},
#line 116 "trad2simp.in"
    {"\2032", "\x51\x79"},
#line 1670 "trad2simp.in"
    {"\237N", "\x8D\x4D"},
#line 2405 "trad2simp.in"
    {"\234B", "\x9C\xC9"},
#line 823 "trad2simp.in"
    {"pi", "\x6E\xDF"},
#line 1335 "trad2simp.in"
    {"\205\210", "\x83\x5F"},
#line 574 "trad2simp.in"
    {"c\231", "\x63\x23"},
#line 2450 "trad2simp.in"
    {"\235\035", "\x9E\x32"},
#line 1013 "trad2simp.in"
    {"\225_", "\x78\xB9"},
#line 754 "trad2simp.in"
    {"n\210", "\x6C\xA9"},
#line 2429 "trad2simp.in"
    {"\234g", "\x9C\xE2"},
#line 1191 "trad2simp.in"
    {"~\234", "\x7F\x06"},
#line 1713 "trad2simp.in"
    {"\216\221", "\x8E\x2F"},
#line 1738 "trad2simp.in"
    {"\216\344", "\x8F\x77"},
#line 1832 "trad2simp.in"
    {"\221\335", "\x94\x88"},
#line 31 "trad2simp.in"
    {"r?", "\x4E\x2C"},
#line 1394 "trad2simp.in"
    {"\206o", "\x86\x6C"},
#line 146 "trad2simp.in"
    {"\224\177", "\x51\xFF"},
#line 1775 "trad2simp.in"
    {"\217\257", "\x8F\xA9"},
#line 746 "trad2simp.in"
    {"n\235", "\x6C\x9F"},
#line 1891 "trad2simp.in"
    {"\224`", "\x94\xC4"},
#line 984 "trad2simp.in"
    {"w\236", "\x77\x92"},
#line 48 "trad2simp.in"
    {"e\274", "\x4E\x8E"},
#line 2480 "trad2simp.in"
    {"\235n", "\x9E\x50"},
#line 957 "trad2simp.in"
    {"v.", "\x76\x06"},
#line 2285 "trad2simp.in"
    {"\177u", "\x9A\x82"},
#line 1346 "trad2simp.in"
    {"\205-", "\x83\x6B"},
#line 76 "trad2simp.in"
    {"P+", "\x4F\x26"},
#line 1453 "trad2simp.in"
    {"\211\226", "\x89\xC6"},
#line 2469 "trad2simp.in"
    {"\235]", "\x9E\x45"},
#line 1229 "trad2simp.in"
    {"~\210", "\x7F\x2C"},
#line 336 "trad2simp.in"
    {"\211\007", "\x59\x0D"},
#line 354 "trad2simp.in"
    {"\205\221", "\x59\xDC"},
#line 1759 "trad2simp.in"
    {"\217,", "\x8F\x8C"},
#line 1235 "trad2simp.in"
    {"~p", "\x7F\x32"},
#line 2082 "trad2simp.in"
    {"\225\261", "\x96\x05"},
#line 1050 "trad2simp.in"
    {"{F", "\x7B\x14"},
#line 2037 "trad2simp.in"
    {"\224m", "\x95\x67"},
#line 1307 "trad2simp.in"
    {"{\300", "\x82\x82"},
#line 861 "trad2simp.in"
    {"qY", "\x70\xDF"},
#line 777 "trad2simp.in"
    {"n,", "\x6D\x4B"},
#line 2400 "trad2simp.in"
    {"\234w", "\x9C\xC4"},
#line 939 "trad2simp.in"
    {"vB", "\x75\x97"},
#line 2145 "trad2simp.in"
    {"\227\373", "\x97\xF5"},
#line 1756 "trad2simp.in"
    {"\217\035", "\x8F\x89"},
#line 877 "trad2simp.in"
    {"rX", "\x72\x4D"},
#line 1798 "trad2simp.in"
    {"\220\220", "\x90\x26"},
#line 934 "trad2simp.in"
    {"uk", "\x75\x3B"},
#line 1805 "trad2simp.in"
    {"\220\365", "\x90\xAE"},
#line 1218 "trad2simp.in"
    {"~-", "\x7F\x21"},
#line 1043 "trad2simp.in"
    {"z\272", "\x7A\xA5"},
#line 1615 "trad2simp.in"
    {"\213N", "\x8C\x32"},
#line 312 "trad2simp.in"
    {"Wp", "\x57\xA7"},
#line 2533 "trad2simp.in"
    {"\237T", "\x9F\x80"},
#line 1382 "trad2simp.in"
    {"\206\036", "\x85\x39"},
#line 1876 "trad2simp.in"
    {"\177=", "\x94\xB5"},
#line 2091 "trad2simp.in"
    {"\225\273", "\x96\x0E"},
#line 217 "trad2simp.in"
    {"kN", "\x53\xF9"},
#line 1757 "trad2simp.in"
    {"\217%", "\x8F\x8A"},
#line 1234 "trad2simp.in"
    {"~~", "\x7F\x31"},
#line 1370 "trad2simp.in"
    {"\205%", "\x84\x71"},
#line 39 "trad2simp.in"
    {"p\317", "\x4E\x4C"},
#line 1817 "trad2simp.in"
    {"\2212", "\x90\xF8"},
#line 390 "trad2simp.in"
    {"r>", "\x5C\x14"},
#line 1718 "trad2simp.in"
    {"\216\252", "\x8E\x8F"},
#line 2548 "trad2simp.in"
    {"\237\225", "\x9F\x9B"},
#line 857 "trad2simp.in"
    {"r\015", "\x70\xC1"},
#line 331 "trad2simp.in"
    {"k\274", "\x58\xF3"},
#line 1424 "trad2simp.in"
    {"\207\316", "\x87\xA8"},
#line 1213 "trad2simp.in"
    {"~\035", "\x7F\x1C"},
#line 2366 "trad2simp.in"
    {"\2341", "\x9C\xA2"},
#line 617 "trad2simp.in"
    {"e\225", "\x65\x93"},
#line 722 "trad2simp.in"
    {"k\244", "\x6B\x87"},
#line 605 "trad2simp.in"
    {"e\026", "\x64\x84"},
#line 2133 "trad2simp.in"
    {"\227h", "\x97\x65"},
#line 1006 "trad2simp.in"
    {"y\004", "\x78\x5A"},
#line 1480 "trad2simp.in"
    {"\213\223", "\x8B\xA9"},
#line 1435 "trad2simp.in"
    {"\211r", "\x88\xAD"},
#line 1960 "trad2simp.in"
    {"\224'", "\x95\x0F"},
#line 1395 "trad2simp.in"
    {"\207\343", "\x86\x6E"},
#line 2425 "trad2simp.in"
    {"\234W", "\x9C\xDE"},
#line 211 "trad2simp.in"
    {"v|", "\x53\xD1"},
#line 1448 "trad2simp.in"
    {"\211\213", "\x89\xC1"},
#line 2087 "trad2simp.in"
    {"\225\266", "\x96\x0A"},
#line 961 "trad2simp.in"
    {"vq", "\x76\x2B"},
#line 1214 "trad2simp.in"
    {"~+", "\x7F\x1D"},
#line 494 "trad2simp.in"
    {"~=", "\x60\x3B"},
#line 1690 "trad2simp.in"
    {"\215\015", "\x8D\x61"},
#line 222 "trad2simp.in"
    {"TB", "\x54\x15"},
#line 1299 "trad2simp.in"
    {"\202d", "\x82\x23"},
#line 2061 "trad2simp.in"
    {"\225\217", "\x95\xF0"},
#line 190 "trad2simp.in"
    {"S{", "\x53\x74"},
#line 1063 "trad2simp.in"
    {"|Y", "\x7B\x93"},
#line 1045 "trad2simp.in"
    {"z\266", "\x7A\xAD"},
#line 1794 "trad2simp.in"
    {"\220i", "\x90\x02"},
#line 2323 "trad2simp.in"
    {"\232\317", "\x9A\xC5"},
#line 1799 "trad2simp.in"
    {"\220\217", "\x90\x3B"},
#line 2518 "trad2simp.in"
    {"\236\303", "\x9E\xC4"},
#line 853 "trad2simp.in"
    {"q\227", "\x70\x9D"},
#line 219 "trad2simp.in"
    {"|r", "\x54\x01"},
#line 1035 "trad2simp.in"
    {"zi", "\x7A\x33"},
#line 1613 "trad2simp.in"
    {"\213\225", "\x8C\x30"},
#line 1598 "trad2simp.in"
    {"\213\026", "\x8C\x21"},
#line 1462 "trad2simp.in"
    {"\211\257", "\x89\xCF"},
#line 700 "trad2simp.in"
    {"k\026", "\x69\x84"},
#line 768 "trad2simp.in"
    {"pQ", "\x6D\x12"},
#line 37 "trad2simp.in"
    {"\236\274", "\x4E\x48"},
#line 2076 "trad2simp.in"
    {"\225\323", "\x95\xFF"},
#line 826 "trad2simp.in"
    {"p\005", "\x6E\xE2"},
#line 1959 "trad2simp.in"
    {"\224&", "\x95\x0E"},
#line 297 "trad2simp.in"
    {"\226*", "\x57\x42"},
#line 567 "trad2simp.in"
    {"c\227", "\x63\x1C"},
#line 61 "trad2simp.in"
    {"O\226", "\x4E\xD1"},
#line 1514 "trad2simp.in"
    {"\213\005", "\x8B\xCC"},
#line 1839 "trad2simp.in"
    {"\221\347", "\x94\x8F"},
#line 966 "trad2simp.in"
    {"vr", "\x76\x6B"},
#line 1003 "trad2simp.in"
    {"xd", "\x78\x56"},
#line 2095 "trad2simp.in"
    {"\225\303", "\x96\x12"},
#line 2409 "trad2simp.in"
    {"\234-", "\x9C\xCD"},
#line 740 "trad2simp.in"
    {"_Y", "\x6C\x47"},
#line 1318 "trad2simp.in"
    {"\202\347", "\x82\xCE"},
#line 2125 "trad2simp.in"
    {"\213\216", "\x96\xE0"},
#line 2394 "trad2simp.in"
    {"\234\017", "\x9C\xBE"},
#line 269 "trad2simp.in"
    {"\237g", "\x55\x6E"},
#line 265 "trad2simp.in"
    {"T|", "\x55\x3F"},
#line 346 "trad2simp.in"
    {"Yg", "\x59\x65"},
#line 1781 "trad2simp.in"
    {"\220N", "\x8F\xC7"},
#line 246 "trad2simp.in"
    {"Tq", "\x54\xCC"},
#line 1411 "trad2simp.in"
    {"\207\357", "\x86\xF2"},
#line 2092 "trad2simp.in"
    {"\225\274", "\x96\x0F"},
#line 2304 "trad2simp.in"
    {"\232L", "\x9A\x95"},
#line 2179 "trad2simp.in"
    {"zN", "\x98\x96"},
#line 2310 "trad2simp.in"
    {"\232\026", "\x9A\x9B"},
#line 551 "trad2simp.in"
    {"c\204", "\x62\xA1"},
#line 884 "trad2simp.in"
    {"sw", "\x72\xB7"},
#line 1696 "trad2simp.in"
    {"\215\250", "\x8D\x8B"},
#line 948 "trad2simp.in"
    {"vp", "\x75\xC8"},
#line 1441 "trad2simp.in"
    {"\211]", "\x88\xE3"},
#line 2105 "trad2simp.in"
    {"\226\212", "\x96\x1F"},
#line 2065 "trad2simp.in"
    {"\225\223", "\x95\xF4"},
#line 900 "trad2simp.in"
    {"s|", "\x73\x15"},
#line 1793 "trad2simp.in"
    {"\215\341", "\x8F\xF9"},
#line 1791 "trad2simp.in"
    {"\220\207", "\x8F\xE9"},
#line 2302 "trad2simp.in"
    {"\232\005", "\x9A\x93"},
#line 2411 "trad2simp.in"
    {"\234%", "\x9C\xCF"},
#line 2545 "trad2simp.in"
    {"\237w", "\x9F\x8C"},
#line 2408 "trad2simp.in"
    {"\237\007", "\x9C\xCC"},
#line 1010 "trad2simp.in"
    {"x\347", "\x78\x9B"},
#line 2392 "trad2simp.in"
    {"\234]", "\x9C\xBC"},
#line 53 "trad2simp.in"
    {"u\"", "\x4E\xA7"},
#line 55 "trad2simp.in"
    {"\211\252", "\x4E\xB2"},
#line 976 "trad2simp.in"
    {"v\344", "\x76\xD8"},
#line 216 "trad2simp.in"
    {"\206_", "\x53\xF7"},
#line 2132 "trad2simp.in"
    {"\227\\", "\x97\x59"},
#line 451 "trad2simp.in"
    {"N&", "\x5E\x76"},
#line 1067 "trad2simp.in"
    {"|n", "\x7B\xA9"},
#line 1842 "trad2simp.in"
    {"\221\351", "\x94\x92"},
#line 2114 "trad2simp.in"
    {"\226X", "\x96\x49"},
#line 1389 "trad2simp.in"
    {"\206\032", "\x85\xD3"},
#line 994 "trad2simp.in"
    {"xo", "\x78\x1A"},
#line 1069 "trad2simp.in"
    {"|+", "\x7B\xAB"},
#line 1686 "trad2simp.in"
    {"\215\027", "\x8D\x5D"},
#line 479 "trad2simp.in"
    {"_\221", "\x5F\x84"},
#line 1020 "trad2simp.in"
    {"y\215", "\x79\x78"},
#line 1779 "trad2simp.in"
    {"\220T", "\x8F\xBE"},
#line 1061 "trad2simp.in"
    {"|=", "\x7B\x7E"},
#line 474 "trad2simp.in"
    {"uv", "\x5F\x53"},
#line 24 "trad2simp.in"
    {"gq", "\x4E\x1C"},
#line 2312 "trad2simp.in"
    {"\232.", "\x9A\x9D"},
#line 1017 "trad2simp.in"
    {"y\260", "\x79\x62"},
#line 901 "trad2simp.in"
    {"s\200", "\x73\x21"},
#line 962 "trad2simp.in"
    {"vn", "\x76\x3E"},
#line 1358 "trad2simp.in"
    {"sr", "\x83\xB7"},
#line 1354 "trad2simp.in"
    {"\204\356", "\x83\xB2"},
#line 1034 "trad2simp.in"
    {"zL", "\x7A\x23"},
#line 2535 "trad2simp.in"
    {"\237W", "\x9F\x82"},
#line 2538 "trad2simp.in"
    {"\237Y", "\x9F\x85"},
#line 553 "trad2simp.in"
    {"\213w", "\x62\xA4"},
#line 1619 "trad2simp.in"
    {"\213\226", "\x8C\x36"},
#line 1317 "trad2simp.in"
    {"\204\274", "\x82\xCD"},
#line 2305 "trad2simp.in"
    {"\232B", "\x9A\x96"},
#line 1630 "trad2simp.in"
    {"eW", "\x8D\x25"},
#line 2544 "trad2simp.in"
    {"\237r", "\x9F\x8B"},
#line 996 "trad2simp.in"
    {"y*", "\x78\x3A"},
#line 2064 "trad2simp.in"
    {"\225\216", "\x95\xF3"},
#line 1253 "trad2simp.in"
    {"\200s", "\x80\x38"},
#line 1399 "trad2simp.in"
    {"\207U", "\x86\x80"},
#line 2549 "trad2simp.in"
    {"\237\234", "\x9F\x9F"},
#line 1288 "trad2simp.in"
    {"\201\330", "\x81\x4A"},
#line 1033 "trad2simp.in"
    {"z\005", "\x7A\x0E"},
#line 1833 "trad2simp.in"
    {"\221\330", "\x94\x89"},
#line 981 "trad2simp.in"
    {"w\\", "\x77\x41"},
#line 1825 "trad2simp.in"
    {"\210\317", "\x91\xCC"},
#line 2073 "trad2simp.in"
    {"\225\345", "\x95\xFC"},
#line 890 "trad2simp.in"
    {"sp", "\x72\xDE"},
#line 651 "trad2simp.in"
    {"i\313", "\x67\x84"},
#line 2140 "trad2simp.in"
    {"\227\315", "\x97\xE8"},
#line 2048 "trad2simp.in"
    {"\224T", "\x95\x72"},
#line 986 "trad2simp.in"
    {"w\357", "\x77\xEB"},
#line 356 "trad2simp.in"
    {"Zm", "\x5A\x05"},
#line 347 "trad2simp.in"
    {"Y\235", "\x59\x86"},
#line 847 "trad2simp.in"
    {"p}", "\x70\x7E"},
#line 1057 "trad2simp.in"
    {"{\351", "\x7B\x5B"},
#line 1331 "trad2simp.in"
    {"\203\242", "\x83\x5A"},
#line 1612 "trad2simp.in"
    {"\213Y", "\x8C\x2F"},
#line 1797 "trad2simp.in"
    {"\220^", "\x90\x12"},
#line 1469 "trad2simp.in"
    {"\213}", "\x8A\x89"},
#line 1027 "trad2simp.in"
    {"z.", "\x79\xCD"},
#line 1561 "trad2simp.in"
    {"\213\200", "\x8B\xFB"},
#line 899 "trad2simp.in"
    {"su", "\x73\x0E"},
#line 209 "trad2simp.in"
    {"\227F", "\x53\xC7"},
#line 2119 "trad2simp.in"
    {"\226\250", "\x96\x8F"},
#line 931 "trad2simp.in"
    {"u\025", "\x74\xEE"},
#line 404 "trad2simp.in"
    {"kr", "\x5C\x81"},
#line 557 "trad2simp.in"
    {"e\017", "\x62\xE2"},
#line 1597 "trad2simp.in"
    {"\213\234", "\x8C\x20"},
#line 1468 "trad2simp.in"
    {"\213\213", "\x8A\x5F"},
#line 2509 "trad2simp.in"
    {"\236\007", "\x9E\x6F"},
#line 592 "trad2simp.in"
    {"e,", "\x63\xFD"},
#line 1008 "trad2simp.in"
    {"\236|", "\x78\x77"},
#line 1821 "trad2simp.in"
    {"\221\305", "\x91\x7D"},
#line 889 "trad2simp.in"
    {"sn", "\x72\xDD"},
#line 2098 "trad2simp.in"
    {"\225\313", "\x96\x15"},
#line 613 "trad2simp.in"
    {"eu", "\x65\x4C"},
#line 599 "trad2simp.in"
    {"e\035", "\x64\x44"},
#line 180 "trad2simp.in"
    {"S@", "\x53\x3A"},
#line 1417 "trad2simp.in"
    {"\210\005", "\x87\x47"},
#line 1484 "trad2simp.in"
    {"\213p", "\x8B\xAE"},
#line 881 "trad2simp.in"
    {"r\242", "\x72\x8A"},
#line 2295 "trad2simp.in"
    {"\232W", "\x9A\x8C"},
#line 68 "trad2simp.in"
    {"Y%", "\x4F\x19"},
#line 360 "trad2simp.in"
    {"Z\033", "\x5A\x31"},
#line 344 "trad2simp.in"
    {"Yn", "\x59\x4B"},
#line 2052 "trad2simp.in"
    {"\225w", "\x95\x7F"},
#line 858 "trad2simp.in"
    {"r\033", "\x70\xC2"},
#line 2046 "trad2simp.in"
    {"\224.", "\x95\x70"},
#line 780 "trad2simp.in"
    {"p\017", "\x6D\x4F"},
#line 1780 "trad2simp.in"
    {"\220w", "\x8F\xC1"},
#line 727 "trad2simp.in"
    {"k\257", "\x6B\xA1"},
#line 2050 "trad2simp.in"
    {"\224^", "\x95\x74"},
#line 214 "trad2simp.in"
    {"u\212", "\x53\xE0"},
#line 350 "trad2simp.in"
    {"Z\365", "\x59\xA9"},
#line 1778 "trad2simp.in"
    {"\220|", "\x8F\xBD"},
#line 2137 "trad2simp.in"
    {"\227\335", "\x97\xB4"},
#line 697 "trad2simp.in"
    {"k\017", "\x69\x24"},
#line 1608 "trad2simp.in"
    {"\213~", "\x8C\x2B"},
#line 1609 "trad2simp.in"
    {"\213,", "\x8C\x2C"},
#line 972 "trad2simp.in"
    {"\236}", "\x76\xD0"},
#line 1275 "trad2simp.in"
    {"\201\033", "\x80\xEB"},
#line 1802 "trad2simp.in"
    {"\221'", "\x90\x93"},
#line 999 "trad2simp.in"
    {"y\016", "\x78\x40"},
#line 750 "trad2simp.in"
    {"p\035", "\x6C\xA5"},
#line 1599 "trad2simp.in"
    {"\213\035", "\x8C\x22"},
#line 1692 "trad2simp.in"
    {"\215\033", "\x8D\x63"},
#line 1819 "trad2simp.in"
    {"\221\261", "\x91\x66"},
#line 2433 "trad2simp.in"
    {"\226\336", "\x9E\x21"},
#line 1847 "trad2simp.in"
    {"\221\365", "\x94\x97"},
#line 843 "trad2simp.in"
    {"p]", "\x70\x4F"},
#line 1029 "trad2simp.in"
    {"z1", "\x79\xF0"},
#line 2307 "trad2simp.in"
    {"\232-", "\x9A\x98"},
#line 2053 "trad2simp.in"
    {"\225\200", "\x95\xE8"},
#line 1607 "trad2simp.in"
    {"\213+", "\x8C\x2A"},
#line 2299 "trad2simp.in"
    {"\232\017", "\x9A\x90"},
#line 1801 "trad2simp.in"
    {"\220Y", "\x90\x65"},
#line 679 "trad2simp.in"
    {"i\017", "\x68\x60"},
#line 974 "trad2simp.in"
    {"\204\313", "\x76\xD6"},
#line 43 "trad2simp.in"
    {"\221\011", "\x4E\x61"},
#line 2012 "trad2simp.in"
    {"\224w", "\x95\x4A"},
#line 1861 "trad2simp.in"
    {"k=", "\x94\xA6"},
#line 1790 "trad2simp.in"
    {"\220r", "\x8F\xDF"},
#line 464 "trad2simp.in"
    {"\225\213", "\x5F\x00"},
#line 147 "trad2simp.in"
    {"\202\273", "\x52\x0D"},
#line 36 "trad2simp.in"
    {"\202\011", "\x4E\x3E"},
#line 650 "trad2simp.in"
    {"iu", "\x67\x81"},
#line 1977 "trad2simp.in"
    {"\224|", "\x95\x23"},
#line 1339 "trad2simp.in"
    {"\204w", "\x83\x64"},
#line 2512 "trad2simp.in"
    {"\236\017", "\x9E\x72"},
#line 1316 "trad2simp.in"
    {"\204\007", "\x82\xCC"},
#line 1251 "trad2simp.in"
    {"\200.", "\x80\x22"},
#line 2057 "trad2simp.in"
    {"\225\210", "\x95\xEC"},
#line 1007 "trad2simp.in"
    {"x\272", "\x78\x6E"},
#line 2072 "trad2simp.in"
    {"\200^", "\x95\xFB"},
#line 187 "trad2simp.in"
    {"\236u", "\x53\x64"},
#line 35 "trad2simp.in"
    {"\236\227", "\x4E\x3D"},
#line 2466 "trad2simp.in"
    {"\236\035", "\x9E\x42"},
#line 2313 "trad2simp.in"
    {"\232+", "\x9A\x9E"},
#line 1284 "trad2simp.in"
    {"\201s", "\x81\x1A"},
#line 2063 "trad2simp.in"
    {"\225\221", "\x95\xF2"},
#line 2104 "trad2simp.in"
    {"\225\344", "\x96\x1B"},
#line 1040 "trad2simp.in"
    {"z\257", "\x7A\x91"},
#line 1882 "trad2simp.in"
    {"\224}", "\x94\xBB"},
#line 648 "trad2simp.in"
    {"i\252", "\x67\x69"},
#line 1810 "trad2simp.in"
    {"\220\344", "\x90\xC4"},
#line 2051 "trad2simp.in"
    {"\224r", "\x95\x76"},
#line 1405 "trad2simp.in"
    {"\2101", "\x86\xCA"},
#line 980 "trad2simp.in"
    {"\204W", "\x77\x40"},
#line 51 "trad2simp.in"
    {"N\231", "\x4E\x98"},
#line 1826 "trad2simp.in"
    {"\224\234", "\x92\x45"},
#line 1830 "trad2simp.in"
    {"\221\323", "\x94\x86"},
#line 367 "trad2simp.in"
    {"Z\274", "\x5A\xAA"},
#line 1257 "trad2simp.in"
    {"\200w", "\x80\x4C"},
#line 66 "trad2simp.in"
    {"w>", "\x4F\x17"},
#line 1822 "trad2simp.in"
    {"\221\303", "\x91\x7E"},
#line 1266 "trad2simp.in"
    {"\201N", "\x80\xBE"},
#line 1860 "trad2simp.in"
    {"\224p", "\x94\xA5"},
#line 745 "trad2simp.in"
    {"\220]", "\x6C\x93"},
#line 49 "trad2simp.in"
    {"\206g", "\x4E\x8F"},
#line 1296 "trad2simp.in"
    {"\201\317", "\x81\x91"},
#line 1784 "trad2simp.in"
    {"\220\204", "\x8F\xD8"},
#line 2120 "trad2simp.in"
    {"\226\261", "\x96\x90"},
#line 1828 "trad2simp.in"
    {"\224~", "\x92\xAE"},
#line 769 "trad2simp.in"
    {"z\252", "\x6D\x3C"},
#line 1059 "trad2simp.in"
    {"{\217", "\x7B\x5D"},
#line 226 "trad2simp.in"
    {"\200}", "\x54\x2C"},
#line 18 "trad2simp.in"
    {"\204,", "\x4E\x07"},
#line 2553 "trad2simp.in"
    {"\226\273", "\x53\xEA"},
#line 1319 "trad2simp.in"
    {"\206\007", "\x82\xCF"},
#line 330 "trad2simp.in"
    {"\200r", "\x58\xF0"},
#line 1022 "trad2simp.in"
    {"y\177", "\x79\x84"},
#line 991 "trad2simp.in"
    {"x\274", "\x78\x01"},
#line 2013 "trad2simp.in"
    {"\224+", "\x95\x4C"},
#line 1290 "trad2simp.in"
    {"\201\225", "\x81\x58"},
#line 1816 "trad2simp.in"
    {"\221\026", "\x90\xE7"},
#line 742 "trad2simp.in"
    {"lY", "\x6C\x61"},
#line 207 "trad2simp.in"
    {"S\303", "\x53\xC2"},
#line 1695 "trad2simp.in"
    {"\215\225", "\x8D\x76"},
#line 1261 "trad2simp.in"
    {"\200p", "\x80\x6A"},
#line 1671 "trad2simp.in"
    {"\215\026", "\x8D\x4E"},
#line 1269 "trad2simp.in"
    {"\201\005", "\x80\xC1"},
#line 128 "trad2simp.in"
    {"\210]", "\x51\xB2"},
#line 2143 "trad2simp.in"
    {"\227\336", "\x97\xEB"},
#line 2113 "trad2simp.in"
    {"\226s", "\x96\x48"},
#line 2567 "trad2simp.in"
    {"N~", "\x5E\x72"},
#line 1681 "trad2simp.in"
    {"\215\005", "\x8D\x58"},
#line 188 "trad2simp.in"
    {"\201\345", "\x53\x67"},
#line 1256 "trad2simp.in"
    {"\200~", "\x80\x4B"},
#line 1252 "trad2simp.in"
    {"\200,", "\x80\x27"},
#line 1260 "trad2simp.in"
    {"\200u", "\x80\x69"},
#line 1322 "trad2simp.in"
    {"\203\226", "\x83\x0E"},
#line 1019 "trad2simp.in"
    {"y\261", "\x79\x77"},
#line 904 "trad2simp.in"
    {"\207_", "\x73\x2C"},
#line 1432 "trad2simp.in"
    {"Z\313", "\x88\x85"},
#line 183 "trad2simp.in"
    {"ST", "\x53\x4F"},
#line 738 "trad2simp.in"
    {"l,", "\x6C\x29"},
#line 1365 "trad2simp.in"
    {"\207\242", "\x84\x24"},
#line 113 "trad2simp.in"
    {"\206-", "\x51\x70"},
#line 1341 "trad2simp.in"
    {"r\226", "\x83\x66"},
#line 1824 "trad2simp.in"
    {"\221\313", "\x91\xCA"},
#line 989 "trad2simp.in"
    {"y&", "\x77\xFF"},
#line 737 "trad2simp.in"
    {"l+", "\x6C\x22"},
#line 1421 "trad2simp.in"
    {"\207\273", "\x87\x7C"},
#line 1694 "trad2simp.in"
    {"\215\231", "\x8D\x75"},
#line 19 "trad2simp.in"
    {"\202\007", "\x4E\x0E"},
#line 1688 "trad2simp.in"
    {"\215\007", "\x8D\x5F"},
#line 977 "trad2simp.in"
    {"w\230", "\x77\x0D"},
#line 2117 "trad2simp.in"
    {"\226\225", "\x96\x68"},
#line 1303 "trad2simp.in"
    {"\202q", "\x82\x70"},
#line 2127 "trad2simp.in"
    {"\227'", "\x96\xFE"},
#line 879 "trad2simp.in"
    {"r}", "\x72\x75"},
#line 1051 "trad2simp.in"
    {"{g", "\x7B\x15"},
#line 2109 "trad2simp.in"
    {"\226\216", "\x96\x36"},
#line 1301 "trad2simp.in"
    {"\202Y", "\x82\x31"},
#line 1065 "trad2simp.in"
    {"{\313", "\x7B\xA7"},
#line 20 "trad2simp.in"
    {"\221\234", "\x4E\x11"},
#line 352 "trad2simp.in"
    {"Z\257", "\x59\xAB"},
#line 198 "trad2simp.in"
    {"S\231", "\x53\x8D"},
#line 47 "trad2simp.in"
    {"r-", "\x4E\x89"},
#line 1813 "trad2simp.in"
    {"\221-", "\x90\xD1"},
#line 433 "trad2simp.in"
    {"\227\217", "\x5D\xE9"},
#line 1840 "trad2simp.in"
    {"\221\344", "\x94\x90"},
#line 179 "trad2simp.in"
    {"S1", "\x53\x2E"},
#line 2122 "trad2simp.in"
    {"\226\313", "\x96\xBD"},
#line 1691 "trad2simp.in"
    {"\215\017", "\x8D\x62"},
#line 1016 "trad2simp.in"
    {"y\225", "\x79\x4E"},
#line 2141 "trad2simp.in"
    {"\227\323", "\x97\xE9"},
#line 1052 "trad2simp.in"
    {"{\213", "\x7B\x3A"},
#line 937 "trad2simp.in"
    {"u\207", "\x75\x74"},
#line 1285 "trad2simp.in"
    {"\201+", "\x81\x31"},
#line 2134 "trad2simp.in"
    {"\227\303", "\x97\x91"},
#line 1018 "trad2simp.in"
    {"y\216", "\x79\x6F"},
#line 178 "trad2simp.in"
    {"S-", "\x53\x26"},
#line 2106 "trad2simp.in"
    {"\226}", "\x96\x33"},
#line 979 "trad2simp.in"
    {"w\323", "\x77\x2C"},
#line 1048 "trad2simp.in"
    {"{\344", "\x7B\x03"},
#line 983 "trad2simp.in"
    {"w\274", "\x77\x51"},
#line 2107 "trad2simp.in"
    {"\226p", "\x96\x34"},
#line 997 "trad2simp.in"
    {"y1", "\x78\x3B"},
#line 2115 "trad2simp.in"
    {"\226]", "\x96\x55"},
#line 2126 "trad2simp.in"
    {"\227B", "\x96\xF3"},
#line 2118 "trad2simp.in"
    {"\226\252", "\x96\x69"},
#line 2138 "trad2simp.in"
    {"\227\313", "\x97\xE6"},
#line 982 "trad2simp.in"
    {"w^", "\x77\x50"},
#line 988 "trad2simp.in"
    {"y,", "\x77\xFE"},
#line 2527 "trad2simp.in"
    {"\227\200", "\x9F\x17"},
#line 465 "trad2simp.in"
    {"up", "\x5F\x02"},
#line 998 "trad2simp.in"
    {"y+", "\x78\x3E"},
#line 1023 "trad2simp.in"
    {"y\252", "\x79\x85"},
#line 1412 "trad2simp.in"
    {"\207\204", "\x86\xF3"},
#line 54 "trad2simp.in"
    {"u]", "\x4E\xA9"},
#line 2128 "trad2simp.in"
    {"\227=", "\x97\x01"},
#line 978 "trad2simp.in"
    {"w%", "\x77\x26"}
  };

static const short lookup[] =
  {
       -1,    -1,    -1,    -1,    -1,    -1,     0,
       -1,    -1,    -1,    -1,     1,    -1,    -1,
       -1,     2,     3,    -1,    -1,    -1,     4,
        5,     6,    -1,    -1,     7,     8,     9,
       -1,    -1,    10,    11,    12,    -1,    -1,
       13,    14,    15,    -1,    -1,    16, -2596,
       19, -2535,    -2,    20,    21,    22,    -1,
       -1,    23,    24,    25,    -1,    -1,    26,
       27,    28,    -1,    -1,    29,    -1,    30,
       -1,    -1,    31,    32,    -1,    -1,    -1,
       33,    34,    35,    -1,    -1,    36,    37,
       38,    -1,    -1,    39,    40,    -1,    -1,
       -1,    41,    42,    -1,    -1,    -1,    43,
       44,    45,    -1,    -1,    46,    47,    -1,
       -1,    -1,    48,    49,    50,    -1,    -1,
       51,    52,    53,    -1,    -1,    54,    55,
       56,    -1,    -1,    57,    58,    59,    -1,
       -1,    -1,    60,    61,    -1,    -1,    62,
       63,    64,    -1,    -1,    65,    -1,    66,
       -1,    -1,    67,    -1,    68,    -1,    -1,
       69,    70,    71,    -1,    -1,    72,    73,
       74,    -1,    -1,    75,    76,    77,    -1,
       -1,    78,    79,    -1,    -1,    -1,    80,
       81, -2716, -2470,    -2,    -1,    84,    85,
       -1,    -1,    86,    87,    88,    -1,    -1,
       -1,    89,    90,    -1,    -1,    91,    92,
       93,    -1,    -1,    94,    95,    -1,    -1,
       -1,    96,    -1,    97,    -1,    -1,    98,
       99,   100,    -1,    -1,   101,    -1,   102,
       -1,    -1,    -1,   103,    -1,    -1,    -1,
      104,   105,   106,    -1,    -1,    -1,   107,
      108,    -1,    -1,   109, -2781,   112,    -1,
      113,   114,   115,   116, -2442,    -2,   117,
      118,   119,    -1,    -1,    -1,   120,   121,
       -1,    -1,   122,   123,   124,    -1,   125,
      126,   127,    -1,    -1,    -1,   128,   129,
      130,    -1,    -1,   131,   132,    -1,    -1,
       -1,   133,    -1,    -1,    -1,   134,   135,
      136,   137,    -1,    -1,   138,   139,   140,
       -1,    -1,   141,   142,   143,    -1,    -1,
      144,   145,   146,    -1,    -1,   147,   148,
      149,    -1,    -1,   150,    -1,   151,    -1,
       -1,   152,   153,    -1,    -1,    -1,   154,
       -1,   155,    -1,    -1,    -1,   156,    -1,
       -1,    -1,   157,   158,   159,    -1,    -1,
      160,    -1,   161,    -1,    -1,    -1,   162,
      163,    -1,    -1,   164,   165,   166,    -1,
       -1,   167,   168,    -1,    -1,    -1,   169,
      170,   171,    -1,    -1,   172,   173,   174,
       -1,    -1,   175,   176,   177,    -1,    -1,
      178,   179,   180,    -1,    -1,   181,   182,
      183,    -1,    -1,   184,   185,   186,    -1,
       -1,   187,   188,   189,    -1,    -1,    -1,
      190,   191,    -1,    -1,   192,   193,   194,
       -1,    -1,    -1,   195,   196,    -1,    -1,
       -1,    -1,   197,    -1,    -1,   198,   199,
      200,    -1,    -1,   201,   202,   203,    -1,
       -1,   204,   205,    -1,    -1,    -1,   206,
      207,   208,    -1,    -1,    -1,    -1,   209,
       -1,    -1,    -1,   210,   211,    -1,    -1,
      212,   213,   214,    -1,    -1,    -1,   215,
      216,    -1,    -1,   217,   218,   219,    -1,
       -1,   220,   221,    -1,    -1,    -1,    -1,
      222,   223,    -1,    -1,   224,   225,   226,
       -1,    -1,   227,   228,   229,    -1,    -1,
       -1,    -1,   230,    -1,    -1,    -1,    -1,
      231,    -1,    -1,   232,   233,   234,    -1,
       -1,   235,   236,    -1,    -1,    -1,   237,
      238,    -1,    -1,    -1,   239,    -1,   240,
       -1,    -1,    -1,   241,   242,    -1,    -1,
      243,    -1,   244,    -1,    -1,   245,   246,
      247,    -1,    -1,   248,   249,   250,    -1,
       -1,   251,   252,   253,    -1,    -1,   254,
      255,   256,    -1,    -1,   257,   258,   259,
       -1,    -1,   260,    -1,   261,    -1,    -1,
      262,   263,   264,    -1,   265,   266,   267,
      268,    -1,    -1,    -1,   269,   270,    -1,
       -1,   271,   272,   273,    -1,    -1,   274,
      275,   276,    -1,    -1,    -1,   277,   278,
       -1,    -1,   279,    -1,   280,    -1,    -1,
      281,    -1,   282,    -1,    -1,    -1,    -1,
      283,    -1,    -1,   284,   285,   286,    -1,
       -1,   287,   288,   289,    -1,    -1,   290,
      291,   292,    -1,    -1,   293,   294,   295,
       -1,    -1,   296,   297,   298,    -1,    -1,
      299,    -1,   300,    -1,    -1,   301,   302,
      303,    -1,    -1,   304,   305,   306,    -1,
       -1,    -1,   307,   308,    -1,    -1,    -1,
      309,   310,    -1,    -1,   311,   312,   313,
       -1,    -1,   314,    -1,   315,    -1,    -1,
      316,   317,   318,    -1,    -1,    -1,   319,
      320,    -1,    -1,    -1,   321,   322,    -1,
       -1,   323,    -1,   324,    -1,    -1,   325,
      326,    -1,    -1,   327,   328,   329,    -1,
       -1,    -1,    -1,    -1,   330,    -1,    -1,
      331,   332,   333,    -1,    -1,   334,   335,
      336,    -1,    -1,    -1,   337,   338,    -1,
       -1,   339,   340,   341,    -1,    -1,   342,
      343,   344,    -1,    -1,   345,    -1,   346,
       -1,    -1,   347,   348,   349,    -1,   350,
      351,   352,   353,    -1,    -1,    -1,   354,
      355,    -1,    -1,    -1,   356,   357,    -1,
       -1,   358,   359,   360,    -1,    -1,   361,
      362,   363,    -1,    -1,   364,   365,   366,
       -1,    -1,   367,   368,   369,    -1,    -1,
       -1,   370,   371,    -1,    -1,   372,   373,
      374,    -1,    -1,   375,   376,    -1,    -1,
       -1,   377,    -1,   378,    -1,    -1,   379,
      380,   381,    -1,    -1,   382,    -1,   383,
       -1,    -1,   384,   385,   386,    -1,    -1,
      387,   388,   389,    -1,    -1,    -1,   390,
       -1,    -1,    -1,   391,    -1,   392,    -1,
       -1,   393,   394,   395,    -1,    -1,   396,
      397,   398,    -1,    -1,   399,   400,   401,
       -1,    -1,   402,   403,   404,    -1,    -1,
       -1,   405,   406,    -1,    -1,   407,    -1,
      408,    -1,    -1,    -1,   409,    -1,    -1,
       -1,   410,    -1,   411,    -1,    -1,   412,
      413,   414,    -1,    -1,   415,   416,   417,
       -1,    -1,   418,   419,   420,    -1,    -1,
      421,    -1,   422,    -1,    -1,   423,   424,
      425,    -1,    -1,   426,   427,    -1,    -1,
       -1,   428,   429,   430,    -1,    -1,   431,
       -1,   432,    -1,    -1,   433,    -1,   434,
       -1,    -1,   435,   436,    -1,    -1,    -1,
      437,   438, -3431, -2113,    -2,   441,   442,
      443,    -1,    -1,   444,   445,   446,    -1,
       -1,   447,   448,   449,    -1,    -1,   450,
      451,   452,    -1,   453,   454,   455, -3456,
    -2096,    -2,   458,    -1,   459,    -1,    -1,
      460,    -1,   461,    -1,    -1,   462,   463,
       -1,    -1,    -1,   464,   465,   466,    -1,
       -1,   467,   468,   469,    -1,    -1,   470,
      471,   472,    -1,    -1,   473,   474,   475,
       -1,   476,   477,   478,   479,    -1,    -1,
      480,    -1,   481,    -1,    -1,   482,   483,
      484,    -1,    -1,   485,    -1,   486,    -1,
       -1,   487,   488,   489,    -1,    -1,   490,
       -1,   491,    -1,    -1,   492,   493,   494,
       -1,    -1,   495,   496,   497,    -1,    -1,
      498,    -1,    -1,    -1,    -1,   499,   500,
      501,    -1,    -1,   502,   503,    -1,    -1,
       -1,   504,   505,    -1,    -1,    -1,   506,
       -1,   507,    -1,    -1,    -1,    -1,   508,
       -1,    -1,    -1,   509,    -1,    -1,    -1,
      510,   511,   512,    -1,    -1,    -1,   513,
       -1,    -1,    -1,   514,   515,   516,    -1,
       -1,   517,    -1,   518,    -1,    -1,   519,
      520,   521,    -1,    -1,    -1,    -1,   522,
       -1,    -1,   523,   524,   525,    -1,    -1,
      526,   527,   528,    -1,    -1,   529,   530,
      531,    -1,    -1,   532,   533,   534,    -1,
       -1,   535,   536,   537,    -1,    -1,   538,
      539,    -1,    -1,    -1,   540,    -1,   541,
       -1,    -1,   542,    -1,   543,    -1,    -1,
      544,   545,   546,    -1,   547,    -1,    -1,
      548,    -1,    -1,   549,    -1,    -1,    -1,
       -1,   550,   551,    -1,    -1,    -1,   552,
       -1,   553,    -1,    -1,    -1,    -1,   554,
       -1,   555,    -1,   556,   557,    -1,    -1,
      558,   559,    -1,    -1,    -1,   560,   561,
      562,    -1,    -1,   563,   564,   565,    -1,
       -1,   566,   567,   568,    -1,    -1,   569,
       -1,   570,    -1,    -1,   571,   572,   573,
       -1,   574,   575,   576,   577,    -1,   578,
      579,   580,   581,    -1,    -1,   582,   583,
      584,    -1,    -1,   585,   586,   587,    -1,
       -1,   588,   589,   590,    -1,    -1,   591,
      592,    -1,    -1,    -1,   593,   594,    -1,
       -1,    -1,   595,   596,   597,    -1,    -1,
      598,   599,   600,    -1,    -1,   601,   602,
      603,    -1,    -1,   604,    -1,   605,    -1,
       -1,   606,   607,   608,    -1,    -1,   609,
      610,   611,    -1,    -1,   612,    -1,   613,
       -1,    -1,   614,   615,   616,    -1,    -1,
      617,   618,   619,    -1,    -1,   620,   621,
      622,    -1,    -1,   623,    -1,    -1,    -1,
       -1,   624,    -1,   625,    -1,    -1,   626,
      627,   628,    -1,    -1,   629,    -1,    -1,
       -1,    -1,   630,   631,    -1,    -1,    -1,
      632,    -1,   633,    -1,    -1,   634,   635,
      636,    -1,    -1,   637,    -1,    -1,    -1,
       -1,    -1,   638,   639,    -1,    -1,   640,
      641,   642,    -1,    -1,   643,   644,    -1,
       -1,    -1,    -1,   645,   646,    -1,    -1,
      647,   648,    -1,    -1,    -1,    -1,   649,
      650,    -1,    -1,   651,   652,   653,    -1,
       -1,   654,   655,   656,    -1,    -1,   657,
      658,   659,    -1,    -1,   660,   661,    -1,
       -1,    -1,   662,   663,   664,    -1,    -1,
      665,   666,   667,    -1,    -1,   668,   669,
      670,    -1,    -1,   671,   672,   673,    -1,
       -1,   674,   675,   676,    -1,    -1,   677,
       -1,   678,    -1,    -1,   679,   680,   681,
       -1,    -1,   682,    -1,   683,    -1,    -1,
       -1,   684,   685,    -1,    -1,    -1,   686,
       -1,    -1,    -1,   687,   688,   689,    -1,
       -1,   690,    -1,   691,    -1,    -1,   692,
      693,   694,    -1,    -1,   695,   696,    -1,
       -1,    -1,    -1,   697,   698,    -1,    -1,
      699,   700,   701,    -1,    -1,   702,   703,
      704,    -1,    -1,   705,   706,   707,    -1,
       -1,   708,   709,   710,    -1,    -1,   711,
      712,   713,    -1,    -1,    -1,   714,    -1,
       -1,    -1,   715,    -1,    -1,    -1,    -1,
      716,    -1,   717,    -1,    -1,    -1,   718,
      719,    -1,    -1,    -1,   720,   721,    -1,
       -1,    -1,   722,   723,    -1,    -1,   724,
      725,    -1,    -1,    -1,   726,   727,   728,
       -1,    -1,   729,   730,   731,    -1,    -1,
       -1,   732,   733,    -1,    -1,   734,   735,
      736,    -1,    -1,   737,    -1,   738,    -1,
       -1,   739,   740,   741,    -1,    -1,   742,
      743,   744,    -1,    -1,   745,   746,    -1,
       -1,    -1,   747,    -1,   748,    -1,    -1,
      749,    -1,   750,    -1,    -1,   751,   752,
      753,    -1,    -1,   754,   755,    -1,    -1,
       -1,   756,    -1,   757,    -1,    -1,   758,
      759,   760,    -1,    -1,   761,   762,   763,
       -1,    -1,   764,    -1,   765,    -1,    -1,
      766,   767,   768,    -1,    -1,   769,    -1,
      770,    -1,    -1,   771,   772,   773,    -1,
       -1,   774,   775,   776,    -1,    -1,   777,
      778,   779,    -1,    -1,   780,   781,    -1,
       -1,    -1,   782,   783,   784,    -1,    -1,
      785,   786,   787,    -1,    -1,    -1,   788,
      789,    -1,    -1,   790,   791,   792,    -1,
       -1,   793,   794,    -1,    -1,    -1,   795,
      796,   797,    -1,    -1,   798,    -1,    -1,
       -1,    -1,   799,    -1, -4161, -1752,    -2,
      802,   803,   804,    -1,    -1,   805,   806,
      807,    -1,    -1,    -1,   808,   809,    -1,
       -1,   810,   811,    -1,    -1,    -1,   812,
       -1,   813,    -1,    -1,   814,   815,   816,
       -1,    -1,   817,    -1,   818,    -1,    -1,
      819,   820,   821,    -1,    -1,    -1,    -1,
      822,    -1,    -1,   823,   824,   825,    -1,
       -1,   826,   827,   828,    -1,    -1,   829,
      830,   831,    -1,    -1,   832,   833,   834,
       -1,    -1,   835,   836,    -1,    -1,    -1,
      837,   838,   839,    -1,    -1,   840,   841,
      842,    -1,    -1,   843,   844,   845,    -1,
       -1,   846,   847,   848,    -1,    -1,   849,
      850,   851,    -1,    -1,   852,   853,   854,
       -1,    -1,   855,   856,   857,    -1,    -1,
      858,    -1,   859,    -1,    -1,   860,   861,
      862,    -1,    -1,   863,   864,   865,    -1,
       -1,   866,   867,   868,    -1,    -1,   869,
      870,   871,    -1,    -1,    -1,   872,   873,
       -1,    -1,   874,   875,   876,    -1,    -1,
       -1,   877,   878,    -1,    -1,   879,    -1,
      880,    -1,    -1,   881,    -1,   882,    -1,
       -1,   883,   884,   885,    -1,    -1,   886,
      887,   888,    -1,    -1,   889,   890,   891,
       -1,    -1,   892,   893,   894,    -1,    -1,
      895,   896,    -1,    -1,   897,   898,   899,
      900,    -1,    -1,   901,   902,   903,    -1,
       -1,   904,    -1,   905,    -1,    -1,   906,
      907,    -1,    -1,    -1,   908,   909,   910,
       -1,    -1,   911,    -1,    -1,    -1,    -1,
      912,   913,   914,    -1,    -1,    -1,    -1,
      915,    -1,    -1,   916,    -1,   917,    -1,
       -1,   918,   919,   920,    -1,    -1,   921,
      922,   923,    -1,    -1,   924,   925,    -1,
       -1,    -1,    -1,   926,   927,    -1,    -1,
      928,   929,   930,    -1,    -1,    -1,    -1,
      931,    -1,    -1,   932,    -1,   933,    -1,
       -1,   934,   935,   936,    -1,    -1,    -1,
      937,   938,    -1,    -1,   939,   940,   941,
       -1,    -1,    -1,   942,    -1,    -1,    -1,
      943,    -1,   944,    -1,    -1,   945,   946,
    -4451, -1605,    -2,    -1,   949,   950,    -1,
       -1,   951,   952,   953,    -1,   954,   955,
      956,   957,    -1,    -1,    -1,   958,   959,
       -1,    -1,   960, -4476,   963, -1591,    -2,
       -1,   964,   965,    -1,    -1,   966,    -1,
      967,    -1,    -1,   968,    -1,   969,    -1,
       -1,   970,   971,   972,    -1,    -1,    -1,
      973,   974,    -1,    -1,   975,   976,   977,
       -1,    -1,    -1,   978,   979,    -1,    -1,
      980,   981,   982,    -1,    -1,   983,    -1,
      984,    -1,    -1,   985,   986,    -1,    -1,
       -1,   987,    -1,   988,    -1,    -1,   989,
      990,   991,    -1,    -1,   992,   993,   994,
       -1,    -1,   995,    -1,    -1,    -1,    -1,
      996,   997,   998,    -1,    -1,   999,  1000,
     1001,    -1,    -1,  1002,  1003,  1004,    -1,
       -1,  1005,  1006,  1007,    -1,    -1,  1008,
     1009,  1010,    -1,    -1,  1011,    -1,  1012,
       -1,    -1,  1013,    -1,  1014,    -1,    -1,
     1015,  1016,  1017,    -1,    -1,  1018,  1019,
     1020,    -1,    -1,  1021,  1022,  1023,    -1,
       -1,  1024,  1025,    -1,    -1,    -1,  1026,
     1027,  1028,    -1,    -1,    -1,  1029,  1030,
       -1,    -1,    -1,  1031,    -1,    -1,    -1,
     1032,    -1,  1033,    -1,    -1,  1034,  1035,
       -1,    -1,    -1,  1036,  1037,    -1,    -1,
       -1,  1038,  1039,  1040,    -1,    -1,  1041,
     1042,  1043,    -1,    -1,  1044,  1045,  1046,
       -1,    -1,  1047,  1048,  1049,    -1,    -1,
     1050,  1051,  1052,    -1,    -1,    -1,  1053,
     1054,    -1,    -1,  1055,  1056,  1057,    -1,
       -1,  1058,  1059,  1060,    -1,    -1,  1061,
     1062,  1063,    -1,    -1,  1064,  1065,    -1,
       -1,    -1,  1066,  1067,  1068,    -1,    -1,
       -1,  1069,  1070,    -1,    -1,  1071,  1072,
     1073,    -1,    -1,    -1,  1074,  1075,    -1,
       -1,    -1,  1076,  1077,    -1,    -1,  1078,
       -1,  1079,    -1,    -1,  1080,    -1,  1081,
       -1,    -1,    -1,  1082,  1083,    -1,    -1,
     1084,  1085,  1086,    -1,    -1,  1087,  1088,
     1089,    -1,    -1,  1090,  1091,  1092,    -1,
       -1,  1093,  1094,  1095,    -1,    -1,    -1,
     1096,  1097,    -1,    -1,  1098,  1099,  1100,
       -1,    -1,    -1,    -1,  1101,    -1,    -1,
       -1,  1102,  1103,    -1,    -1,  1104,  1105,
       -1,    -1,    -1,  1106,  1107,  1108,    -1,
       -1,  1109,  1110,  1111,    -1,    -1,  1112,
     1113,    -1,    -1,    -1,  1114,  1115,    -1,
       -1,    -1,  1116,    -1,  1117,    -1,    -1,
       -1,  1118,    -1,    -1,    -1,  1119,  1120,
       -1,    -1,    -1,  1121,    -1,  1122,    -1,
       -1,  1123,  1124,  1125,    -1,    -1,  1126,
     1127,  1128,    -1,    -1,  1129,  1130,  1131,
       -1,    -1,  1132,    -1,  1133,    -1,    -1,
     1134,  1135,  1136,    -1,    -1,  1137,  1138,
     1139,    -1,    -1,  1140,  1141,  1142,    -1,
       -1,  1143,  1144,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  1145,    -1,  1146,
       -1,    -1,  1147,    -1,  1148,    -1,    -1,
     1149,  1150,    -1,    -1,    -1,  1151,  1152,
     1153,    -1,    -1,  1154,  1155,  1156,    -1,
       -1,  1157,  1158,  1159,    -1,    -1,    -1,
     1160,  1161,    -1,    -1,  1162,  1163,    -1,
       -1,    -1,  1164,  1165,  1166,    -1,    -1,
     1167,  1168,  1169,    -1,    -1,  1170,  1171,
       -1,    -1,    -1,  1172,  1173,  1174,    -1,
       -1,    -1,  1175,  1176,    -1,    -1,  1177,
     1178,  1179,    -1,    -1,  1180,  1181,  1182,
       -1,    -1,  1183,  1184,  1185,    -1,    -1,
     1186,    -1,  1187,    -1,    -1,    -1,  1188,
     1189,    -1,    -1,    -1,  1190,  1191,    -1,
       -1,  1192,  1193,  1194,    -1,    -1,    -1,
     1195,  1196,    -1,    -1,  1197,  1198,  1199,
       -1,    -1,  1200,  1201,    -1,    -1,    -1,
       -1,  1202,  1203,    -1,    -1,  1204,  1205,
     1206,    -1,  1207,  1208,  1209,    -1,    -1,
       -1,    -1,  1210,    -1,    -1,    -1,  1211,
     1212,  1213,    -1,    -1,  1214,  1215,  1216,
       -1,    -1,    -1,    -1,  1217,    -1,    -1,
     1218,  1219,  1220,    -1,    -1,    -1,  1221,
       -1,    -1,    -1,  1222,  1223, -5016, -1328,
       -2,  1226,  1227,  1228,    -1,    -1,  1229,
     1230,  1231,    -1,    -1,  1232,  1233,  1234,
       -1,    -1,  1235,  1236,  1237,    -1,    -1,
       -1,    -1,  1238,    -1,    -1,  1239,  1240,
       -1,    -1,    -1,    -1,    -1,  1241,    -1,
       -1,  1242,    -1,  1243,    -1,    -1,  1244,
     1245,  1246,    -1,    -1,  1247,  1248,  1249,
       -1,    -1,  1250,  1251,  1252,    -1,    -1,
       -1,  1253,  1254,    -1,    -1,  1255,  1256,
     1257,    -1,    -1,    -1,  1258,  1259,    -1,
       -1,  1260,  1261,  1262,    -1,    -1,  1263,
       -1,  1264,    -1,    -1,  1265,  1266,  1267,
       -1,    -1,    -1,  1268,    -1,    -1,    -1,
     1269,    -1,  1270,    -1,    -1,    -1,  1271,
     1272,    -1,    -1,  1273,  1274,  1275,    -1,
       -1,  1276,  1277,  1278,    -1,    -1,  1279,
       -1,  1280,    -1,    -1,  1281,    -1,  1282,
       -1,    -1,  1283,  1284,  1285,    -1,    -1,
     1286,  1287,    -1,    -1,    -1,  1288,  1289,
     1290,    -1,    -1,  1291,  1292,  1293,    -1,
       -1,    -1,    -1,  1294,    -1,    -1,  1295,
     1296,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  1297,  1298,  1299,    -1,    -1,
     1300,  1301,  1302,    -1,    -1,  1303,  1304,
     1305,    -1,    -1,  1306,  1307,  1308,    -1,
       -1,  1309,  1310,    -1,    -1,    -1,  1311,
     1312,  1313,    -1,    -1,  1314,  1315,  1316,
       -1,    -1,  1317,  1318,  1319,    -1,    -1,
     1320,    -1,  1321,    -1,    -1,  1322,    -1,
     1323,    -1,    -1,  1324,    -1,    -1,    -1,
       -1,  1325,  1326,  1327,    -1,    -1,  1328,
     1329,    -1,    -1,    -1,  1330,  1331,  1332,
       -1,    -1,  1333,  1334,    -1,    -1,    -1,
     1335,  1336,  1337,    -1,    -1,  1338,  1339,
     1340,    -1,    -1,    -1,  1341,  1342,    -1,
       -1,  1343,  1344,  1345,    -1,    -1,  1346,
     1347,  1348,    -1,    -1,  1349,  1350,  1351,
       -1,    -1,  1352,  1353,  1354,    -1,    -1,
     1355,  1356,  1357,    -1,    -1,    -1,  1358,
     1359,    -1,    -1,  1360,  1361,  1362,    -1,
       -1,  1363,  1364,  1365,    -1,    -1,  1366,
     1367,    -1,    -1,    -1,  1368,  1369,  1370,
       -1,    -1,    -1,    -1,  1371,    -1,    -1,
     1372,  1373,  1374,    -1,    -1,  1375,  1376,
     1377,    -1,    -1,    -1,  1378,  1379,    -1,
       -1,  1380,  1381,  1382,    -1,    -1,  1383,
     1384,  1385,    -1,    -1,  1386,  1387,  1388,
       -1,    -1,    -1,  1389,  1390,    -1,    -1,
     1391,    -1,  1392,    -1,    -1,  1393,  1394,
     1395,    -1,    -1,  1396,  1397,  1398,    -1,
       -1,  1399,  1400,  1401,    -1,    -1,  1402,
     1403,    -1,    -1,    -1,    -1,  1404,    -1,
       -1,    -1,    -1,  1405,  1406,    -1,    -1,
     1407,  1408,    -1,    -1,    -1,  1409,  1410,
     1411,    -1,    -1,    -1,  1412,    -1,    -1,
       -1,  1413,  1414,  1415,    -1,    -1,  1416,
     1417,  1418,    -1,    -1,  1419,  1420,  1421,
       -1,    -1,  1422,  1423,  1424,    -1,    -1,
     1425,  1426,    -1,    -1,    -1,  1427,  1428,
       -1,    -1,    -1,  1429,  1430,  1431,    -1,
       -1,  1432,    -1,  1433,    -1,    -1,  1434,
     1435,  1436,    -1,    -1,  1437,  1438,  1439,
       -1,    -1,    -1,  1440,  1441,    -1,    -1,
     1442,    -1,  1443,    -1,    -1,  1444,  1445,
     1446,    -1,    -1,    -1,  1447,  1448,    -1,
       -1,  1449,  1450,    -1,    -1,    -1,  1451,
       -1,  1452,    -1,    -1,  1453,  1454,  1455,
       -1,    -1,  1456,    -1,  1457,    -1,    -1,
     1458,    -1,  1459,    -1,    -1,  1460,  1461,
     1462,    -1,    -1,  1463,  1464,  1465,    -1,
       -1,  1466,  1467,  1468,    -1,    -1,  1469,
       -1,  1470,    -1,    -1,  1471,  1472,  1473,
       -1,    -1,    -1,  1474,  1475,    -1,    -1,
     1476,  1477,  1478,    -1,    -1,    -1,  1479,
     1480,    -1,    -1,  1481,    -1,  1482,    -1,
       -1,  1483,  1484,  1485,    -1,    -1,  1486,
       -1,  1487,    -1,    -1,  1488,  1489,  1490,
       -1,    -1,    -1,  1491,    -1,    -1,    -1,
     1492,  1493,  1494,    -1,    -1,    -1,  1495,
     1496,    -1,    -1,    -1,  1497,    -1,    -1,
       -1,  1498,  1499,  1500,    -1,    -1,  1501,
    -5586,  1504, -1050,    -2,  1505,  1506,  1507,
       -1,    -1,  1508,    -1,  1509,    -1,    -1,
     1510,    -1,    -1,    -1,    -1,    -1,  1511,
     1512,    -1,    -1,    -1,  1513,  1514,    -1,
       -1,    -1,  1515,  1516,    -1,    -1,  1517,
     1518,  1519,    -1,    -1,  1520,  1521,  1522,
       -1,    -1,  1523,  1524,  1525,    -1,    -1,
     1526,  1527,  1528,    -1,    -1,  1529,  1530,
     1531,    -1,    -1,  1532,  1533,  1534,    -1,
       -1,    -1,  1535,  1536,    -1,    -1,  1537,
     1538,  1539,    -1,    -1,  1540,  1541,  1542,
       -1,    -1,  1543,  1544,  1545,    -1,    -1,
     1546,  1547,  1548,    -1,    -1,  1549,  1550,
     1551,    -1,    -1,  1552,    -1,  1553,    -1,
       -1,  1554,  1555,  1556,    -1,    -1,  1557,
     1558,  1559,    -1,    -1,  1560,  1561,  1562,
       -1,    -1,  1563,  1564,    -1,    -1,    -1,
       -1,  1565,  1566,    -1,    -1,    -1,  1567,
     1568,    -1,    -1,  1569,    -1,  1570,    -1,
       -1,  1571,    -1,  1572,    -1,    -1,  1573,
     1574,  1575,    -1,    -1,  1576,  1577,  1578,
       -1,    -1,    -1,  1579,  1580,    -1,    -1,
       -1,  1581,  1582,    -1,    -1,  1583,  1584,
     1585,    -1,    -1,  1586,  1587,    -1,    -1,
       -1,    -1,  1588,    -1,    -1,    -1,  1589,
     1590,  1591,    -1,    -1,  1592,  1593,  1594,
       -1,    -1,  1595,  1596,    -1,    -1,    -1,
       -1,    -1,  1597,    -1,    -1,    -1,  1598,
     1599,    -1,    -1,  1600,    -1,  1601,    -1,
     1602,    -1,  1603,  1604,    -1,    -1,  1605,
       -1,  1606,    -1,    -1,    -1,  1607,  1608,
       -1,    -1,    -1,  1609,  1610,    -1,    -1,
     1611,  1612,  1613,    -1,    -1,    -1,  1614,
       -1,    -1,    -1,  1615,  1616,  1617,    -1,
       -1,  1618,  1619,  1620,    -1,    -1,    -1,
     1621,  1622,    -1,    -1,  1623,  1624,  1625,
       -1,    -1,    -1,  1626,  1627,    -1,    -1,
     1628,  1629,  1630,    -1,    -1,    -1,  1631,
     1632,    -1,    -1,    -1,  1633,  1634,    -1,
       -1,    -1,  1635,  1636,    -1,    -1,    -1,
     1637,  1638,    -1,    -1,  1639,  1640,  1641,
       -1,    -1,    -1,  1642,  1643,    -1,  1644,
       -1,  1645,  1646,    -1,    -1,    -1,  1647,
       -1,    -1,    -1,  1648,  1649,    -1,    -1,
       -1,    -1,  1650,  1651,    -1,  1652,    -1,
     1653,  1654,    -1,    -1,  1655,  1656,  1657,
       -1,    -1,    -1,  1658,    -1,    -1,    -1,
     1659,  1660,  1661,    -1,    -1,  1662,    -1,
     1663,    -1,    -1,    -1,  1664,  1665,    -1,
       -1,  1666,    -1,  1667,    -1,    -1,    -1,
     1668,  1669,    -1,    -1,    -1,  1670,  1671,
       -1,    -1,    -1,  1672,  1673,    -1,    -1,
     1674,  1675,  1676,    -1,    -1,  1677,  1678,
       -1,    -1,    -1,    -1,  1679,  1680,    -1,
       -1,    -1,  1681,  1682,    -1,    -1,    -1,
     1683,  1684,    -1,    -1,  1685,  1686,  1687,
       -1,    -1,    -1,  1688,  1689,    -1,    -1,
       -1,  1690,  1691,    -1,    -1,    -1,  1692,
     1693,    -1,    -1,  1694,  1695,  1696,    -1,
       -1,  1697,  1698,  1699,    -1,    -1,  1700,
     1701,  1702,    -1,    -1,    -1,  1703,  1704,
       -1,    -1,  1705,  1706,    -1,    -1,    -1,
     1707,  1708,  1709,    -1,    -1,  1710,  1711,
     1712,    -1,    -1,    -1,  1713,  1714,    -1,
       -1,  1715,  1716,  1717,    -1,    -1,  1718,
     1719,  1720,    -1,    -1,    -1,  1721,    -1,
       -1,    -1,  1722,  1723,  1724,    -1,    -1,
       -1,  1725,    -1,    -1,    -1,    -1,  1726,
     1727,    -1,    -1,    -1,  1728,  1729,    -1,
       -1,  1730,  1731,    -1,    -1,    -1,    -1,
     1732,    -1,    -1,    -1,  1733,  1734,  1735,
       -1,    -1,  1736,  1737,  1738,    -1,    -1,
     1739,  1740,  1741,    -1,    -1,    -1,    -1,
     1742,    -1,    -1,  1743,  1744,  1745,    -1,
       -1,  1746,    -1,  1747,    -1,    -1,  1748,
       -1,  1749,    -1,    -1,    -1,  1750,  1751,
       -1,    -1,    -1,  1752,  1753,    -1,    -1,
       -1,  1754,  1755,    -1,    -1,    -1,  1756,
     1757,    -1,    -1,  1758,  1759,  1760,    -1,
       -1,    -1,  1761,  1762,    -1,    -1,  1763,
     1764,  1765,    -1,    -1,  1766,  1767,  1768,
       -1,    -1,    -1,  1769,  1770,    -1,    -1,
     1771,  1772,  1773,    -1,    -1,  1774,  1775,
     1776,    -1,    -1,    -1,  1777,  1778,    -1,
       -1,    -1,  1779,  1780,    -1,    -1,    -1,
       -1,  1781,    -1,    -1,    -1,    -1,  1782,
       -1,    -1,  1783,  1784,  1785,    -1,    -1,
       -1,  1786,  1787,    -1,    -1,    -1,  1788,
       -1,    -1,    -1,    -1,  1789,  1790,    -1,
       -1,    -1,  1791,  1792,    -1,    -1,    -1,
     1793,  1794,    -1,    -1,  1795,    -1,  1796,
       -1,    -1,    -1,  1797,  1798,    -1,    -1,
     1799,    -1,  1800,    -1,    -1,  1801,  1802,
     1803,    -1,    -1,    -1,  1804,  1805,    -1,
       -1,    -1,  1806,  1807,    -1,    -1,    -1,
     1808,  1809,    -1,    -1,    -1,  1810,  1811,
       -1,    -1,  1812,  1813,  1814,    -1,    -1,
       -1,  1815,  1816,    -1,    -1,  1817,  1818,
     1819,    -1,    -1,  1820,    -1,  1821,    -1,
       -1,    -1,  1822,  1823,    -1,    -1,    -1,
     1824,  1825,    -1,    -1,  1826,  1827,  1828,
       -1,    -1,    -1,  1829,  1830,    -1,    -1,
       -1,  1831,  1832,    -1,    -1,    -1,  1833,
     1834,    -1,    -1,    -1,  1835,  1836,    -1,
       -1,  1837,  1838,  1839,    -1,    -1,    -1,
     1840,  1841,    -1,    -1,  1842,  1843,  1844,
       -1,    -1,  1845,  1846,  1847,    -1,    -1,
     1848,  1849,  1850,    -1,    -1,    -1,  1851,
     1852,    -1,    -1,    -1,  1853,    -1,    -1,
       -1,  1854,  1855,  1856,    -1,    -1,    -1,
     1857,  1858,    -1,    -1,    -1,  1859,  1860,
       -1,    -1,  1861,  1862,  1863,    -1,    -1,
     1864,    -1,  1865,    -1,    -1,    -1,  1866,
     1867,    -1,    -1,    -1,  1868,  1869,    -1,
       -1,  1870,  1871,  1872,    -1,    -1,  1873,
     1874,  1875,    -1,    -1,    -1,  1876,  1877,
       -1,    -1,    -1,  1878,  1879,    -1,    -1,
       -1,  1880,    -1,    -1,    -1,    -1,  1881,
     1882,    -1,    -1,    -1,  1883,  1884,    -1,
       -1,    -1,  1885,  1886,    -1,    -1,    -1,
     1887,  1888,    -1,    -1,  1889,  1890,  1891,
       -1,    -1,  1892,  1893,  1894,    -1,    -1,
       -1,  1895,  1896,    -1,    -1,    -1,  1897,
     1898,    -1,    -1,    -1,  1899,  1900,    -1,
       -1,  1901,  1902,  1903,    -1,    -1,  1904,
     1905,  1906,    -1,    -1,  1907,  1908,  1909,
       -1,    -1,  1910,  1911,  1912,    -1,    -1,
       -1,  1913,  1914,    -1,    -1,  1915,  1916,
     1917,    -1,    -1,    -1,  1918,  1919,    -1,
       -1,  1920,  1921,  1922,    -1,    -1,  1923,
     1924,  1925,    -1,    -1,    -1,  1926,  1927,
       -1,    -1,    -1,  1928,  1929,    -1,    -1,
     1930,  1931,  1932,    -1,    -1,    -1,  1933,
       -1,    -1,    -1,    -1,  1934,  1935,    -1,
       -1,    -1,    -1,  1936,    -1,    -1,    -1,
     1937,  1938,    -1,    -1,    -1,  1939,  1940,
       -1,    -1,    -1,  1941,  1942,    -1,    -1,
       -1,  1943,  1944,    -1,    -1,  1945,  1946,
       -1,    -1,    -1,  1947,  1948,    -1,    -1,
       -1,    -1,  1949,  1950,    -1,    -1,  1951,
     1952,  1953,    -1,    -1,    -1,  1954,  1955,
       -1,    -1,  1956,  1957,  1958,    -1,    -1,
     1959,  1960,  1961,    -1,    -1,    -1,  1962,
     1963,    -1,    -1,  1964,  1965,  1966,    -1,
       -1,    -1,  1967,  1968,    -1,    -1,  1969,
     1970,  1971,    -1,    -1,    -1,  1972,  1973,
       -1,    -1,    -1,  1974,  1975,    -1,    -1,
     1976,  1977,  1978,    -1,    -1,    -1,  1979,
    -6621,  -572,    -2,    -1,  1982,  1983,    -1,
       -1,    -1,  1984,  1985,    -1,    -1,    -1,
     1986,  1987,    -1,    -1,  1988,  1989,  1990,
       -1,    -1,  1991,  1992,  1993,    -1,    -1,
       -1,  1994,  1995,    -1,    -1,    -1,  1996,
     1997,    -1,    -1,  1998,    -1,  1999,    -1,
       -1,  2000,  2001,  2002,    -1,    -1,    -1,
       -1,  2003,    -1,    -1,    -1,  2004,    -1,
       -1,    -1,    -1,    -1,  2005,    -1,    -1,
     2006,  2007,  2008,    -1,    -1,  2009,  2010,
     2011,    -1,    -1,  2012,  2013,  2014,    -1,
       -1,    -1,  2015,  2016,    -1,    -1,  2017,
     2018,  2019,    -1,    -1,    -1,  2020,  2021,
       -1,    -1,    -1,  2022,  2023,    -1,    -1,
       -1,  2024,  2025,    -1,    -1,    -1,  2026,
     2027,    -1,    -1,    -1,  2028,  2029,    -1,
       -1,  2030,    -1,  2031,    -1,    -1,    -1,
       -1,  2032,    -1,    -1,    -1,  2033,  2034,
       -1,    -1,  2035,  2036,  2037,    -1,    -1,
       -1,  2038,    -1,    -1,    -1,    -1,  2039,
     2040,    -1,    -1,    -1,  2041,  2042,    -1,
       -1,    -1,  2043,  2044,    -1,    -1,    -1,
     2045,  2046,    -1,    -1,    -1,    -1,  2047,
       -1,    -1,    -1,    -1,  2048,    -1,    -1,
       -1,  2049,  2050,    -1,    -1,    -1,  2051,
     2052,    -1,    -1,    -1,    -1,  2053,    -1,
       -1,    -1,  2054,  2055,    -1,    -1,  2056,
     2057,  2058,    -1,    -1,    -1,    -1,  2059,
       -1,    -1,    -1,  2060,  2061,    -1,    -1,
       -1,  2062,  2063,    -1,    -1,    -1,  2064,
     2065,    -1,    -1,    -1,  2066,  2067,    -1,
       -1,  2068,  2069,  2070,    -1,    -1,    -1,
     2071,  2072,    -1,    -1,    -1,  2073,  2074,
       -1,    -1,  2075,    -1,  2076,    -1,    -1,
       -1,  2077,  2078,    -1,    -1,    -1,  2079,
     2080,    -1,    -1,    -1,    -1,  2081,    -1,
       -1,    -1,    -1,  2082,    -1,    -1,    -1,
     2083,  2084,    -1,    -1,    -1,  2085,    -1,
       -1,    -1,    -1,  2086,  2087,    -1,    -1,
       -1,  2088,  2089,    -1,    -1,    -1,    -1,
     2090,    -1,    -1,    -1,  2091,  2092,    -1,
       -1,    -1,  2093,    -1,    -1,    -1,    -1,
     2094,  2095,    -1,    -1,    -1,  2096,    -1,
       -1,    -1,    -1,  2097,  2098,    -1,    -1,
       -1,  2099,  2100,    -1,    -1,    -1,    -1,
     2101,    -1,    -1,  2102,  2103,  2104,    -1,
       -1,  2105,  2106,  2107,    -1,    -1,    -1,
     2108,  2109,    -1,    -1,    -1,    -1,  2110,
       -1,    -1,  2111,  2112,  2113,    -1,    -1,
       -1,  2114,  2115,    -1,    -1,  2116,  2117,
     2118,    -1,    -1,    -1,  2119,  2120,    -1,
       -1,    -1,    -1,  2121,    -1,    -1,    -1,
     2122,    -1,    -1,    -1,    -1,    -1,  2123,
       -1,    -1,  2124,  2125,  2126,    -1,    -1,
       -1,  2127,  2128,    -1,    -1,    -1,  2129,
     2130,    -1,    -1,  2131,    -1,  2132,    -1,
       -1,    -1,  2133,  2134,    -1,    -1,  2135,
       -1,  2136,    -1,    -1,    -1,  2137,  2138,
       -1,    -1,    -1,  2139,  2140,    -1,    -1,
       -1,  2141,    -1,    -1,    -1,  2142,    -1,
     2143,    -1,    -1,  2144,  2145,  2146,    -1,
       -1,  2147,  2148,  2149,    -1,    -1,    -1,
     2150,    -1,    -1,    -1,  2151,  2152,  2153,
       -1,    -1,    -1,  2154,  2155,    -1,    -1,
       -1,  2156,  2157,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  2158,  2159,    -1,
       -1,    -1,  2160,  2161,    -1,    -1,    -1,
       -1,  2162,    -1,    -1,    -1,  2163,  2164,
       -1,    -1,    -1,    -1,  2165,    -1,    -1,
       -1,  2166,  2167,    -1,    -1,  2168,  2169,
     2170,    -1,    -1,    -1,    -1,  2171,    -1,
       -1,    -1,  2172,  2173,    -1,    -1,    -1,
     2174,    -1,    -1,    -1,    -1,    -1,  2175,
       -1,    -1,  2176,  2177,  2178,    -1,    -1,
       -1,  2179,  2180,    -1,    -1,    -1,  2181,
     2182,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2183,    -1,    -1,    -1,    -1,
     2184,  2185,    -1,    -1,    -1,  2186,  2187,
       -1,    -1,    -1,  2188,    -1,    -1,    -1,
       -1,  2189,  2190,    -1,    -1,    -1,  2191,
     2192,    -1,    -1,    -1,  2193,    -1,    -1,
       -1,    -1,    -1,  2194,    -1,    -1,    -1,
     2195,  2196,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2197,  2198,  2199,    -1,    -1,
       -1,  2200,  2201,    -1,    -1,    -1,    -1,
     2202,    -1,    -1,    -1,    -1,  2203,    -1,
       -1,    -1,  2204,  2205,    -1,    -1,  2206,
     2207,  2208,    -1,    -1,    -1,  2209,  2210,
       -1,    -1,    -1,  2211,    -1,    -1,    -1,
       -1,  2212,    -1,    -1,    -1,    -1,  2213,
     2214,    -1,    -1,    -1,    -1,  2215,    -1,
       -1,    -1,  2216,  2217,    -1,    -1,    -1,
       -1,  2218,    -1,    -1,    -1,  2219,    -1,
       -1,    -1,    -1,  2220,    -1,    -1,    -1,
       -1,  2221,    -1,    -1,    -1,    -1,  2222,
       -1,    -1,    -1,  2223,    -1,  2224,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2225,
     2226,  2227,    -1,    -1,    -1,    -1,  2228,
       -1,    -1,    -1,  2229,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2230,
     2231,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2232,  2233,    -1,    -1,    -1,
       -1,  2234,    -1,    -1,    -1,  2235,  2236,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2237,
     2238,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2239,  2240,    -1,    -1,    -1,
       -1,  2241,    -1,    -1,    -1,  2242,  2243,
       -1,    -1,    -1,    -1,  2244,    -1,    -1,
       -1,    -1,  2245,    -1,    -1,    -1,  2246,
     2247,    -1,    -1,    -1,  2248,    -1,    -1,
       -1,    -1,  2249,  2250,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2251,
       -1,    -1,    -1,  2252,    -1,    -1,    -1,
       -1,    -1,  2253,    -1,    -1,    -1,  2254,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2255,    -1,    -1,    -1,
     2256,  2257,    -1,    -1,    -1,  2258,  2259,
       -1,    -1,    -1,  2260,    -1,    -1,    -1,
     2261,  2262,    -1,    -1,    -1,    -1,  2263,
       -1,    -1,    -1,    -1,    -1,  2264,    -1,
       -1,    -1,  2265,  2266,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2267,
       -1,    -1,    -1,  2268,    -1,    -1,    -1,
       -1,  2269,  2270,    -1,    -1,    -1,  2271,
     2272,    -1,    -1,    -1,  2273,  2274,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     2275,  2276,    -1,    -1,    -1,    -1,  2277,
       -1,    -1,    -1,  2278,    -1,    -1,    -1,
       -1,    -1,  2279,    -1,    -1,    -1,    -1,
     2280,    -1,    -1,    -1,  2281,    -1,    -1,
       -1,    -1,    -1,  2282,    -1,    -1,    -1,
       -1,  2283,    -1,    -1,    -1,    -1,  2284,
       -1,    -1,    -1,    -1,  2285,    -1,    -1,
       -1,  2286,  2287,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  2288,    -1,
       -1,    -1,    -1,  2289,    -1,    -1,    -1,
       -1,  2290,    -1,    -1,    -1,  2291,  2292,
       -1,    -1,    -1,  2293,  2294,    -1,    -1,
       -1,  2295,  2296,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  2297,    -1,
       -1,    -1,  2298,    -1,    -1,    -1,    -1,
       -1,  2299,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2300,  2301,    -1,    -1,
       -1,    -1,  2302,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  2303,    -1,
       -1,    -1,  2304,    -1,    -1,    -1,  2305,
     2306,    -1,    -1,    -1,    -1,  2307,  2308,
       -1,    -1,  2309,    -1,  2310,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     2311,    -1,    -1,  2312,  2313,    -1,    -1,
       -1,  2314,  2315,    -1,    -1,    -1,    -1,
     2316,    -1,    -1,    -1,  2317,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2318,
     2319,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2320,  2321,    -1,    -1,    -1,    -1,
     2322,    -1,    -1,    -1,    -1,    -1,  2323,
       -1,    -1,    -1,  2324,    -1,    -1,    -1,
       -1,  2325,  2326,    -1,    -1,    -1,    -1,
     2327,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2328,    -1,    -1,    -1,
     2329,  2330,    -1,    -1,    -1,  2331,  2332,
       -1,    -1,    -1,    -1,  2333,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  2334,    -1,
     2335,    -1,    -1,    -1,  2336,    -1,    -1,
       -1,    -1,  2337,  2338,    -1,    -1,  2339,
       -1,  2340,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2341,  2342,    -1,    -1,    -1,
       -1,  2343,    -1,    -1,    -1,    -1,  2344,
       -1,    -1,    -1,    -1,    -1,  2345,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2346,    -1,    -1,    -1,  2347,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2348,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2349,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2350,  2351,    -1,    -1,    -1,    -1,
     2352,    -1,    -1,    -1,  2353,    -1,    -1,
       -1,    -1,  2354,    -1,    -1,    -1,    -1,
       -1,  2355,    -1,    -1,    -1,  2356,  2357,
       -1,    -1,    -1,    -1,  2358,    -1,    -1,
       -1,  2359,    -1,    -1,    -1,    -1,  2360,
     2361,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2362,    -1,    -1,    -1,    -1,
       -1,  2363,    -1,    -1,    -1,    -1,  2364,
       -1,    -1,    -1,  2365,  2366,    -1,    -1,
       -1,    -1,  2367,    -1,    -1,    -1,    -1,
     2368,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2369,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  2370,    -1,
       -1,    -1,  2371,  2372,  2373,    -1,    -1,
       -1,  2374,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2375,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2376,    -1,    -1,  2377,
       -1,    -1,    -1,    -1,  2378,    -1,    -1,
       -1,  2379,  2380,    -1,    -1,    -1,  2381,
     2382,    -1,    -1,    -1,  2383,    -1,    -1,
       -1,    -1,    -1,  2384,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2385,
       -1,    -1,    -1,    -1,  2386,    -1,    -1,
       -1,  2387,  2388,    -1,    -1,    -1,  2389,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2390,    -1,    -1,    -1,    -1,
       -1,  2391,    -1,    -1,    -1,    -1,  2392,
       -1,    -1,    -1,  2393,  2394,    -1,    -1,
       -1,  2395,  2396,    -1,    -1,    -1,  2397,
     2398,    -1,    -1,    -1,    -1,  2399,    -1,
       -1,    -1,  2400,    -1,    -1,    -1,  2401,
     2402,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2403,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2404,    -1,    -1,    -1,
     2405,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  2406,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     2407,    -1,    -1,    -1,    -1,  2408,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     2409,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2410,    -1,    -1,    -1,
       -1,  2411,  2412,    -1,    -1,    -1,  2413,
     2414,    -1,    -1,    -1,  2415,  2416,    -1,
       -1,    -1,    -1,  2417,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2418,
       -1,    -1,    -1,  2419,  2420,    -1,    -1,
       -1,    -1,  2421,    -1,    -1,    -1,  2422,
     2423,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2424,    -1,    -1,    -1,    -1,
     2425,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  2426,    -1,    -1,
       -1,  2427,    -1,    -1,    -1,    -1,    -1,
     2428,    -1,    -1,    -1,    -1,  2429,    -1,
       -1,    -1,  2430,    -1,    -1,    -1,    -1,
       -1,  2431,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2432,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2433,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2434,    -1,    -1,    -1,    -1,
     2435,  2436,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2437,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2438,  2439,    -1,    -1,
       -1,  2440,  2441,    -1,    -1,    -1,    -1,
     2442,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2443,    -1,    -1,    -1,
       -1,  2444,    -1,    -1,    -1,  2445,    -1,
       -1,    -1,    -1,    -1,  2446,    -1,    -1,
       -1,  2447,    -1,    -1,    -1,    -1,    -1,
     2448,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     2449,  2450,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     2451,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2452,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  2453,  2454,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     2455,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2456,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2457,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2458,
       -1,    -1,    -1,    -1,    -1,  2459,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2460,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  2461,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2462,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2463,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2464,    -1,    -1,    -1,
     2465,    -1,    -1,    -1,    -1,  2466,  2467,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2468,    -1,    -1,  2469,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2470,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  2471,    -1,
       -1,    -1,  2472,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  2473,    -1,    -1,
       -1,    -1,  2474,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2475,    -1,    -1,    -1,    -1,    -1,
     2476,  2477,    -1,    -1,    -1,    -1,  2478,
       -1,    -1,    -1,    -1,  2479,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  2480,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2481,    -1,    -1,    -1,  2482,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2483,  2484,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  2485,  2486,
       -1,    -1,    -1,  2487,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2488,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2489,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2490,    -1,    -1,    -1,    -1,    -1,
     2491,    -1,    -1,    -1,    -1,  2492,    -1,
       -1,  2493,    -1,    -1,    -1,    -1,    -1,
     2494,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2495,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  2496,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     2497,    -1,    -1,    -1,    -1,    -1,  2498,
       -1,    -1,    -1,  2499,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2500,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2501,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2502,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  2503,    -1,
       -1,    -1,    -1,  2504,    -1,    -1,    -1,
     2505,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2506,    -1,    -1,    -1,    -1,  2507,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2508,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2509,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     2510,    -1,    -1,    -1,    -1,  2511,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     2512,    -1,    -1,    -1,    -1,  2513,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2514,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2515,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     2516,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  2517,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2518,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2519,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2520,
       -1,    -1,  2521,    -1,    -1,    -1,    -1,
       -1,    -1,  2522,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  2523,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2524,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     2525,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2526,    -1,    -1,    -1,
     2527,  2528,    -1,    -1,    -1,  2529,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2530,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2531,    -1,  2532,    -1,    -1,
       -1,  2533,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  2534,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2535,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2536,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     2537,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2538,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2539,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2540,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2541,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2542,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2543,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2544,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     2545,    -1,    -1,    -1,    -1,  2546,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2547,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2548,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     2549,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  2550,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     2551
  };

#ifdef __GNUC__
__inline
#endif
const struct char_map_s *
trad2simp_lookup (str, len)
     register const char *str;
     register unsigned int len;
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = trad2simp_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              if (len == lengthtable[index])
                {
                  register const char *s = trad2simp_wordlist[index].src;

                  if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
                    return &trad2simp_wordlist[index];
                }
            }
          else if (index < -TOTAL_KEYWORDS)
            {
              register int offset = - 1 - TOTAL_KEYWORDS - index;
              register const unsigned char *lengthptr = &lengthtable[TOTAL_KEYWORDS + lookup[offset]];
              register const struct char_map_s *wordptr = &trad2simp_wordlist[TOTAL_KEYWORDS + lookup[offset]];
              register const struct char_map_s *wordendptr = wordptr + -lookup[offset + 1];

              while (wordptr < wordendptr)
                {
                  if (len == *lengthptr)
                    {
                      register const char *s = wordptr->src;

                      if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
                        return wordptr;
                    }
                  lengthptr++;
                  wordptr++;
                }
            }
        }
    }
  return 0;
}

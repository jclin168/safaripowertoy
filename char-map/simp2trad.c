/* C code produced by gperf version 3.0.1 */
/* Command-line: gperf -F simp2trad_init -H simp2trad_hash -N simp2trad_lookup -C -c -G -D -W simp2trad_wordlist simp2trad.in  */
/* Computed positions: -k'1-2' */

#line 5 "simp2trad.in"

/*
   This is a part of SafariPowerToy source code
   (C)2006 written by jclin (jiancheng@gmail.com)
*/
#line 12 "simp2trad.in"
struct char_map_s {
  char * src;
  char * dst;
};

#define TOTAL_KEYWORDS 2551
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 2
#define MIN_HASH_VALUE 2
#define MAX_HASH_VALUE 8007
/* maximum key range = 8006, duplicates = 10 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
simp2trad_hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static const unsigned short asso_values[] =
    {
      8008, 8008, 8008, 8008, 8008, 8008, 8008, 8008, 8008, 8008,
      8008, 8008, 8008, 8008, 8008, 8008, 8008, 8008, 8008, 8008,
      8008, 8008, 8008, 8008, 8008, 8008, 8008, 8008, 8008, 8008,
      8008, 8008, 8008, 8008, 8008, 8008, 8008, 8008, 8008, 8008,
      8008, 8008, 8008, 8008, 8008, 8008, 8008, 8008, 8008, 8008,
      8008, 8008, 8008, 8008, 8008, 8008, 8008, 8008, 8008, 8008,
      8008, 8008, 8008, 8008, 8008, 8008, 8008, 8008, 8008, 8008,
      8008, 8008, 8008, 8008, 8008, 8008, 8008, 8008, 1045,  340,
       584,  495, 1175,  355,  940, 1980, 2210,  995, 2490,  910,
       294, 3155,  755,  944,  740, 3945,  695, 2670,  295, 1160,
      3820, 3165, 2580, 1475, 3580, 3300, 3685, 1450,   30,  240,
      1590, 2935, 1655, 2835,  750, 2140, 2845, 3165, 1170, 2190,
      3030, 3345,   49, 2000, 2495,  115,    5,  505, 1580, 2825,
      1560, 2300,  935, 2665, 1800, 2435, 1360, 2025,  945,    0,
      1465, 1030, 2920,  205, 1420, 2975,  250,    5,   10,  560,
       475,  380,   20,  630,   25, 4020,   15,  178,  775,  165,
      2668, 2483, 2253,  354, 3905,    9, 2353, 2469, 2463, 2053,
      1339, 2029, 3974, 3400, 2109, 3003, 3810,   38, 2208, 2018,
      3238,  884, 3360, 3259, 3215, 3900, 2150,  124, 2595, 2025,
      3878, 3858, 4060, 3999, 3035,  514, 2188, 3945, 3748,  504,
      3538, 3883, 1265, 3638, 2828, 3634, 1693, 1668, 1575, 2720,
         3, 3178, 2094, 3814, 3869, 1053, 2255, 3098,  370,   28,
        43, 1934,  453,  909, 1368, 2949, 2738, 2928, 1793, 1018,
         8, 2395, 1448, 1543, 2758,   14,  353, 1213, 3930, 1398,
      3665, 3864, 3909, 2798,   33, 3804, 2598,   79, 3764, 1253,
      2078, 3440,   44, 3980, 1393,   29, 4004, 3884,   34,  894,
      3885, 3479, 1100,  378, 1098, 2794, 3230, 3944, 2489, 2639,
      3083, 2294, 1468, 1304, 1194, 2749, 2050, 1205, 1474, 1335,
      1845, 1643,  905, 1250,  890, 2265, 2855, 1450,  703, 2530,
       800,  133, 1548, 2194,  213, 1185, 1754, 2095, 1498,  103,
      1418, 1338, 3298, 1685, 1895, 1655,   59, 3875,  404,  275,
       210,  140,  245,  105,  175,   70,    0,   35,  320,  390,
       284, 2155,  523,   89, 2474, 3650, 3458, 3260,  264,   78,
      3940, 1268, 3438,  439,    4,  874,   48, 3123,   28,  374,
       394,    3, 1158, 3110, 3994, 3359,  174,  694,  154,  348,
       344, 3779, 3198, 1093, 2894, 3874, 3739, 3215,  129, 1970,
      2069,  368,  478, 3408,  448,  194,  860,  785, 3409, 1133,
      1334,  524,   24, 2510, 2210,  958,  623, 3309, 3258,  178,
      2450, 3925,  680,  750,  605, 2975, 3664, 2184,  193,  734,
       253, 2599, 2873,  318, 3209,  293, 2114, 3454, 3054, 3094,
       469, 3704, 2508, 2224, 1864,  428
    };
  return len + asso_values[(unsigned char)str[1]+150] + asso_values[(unsigned char)str[0]];
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
     2,  2,  2
  };

static const struct char_map_s simp2trad_wordlist[] =
  {
#line 1476 "simp2trad.in"
    {"\213\246", "\x8A\x10"},
#line 1500 "simp2trad.in"
    {"\213\277", "\x8A\x2A"},
#line 1493 "simp2trad.in"
    {"\213\270", "\x8A\x31"},
#line 1094 "simp2trad.in"
    {"~\246", "\x7D\x04"},
#line 1119 "simp2trad.in"
    {"~\277", "\x7D\xDA"},
#line 1112 "simp2trad.in"
    {"~\270", "\x7D\x19"},
#line 1860 "simp2trad.in"
    {"\224\246", "\x6B\x3D"},
#line 1885 "simp2trad.in"
    {"\224\277", "\x92\x3F"},
#line 1878 "simp2trad.in"
    {"\224\270", "\x92\x3D"},
#line 2369 "simp2trad.in"
    {"\234\246", "\x9C\x37"},
#line 2394 "simp2trad.in"
    {"\234\277", "\x9C\x68"},
#line 2387 "simp2trad.in"
    {"\234\270", "\x9B\xE8"},
#line 2194 "simp2trad.in"
    {"\230\246", "\x98\x70"},
#line 1531 "simp2trad.in"
    {"\213\336", "\x8A\x95"},
#line 2320 "simp2trad.in"
    {"\232\246", "\x9A\x66"},
#line 1497 "simp2trad.in"
    {"\213\274", "\x8A\x1F"},
#line 1150 "simp2trad.in"
    {"~\336", "\x7D\x5E"},
#line 750 "simp2trad.in"
    {"l\246", "\x6D\xEA"},
#line 1116 "simp2trad.in"
    {"~\274", "\x7D\x16"},
#line 1911 "simp2trad.in"
    {"\224\336", "\x92\xB1"},
#line 1477 "simp2trad.in"
    {"\213\247", "\x8A\x0C"},
#line 1882 "simp2trad.in"
    {"\224\274", "\x92\x6C"},
#line 2424 "simp2trad.in"
    {"\234\336", "\x9C\x57"},
#line 1095 "simp2trad.in"
    {"~\247", "\x7D\x1A"},
#line 2391 "simp2trad.in"
    {"\234\274", "\x9C\x5D"},
#line 2209 "simp2trad.in"
    {"\230\336", "\x98\xDB"},
#line 1861 "simp2trad.in"
    {"\224\247", "\x92\x1E"},
#line 1495 "simp2trad.in"
    {"\213\272", "\x8A\xD6"},
#line 1043 "simp2trad.in"
    {"z\246", "\x7A\xC7"},
#line 2370 "simp2trad.in"
    {"\234\247", "\x9B\xC0"},
#line 1114 "simp2trad.in"
    {"~\272", "\x7D\x21"},
#line 756 "simp2trad.in"
    {"l\336", "\x6F\xD8"},
#line 2195 "simp2trad.in"
    {"\230\247", "\x98\x74"},
#line 1880 "simp2trad.in"
    {"\224\272", "\x92\x5E"},
#line 2262 "simp2trad.in"
    {"\232l", "\x99\xAC"},
#line 2321 "simp2trad.in"
    {"\232\247", "\x9A\x64"},
#line 2389 "simp2trad.in"
    {"\234\272", "\x9B\xF4"},
#line 1031 "simp2trad.in"
    {"z\006", "\x7A\x6D"},
#line 751 "simp2trad.in"
    {"l\247", "\x6E\xC4"},
#line 1475 "simp2trad.in"
    {"\213\245", "\x8B\x4F"},
#line 1046 "simp2trad.in"
    {"z\336", "\x7A\xF6"},
#line 2359 "simp2trad.in"
    {"\234\234", "\x9B\xAE"},
#line 1093 "simp2trad.in"
    {"~\245", "\x7D\x07"},
#line 1488 "simp2trad.in"
    {"\213\263", "\x8A\xF1"},
#line 2184 "simp2trad.in"
    {"\230\234", "\x98\x4F"},
#line 1859 "simp2trad.in"
    {"\224\245", "\x94\x70"},
#line 1107 "simp2trad.in"
    {"~\263", "\x7D\x0D"},
#line 2310 "simp2trad.in"
    {"\232\234", "\x9A\x41"},
#line 2368 "simp2trad.in"
    {"\234\245", "\x9C\x23"},
#line 1873 "simp2trad.in"
    {"\224\263", "\x92\x57"},
#line 1482 "simp2trad.in"
    {"\213\255", "\x8A\x13"},
#line 2193 "simp2trad.in"
    {"\230\245", "\x98\x6C"},
#line 2382 "simp2trad.in"
    {"\234\263", "\x9B\xE7"},
#line 1101 "simp2trad.in"
    {"~\255", "\x7D\x1C"},
#line 2319 "simp2trad.in"
    {"\232\245", "\x9A\x65"},
#line 1867 "simp2trad.in"
    {"\224\255", "\x92\x04"},
#line 749 "simp2trad.in"
    {"l\245", "\x70\x1D"},
#line 2376 "simp2trad.in"
    {"\234\255", "\x9B\xD6"},
#line 1473 "simp2trad.in"
    {"\213\243", "\x8A\x03"},
#line 1040 "simp2trad.in"
    {"z\234", "\x7A\xC4"},
#line 741 "simp2trad.in"
    {"la", "\x6C\x59"},
#line 1091 "simp2trad.in"
    {"~\243", "\x7D\x02"},
#line 1844 "simp2trad.in"
    {"\224\225", "\x91\xF9"},
#line 1857 "simp2trad.in"
    {"\224\243", "\x92\x11"},
#line 2352 "simp2trad.in"
    {"\234\225", "\x9B\x9E"},
#line 1042 "simp2trad.in"
    {"z\245", "\x7A\xBA"},
#line 2366 "simp2trad.in"
    {"\234\243", "\x9C\x39"},
#line 2177 "simp2trad.in"
    {"\230\225", "\x98\x34"},
#line 2191 "simp2trad.in"
    {"\230\243", "\x7E\x87"},
#line 2303 "simp2trad.in"
    {"\232\225", "\x9A\x4C"},
#line 1517 "simp2trad.in"
    {"\213\320", "\x8A\x56"},
#line 2317 "simp2trad.in"
    {"\232\243", "\x9A\x4F"},
#line 1136 "simp2trad.in"
    {"~\320", "\x7D\x3F"},
#line 747 "simp2trad.in"
    {"l\243", "\x70\x43"},
#line 1044 "simp2trad.in"
    {"z\255", "\x7A\xB6"},
#line 1900 "simp2trad.in"
    {"\224\320", "\x92\xAC"},
#line 1471 "simp2trad.in"
    {"\213\241", "\x8A\x08"},
#line 1836 "simp2trad.in"
    {"\224\215", "\x91\xF7"},
#line 2411 "simp2trad.in"
    {"\234\320", "\x9C\x29"},
#line 1089 "simp2trad.in"
    {"~\241", "\x7D\x06"},
#line 2344 "simp2trad.in"
    {"\234\215", "\x9B\x91"},
#line 2198 "simp2trad.in"
    {"\230\320", "\x98\xAD"},
#line 1855 "simp2trad.in"
    {"\224\241", "\x92\xC7"},
#line 2169 "simp2trad.in"
    {"\230\215", "\x6F\x41"},
#line 1507 "simp2trad.in"
    {"\213\306", "\x8B\x58"},
#line 2364 "simp2trad.in"
    {"\234\241", "\x9C\x7A"},
#line 2295 "simp2trad.in"
    {"\232\215", "\x9A\x02"},
#line 1126 "simp2trad.in"
    {"~\306", "\x7D\x30"},
#line 2189 "simp2trad.in"
    {"\230\241", "\x98\x59"},
#line 1892 "simp2trad.in"
    {"\224\306", "\x92\x5A"},
#line 2315 "simp2trad.in"
    {"\232\241", "\x9A\x3E"},
#line 2401 "simp2trad.in"
    {"\234\306", "\x9C\x12"},
#line 746 "simp2trad.in"
    {"l\241", "\x6C\x92"},
#line 2557 "simp2trad.in"
    {"l\241", "\x51\x87"},
#line 2529 "simp2trad.in"
    {"\237P", "\x9F\x4A"},
#line 1505 "simp2trad.in"
    {"\213\304", "\x8A\x55"},
#line 1474 "simp2trad.in"
    {"\213\244", "\x8A\x8D"},
#line 1538 "simp2trad.in"
    {"\213\345", "\x8A\x72"},
#line 1124 "simp2trad.in"
    {"~\304", "\x7D\x44"},
#line 1092 "simp2trad.in"
    {"~\244", "\x7E\x96"},
#line 1038 "simp2trad.in"
    {"z\215", "\x7A\xC5"},
#line 1157 "simp2trad.in"
    {"~\345", "\x7D\x8F"},
#line 1890 "simp2trad.in"
    {"\224\304", "\x94\x60"},
#line 1858 "simp2trad.in"
    {"\224\244", "\x92\x10"},
#line 1918 "simp2trad.in"
    {"\224\345", "\x92\xA9"},
#line 2399 "simp2trad.in"
    {"\234\304", "\x9C\x77"},
#line 2367 "simp2trad.in"
    {"\234\244", "\x9B\xC9"},
#line 1547 "simp2trad.in"
    {"\213\356", "\x8A\x9A"},
#line 1524 "simp2trad.in"
    {"\213\327", "\x8A\x69"},
#line 2192 "simp2trad.in"
    {"\230\244", "\x98\x6B"},
#line 1166 "simp2trad.in"
    {"~\356", "\x7D\xBA"},
#line 1143 "simp2trad.in"
    {"~\327", "\x7D\x4E"},
#line 2318 "simp2trad.in"
    {"\232\244", "\x9A\x5F"},
#line 1926 "simp2trad.in"
    {"\224\356", "\x93\x1A"},
#line 1904 "simp2trad.in"
    {"\224\327", "\x92\xCF"},
#line 748 "simp2trad.in"
    {"l\244", "\x6F\x1A"},
#line 734 "simp2trad.in"
    {"l\007", "\x6C\x0C"},
#line 2418 "simp2trad.in"
    {"\234\327", "\x9C\x3B"},
#line 1470 "simp2trad.in"
    {"\213\240", "\x8A\x01"},
#line 2205 "simp2trad.in"
    {"\230\327", "\x98\xC0"},
#line 1088 "simp2trad.in"
    {"~\240", "\x7C\xFE"},
#line 1854 "simp2trad.in"
    {"\224\240", "\x92\x09"},
#line 1839 "simp2trad.in"
    {"\224\220", "\x91\xE4"},
#line 2363 "simp2trad.in"
    {"\234\240", "\x9B\xC1"},
#line 2347 "simp2trad.in"
    {"\234\220", "\x9B\x90"},
#line 1788 "simp2trad.in"
    {"\217\336", "\x90\x23"},
#line 2188 "simp2trad.in"
    {"\230\240", "\x98\x5B"},
#line 2172 "simp2trad.in"
    {"\230\220", "\x98\x24"},
#line 1723 "simp2trad.in"
    {"\217i", "\x8E\xD2"},
#line 2314 "simp2trad.in"
    {"\232\240", "\x9A\x43"},
#line 2298 "simp2trad.in"
    {"\232\220", "\x9A\x0F"},
#line 1726 "simp2trad.in"
    {"\217l", "\x8F\x49"},
#line 797 "simp2trad.in"
    {"m\246", "\x6F\x64"},
#line 768 "simp2trad.in"
    {"m<", "\x7A\xAA"},
#line 1472 "simp2trad.in"
    {"\213\242", "\x8A\x02"},
#line 780 "simp2trad.in"
    {"mP", "\x6E\xFB"},
#line 1720 "simp2trad.in"
    {"\217f", "\x8E\xCA"},
#line 1090 "simp2trad.in"
    {"~\242", "\x7D\x05"},
#line 1549 "simp2trad.in"
    {"\213\360", "\x8A\xA5"},
#line 785 "simp2trad.in"
    {"mU", "\x6F\xDC"},
#line 1856 "simp2trad.in"
    {"\224\242", "\x92\xFC"},
#line 1168 "simp2trad.in"
    {"~\360", "\x7D\xBD"},
#line 2365 "simp2trad.in"
    {"\234\242", "\x9C\x31"},
#line 1928 "simp2trad.in"
    {"\224\360", "\x92\x78"},
#line 1487 "simp2trad.in"
    {"\213\262", "\x8B\x1B"},
#line 2190 "simp2trad.in"
    {"\230\242", "\x98\x65"},
#line 770 "simp2trad.in"
    {"mE", "\x6D\xFA"},
#line 1106 "simp2trad.in"
    {"~\262", "\x7D\xB1"},
#line 2316 "simp2trad.in"
    {"\232\242", "\x9A\x44"},
#line 1872 "simp2trad.in"
    {"\224\262", "\x92\x66"},
#line 798 "simp2trad.in"
    {"m\247", "\x6F\x97"},
#line 1825 "simp2trad.in"
    {"\222E", "\x94\x9C"},
#line 2381 "simp2trad.in"
    {"\234\262", "\x9B\xE4"},
#line 1087 "simp2trad.in"
    {"~\237", "\x7C\xF8"},
#line 771 "simp2trad.in"
    {"mF", "\x6F\x3F"},
#line 1480 "simp2trad.in"
    {"\213\252", "\x8A\x15"},
#line 1853 "simp2trad.in"
    {"\224\237", "\x93\x7E"},
#line 2563 "simp2trad.in"
    {"\224\237", "\x94\x18"},
#line 1098 "simp2trad.in"
    {"~\252", "\x7D\x00"},
#line 2362 "simp2trad.in"
    {"\234\237", "\x9C\x58"},
#line 1554 "simp2trad.in"
    {"\213\365", "\x8A\xA6"},
#line 1864 "simp2trad.in"
    {"\224\252", "\x92\x27"},
#line 2187 "simp2trad.in"
    {"\230\237", "\x98\x62"},
#line 1173 "simp2trad.in"
    {"~\365", "\x7D\xBF"},
#line 2373 "simp2trad.in"
    {"\234\252", "\x9B\xB6"},
#line 2313 "simp2trad.in"
    {"\232\237", "\x9A\x38"},
#line 1933 "simp2trad.in"
    {"\224\365", "\x92\xA8"},
#line 533 "simp2trad.in"
    {"b\017", "\x62\x32"},
#line 745 "simp2trad.in"
    {"l\237", "\x6E\x9D"},
#line 1767 "simp2trad.in"
    {"\217\225", "\x8F\x45"},
#line 357 "simp2trad.in"
    {"Z\006", "\x5B\x08"},
#line 531 "simp2trad.in"
    {"b\006", "\x62\x07"},
#line 754 "simp2trad.in"
    {"l\252", "\x6E\xEC"},
#line 1552 "simp2trad.in"
    {"\213\363", "\x8A\x91"},
#line 355 "simp2trad.in"
    {"Z\004", "\x5A\x41"},
#line 1478 "simp2trad.in"
    {"\213\250", "\x8A\x0E"},
#line 1171 "simp2trad.in"
    {"~\363", "\x7E\x69"},
#line 542 "simp2trad.in"
    {"bi", "\x64\xF4"},
#line 1096 "simp2trad.in"
    {"~\250", "\x7D\x08"},
#line 1931 "simp2trad.in"
    {"\224\363", "\x92\x83"},
#line 545 "simp2trad.in"
    {"bl", "\x63\xDA"},
#line 1862 "simp2trad.in"
    {"\224\250", "\x93\xA2"},
#line 1782 "simp2trad.in"
    {"\217\320", "\x90\x4B"},
#line 2371 "simp2trad.in"
    {"\234\250", "\x9B\xCA"},
#line 1759 "simp2trad.in"
    {"\217\215", "\x8F\x1F"},
#line 540 "simp2trad.in"
    {"bf", "\x62\x61"},
#line 87 "simp2trad.in"
    {"O\246", "\x50\x75"},
#line 1509 "simp2trad.in"
    {"\213\310", "\x8A\x50"},
#line 795 "simp2trad.in"
    {"m\243", "\x6E\x19"},
#line 1508 "simp2trad.in"
    {"\213\307", "\x8A\x57"},
#line 1128 "simp2trad.in"
    {"~\310", "\x7D\x42"},
#line 752 "simp2trad.in"
    {"l\250", "\x6E\x22"},
#line 1127 "simp2trad.in"
    {"~\307", "\x7E\x54"},
#line 1893 "simp2trad.in"
    {"\224\310", "\x92\x30"},
#line 202 "simp2trad.in"
    {"S\246", "\x5E\xC8"},
#line 206 "simp2trad.in"
    {"S\277", "\x7E\x23"},
#line 2403 "simp2trad.in"
    {"\234\310", "\x9C\x01"},
#line 2402 "simp2trad.in"
    {"\234\307", "\x9C\x09"},
#line 554 "simp2trad.in"
    {"b\245", "\x58\x31"},
#line 1520 "simp2trad.in"
    {"\213\323", "\x8A\x86"},
#line 184 "simp2trad.in"
    {"SU", "\x55\xAE"},
#line 1139 "simp2trad.in"
    {"~\323", "\x7D\x50"},
#line 1498 "simp2trad.in"
    {"\213\275", "\x8A\xF7"},
#line 88 "simp2trad.in"
    {"O\247", "\x50\x74"},
#line 70 "simp2trad.in"
    {"O\033", "\x50\xB4"},
#line 1117 "simp2trad.in"
    {"~\275", "\x7D\x10"},
#line 793 "simp2trad.in"
    {"m\241", "\x6E\x26"},
#line 2414 "simp2trad.in"
    {"\234\323", "\x9C\x33"},
#line 1883 "simp2trad.in"
    {"\224\275", "\x92\x6D"},
#line 2201 "simp2trad.in"
    {"\230\323", "\x98\xB6"},
#line 2392 "simp2trad.in"
    {"\234\275", "\x9C\x08"},
#line 1479 "simp2trad.in"
    {"\213\251", "\x8B\x93"},
#line 1499 "simp2trad.in"
    {"\213\276", "\x8A\x2D"},
#line 1097 "simp2trad.in"
    {"~\251", "\x7E\x8A"},
#line 1118 "simp2trad.in"
    {"~\276", "\x7D\x13"},
#line 1863 "simp2trad.in"
    {"\224\251", "\x92\x64"},
#line 2267 "simp2trad.in"
    {"\232q", "\x9A\x45"},
#line 1884 "simp2trad.in"
    {"\224\276", "\x92\x40"},
#line 2372 "simp2trad.in"
    {"\234\251", "\x9B\xC7"},
#line 2393 "simp2trad.in"
    {"\234\276", "\x9C\x0F"},
#line 86 "simp2trad.in"
    {"O\245", "\x50\xE5"},
#line 1852 "simp2trad.in"
    {"\224\236", "\x92\x14"},
#line 796 "simp2trad.in"
    {"m\244", "\x6E\xCC"},
#line 1762 "simp2trad.in"
    {"\217\220", "\x8F\x3B"},
#line 2361 "simp2trad.in"
    {"\234\236", "\x9B\xD7"},
#line 753 "simp2trad.in"
    {"l\251", "\x6E\x88"},
#line 2186 "simp2trad.in"
    {"\230\236", "\x98\x73"},
#line 1564 "simp2trad.in"
    {"\213\377", "\x8A\xC9"},
#line 2312 "simp2trad.in"
    {"\232\236", "\x9A\x2B"},
#line 1183 "simp2trad.in"
    {"~\377", "\x7D\xA0"},
#line 551 "simp2trad.in"
    {"b\241", "\x63\x84"},
#line 1943 "simp2trad.in"
    {"\224\377", "\x93\xD7"},
#line 1492 "simp2trad.in"
    {"\213\267", "\x8A\x25"},
#line 2548 "simp2trad.in"
    {"\237\237", "\x9F\x9C"},
#line 1111 "simp2trad.in"
    {"~\267", "\x7D\x1B"},
#line 85 "simp2trad.in"
    {"O\243", "\x4F\xB6"},
#line 1523 "simp2trad.in"
    {"\213\326", "\x8A\x7F"},
#line 1877 "simp2trad.in"
    {"\224\267", "\x92\x55"},
#line 792 "simp2trad.in"
    {"m\240", "\x6F\x7F"},
#line 1142 "simp2trad.in"
    {"~\326", "\x7D\x70"},
#line 2386 "simp2trad.in"
    {"\234\267", "\x9B\xDB"},
#line 199 "simp2trad.in"
    {"S\225", "\x5E\xC1"},
#line 201 "simp2trad.in"
    {"S\243", "\x53\xB4"},
#line 2417 "simp2trad.in"
    {"\234\326", "\x9C\x49"},
#line 75 "simp2trad.in"
    {"O%", "\x50\x00"},
#line 2204 "simp2trad.in"
    {"\230\326", "\x98\xBB"},
#line 1559 "simp2trad.in"
    {"\213\372", "\x8A\xFE"},
#line 553 "simp2trad.in"
    {"b\244", "\x8B\x77"},
#line 358 "simp2trad.in"
    {"Z\007", "\x5B\x0C"},
#line 559 "simp2trad.in"
    {"b\345", "\x64\xC1"},
#line 1178 "simp2trad.in"
    {"~\372", "\x7D\xB9"},
#line 1521 "simp2trad.in"
    {"\213\324", "\x8A\x84"},
#line 1938 "simp2trad.in"
    {"\224\372", "\x92\xEA"},
#line 1140 "simp2trad.in"
    {"~\324", "\x7D\x5D"},
#line 2091 "simp2trad.in"
    {"\226\017", "\x95\xBC"},
#line 794 "simp2trad.in"
    {"m\242", "\x6E\xB3"},
#line 198 "simp2trad.in"
    {"S\215", "\x53\x99"},
#line 2114 "simp2trad.in"
    {"\226U", "\x96\x5D"},
#line 2082 "simp2trad.in"
    {"\226\006", "\x95\xAC"},
#line 2415 "simp2trad.in"
    {"\234\324", "\x9C\x3E"},
#line 2078 "simp2trad.in"
    {"\226\002", "\x95\xA1"},
#line 1045 "simp2trad.in"
    {"z\326", "\x8C\x4E"},
#line 2202 "simp2trad.in"
    {"\230\324", "\x98\xB8"},
#line 761 "simp2trad.in"
    {"l\372", "\x6F\xFC"},
#line 2080 "simp2trad.in"
    {"\226\004", "\x9B\x2E"},
#line 2109 "simp2trad.in"
    {"\226E", "\x96\x9B"},
#line 2117 "simp2trad.in"
    {"\226i", "\x96\xAA"},
#line 550 "simp2trad.in"
    {"b\240", "\x64\x73"},
#line 208 "simp2trad.in"
    {"S\306", "\x97\x49"},
#line 2103 "simp2trad.in"
    {"\226\033", "\x95\xE4"},
#line 1199 "simp2trad.in"
    {"\177\017", "\x7D\xF6"},
#line 791 "simp2trad.in"
    {"m\237", "\x6F\x23"},
#line 2110 "simp2trad.in"
    {"\226F", "\x96\x78"},
#line 2525 "simp2trad.in"
    {"\237\015", "\x9F\x09"},
#line 1190 "simp2trad.in"
    {"\177\006", "\x7E\x9C"},
#line 1791 "simp2trad.in"
    {"\217\363", "\x90\x15"},
#line 1530 "simp2trad.in"
    {"\213\335", "\x8A\x71"},
#line 1186 "simp2trad.in"
    {"\177\002", "\x7D\xD9"},
#line 1100 "simp2trad.in"
    {"~\254", "\x7D\xEF"},
#line 1149 "simp2trad.in"
    {"~\335", "\x7D\x55"},
#line 1188 "simp2trad.in"
    {"\177\004", "\x7D\xD8"},
#line 1866 "simp2trad.in"
    {"\224\254", "\x92\x25"},
#line 1910 "simp2trad.in"
    {"\224\335", "\x92\xC1"},
#line 2528 "simp2trad.in"
    {"\237D", "\x9F\x47"},
#line 2375 "simp2trad.in"
    {"\234\254", "\x9B\xD2"},
#line 2423 "simp2trad.in"
    {"\234\335", "\x9C\x54"},
#line 552 "simp2trad.in"
    {"b\242", "\x64\x36"},
#line 1211 "simp2trad.in"
    {"\177\033", "\x7E\x1F"},
#line 2128 "simp2trad.in"
    {"\227\011", "\x9E\xF4"},
#line 1781 "simp2trad.in"
    {"\217\310", "\x90\x81"},
#line 84 "simp2trad.in"
    {"O\240", "\x4F\xE0"},
#line 1780 "simp2trad.in"
    {"\217\307", "\x90\x4E"},
#line 125 "simp2trad.in"
    {"Q\234", "\x8F\xB2"},
#line 799 "simp2trad.in"
    {"m\250", "\x6F\x32"},
#line 1999 "simp2trad.in"
    {"\225<", "\x93\xAA"},
#line 2016 "simp2trad.in"
    {"\225P", "\x93\xAC"},
#line 1959 "simp2trad.in"
    {"\225\017", "\x94\x27"},
#line 549 "simp2trad.in"
    {"b\237", "\x64\x76"},
#line 129 "simp2trad.in"
    {"Q\263", "\x6C\x7A"},
#line 2019 "simp2trad.in"
    {"\225U", "\x93\x94"},
#line 1950 "simp2trad.in"
    {"\225\006", "\x92\xEF"},
#line 367 "simp2trad.in"
    {"Z\252", "\x5A\xBC"},
#line 1777 "simp2trad.in"
    {"\217\275", "\x90\x7C"},
#line 1946 "simp2trad.in"
    {"\225\002", "\x92\xF0"},
#line 1731 "simp2trad.in"
    {"\217q", "\x8E\xF2"},
#line 1948 "simp2trad.in"
    {"\225\004", "\x92\xE4"},
#line 2038 "simp2trad.in"
    {"\225i", "\x94\x79"},
#line 2027 "simp2trad.in"
    {"\225^", "\x93\xC3"},
#line 2041 "simp2trad.in"
    {"\225l", "\x94\x4A"},
#line 1774 "simp2trad.in"
    {"\217\251", "\x8F\xAF"},
#line 1778 "simp2trad.in"
    {"\217\276", "\x90\x54"},
#line 200 "simp2trad.in"
    {"S\242", "\x5E\xC2"},
#line 2007 "simp2trad.in"
    {"\225F", "\x93\xCC"},
#line 2035 "simp2trad.in"
    {"\225f", "\x94\x13"},
#line 1543 "simp2trad.in"
    {"\213\352", "\x8B\x78"},
#line 1773 "simp2trad.in"
    {"\217\236", "\x8F\xAD"},
#line 1162 "simp2trad.in"
    {"~\352", "\x7D\xD2"},
#line 1922 "simp2trad.in"
    {"\224\352", "\x92\x7F"},
#line 101 "simp2trad.in"
    {"Pl", "\x50\xAF"},
#line 106 "simp2trad.in"
    {"P\247", "\x51\x10"},
#line 766 "simp2trad.in"
    {"m\001", "\x6F\x54"},
#line 1535 "simp2trad.in"
    {"\213\342", "\x8A\x62"},
#line 91 "simp2trad.in"
    {"O\252", "\x51\x15"},
#line 1154 "simp2trad.in"
    {"~\342", "\x7D\x79"},
#line 1221 "simp2trad.in"
    {"\177%", "\x7E\x39"},
#line 800 "simp2trad.in"
    {"m\251", "\x6F\x80"},
#line 1915 "simp2trad.in"
    {"\224\342", "\x92\x96"},
#line 757 "simp2trad.in"
    {"l\352", "\x6D\xDA"},
#line 2428 "simp2trad.in"
    {"\234\342", "\x9C\x67"},
#line 2030 "simp2trad.in"
    {"\225a", "\x94\x14"},
#line 2085 "simp2trad.in"
    {"\226\011", "\x95\xB9"},
#line 790 "simp2trad.in"
    {"m\236", "\x6D\xF6"},
#line 1246 "simp2trad.in"
    {"\177\241", "\x7F\xA8"},
#line 2562 "simp2trad.in"
    {"Q\306", "\x6E\x96"},
#line 2083 "simp2trad.in"
    {"\226\007", "\x95\xCD"},
#line 105 "simp2trad.in"
    {"P\245", "\x51\x3B"},
#line 2217 "simp2trad.in"
    {"\231i", "\x99\x3C"},
#line 89 "simp2trad.in"
    {"O\250", "\x50\xD1"},
#line 2220 "simp2trad.in"
    {"\231l", "\x98\xED"},
#line 133 "simp2trad.in"
    {"Q\304", "\x6D\xD2"},
#line 1193 "simp2trad.in"
    {"\177\011", "\x7D\xDD"},
#line 2144 "simp2trad.in"
    {"\227\365", "\x97\xFB"},
#line 2214 "simp2trad.in"
    {"\231f", "\x98\xE5"},
#line 203 "simp2trad.in"
    {"S\250", "\x5E\xDA"},
#line 1541 "simp2trad.in"
    {"\213\350", "\x8A\xE2"},
#line 1191 "simp2trad.in"
    {"\177\007", "\x7D\xF9"},
#line 1978 "simp2trad.in"
    {"\225%", "\x93\x10"},
#line 1160 "simp2trad.in"
    {"~\350", "\x7D\x88"},
#line 2119 "simp2trad.in"
    {"\226\220", "\x96\xB1"},
#line 1921 "simp2trad.in"
    {"\224\350", "\x92\x93"},
#line 773 "simp2trad.in"
    {"mH", "\x6E\x5E"},
#line 1506 "simp2trad.in"
    {"\213\305", "\x8A\x5B"},
#line 506 "simp2trad.in"
    {"`\246", "\x60\x85"},
#line 495 "simp2trad.in"
    {"`<", "\x61\xDF"},
#line 1125 "simp2trad.in"
    {"~\305", "\x7D\x33"},
#line 2210 "simp2trad.in"
    {"\230\350", "\x99\x57"},
#line 209 "simp2trad.in"
    {"S\307", "\x97\x46"},
#line 1891 "simp2trad.in"
    {"\224\305", "\x92\x5B"},
#line 185 "simp2trad.in"
    {"SV", "\x8C\xE3"},
#line 2400 "simp2trad.in"
    {"\234\305", "\x9C\x0D"},
#line 492 "simp2trad.in"
    {"`\006", "\x61\x34"},
#line 1833 "simp2trad.in"
    {"\224\212", "\x91\xD7"},
#line 488 "simp2trad.in"
    {"`\002", "\x61\x6B"},
#line 2341 "simp2trad.in"
    {"\234\212", "\x9B\x93"},
#line 2322 "simp2trad.in"
    {"\232\305", "\x9A\xCF"},
#line 490 "simp2trad.in"
    {"`\004", "\x61\x6A"},
#line 2166 "simp2trad.in"
    {"\230\212", "\x98\x30"},
#line 1953 "simp2trad.in"
    {"\225\011", "\x92\xBC"},
#line 2292 "simp2trad.in"
    {"\232\212", "\x9A\x6A"},
#line 1787 "simp2trad.in"
    {"\217\335", "\x90\x55"},
#line 90 "simp2trad.in"
    {"O\251", "\x51\x08"},
#line 2261 "simp2trad.in"
    {"\231\225", "\x99\x62"},
#line 1548 "simp2trad.in"
    {"\213\357", "\x8A\xA4"},
#line 1951 "simp2trad.in"
    {"\225\007", "\x92\xE8"},
#line 1167 "simp2trad.in"
    {"~\357", "\x7D\xCB"},
#line 126 "simp2trad.in"
    {"Q\242", "\x58\x5A"},
#line 447 "simp2trad.in"
    {"^<", "\x5E\x57"},
#line 1927 "simp2trad.in"
    {"\224\357", "\x92\xAB"},
#line 204 "simp2trad.in"
    {"S\251", "\x5E\xC4"},
#line 438 "simp2trad.in"
    {"^\017", "\x5E\x43"},
#line 1542 "simp2trad.in"
    {"\213\351", "\x8A\x61"},
#line 2058 "simp2trad.in"
    {"\225\356", "\x55\x4F"},
#line 884 "simp2trad.in"
    {"r\270", "\x73\x41"},
#line 1161 "simp2trad.in"
    {"~\351", "\x7E\x3E"},
#line 415 "simp2trad.in"
    {"\\\277", "\x5D\xCB"},
#line 128 "simp2trad.in"
    {"Q\262", "\x88\x5D"},
#line 2127 "simp2trad.in"
    {"\227\001", "\x97\x3D"},
#line 2253 "simp2trad.in"
    {"\231\215", "\x99\x43"},
#line 462 "simp2trad.in"
    {"^\274", "\x5E\xCE"},
#line 389 "simp2trad.in"
    {"\\\006", "\x5C\x07"},
#line 369 "simp2trad.in"
    {"Z\324", "\x5B\x2A"},
#line 449 "simp2trad.in"
    {"^^", "\x89\x46"},
#line 889 "simp2trad.in"
    {"r\336", "\x73\x70"},
#line 2515 "simp2trad.in"
    {"\236\246", "\x9E\xA5"},
#line 2459 "simp2trad.in"
    {"\236<", "\x9D\x43"},
#line 2516 "simp2trad.in"
    {"\236\270", "\x9E\xA9"},
#line 1245 "simp2trad.in"
    {"\177\237", "\x7F\xA5"},
#line 2479 "simp2trad.in"
    {"\236P", "\x9D\x6E"},
#line 509 "simp2trad.in"
    {"`\255", "\x61\x73"},
#line 1526 "simp2trad.in"
    {"\213\331", "\x8A\x7C"},
#line 400 "simp2trad.in"
    {"\\^", "\x5C\x6C"},
#line 2484 "simp2trad.in"
    {"\236U", "\x9D\x98"},
#line 1145 "simp2trad.in"
    {"~\331", "\x7D\x66"},
#line 2125 "simp2trad.in"
    {"\226\363", "\x97\x42"},
#line 877 "simp2trad.in"
    {"rf", "\x72\x9B"},
#line 1906 "simp2trad.in"
    {"\224\331", "\x94\x03"},
#line 360 "simp2trad.in"
    {"Z1", "\x5A\x1B"},
#line 402 "simp2trad.in"
    {"\\f", "\x5C\x68"},
#line 2420 "simp2trad.in"
    {"\234\331", "\x9C\x45"},
#line 2468 "simp2trad.in"
    {"\236E", "\x9D\x5D"},
#line 2503 "simp2trad.in"
    {"\236i", "\x9D\xEF"},
#line 2207 "simp2trad.in"
    {"\230\331", "\x98\xC6"},
#line 2492 "simp2trad.in"
    {"\236^", "\x9D\xC2"},
#line 2506 "simp2trad.in"
    {"\236l", "\x9D\xF8"},
#line 1835 "simp2trad.in"
    {"\224\214", "\x91\xD5"},
#line 2060 "simp2trad.in"
    {"\225\360", "\x95\x8F"},
#line 2343 "simp2trad.in"
    {"\234\214", "\x9B\x8A"},
#line 2469 "simp2trad.in"
    {"\236F", "\x9D\x52"},
#line 2500 "simp2trad.in"
    {"\236f", "\x9E\x1A"},
#line 2168 "simp2trad.in"
    {"\230\214", "\x98\x1C"},
#line 2294 "simp2trad.in"
    {"\232\214", "\x9A\x57"},
#line 2089 "simp2trad.in"
    {"\226\015", "\x95\xBD"},
#line 177 "simp2trad.in"
    {"S\000", "\x52\xFB"},
#line 413 "simp2trad.in"
    {"\\\263", "\x5D\xBD"},
#line 401 "simp2trad.in"
    {"\\a", "\x5C\x62"},
#line 2256 "simp2trad.in"
    {"\231\220", "\x99\x48"},
#line 412 "simp2trad.in"
    {"\\\255", "\x5D\xBA"},
#line 111 "simp2trad.in"
    {"QV", "\x51\x57"},
#line 2121 "simp2trad.in"
    {"\226\275", "\x96\xCB"},
#line 2065 "simp2trad.in"
    {"\225\365", "\x95\x94"},
#line 2495 "simp2trad.in"
    {"\236a", "\x9D\xBA"},
#line 2077 "simp2trad.in"
    {"\226\001", "\x95\xA3"},
#line 1197 "simp2trad.in"
    {"\177\015", "\x7D\x9E"},
#line 1525 "simp2trad.in"
    {"\213\330", "\x8A\x70"},
#line 92 "simp2trad.in"
    {"O\254", "\x51\x02"},
#line 1144 "simp2trad.in"
    {"~\330", "\x7E\x6A"},
#line 2542 "simp2trad.in"
    {"\237\212", "\x9F\x6A"},
#line 2122 "simp2trad.in"
    {"\226\276", "\x96\xE3"},
#line 1905 "simp2trad.in"
    {"\224\330", "\x92\xE3"},
#line 1494 "simp2trad.in"
    {"\213\271", "\x8A\x1B"},
#line 2419 "simp2trad.in"
    {"\234\330", "\x9C\x35"},
#line 2063 "simp2trad.in"
    {"\225\363", "\x95\x8E"},
#line 1113 "simp2trad.in"
    {"~\271", "\x7D\x0B"},
#line 2206 "simp2trad.in"
    {"\230\330", "\x98\xC4"},
#line 1879 "simp2trad.in"
    {"\224\271", "\x92\x38"},
#line 1185 "simp2trad.in"
    {"\177\001", "\x7D\xC7"},
#line 518 "simp2trad.in"
    {"`\356", "\x61\x9A"},
#line 2388 "simp2trad.in"
    {"\234\271", "\x9B\xF5"},
#line 2129 "simp2trad.in"
    {"\227-", "\x97\x44"},
#line 2436 "simp2trad.in"
    {"\236%", "\x9D\xD7"},
#line 1829 "simp2trad.in"
    {"\224\206", "\x91\xD3"},
#line 107 "simp2trad.in"
    {"P\250", "\x51\x32"},
#line 2337 "simp2trad.in"
    {"\234\206", "\x9B\x83"},
#line 1756 "simp2trad.in"
    {"\217\212", "\x8F\x25"},
#line 2162 "simp2trad.in"
    {"\230\206", "\x98\x18"},
#line 2020 "simp2trad.in"
    {"\225V", "\x93\xE2"},
#line 1957 "simp2trad.in"
    {"\225\015", "\x92\xF6"},
#line 2288 "simp2trad.in"
    {"\232\206", "\x99\xF1"},
#line 557 "simp2trad.in"
    {"b\342", "\x65\x0F"},
#line 2263 "simp2trad.in"
    {"\232m", "\x99\xAD"},
#line 2335 "simp2trad.in"
    {"\234\204", "\x9B\x7A"},
#line 146 "simp2trad.in"
    {"Q\377", "\x94\x7F"},
#line 2160 "simp2trad.in"
    {"\230\204", "\x98\x10"},
#line 2112 "simp2trad.in"
    {"\226H", "\x96\x73"},
#line 417 "simp2trad.in"
    {"\\\304", "\x5D\xA7"},
#line 2286 "simp2trad.in"
    {"\232\204", "\x9A\x55"},
#line 421 "simp2trad.in"
    {"\\\345", "\x5D\x22"},
#line 334 "simp2trad.in"
    {"Y\004", "\x86\x55"},
#line 2046 "simp2trad.in"
    {"\225q", "\x94\x3F"},
#line 740 "simp2trad.in"
    {"lI", "\x6F\x22"},
#line 1945 "simp2trad.in"
    {"\225\001", "\x93\x96"},
#line 892 "simp2trad.in"
    {"r\356", "\x73\x45"},
#line 245 "simp2trad.in"
    {"T\270", "\x9E\x79"},
#line 97 "simp2trad.in"
    {"O\352", "\x51\x37"},
#line 2517 "simp2trad.in"
    {"\236\304", "\x9E\xC3"},
#line 2076 "simp2trad.in"
    {"\226\000", "\x95\xA5"},
#line 455 "simp2trad.in"
    {"^\220", "\x5E\xEC"},
#line 231 "simp2trad.in"
    {"TU", "\x56\x14"},
#line 1790 "simp2trad.in"
    {"\217\351", "\x90\x87"},
#line 1534 "simp2trad.in"
    {"\213\341", "\x8A\x6D"},
#line 2552 "simp2trad.in"
    {"S\352", "\x96\xBB"},
#line 1153 "simp2trad.in"
    {"~\341", "\x7D\x83"},
#line 423 "simp2trad.in"
    {"]\002", "\x5D\x97"},
#line 2544 "simp2trad.in"
    {"\237\214", "\x9F\x77"},
#line 1914 "simp2trad.in"
    {"\224\341", "\x93\x58"},
#line 425 "simp2trad.in"
    {"]\004", "\x5D\xAE"},
#line 2427 "simp2trad.in"
    {"\234\341", "\x9C\x64"},
#line 108 "simp2trad.in"
    {"P\251", "\x51\x3A"},
#line 562 "simp2trad.in"
    {"b\350", "\x64\xA5"},
#line 1184 "simp2trad.in"
    {"\177\000", "\x7D\xB4"},
#line 2211 "simp2trad.in"
    {"\231\015", "\x99\x5C"},
#line 2141 "simp2trad.in"
    {"\227\352", "\x97\xD9"},
#line 2075 "simp2trad.in"
    {"\225\377", "\x95\xD3"},
#line 555 "simp2trad.in"
    {"b\305", "\x64\xD4"},
#line 1784 "simp2trad.in"
    {"\217\331", "\x90\x19"},
#line 311 "simp2trad.in"
    {"W\246", "\x58\xBE"},
#line 894 "simp2trad.in"
    {"r\360", "\x73\x19"},
#line 1758 "simp2trad.in"
    {"\217\214", "\x8F\x2C"},
#line 2225 "simp2trad.in"
    {"\231q", "\x98\xFD"},
#line 1233 "simp2trad.in"
    {"\1771", "\x7E\x7E"},
#line 293 "simp2trad.in"
    {"W\006", "\x57\x13"},
#line 2009 "simp2trad.in"
    {"\225H", "\x93\x9B"},
#line 461 "simp2trad.in"
    {"^\237", "\x5E\xE2"},
#line 1229 "simp2trad.in"
    {"\177-", "\x7E\x5A"},
#line 95 "simp2trad.in"
    {"O\350", "\x51\x3C"},
#line 881 "simp2trad.in"
    {"r\237", "\x5F\x37"},
#line 304 "simp2trad.in"
    {"W^", "\x58\x62"},
#line 2070 "simp2trad.in"
    {"\225\372", "\x95\xA8"},
#line 312 "simp2trad.in"
    {"W\247", "\x57\x70"},
#line 1652 "simp2trad.in"
    {"\215<", "\x8C\xCA"},
#line 1697 "simp2trad.in"
    {"\215\270", "\x8E\x89"},
#line 1944 "simp2trad.in"
    {"\225\000", "\x92\xB7"},
#line 1672 "simp2trad.in"
    {"\215P", "\x8C\xDC"},
#line 787 "simp2trad.in"
    {"m\214", "\x6E\x67"},
#line 1677 "simp2trad.in"
    {"\215U", "\x8C\xE7"},
#line 563 "simp2trad.in"
    {"b\351", "\x64\xC7"},
#line 58 "simp2trad.in"
    {"N\277", "\x51\x04"},
#line 57 "simp2trad.in"
    {"N\270", "\x56\xB2"},
#line 40 "simp2trad.in"
    {"NP", "\x6A\x02"},
#line 1701 "simp2trad.in"
    {"\215\336", "\x8E\x92"},
#line 2538 "simp2trad.in"
    {"\237\206", "\x9F\x60"},
#line 1661 "simp2trad.in"
    {"\215E", "\x8C\xC5"},
#line 1365 "simp2trad.in"
    {"\204%", "\x71\xDF"},
#line 2139 "simp2trad.in"
    {"\227\350", "\x97\xCD"},
#line 1686 "simp2trad.in"
    {"\215^", "\x8B\x9A"},
#line 1988 "simp2trad.in"
    {"\2251", "\x93\x19"},
#line 1783 "simp2trad.in"
    {"\217\330", "\x90\x84"},
#line 359 "simp2trad.in"
    {"Z\010", "\x5B\x4C"},
#line 2536 "simp2trad.in"
    {"\237\204", "\x9F\x61"},
#line 1662 "simp2trad.in"
    {"\215F", "\x8D\x10"},
#line 1984 "simp2trad.in"
    {"\225-", "\x93\x20"},
#line 487 "simp2trad.in"
    {"`\001", "\x61\x4B"},
#line 1776 "simp2trad.in"
    {"\217\271", "\x90\x8A"},
#line 53 "simp2trad.in"
    {"N\247", "\x75\x22"},
#line 23 "simp2trad.in"
    {"N\033", "\x53\xE2"},
#line 315 "simp2trad.in"
    {"W\255", "\x57\xE1"},
#line 335 "simp2trad.in"
    {"Y\007", "\x50\x99"},
#line 44 "simp2trad.in"
    {"Nf", "\x66\xF8"},
#line 96 "simp2trad.in"
    {"O\351", "\x50\x06"},
#line 1512 "simp2trad.in"
    {"\213\313", "\x8A\x46"},
#line 886 "simp2trad.in"
    {"r\310", "\x72\xFD"},
#line 1752 "simp2trad.in"
    {"\217\206", "\x8F\x1B"},
#line 1131 "simp2trad.in"
    {"~\313", "\x7D\x3C"},
#line 1727 "simp2trad.in"
    {"\217m", "\x8E\xDB"},
#line 1896 "simp2trad.in"
    {"\224\313", "\x92\x4D"},
#line 353 "simp2trad.in"
    {"Y\327", "\x59\xCD"},
#line 2079 "simp2trad.in"
    {"\226\003", "\x95\xAB"},
#line 2406 "simp2trad.in"
    {"\234\313", "\x9C\x20"},
#line 1689 "simp2trad.in"
    {"\215a", "\x8D\x0D"},
#line 1750 "simp2trad.in"
    {"\217\204", "\x8F\x12"},
#line 1378 "simp2trad.in"
    {"\204\345", "\x93\xA3"},
#line 243 "simp2trad.in"
    {"T\244", "\x54\x12"},
#line 2323 "simp2trad.in"
    {"\232\313", "\x9A\xD6"},
#line 435 "simp2trad.in"
    {"^\001", "\x5E\x63"},
#line 2268 "simp2trad.in"
    {"\232r", "\x99\xB9"},
#line 43 "simp2trad.in"
    {"Na", "\x91\x09"},
#line 2266 "simp2trad.in"
    {"\232p", "\x99\xB3"},
#line 2485 "simp2trad.in"
    {"\236V", "\x9D\xA1"},
#line 414 "simp2trad.in"
    {"\\\275", "\x5D\x20"},
#line 2140 "simp2trad.in"
    {"\227\351", "\x97\xD3"},
#line 1528 "simp2trad.in"
    {"\213\333", "\x8A\x85"},
#line 253 "simp2trad.in"
    {"T\327", "\x56\x29"},
#line 1187 "simp2trad.in"
    {"\177\003", "\x7D\xD7"},
#line 1147 "simp2trad.in"
    {"~\333", "\x7D\x73"},
#line 213 "simp2trad.in"
    {"S\331", "\x65\x58"},
#line 1908 "simp2trad.in"
    {"\224\333", "\x94\x3A"},
#line 460 "simp2trad.in"
    {"^\236", "\x9F\x90"},
#line 2467 "simp2trad.in"
    {"\236D", "\x9D\x60"},
#line 2421 "simp2trad.in"
    {"\234\333", "\x9C\x3C"},
#line 774 "simp2trad.in"
    {"mI", "\x6E\xAE"},
#line 2510 "simp2trad.in"
    {"\236q", "\x9E\x0C"},
#line 1629 "simp2trad.in"
    {"\215%", "\x65\x57"},
#line 197 "simp2trad.in"
    {"S\214", "\x53\xAD"},
#line 1501 "simp2trad.in"
    {"\213\300", "\x8A\x23"},
#line 1120 "simp2trad.in"
    {"~\300", "\x7D\x3A"},
#line 588 "simp2trad.in"
    {"c\270", "\x64\xA3"},
#line 2054 "simp2trad.in"
    {"\225\352", "\x95\x83"},
#line 1886 "simp2trad.in"
    {"\224\300", "\x92\x3E"},
#line 28 "simp2trad.in"
    {"N%", "\x56\xB4"},
#line 486 "simp2trad.in"
    {"`\000", "\x61\xF7"},
#line 2395 "simp2trad.in"
    {"\234\300", "\x9B\xF7"},
#line 173 "simp2trad.in"
    {"R\277", "\x52\xE2"},
#line 564 "simp2trad.in"
    {"c\002", "\x63\x9B"},
#line 161 "simp2trad.in"
    {"RP", "\x52\x6E"},
#line 956 "simp2trad.in"
    {"v\006", "\x76\x2E"},
#line 590 "simp2trad.in"
    {"c\274", "\x64\x5C"},
#line 883 "simp2trad.in"
    {"r\267", "\x73\x77"},
#line 1947 "simp2trad.in"
    {"\225\003", "\x92\xE5"},
#line 578 "simp2trad.in"
    {"c^", "\x64\x88"},
#line 351 "simp2trad.in"
    {"Y\252", "\x5A\xD7"},
#line 1840 "simp2trad.in"
    {"\224\221", "\x92\x12"},
#line 566 "simp2trad.in"
    {"c\033", "\x65\x23"},
#line 2348 "simp2trad.in"
    {"\234\221", "\x9B\xAD"},
#line 963 "simp2trad.in"
    {"v^", "\x76\x69"},
#line 1699 "simp2trad.in"
    {"\215\304", "\x8E\x4C"},
#line 2173 "simp2trad.in"
    {"\230\221", "\x98\x3B"},
#line 589 "simp2trad.in"
    {"c\272", "\x64\x7B"},
#line 2328 "simp2trad.in"
    {"\234|", "\x9B\x5A"},
#line 2299 "simp2trad.in"
    {"\232\221", "\x9A\x0E"},
#line 152 "simp2trad.in"
    {"R\033", "\x52\x75"},
#line 2152 "simp2trad.in"
    {"\230|", "\x98\x0A"},
#line 212 "simp2trad.in"
    {"S\330", "\x8B\x8A"},
#line 508 "simp2trad.in"
    {"`\254", "\x61\xF8"},
#line 2278 "simp2trad.in"
    {"\232|", "\x99\xDD"},
#line 2331 "simp2trad.in"
    {"\234\177", "\x9B\x77"},
#line 18 "simp2trad.in"
    {"N\007", "\x84\x2C"},
#line 72 "simp2trad.in"
    {"O\037", "\x50\x49"},
#line 2155 "simp2trad.in"
    {"\230\177", "\x98\x13"},
#line 2471 "simp2trad.in"
    {"\236H", "\x9D\x5C"},
#line 143 "simp2trad.in"
    {"Q\357", "\x51\xF1"},
#line 2281 "simp2trad.in"
    {"\232\177", "\x9A\x5B"},
#line 1039 "simp2trad.in"
    {"z\221", "\x7A\xAF"},
#line 585 "simp2trad.in"
    {"c\263", "\x64\xC4"},
#line 580 "simp2trad.in"
    {"ca", "\x64\xBF"},
#line 2052 "simp2trad.in"
    {"\225\350", "\x95\x80"},
#line 445 "simp2trad.in"
    {"^1", "\x5E\x6C"},
#line 194 "simp2trad.in"
    {"S\206", "\x66\xC6"},
#line 2084 "simp2trad.in"
    {"\226\010", "\x95\xBE"},
#line 172 "simp2trad.in"
    {"R\263", "\x52\xDE"},
#line 874 "simp2trad.in"
    {"r1", "\x61\x1B"},
#line 779 "simp2trad.in"
    {"mO", "\x70\x0F"},
#line 318 "simp2trad.in"
    {"W\262", "\x58\x4F"},
#line 2551 "simp2trad.in"
    {"T\250", "\x8C\x18"},
#line 345 "simp2trad.in"
    {"YV", "\x73\x4E"},
#line 336 "simp2trad.in"
    {"Y\015", "\x89\x07"},
#line 2336 "simp2trad.in"
    {"\234\205", "\x9B\x81"},
#line 1490 "simp2trad.in"
    {"\213\265", "\x8A\x4E"},
#line 2161 "simp2trad.in"
    {"\230\205", "\x98\x71"},
#line 1109 "simp2trad.in"
    {"~\265", "\x7E\x31"},
#line 888 "simp2trad.in"
    {"r\335", "\x73\x6E"},
#line 2287 "simp2trad.in"
    {"\232\205", "\x9A\x4A"},
#line 1875 "simp2trad.in"
    {"\224\265", "\x7F\x3D"},
#line 2448 "simp2trad.in"
    {"\2361", "\x9D\x1F"},
#line 1192 "simp2trad.in"
    {"\177\010", "\x7D\xF2"},
#line 2384 "simp2trad.in"
    {"\234\265", "\x9B\xE2"},
#line 576 "simp2trad.in"
    {"c%", "\x63\xEE"},
#line 2444 "simp2trad.in"
    {"\236-", "\x9D\x28"},
#line 1248 "simp2trad.in"
    {"\177\331", "\x7F\xFD"},
#line 232 "simp2trad.in"
    {"TV", "\x56\xA6"},
#line 2059 "simp2trad.in"
    {"\225\357", "\x95\xD6"},
#line 122 "simp2trad.in"
    {"Q\214", "\x51\x8A"},
#line 755 "simp2trad.in"
    {"l\265", "\x6F\xD4"},
#line 971 "simp2trad.in"
    {"v\320", "\x9E\x7D"},
#line 350 "simp2trad.in"
    {"Y\251", "\x5A\xF5"},
#line 1732 "simp2trad.in"
    {"\217r", "\x8E\xFB"},
#line 175 "simp2trad.in"
    {"R\320", "\x73\x1B"},
#line 1730 "simp2trad.in"
    {"\217p", "\x8F\x5F"},
#line 250 "simp2trad.in"
    {"T\323", "\x56\x35"},
#line 55 "simp2trad.in"
    {"N\262", "\x89\xAA"},
#line 2053 "simp2trad.in"
    {"\225\351", "\x95\x82"},
#line 1369 "simp2trad.in"
    {"\204q", "\x85\x25"},
#line 167 "simp2trad.in"
    {"R\241", "\x52\xD9"},
#line 219 "simp2trad.in"
    {"T\001", "\x7C\x72"},
#line 1702 "simp2trad.in"
    {"\215\365", "\x8E\x10"},
#line 2151 "simp2trad.in"
    {"\230{", "\x98\x08"},
#line 489 "simp2trad.in"
    {"`\003", "\x61\xAE"},
#line 2277 "simp2trad.in"
    {"\232{", "\x99\xD0"},
#line 2250 "simp2trad.in"
    {"\231\212", "\x99\x3F"},
#line 1529 "simp2trad.in"
    {"\213\334", "\x8A\x75"},
#line 1952 "simp2trad.in"
    {"\225\010", "\x93\xFD"},
#line 1785 "simp2trad.in"
    {"\217\333", "\x90\x32"},
#line 1148 "simp2trad.in"
    {"~\334", "\x7D\x61"},
#line 1909 "simp2trad.in"
    {"\224\334", "\x92\x85"},
#line 463 "simp2trad.in"
    {"^\352", "\x5E\xE9"},
#line 1846 "simp2trad.in"
    {"\224\227", "\x91\xF5"},
#line 2422 "simp2trad.in"
    {"\234\334", "\x9C\x56"},
#line 2333 "simp2trad.in"
    {"\234\201", "\x9B\x6F"},
#line 2354 "simp2trad.in"
    {"\234\227", "\x9C\x02"},
#line 2157 "simp2trad.in"
    {"\230\201", "\x98\x12"},
#line 2179 "simp2trad.in"
    {"\230\227", "\x98\x46"},
#line 2104 "simp2trad.in"
    {"\226\037", "\x96\x8A"},
#line 2283 "simp2trad.in"
    {"\232\201", "\x9A\x4D"},
#line 2305 "simp2trad.in"
    {"\232\227", "\x9A\x19"},
#line 974 "simp2trad.in"
    {"v\327", "\x76\xDC"},
#line 1247 "simp2trad.in"
    {"\177\330", "\x7F\xF9"},
#line 735 "simp2trad.in"
    {"l\024", "\x6C\x23"},
#line 2531 "simp2trad.in"
    {"\237\177", "\x9F\x52"},
#line 183 "simp2trad.in"
    {"SO", "\x53\x54"},
#line 513 "simp2trad.in"
    {"`\350", "\x61\x58"},
#line 2521 "simp2trad.in"
    {"\236\352", "\x9E\xF2"},
#line 1678 "simp2trad.in"
    {"\215V", "\x8C\xF4"},
#line 2113 "simp2trad.in"
    {"\226I", "\x96\x58"},
#line 313 "simp2trad.in"
    {"W\251", "\x58\x0A"},
#line 1425 "simp2trad.in"
    {"\210E", "\x91\xC1"},
#line 1215 "simp2trad.in"
    {"\177\037", "\x7E\x1E"},
#line 1763 "simp2trad.in"
    {"\217\221", "\x8F\x2F"},
#line 1428 "simp2trad.in"
    {"\210l", "\x89\x6F"},
#line 546 "simp2trad.in"
    {"bp", "\x64\xFE"},
#line 801 "simp2trad.in"
    {"m\300", "\x6F\xB1"},
#line 1742 "simp2trad.in"
    {"\217|", "\x8E\xFE"},
#line 1660 "simp2trad.in"
    {"\215D", "\x8C\xC7"},
#line 1745 "simp2trad.in"
    {"\217\177", "\x8F\x4E"},
#line 62 "simp2trad.in"
    {"N\323", "\x50\x09"},
#line 2537 "simp2trad.in"
    {"\237\205", "\x9F\x59"},
#line 251 "simp2trad.in"
    {"T\324", "\x55\xF6"},
#line 1433 "simp2trad.in"
    {"\210\234", "\x89\x6A"},
#line 168 "simp2trad.in"
    {"R\242", "\x52\xF1"},
#line 46 "simp2trad.in"
    {"Nq", "\x4E\x82"},
#line 1845 "simp2trad.in"
    {"\224\226", "\x93\x5A"},
#line 519 "simp2trad.in"
    {"`\357", "\x61\x63"},
#line 2252 "simp2trad.in"
    {"\231\214", "\x99\x41"},
#line 2353 "simp2trad.in"
    {"\234\226", "\x9B\xA6"},
#line 969 "simp2trad.in"
    {"v\262", "\x76\xB8"},
#line 54 "simp2trad.in"
    {"N\251", "\x75\x5D"},
#line 2178 "simp2trad.in"
    {"\230\226", "\x7A\x4E"},
#line 171 "simp2trad.in"
    {"R\262", "\x52\xC1"},
#line 1793 "simp2trad.in"
    {"\220\002", "\x90\x69"},
#line 2304 "simp2trad.in"
    {"\232\226", "\x9A\x42"},
#line 1972 "simp2trad.in"
    {"\225\037", "\x93\x15"},
#line 514 "simp2trad.in"
    {"`\351", "\x61\xF2"},
#line 1434 "simp2trad.in"
    {"\210\255", "\x89\x72"},
#line 880 "simp2trad.in"
    {"r\212", "\x72\xA2"},
#line 2042 "simp2trad.in"
    {"\225m", "\x94\x33"},
#line 1751 "simp2trad.in"
    {"\217\205", "\x8F\x14"},
#line 426 "simp2trad.in"
    {"]-", "\x5D\x84"},
#line 1374 "simp2trad.in"
    {"\204\335", "\x85\xCD"},
#line 1832 "simp2trad.in"
    {"\224\211", "\x91\xD8"},
#line 256 "simp2trad.in"
    {"T\335", "\x56\x65"},
#line 2340 "simp2trad.in"
    {"\234\211", "\x9B\x8B"},
#line 1806 "simp2trad.in"
    {"\220\272", "\x91\x34"},
#line 2010 "simp2trad.in"
    {"\225I", "\x93\x98"},
#line 2165 "simp2trad.in"
    {"\230\211", "\x98\x21"},
#line 1579 "simp2trad.in"
    {"\214\017", "\x8A\xEB"},
#line 2291 "simp2trad.in"
    {"\232\211", "\x9A\x6B"},
#line 1700 "simp2trad.in"
    {"\215\326", "\x8E\x60"},
#line 1571 "simp2trad.in"
    {"\214\006", "\x8A\xC4"},
#line 1664 "simp2trad.in"
    {"\215H", "\x8C\xD1"},
#line 893 "simp2trad.in"
    {"r\357", "\x73\x6A"},
#line 1567 "simp2trad.in"
    {"\214\002", "\x8A\xD7"},
#line 2150 "simp2trad.in"
    {"\230z", "\x98\x06"},
#line 2332 "simp2trad.in"
    {"\234\200", "\x9B\x68"},
#line 1569 "simp2trad.in"
    {"\214\004", "\x8A\xC2"},
#line 2276 "simp2trad.in"
    {"\232z", "\x9A\x36"},
#line 2156 "simp2trad.in"
    {"\230\200", "\x98\x0E"},
#line 169 "simp2trad.in"
    {"R\250", "\x52\xD5"},
#line 37 "simp2trad.in"
    {"NH", "\x9E\xBC"},
#line 2282 "simp2trad.in"
    {"\232\200", "\x99\xD8"},
#line 2533 "simp2trad.in"
    {"\237\201", "\x9F\x55"},
#line 1591 "simp2trad.in"
    {"\214\033", "\x8A\xE6"},
#line 647 "simp2trad.in"
    {"gi", "\x69\xAA"},
#line 1843 "simp2trad.in"
    {"\224\224", "\x93\x46"},
#line 1741 "simp2trad.in"
    {"\217{", "\x8F\x15"},
#line 655 "simp2trad.in"
    {"g\247", "\x68\x98"},
#line 2351 "simp2trad.in"
    {"\234\224", "\x9B\xAA"},
#line 1437 "simp2trad.in"
    {"\210\306", "\x89\x60"},
#line 437 "simp2trad.in"
    {"^\010", "\x5E\x2B"},
#line 2176 "simp2trad.in"
    {"\230\224", "\x98\x37"},
#line 323 "simp2trad.in"
    {"W\335", "\x58\x8A"},
#line 2246 "simp2trad.in"
    {"\231\206", "\x99\x28"},
#line 2302 "simp2trad.in"
    {"\232\224", "\x9A\x0C"},
#line 2221 "simp2trad.in"
    {"\231m", "\x98\xEF"},
#line 2520 "simp2trad.in"
    {"\236\351", "\x9E\xF7"},
#line 147 "simp2trad.in"
    {"R\015", "\x82\xBB"},
#line 1641 "simp2trad.in"
    {"\2151", "\x8C\xE4"},
#line 2244 "simp2trad.in"
    {"\231\204", "\x99\x1B"},
#line 1442 "simp2trad.in"
    {"\210\345", "\x89\x47"},
#line 1786 "simp2trad.in"
    {"\217\334", "\x90\x60"},
#line 1747 "simp2trad.in"
    {"\217\201", "\x8F\x07"},
#line 1769 "simp2trad.in"
    {"\217\227", "\x8F\x3E"},
#line 1637 "simp2trad.in"
    {"\215-", "\x8C\xFC"},
#line 654 "simp2trad.in"
    {"g\245", "\x6A\xEA"},
#line 1811 "simp2trad.in"
    {"\220\320", "\x91\x36"},
#line 644 "simp2trad.in"
    {"ga", "\x68\x9D"},
#line 1837 "simp2trad.in"
    {"\224\216", "\x91\xFA"},
#line 362 "simp2trad.in"
    {"Z4", "\x5A\xFB"},
#line 1310 "simp2trad.in"
    {"\202\246", "\x86\x06"},
#line 2345 "simp2trad.in"
    {"\234\216", "\x9C\x5F"},
#line 659 "simp2trad.in"
    {"g\255", "\x68\x9F"},
#line 2133 "simp2trad.in"
    {"\227\221", "\x97\xC3"},
#line 2170 "simp2trad.in"
    {"\230\216", "\x71\xB2"},
#line 2296 "simp2trad.in"
    {"\232\216", "\x99\xF8"},
#line 424 "simp2trad.in"
    {"]\003", "\x5D\x0D"},
#line 1297 "simp2trad.in"
    {"\202\006", "\x8F\x3F"},
#line 2015 "simp2trad.in"
    {"\225O", "\x93\xA6"},
#line 166 "simp2trad.in"
    {"R\236", "\x8F\xA6"},
#line 653 "simp2trad.in"
    {"g\243", "\x68\xD7"},
#line 1266 "simp2trad.in"
    {"\200\277", "\x81\x6B"},
#line 1794 "simp2trad.in"
    {"\220\011", "\x90\x78"},
#line 593 "simp2trad.in"
    {"c\377", "\x64\xB3"},
#line 1601 "simp2trad.in"
    {"\214%", "\x8A\xE1"},
#line 726 "simp2trad.in"
    {"k\241", "\x6B\xAF"},
#line 82 "simp2trad.in"
    {"Oc", "\x50\xAD"},
#line 1809 "simp2trad.in"
    {"\220\304", "\x90\xE4"},
#line 113 "simp2trad.in"
    {"Qp", "\x86\x2D"},
#line 1722 "simp2trad.in"
    {"\217h", "\x8E\xCC"},
#line 587 "simp2trad.in"
    {"c\267", "\x64\xF2"},
#line 193 "simp2trad.in"
    {"S\205", "\x5E\xF3"},
#line 775 "simp2trad.in"
    {"mJ", "\x6F\xC1"},
#line 1259 "simp2trad.in"
    {"\200i", "\x80\x75"},
#line 2004 "simp2trad.in"
    {"\225A", "\x93\x82"},
#line 821 "simp2trad.in"
    {"n\336", "\x6E\xEF"},
#line 2541 "simp2trad.in"
    {"\237\211", "\x9F\x6C"},
#line 973 "simp2trad.in"
    {"v\326", "\x84\xCB"},
#line 1309 "simp2trad.in"
    {"\202\234", "\x85\x6A"},
#line 1768 "simp2trad.in"
    {"\217\226", "\x8F\x44"},
#line 885 "simp2trad.in"
    {"r\271", "\x73\x36"},
#line 138 "simp2trad.in"
    {"Q\333", "\x51\xDC"},
#line 454 "simp2trad.in"
    {"^\206", "\x61\x76"},
#line 432 "simp2trad.in"
    {"]\305", "\x5D\xD4"},
#line 2532 "simp2trad.in"
    {"\237\200", "\x9F\x54"},
#line 1572 "simp2trad.in"
    {"\214\007", "\x8A\xB6"},
#line 453 "simp2trad.in"
    {"^\204", "\x83\x8A"},
#line 1469 "simp2trad.in"
    {"\212\212", "\x8B\x04"},
#line 63 "simp2trad.in"
    {"N\352", "\x51\x00"},
#line 132 "simp2trad.in"
    {"Q\300", "\x6D\xE8"},
#line 1755 "simp2trad.in"
    {"\217\211", "\x8F\x1D"},
#line 2047 "simp2trad.in"
    {"\225r", "\x94\x54"},
#line 2430 "simp2trad.in"
    {"\236\037", "\x9C\xE5"},
#line 2045 "simp2trad.in"
    {"\225p", "\x94\x2E"},
#line 2159 "simp2trad.in"
    {"\230\203", "\x98\x0F"},
#line 398 "simp2trad.in"
    {"\\I", "\x5C\x5C"},
#line 1850 "simp2trad.in"
    {"\224\233", "\x92\x26"},
#line 2285 "simp2trad.in"
    {"\232\203", "\x99\xF0"},
#line 2507 "simp2trad.in"
    {"\236m", "\x9D\xFA"},
#line 2358 "simp2trad.in"
    {"\234\233", "\x9B\xAB"},
#line 1740 "simp2trad.in"
    {"\217z", "\x8E\xFA"},
#line 2183 "simp2trad.in"
    {"\230\233", "\x98\x53"},
#line 434 "simp2trad.in"
    {"]\357", "\x5D\xF0"},
#line 1746 "simp2trad.in"
    {"\217\200", "\x8F\x08"},
#line 2309 "simp2trad.in"
    {"\232\233", "\x9A\x16"},
#line 854 "simp2trad.in"
    {"p\274", "\x71\x49"},
#line 2472 "simp2trad.in"
    {"\236I", "\x9D\x61"},
#line 782 "simp2trad.in"
    {"mR", "\x6E\xF8"},
#line 156 "simp2trad.in"
    {"R-", "\x52\x44"},
#line 1037 "simp2trad.in"
    {"z\203", "\x7A\xCA"},
#line 433 "simp2trad.in"
    {"]\351", "\x97\x8F"},
#line 1848 "simp2trad.in"
    {"\224\231", "\x92\x23"},
#line 2356 "simp2trad.in"
    {"\234\231", "\x9C\x60"},
#line 1766 "simp2trad.in"
    {"\217\224", "\x8F\x61"},
#line 1438 "simp2trad.in"
    {"\210\310", "\x89\x0C"},
#line 2181 "simp2trad.in"
    {"\230\231", "\x98\x52"},
#line 2307 "simp2trad.in"
    {"\232\231", "\x9A\x24"},
#line 418 "simp2trad.in"
    {"\\\341", "\x5C\xFD"},
#line 851 "simp2trad.in"
    {"p\234", "\x71\x52"},
#line 1240 "simp2trad.in"
    {"\177W", "\x7F\x85"},
#line 652 "simp2trad.in"
    {"g\242", "\x6A\x1E"},
#line 254 "simp2trad.in"
    {"T\331", "\x56\x72"},
#line 2226 "simp2trad.in"
    {"\231r", "\x98\xFC"},
#line 324 "simp2trad.in"
    {"W\357", "\x57\xB5"},
#line 2224 "simp2trad.in"
    {"\231p", "\x98\xFE"},
#line 2519 "simp2trad.in"
    {"\236\341", "\x9E\xF6"},
#line 1269 "simp2trad.in"
    {"\200\306", "\x81\xBD"},
#line 1373 "simp2trad.in"
    {"\204\214", "\x85\x1E"},
#line 81 "simp2trad.in"
    {"OY", "\x99\x18"},
#line 59 "simp2trad.in"
    {"N\305", "\x50\xC5"},
#line 2106 "simp2trad.in"
    {"\2264", "\x96\x70"},
#line 733 "simp2trad.in"
    {"k\365", "\x6B\xFF"},
#line 120 "simp2trad.in"
    {"Q\205", "\x51\x67"},
#line 1760 "simp2trad.in"
    {"\217\216", "\x8F\x1C"},
#line 1263 "simp2trad.in"
    {"\200\244", "\x81\x9A"},
#line 657 "simp2trad.in"
    {"g\252", "\x69\xCD"},
#line 130 "simp2trad.in"
    {"Q\265", "\x6C\xC1"},
#line 1841 "simp2trad.in"
    {"\224\222", "\x91\xE9"},
#line 2051 "simp2trad.in"
    {"\225\177", "\x95\x77"},
#line 827 "simp2trad.in"
    {"n\345", "\x6F\xEB"},
#line 2349 "simp2trad.in"
    {"\234\222", "\x9B\x9A"},
#line 1236 "simp2trad.in"
    {"\1774", "\x7E\x73"},
#line 2021 "simp2trad.in"
    {"\225W", "\x93\xDC"},
#line 2174 "simp2trad.in"
    {"\230\222", "\x98\x2E"},
#line 2131 "simp2trad.in"
    {"\227Y", "\x97\x5C"},
#line 2300 "simp2trad.in"
    {"\232\222", "\x9A\x0D"},
#line 321 "simp2trad.in"
    {"W\331", "\x58\x64"},
#line 783 "simp2trad.in"
    {"mS", "\x6F\xC3"},
#line 819 "simp2trad.in"
    {"n\327", "\x6F\x77"},
#line 1813 "simp2trad.in"
    {"\220\323", "\x91\x06"},
#line 104 "simp2trad.in"
    {"P\177", "\x51\x1F"},
#line 1262 "simp2trad.in"
    {"\200\240", "\x81\x78"},
#line 2478 "simp2trad.in"
    {"\236O", "\x9D\x6C"},
#line 337 "simp2trad.in"
    {"Y\037", "\x59\x20"},
#line 656 "simp2trad.in"
    {"g\250", "\x68\xD6"},
#line 117 "simp2trad.in"
    {"Q{", "\x99\x0A"},
#line 347 "simp2trad.in"
    {"Y\206", "\x59\x9D"},
#line 195 "simp2trad.in"
    {"S\211", "\x53\xB2"},
#line 2535 "simp2trad.in"
    {"\237\203", "\x9F\x5F"},
#line 2032 "simp2trad.in"
    {"\225c", "\x94\x10"},
#line 2096 "simp2trad.in"
    {"\226\024", "\x95\xCA"},
#line 2257 "simp2trad.in"
    {"\231\221", "\x99\x49"},
#line 1577 "simp2trad.in"
    {"\214\015", "\x8A\xDC"},
#line 2547 "simp2trad.in"
    {"\237\233", "\x9F\x95"},
#line 191 "simp2trad.in"
    {"Sz", "\x5D\xF9"},
#line 2236 "simp2trad.in"
    {"\231|", "\x99\x05"},
#line 1991 "simp2trad.in"
    {"\2254", "\x93\x47"},
#line 2464 "simp2trad.in"
    {"\236A", "\x9D\x53"},
#line 119 "simp2trad.in"
    {"Q\201", "\x56\xC5"},
#line 2527 "simp2trad.in"
    {"\2379", "\x9F\x34"},
#line 1393 "simp2trad.in"
    {"\206l", "\x86\x6F"},
#line 2239 "simp2trad.in"
    {"\231\177", "\x99\x13"},
#line 450 "simp2trad.in"
    {"^r", "\x5E\x79"},
#line 2566 "simp2trad.in"
    {"^r", "\x4E\x7E"},
#line 1244 "simp2trad.in"
    {"\177\201", "\x7F\x88"},
#line 1204 "simp2trad.in"
    {"\177\024", "\x7D\xE0"},
#line 1566 "simp2trad.in"
    {"\214\001", "\x8A\xB0"},
#line 1749 "simp2trad.in"
    {"\217\203", "\x8F\x03"},
#line 2545 "simp2trad.in"
    {"\237\231", "\x9F\x8D"},
#line 320 "simp2trad.in"
    {"W\330", "\x58\x52"},
#line 2334 "simp2trad.in"
    {"\234\202", "\x9B\x74"},
#line 1563 "simp2trad.in"
    {"\213\376", "\x8A\xB2"},
#line 2158 "simp2trad.in"
    {"\230\202", "\x98\x0C"},
#line 2116 "simp2trad.in"
    {"\226h", "\x96\x95"},
#line 1182 "simp2trad.in"
    {"~\376", "\x7D\xB0"},
#line 2284 "simp2trad.in"
    {"\232\202", "\x7F\x75"},
#line 2511 "simp2trad.in"
    {"\236r", "\x9E\x0F"},
#line 1942 "simp2trad.in"
    {"\224\376", "\x93\xC8"},
#line 2509 "simp2trad.in"
    {"\236p", "\x9D\xF9"},
#line 651 "simp2trad.in"
    {"g\236", "\x6A\x05"},
#line 2245 "simp2trad.in"
    {"\231\205", "\x99\x21"},
#line 80 "simp2trad.in"
    {"OS", "\x9A\xD4"},
#line 309 "simp2trad.in"
    {"W\206", "\x58\xDA"},
#line 102 "simp2trad.in"
    {"P{", "\x50\xC2"},
#line 504 "simp2trad.in"
    {"`|", "\x60\xF1"},
#line 1771 "simp2trad.in"
    {"\217\231", "\x8F\x4D"},
#line 765 "simp2trad.in"
    {"l\376", "\x6D\x87"},
#line 788 "simp2trad.in"
    {"m\233", "\x6F\xE4"},
#line 1964 "simp2trad.in"
    {"\225\024", "\x92\xE6"},
#line 307 "simp2trad.in"
    {"W\204", "\x58\xDF"},
#line 1401 "simp2trad.in"
    {"\206\225", "\x88\x36"},
#line 1313 "simp2trad.in"
    {"\202\310", "\x85\xF6"},
#line 1849 "simp2trad.in"
    {"\224\232", "\x92\x08"},
#line 1312 "simp2trad.in"
    {"\202\307", "\x84\x66"},
#line 2357 "simp2trad.in"
    {"\234\232", "\x9C\x6D"},
#line 1623 "simp2trad.in"
    {"\215\037", "\x8C\xA0"},
#line 2182 "simp2trad.in"
    {"\230\232", "\x98\x4E"},
#line 2308 "simp2trad.in"
    {"\232\232", "\x9A\x37"},
#line 2130 "simp2trad.in"
    {"\227S", "\x97\x5A"},
#line 456 "simp2trad.in"
    {"^\221", "\x5E\xE1"},
#line 2011 "simp2trad.in"
    {"\225J", "\x94\x77"},
#line 180 "simp2trad.in"
    {"S:", "\x53\x40"},
#line 2235 "simp2trad.in"
    {"\231{", "\x99\x0F"},
#line 1665 "simp2trad.in"
    {"\215I", "\x8C\xDA"},
#line 1565 "simp2trad.in"
    {"\214\000", "\x8A\xDB"},
#line 1803 "simp2trad.in"
    {"\220\254", "\x91\x14"},
#line 804 "simp2trad.in"
    {"n\015", "\x6F\x2C"},
#line 452 "simp2trad.in"
    {"^\177", "\x5E\xE3"},
#line 548 "simp2trad.in"
    {"b\233", "\x62\xCB"},
#line 2037 "simp2trad.in"
    {"\225h", "\x94\x20"},
#line 38 "simp2trad.in"
    {"NI", "\x7F\xA9"},
#line 2022 "simp2trad.in"
    {"\225Y", "\x93\xCD"},
#line 1764 "simp2trad.in"
    {"\217\222", "\x8F\x40"},
#line 403 "simp2trad.in"
    {"\\\177", "\x5D\xBC"},
#line 342 "simp2trad.in"
    {"YA", "\x59\x69"},
#line 739 "simp2trad.in"
    {"lG", "\x5F\x59"},
#line 2241 "simp2trad.in"
    {"\231\201", "\x99\x12"},
#line 1613 "simp2trad.in"
    {"\2141", "\x8B\x5C"},
#line 1518 "simp2trad.in"
    {"\213\321", "\x8B\x6F"},
#line 1265 "simp2trad.in"
    {"\200\276", "\x81\x4E"},
#line 1137 "simp2trad.in"
    {"~\321", "\x7D\x81"},
#line 1609 "simp2trad.in"
    {"\214-", "\x8B\x5A"},
#line 1901 "simp2trad.in"
    {"\224\321", "\x92\xA0"},
#line 1439 "simp2trad.in"
    {"\210\342", "\x89\x33"},
#line 2412 "simp2trad.in"
    {"\234\321", "\x9C\x1F"},
#line 2486 "simp2trad.in"
    {"\236W", "\x9D\x9A"},
#line 637 "simp2trad.in"
    {"g-", "\x52\x84"},
#line 2199 "simp2trad.in"
    {"\230\321", "\x98\xAE"},
#line 1407 "simp2trad.in"
    {"\206\356", "\x88\x3B"},
#line 503 "simp2trad.in"
    {"`{", "\x60\xFB"},
#line 1063 "simp2trad.in"
    {"{\246", "\x7C\x00"},
#line 1052 "simp2trad.in"
    {"{<", "\x7C\x60"},
#line 2018 "simp2trad.in"
    {"\225R", "\x93\xB0"},
#line 2534 "simp2trad.in"
    {"\237\202", "\x9F\x57"},
#line 298 "simp2trad.in"
    {"WO", "\x58\xDE"},
#line 267 "simp2trad.in"
    {"Ul", "\x55\xC7"},
#line 258 "simp2trad.in"
    {"U\033", "\x56\x1C"},
#line 1264 "simp2trad.in"
    {"\200\267", "\x81\x81"},
#line 393 "simp2trad.in"
    {"\\4", "\x5C\x37"},
#line 2216 "simp2trad.in"
    {"\231h", "\x98\xE9"},
#line 2497 "simp2trad.in"
    {"\236c", "\x9D\xBC"},
#line 855 "simp2trad.in"
    {"p\275", "\x71\xBE"},
#line 975 "simp2trad.in"
    {"v\330", "\x76\xE4"},
#line 778 "simp2trad.in"
    {"mN", "\x6F\xDF"},
#line 1064 "simp2trad.in"
    {"{\247", "\x7B\xCB"},
#line 1446 "simp2trad.in"
    {"\211U", "\x89\x74"},
#line 2451 "simp2trad.in"
    {"\2364", "\x9D\x2C"},
#line 570 "simp2trad.in"
    {"c\037", "\x63\x3E"},
#line 1671 "simp2trad.in"
    {"\215O", "\x8C\xDE"},
#line 1464 "simp2trad.in"
    {"\211\336", "\x89\xF4"},
#line 1748 "simp2trad.in"
    {"\217\202", "\x8F\x05"},
#line 1408 "simp2trad.in"
    {"\206\360", "\x87\xC4"},
#line 1436 "simp2trad.in"
    {"\210\305", "\x88\xDD"},
#line 2546 "simp2trad.in"
    {"\237\232", "\x9F\x94"},
#line 1443 "simp2trad.in"
    {"\211\033", "\x89\x38"},
#line 1300 "simp2trad.in"
    {"\2021", "\x82\x59"},
#line 2330 "simp2trad.in"
    {"\234~", "\x9B\x62"},
#line 1519 "simp2trad.in"
    {"\213\322", "\x8A\x52"},
#line 2154 "simp2trad.in"
    {"\230~", "\x98\x67"},
#line 1138 "simp2trad.in"
    {"~\322", "\x7D\x68"},
#line 2280 "simp2trad.in"
    {"\232~", "\x99\xD5"},
#line 1902 "simp2trad.in"
    {"\224\322", "\x92\x7A"},
#line 2249 "simp2trad.in"
    {"\231\211", "\x99\x36"},
#line 1657 "simp2trad.in"
    {"\215A", "\x8C\xC3"},
#line 2413 "simp2trad.in"
    {"\234\322", "\x9C\x1C"},
#line 786 "simp2trad.in"
    {"m\202", "\x58\x57"},
#line 538 "simp2trad.in"
    {"bN", "\x7D\x2E"},
#line 2200 "simp2trad.in"
    {"\230\322", "\x98\xAF"},
#line 404 "simp2trad.in"
    {"\\\201", "\x6B\x72"},
#line 407 "simp2trad.in"
    {"\\\227", "\x5D\x17"},
#line 390 "simp2trad.in"
    {"\\\024", "\x72\x3E"},
#line 1568 "simp2trad.in"
    {"\214\003", "\x8A\xBF"},
#line 2234 "simp2trad.in"
    {"\231z", "\x99\x03"},
#line 1828 "simp2trad.in"
    {"\223>", "\x93\xE8"},
#line 1772 "simp2trad.in"
    {"\217\232", "\x8F\x54"},
#line 2240 "simp2trad.in"
    {"\231\200", "\x99\x18"},
#line 1842 "simp2trad.in"
    {"\224\223", "\x91\xE3"},
#line 742 "simp2trad.in"
    {"ld", "\x6E\x6F"},
#line 2350 "simp2trad.in"
    {"\234\223", "\x9B\xB3"},
#line 1555 "simp2trad.in"
    {"\213\366", "\x8A\x92"},
#line 2175 "simp2trad.in"
    {"\230\223", "\x98\x39"},
#line 1411 "simp2trad.in"
    {"\206\363", "\x87\x84"},
#line 1174 "simp2trad.in"
    {"~\366", "\x7D\xAC"},
#line 2301 "simp2trad.in"
    {"\232\223", "\x9A\x05"},
#line 399 "simp2trad.in"
    {"\\J", "\x5C\x46"},
#line 1934 "simp2trad.in"
    {"\224\366", "\x92\x80"},
#line 744 "simp2trad.in"
    {"l\223", "\x90\x5D"},
#line 2260 "simp2trad.in"
    {"\231\224", "\x99\x4C"},
#line 2134 "simp2trad.in"
    {"\227\222", "\x97\xBD"},
#line 1997 "simp2trad.in"
    {"\225:", "\x93\x7E"},
#line 1085 "simp2trad.in"
    {"}'", "\x7D\xCA"},
#line 2473 "simp2trad.in"
    {"\236J", "\x9D\x72"},
#line 758 "simp2trad.in"
    {"l\366", "\x6F\xA9"},
#line 45 "simp2trad.in"
    {"Np", "\x8C\xB7"},
#line 182 "simp2trad.in"
    {"SN", "\x83\xEF"},
#line 124 "simp2trad.in"
    {"Q\233", "\x8E\xCD"},
#line 233 "simp2trad.in"
    {"TW", "\x55\x04"},
#line 1462 "simp2trad.in"
    {"\211\320", "\x89\xB2"},
#line 1481 "simp2trad.in"
    {"\213\253", "\x8A\x16"},
#line 99 "simp2trad.in"
    {"P:", "\x50\xB5"},
#line 1099 "simp2trad.in"
    {"~\253", "\x7D\x09"},
#line 502 "simp2trad.in"
    {"`z", "\x61\x37"},
#line 1865 "simp2trad.in"
    {"\224\253", "\x92\x01"},
#line 2502 "simp2trad.in"
    {"\236h", "\x9D\xDA"},
#line 2374 "simp2trad.in"
    {"\234\253", "\x9B\xFD"},
#line 406 "simp2trad.in"
    {"\\\226", "\x5D\x87"},
#line 772 "simp2trad.in"
    {"mG", "\x6F\x86"},
#line 338 "simp2trad.in"
    {"Y4", "\x98\x2D"},
#line 2254 "simp2trad.in"
    {"\231\216", "\x99\x3A"},
#line 1452 "simp2trad.in"
    {"\211\306", "\x89\x96"},
#line 123 "simp2trad.in"
    {"Q\231", "\x5B\xEB"},
#line 1546 "simp2trad.in"
    {"\213\355", "\x8A\x9E"},
#line 1273 "simp2trad.in"
    {"\200\352", "\x81\xDA"},
#line 914 "simp2trad.in"
    {"s\272", "\x74\xBD"},
#line 1165 "simp2trad.in"
    {"~\355", "\x7E\x8C"},
#line 547 "simp2trad.in"
    {"b\232", "\x64\xAB"},
#line 1071 "simp2trad.in"
    {"{\356", "\x7C\x43"},
#line 1925 "simp2trad.in"
    {"\224\355", "\x92\x98"},
#line 831 "simp2trad.in"
    {"n\352", "\x6F\xA6"},
#line 981 "simp2trad.in"
    {"wP", "\x77\x5E"},
#line 1450 "simp2trad.in"
    {"\211\304", "\x89\x8F"},
#line 192 "simp2trad.in"
    {"S\202", "\x5E\xE0"},
#line 1838 "simp2trad.in"
    {"\224\217", "\x91\xE7"},
#line 228 "simp2trad.in"
    {"T4", "\x54\x33"},
#line 299 "simp2trad.in"
    {"WW", "\x58\x4A"},
#line 2346 "simp2trad.in"
    {"\234\217", "\x9B\x8D"},
#line 1533 "simp2trad.in"
    {"\213\340", "\x8A\x6E"},
#line 825 "simp2trad.in"
    {"n\342", "\x70\x05"},
#line 2171 "simp2trad.in"
    {"\230\217", "\x98\x26"},
#line 1152 "simp2trad.in"
    {"~\340", "\x7D\x86"},
#line 879 "simp2trad.in"
    {"rz", "\x72\xA7"},
#line 2297 "simp2trad.in"
    {"\232\217", "\x99\xFF"},
#line 1913 "simp2trad.in"
    {"\224\340", "\x93\xA7"},
#line 2481 "simp2trad.in"
    {"\236R", "\x9D\x8A"},
#line 1562 "simp2trad.in"
    {"\213\375", "\x8A\xB9"},
#line 2426 "simp2trad.in"
    {"\234\340", "\x9C\x6F"},
#line 1996 "simp2trad.in"
    {"\2259", "\x93\x6C"},
#line 1181 "simp2trad.in"
    {"~\375", "\x7D\xBB"},
#line 50 "simp2trad.in"
    {"N\221", "\x96\xF2"},
#line 1941 "simp2trad.in"
    {"\224\375", "\x92\xF1"},
#line 731 "simp2trad.in"
    {"k\331", "\x65\x83"},
#line 458 "simp2trad.in"
    {"^\224", "\x61\xC9"},
#line 1573 "simp2trad.in"
    {"\214\010", "\x8A\xC7"},
#line 1679 "simp2trad.in"
    {"\215W", "\x8C\xF5"},
#line 354 "simp2trad.in"
    {"Y\334", "\x85\x91"},
#line 308 "simp2trad.in"
    {"W\205", "\x58\xDF"},
#line 1432 "simp2trad.in"
    {"\210\206", "\x89\x18"},
#line 1995 "simp2trad.in"
    {"\2258", "\x93\x64"},
#line 764 "simp2trad.in"
    {"l\375", "\x6F\xA4"},
#line 1744 "simp2trad.in"
    {"\217~", "\x8F\x0A"},
#line 1272 "simp2trad.in"
    {"\200\350", "\x81\x56"},
#line 1430 "simp2trad.in"
    {"\210\204", "\x89\x56"},
#line 174 "simp2trad.in"
    {"R\313", "\x52\xF3"},
#line 917 "simp2trad.in"
    {"s\320", "\x74\x3A"},
#line 829 "simp2trad.in"
    {"n\350", "\x6F\xF1"},
#line 2243 "simp2trad.in"
    {"\231\203", "\x99\x1C"},
#line 255 "simp2trad.in"
    {"T\334", "\x56\x8C"},
#line 1830 "simp2trad.in"
    {"\224\207", "\x91\xD4"},
#line 2338 "simp2trad.in"
    {"\234\207", "\x9B\xF0"},
#line 1691 "simp2trad.in"
    {"\215c", "\x8D\x1B"},
#line 1067 "simp2trad.in"
    {"{\252", "\x7C\x1E"},
#line 2163 "simp2trad.in"
    {"\230\207", "\x98\x17"},
#line 2289 "simp2trad.in"
    {"\232\207", "\x99\xED"},
#line 1805 "simp2trad.in"
    {"\220\271", "\x91\x12"},
#line 1644 "simp2trad.in"
    {"\2154", "\x8C\xBC"},
#line 278 "simp2trad.in"
    {"U\363", "\x56\x6F"},
#line 1765 "simp2trad.in"
    {"\217\223", "\x8F\x38"},
#line 1358 "simp2trad.in"
    {"\203\270", "\x85\x55"},
#line 1328 "simp2trad.in"
    {"\203P", "\x85\xA6"},
#line 1322 "simp2trad.in"
    {"\203\017", "\x86\x22"},
#line 33 "simp2trad.in"
    {"N4", "\x81\xE8"},
#line 56 "simp2trad.in"
    {"N\265", "\x89\x3B"},
#line 2149 "simp2trad.in"
    {"\230y", "\x98\x05"},
#line 284 "simp2trad.in"
    {"V\243", "\x56\xC2"},
#line 2482 "simp2trad.in"
    {"\236S", "\x9D\x77"},
#line 2275 "simp2trad.in"
    {"\232y", "\x99\xD2"},
#line 1065 "simp2trad.in"
    {"{\250", "\x7C\x5C"},
#line 1403 "simp2trad.in"
    {"\206\254", "\x87\x06"},
#line 743 "simp2trad.in"
    {"ly", "\x6D\x36"},
#line 211 "simp2trad.in"
    {"S\321", "\x76\x7C"},
#line 1361 "simp2trad.in"
    {"\203\274", "\x84\xF4"},
#line 1343 "simp2trad.in"
    {"\203i", "\x85\xCE"},
#line 1333 "simp2trad.in"
    {"\203^", "\x85\x4E"},
#line 1346 "simp2trad.in"
    {"\203l", "\x85\x52"},
#line 863 "simp2trad.in"
    {"p\350", "\x71\xC1"},
#line 235 "simp2trad.in"
    {"TY", "\x54\xBC"},
#line 2126 "simp2trad.in"
    {"\226\376", "\x97\x27"},
#line 830 "simp2trad.in"
    {"n\351", "\x70\x58"},
#line 1327 "simp2trad.in"
    {"\203F", "\x83\x4A"},
#line 1340 "simp2trad.in"
    {"\203f", "\x72\x96"},
#line 1360 "simp2trad.in"
    {"\203\272", "\x9D\xAF"},
#line 1595 "simp2trad.in"
    {"\214\037", "\x8B\x28"},
#line 2457 "simp2trad.in"
    {"\236:", "\x9D\x42"},
#line 2014 "simp2trad.in"
    {"\225N", "\x93\xBF"},
#line 274 "simp2trad.in"
    {"U\275", "\x56\x0D"},
#line 967 "simp2trad.in"
    {"v\221", "\x76\x9A"},
#line 1351 "simp2trad.in"
    {"\203\234", "\x84\xE7"},
#line 1775 "simp2trad.in"
    {"\217\253", "\x8F\xAE"},
#line 368 "simp2trad.in"
    {"Z\322", "\x5B\x21"},
#line 77 "simp2trad.in"
    {"O'", "\x50\x96"},
#line 1070 "simp2trad.in"
    {"{\323", "\x7C\x0D"},
#line 1454 "simp2trad.in"
    {"\211\310", "\x89\xBD"},
#line 1453 "simp2trad.in"
    {"\211\307", "\x89\x98"},
#line 275 "simp2trad.in"
    {"U\276", "\x56\xB3"},
#line 1354 "simp2trad.in"
    {"\203\263", "\x84\x94"},
#line 1336 "simp2trad.in"
    {"\203a", "\x85\x69"},
#line 650 "simp2trad.in"
    {"g\204", "\x69\xCB"},
#line 2258 "simp2trad.in"
    {"\231\222", "\x99\x45"},
#line 1371 "simp2trad.in"
    {"\204\211", "\x85\x62"},
#line 229 "simp2trad.in"
    {"TR", "\x56\x38"},
#line 1066 "simp2trad.in"
    {"{\251", "\x7C\x6E"},
#line 919 "simp2trad.in"
    {"s\360", "\x74\xAB"},
#line 1468 "simp2trad.in"
    {"\212\211", "\x8B\x7D"},
#line 1666 "simp2trad.in"
    {"\215J", "\x8C\xD2"},
#line 1761 "simp2trad.in"
    {"\217\217", "\x8F\x33"},
#line 535 "simp2trad.in"
    {"b\030", "\x62\x30"},
#line 864 "simp2trad.in"
    {"p\351", "\x71\xF4"},
#line 732 "simp2trad.in"
    {"k\341", "\x6C\x08"},
#line 2111 "simp2trad.in"
    {"\226G", "\x96\xB4"},
#line 411 "simp2trad.in"
    {"\\\233", "\x5C\xF6"},
#line 582 "simp2trad.in"
    {"cc", "\x64\x17"},
#line 2524 "simp2trad.in"
    {"\237\014", "\x9F\x02"},
#line 273 "simp2trad.in"
    {"U\267", "\x56\x74"},
#line 1319 "simp2trad.in"
    {"\202\330", "\x6A\xBE"},
#line 964 "simp2trad.in"
    {"vc", "\x76\x6C"},
#line 2074 "simp2trad.in"
    {"\225\376", "\x95\xAD"},
#line 459 "simp2trad.in"
    {"^\231", "\x5E\xDF"},
#line 1681 "simp2trad.in"
    {"\215Y", "\x8C\xFB"},
#line 2539 "simp2trad.in"
    {"\237\207", "\x9F\x5C"},
#line 187 "simp2trad.in"
    {"Sd", "\x9E\x75"},
#line 239 "simp2trad.in"
    {"T\224", "\x54\xE2"},
#line 409 "simp2trad.in"
    {"\\\231", "\x5D\xB4"},
#line 2456 "simp2trad.in"
    {"\2369", "\x9D\x30"},
#line 1035 "simp2trad.in"
    {"zQ", "\x7A\x61"},
#line 394 "simp2trad.in"
    {"\\8", "\x5C\x4D"},
#line 67 "simp2trad.in"
    {"O\030", "\x51\x2A"},
#line 1539 "simp2trad.in"
    {"\213\346", "\x8A\x73"},
#line 1158 "simp2trad.in"
    {"~\346", "\x7D\x5B"},
#line 1919 "simp2trad.in"
    {"\224\346", "\x92\x9B"},
#line 584 "simp2trad.in"
    {"c{", "\x64\x9A"},
#line 137 "simp2trad.in"
    {"Q\321", "\x6E\x4A"},
#line 2455 "simp2trad.in"
    {"\2368", "\x9D\x2F"},
#line 215 "simp2trad.in"
    {"S\366", "\x84\x49"},
#line 1753 "simp2trad.in"
    {"\217\207", "\x8F\x26"},
#line 1483 "simp2trad.in"
    {"\213\256", "\x8B\x70"},
#line 2242 "simp2trad.in"
    {"\231\202", "\x99\x15"},
#line 1674 "simp2trad.in"
    {"\215R", "\x8C\xD9"},
#line 1102 "simp2trad.in"
    {"~\256", "\x7D\x18"},
#line 817 "simp2trad.in"
    {"n\206", "\x6F\x35"},
#line 230 "simp2trad.in"
    {"TS", "\x56\xC8"},
#line 1868 "simp2trad.in"
    {"\224\256", "\x92\x15"},
#line 341 "simp2trad.in"
    {"Y:", "\x59\x6A"},
#line 2377 "simp2trad.in"
    {"\234\256", "\x9B\xEA"},
#line 74 "simp2trad.in"
    {"O$", "\x50\xB7"},
#line 2008 "simp2trad.in"
    {"\225G", "\x93\xAE"},
#line 47 "simp2trad.in"
    {"N\211", "\x72\x2D"},
#line 1739 "simp2trad.in"
    {"\217y", "\x8F\x62"},
#line 290 "simp2trad.in"
    {"V\365", "\x57\x07"},
#line 2097 "simp2trad.in"
    {"\226\025", "\x95\xCB"},
#line 1561 "simp2trad.in"
    {"\213\374", "\x8A\xD1"},
#line 2146 "simp2trad.in"
    {"\230v", "\x98\x02"},
#line 1532 "simp2trad.in"
    {"\213\337", "\x8A\x6C"},
#line 1180 "simp2trad.in"
    {"~\374", "\x7D\x9C"},
#line 2272 "simp2trad.in"
    {"\232v", "\x99\xDB"},
#line 1151 "simp2trad.in"
    {"~\337", "\x7D\x71"},
#line 1940 "simp2trad.in"
    {"\224\374", "\x93\x38"},
#line 1912 "simp2trad.in"
    {"\224\337", "\x92\xA6"},
#line 1213 "simp2trad.in"
    {"\177\035", "\x7E\x2B"},
#line 98 "simp2trad.in"
    {"O\355", "\x51\x09"},
#line 2425 "simp2trad.in"
    {"\234\337", "\x9C\x52"},
#line 2095 "simp2trad.in"
    {"\226\023", "\x95\xE0"},
#line 853 "simp2trad.in"
    {"p\271", "\x9E\xDE"},
#line 1223 "simp2trad.in"
    {"\177'", "\x7E\x32"},
#line 327 "simp2trad.in"
    {"XF", "\x58\xEA"},
#line 1205 "simp2trad.in"
    {"\177\025", "\x7E\x37"},
#line 763 "simp2trad.in"
    {"l\374", "\x6F\x51"},
#line 1834 "simp2trad.in"
    {"\224\213", "\x91\xD9"},
#line 179 "simp2trad.in"
    {"S.", "\x53\x31"},
#line 976 "simp2trad.in"
    {"w\015", "\x77\x98"},
#line 2342 "simp2trad.in"
    {"\234\213", "\x9B\x92"},
#line 824 "simp2trad.in"
    {"n\341", "\x6E\xFF"},
#line 843 "simp2trad.in"
    {"pm", "\x6E\xC5"},
#line 2167 "simp2trad.in"
    {"\230\213", "\x98\x32"},
#line 1078 "simp2trad.in"
    {"|\234", "\x7C\xF6"},
#line 2293 "simp2trad.in"
    {"\232\213", "\x9A\x01"},
#line 1203 "simp2trad.in"
    {"\177\023", "\x7D\xE9"},
#line 2530 "simp2trad.in"
    {"\237Q", "\x9F\x4F"},
#line 1353 "simp2trad.in"
    {"\203\262", "\x84\xEE"},
#line 214 "simp2trad.in"
    {"S\340", "\x75\x8A"},
#line 2477 "simp2trad.in"
    {"\236N", "\x9D\x6F"},
#line 296 "simp2trad.in"
    {"W:", "\x58\x34"},
#line 1675 "simp2trad.in"
    {"\215S", "\x8C\xE1"},
#line 648 "simp2trad.in"
    {"gp", "\x50\x91"},
#line 340 "simp2trad.in"
    {"Y9", "\x59\x3E"},
#line 218 "simp2trad.in"
    {"S\375", "\x56\x30"},
#line 984 "simp2trad.in"
    {"w\251", "\x77\xDA"},
#line 626 "simp2trad.in"
    {"f<", "\x66\x5D"},
#line 2100 "simp2trad.in"
    {"\226\030", "\x95\xD2"},
#line 1965 "simp2trad.in"
    {"\225\025", "\x93\x12"},
#line 48 "simp2trad.in"
    {"N\216", "\x65\xBC"},
#line 633 "simp2trad.in"
    {"fU", "\x66\x88"},
#line 241 "simp2trad.in"
    {"T\233", "\x56\x80"},
#line 1550 "simp2trad.in"
    {"\213\361", "\x8A\x98"},
#line 405 "simp2trad.in"
    {"\\\202", "\x8C\x48"},
#line 339 "simp2trad.in"
    {"Y8", "\x8A\x87"},
#line 1169 "simp2trad.in"
    {"~\361", "\x7D\xD4"},
#line 1650 "simp2trad.in"
    {"\215:", "\x8C\xC0"},
#line 1929 "simp2trad.in"
    {"\224\361", "\x92\xA5"},
#line 1431 "simp2trad.in"
    {"\210\205", "\x5A\xCB"},
#line 1963 "simp2trad.in"
    {"\225\023", "\x92\xDF"},
#line 1208 "simp2trad.in"
    {"\177\030", "\x7D\xE3"},
#line 636 "simp2trad.in"
    {"f\247", "\x66\xD6"},
#line 988 "simp2trad.in"
    {"w\377", "\x79\x26"},
#line 34 "simp2trad.in"
    {"N:", "\x70\xBA"},
#line 240 "simp2trad.in"
    {"T\231", "\x56\xA8"},
#line 1047 "simp2trad.in"
    {"{\003", "\x7B\xE4"},
#line 1799 "simp2trad.in"
    {"\220W", "\x90\x7A"},
#line 103 "simp2trad.in"
    {"P~", "\x50\xE8"},
#line 781 "simp2trad.in"
    {"mQ", "\x6E\x3E"},
#line 2033 "simp2trad.in"
    {"\225d", "\x93\xF7"},
#line 2522 "simp2trad.in"
    {"\236\376", "\x9E\xFD"},
#line 719 "simp2trad.in"
    {"k|", "\x6B\xB2"},
#line 2523 "simp2trad.in"
    {"\237\013", "\x9E\xFF"},
#line 410 "simp2trad.in"
    {"\\\232", "\x5D\x50"},
#line 1314 "simp2trad.in"
    {"\202\313", "\x83\xA7"},
#line 2001 "simp2trad.in"
    {"\225>", "\x93\x70"},
#line 1220 "simp2trad.in"
    {"\177$", "\x7E\x7D"},
#line 2147 "simp2trad.in"
    {"\230w", "\x98\x03"},
#line 1302 "simp2trad.in"
    {"\202p", "\x82\x71"},
#line 295 "simp2trad.in"
    {"W9", "\x58\xD9"},
#line 2273 "simp2trad.in"
    {"\232w", "\x99\xDF"},
#line 1383 "simp2trad.in"
    {"\205<", "\x85\xF9"},
#line 2118 "simp2trad.in"
    {"\226\217", "\x96\xA8"},
#line 1080 "simp2trad.in"
    {"|\244", "\x7C\xB5"},
#line 842 "simp2trad.in"
    {"pO", "\x70\x5D"},
#line 2066 "simp2trad.in"
    {"\225\366", "\x95\x8C"},
#line 100 "simp2trad.in"
    {"P>", "\x50\xBE"},
#line 142 "simp2trad.in"
    {"Q\355", "\x61\x91"},
#line 2238 "simp2trad.in"
    {"\231~", "\x99\x16"},
#line 329 "simp2trad.in"
    {"X\356", "\x58\xEF"},
#line 2124 "simp2trad.in"
    {"\226\340", "\x8B\x8E"},
#line 1036 "simp2trad.in"
    {"zw", "\x7A\xAE"},
#line 539 "simp2trad.in"
    {"bQ", "\x64\xB2"},
#line 1230 "simp2trad.in"
    {"\177.", "\x7E\x55"},
#line 1736 "simp2trad.in"
    {"\217v", "\x8E\xFC"},
#line 2543 "simp2trad.in"
    {"\237\213", "\x9F\x72"},
#line 1649 "simp2trad.in"
    {"\2159", "\x8C\xBB"},
#line 767 "simp2trad.in"
    {"m\022", "\x70\x51"},
#line 139 "simp2trad.in"
    {"Q\340", "\x5E\x7E"},
#line 2212 "simp2trad.in"
    {"\231d", "\x98\xE3"},
#line 2470 "simp2trad.in"
    {"\236G", "\x9D\xF3"},
#line 1977 "simp2trad.in"
    {"\225$", "\x93\x18"},
#line 1212 "simp2trad.in"
    {"\177\034", "\x7E\x1D"},
#line 281 "simp2trad.in"
    {"V1", "\x56\xD1"},
#line 1789 "simp2trad.in"
    {"\217\337", "\x90\x72"},
#line 1451 "simp2trad.in"
    {"\211\305", "\x89\x93"},
#line 1648 "simp2trad.in"
    {"\2158", "\x8C\xBF"},
#line 1827 "simp2trad.in"
    {"\222\256", "\x94\x7E"},
#line 2259 "simp2trad.in"
    {"\231\223", "\x99\x4A"},
#line 2088 "simp2trad.in"
    {"\226\014", "\x95\xBF"},
#line 1616 "simp2trad.in"
    {"\2144", "\x8B\x74"},
#line 1757 "simp2trad.in"
    {"\217\213", "\x8F\x1E"},
#line 1267 "simp2trad.in"
    {"\200\300", "\x81\x39"},
#line 1357 "simp2trad.in"
    {"\203\267", "\x73\x72"},
#line 639 "simp2trad.in"
    {"g4", "\x6A\x38"},
#line 330 "simp2trad.in"
    {"X\360", "\x80\x72"},
#line 2057 "simp2trad.in"
    {"\225\355", "\x95\x89"},
#line 560 "simp2trad.in"
    {"b\346", "\x65\x14"},
#line 1985 "simp2trad.in"
    {"\225.", "\x93\x75"},
#line 310 "simp2trad.in"
    {"W\222", "\x58\xD8"},
#line 1086 "simp2trad.in"
    {"}w", "\x7E\x36"},
#line 1423 "simp2trad.in"
    {"\207\250", "\x87\xCE"},
#line 1196 "simp2trad.in"
    {"\177\014", "\x7D\xE6"},
#line 1466 "simp2trad.in"
    {"\211\357", "\x89\xF6"},
#line 1238 "simp2trad.in"
    {"\177B", "\x7F\x4C"},
#line 2329 "simp2trad.in"
    {"\234}", "\x9B\x5B"},
#line 443 "simp2trad.in"
    {"^'", "\x5E\x40"},
#line 1970 "simp2trad.in"
    {"\225\034", "\x93\x21"},
#line 2153 "simp2trad.in"
    {"\230}", "\x98\x11"},
#line 897 "simp2trad.in"
    {"s\003", "\x73\x6B"},
#line 2558 "simp2trad.in"
    {"\\\035", "\x56\x90"},
#line 2559 "simp2trad.in"
    {"\\\035", "\x56\x17"},
#line 2279 "simp2trad.in"
    {"\232}", "\x99\xD1"},
#line 532 "simp2trad.in"
    {"b\013", "\x62\x14"},
#line 1081 "simp2trad.in"
    {"|\252", "\x7C\xDE"},
#line 392 "simp2trad.in"
    {"\\'", "\x58\x2F"},
#line 366 "simp2trad.in"
    {"Zv", "\x5B\x38"},
#line 2073 "simp2trad.in"
    {"\225\375", "\x95\xA9"},
#line 720 "simp2trad.in"
    {"k\201", "\x6B\x7F"},
#line 859 "simp2trad.in"
    {"p\333", "\x71\xED"},
#line 116 "simp2trad.in"
    {"Qy", "\x83\x32"},
#line 94 "simp2trad.in"
    {"O\346", "\x51\x14"},
#line 814 "simp2trad.in"
    {"n\177", "\x6F\xD5"},
#line 2438 "simp2trad.in"
    {"\236'", "\x9D\xAC"},
#line 1584 "simp2trad.in"
    {"\214\024", "\x8A\xE4"},
#line 556 "simp2trad.in"
    {"b\337", "\x64\xEC"},
#line 331 "simp2trad.in"
    {"X\363", "\x6B\xBC"},
#line 660 "simp2trad.in"
    {"g\334", "\x6A\xC3"},
#line 649 "simp2trad.in"
    {"g\201", "\x69\x75"},
#line 1956 "simp2trad.in"
    {"\225\014", "\x92\xC5"},
#line 2005 "simp2trad.in"
    {"\225B", "\x93\xE4"},
#line 1389 "simp2trad.in"
    {"\206O", "\x86\x5C"},
#line 2269 "simp2trad.in"
    {"\232s", "\x99\xC1"},
#line 1670 "simp2trad.in"
    {"\215N", "\x8D\x16"},
#line 2255 "simp2trad.in"
    {"\231\217", "\x99\x3E"},
#line 2514 "simp2trad.in"
    {"\236~", "\x9E\x7A"},
#line 2092 "simp2trad.in"
    {"\226\020", "\x95\xE1"},
#line 205 "simp2trad.in"
    {"S\256", "\x5E\xDD"},
#line 2137 "simp2trad.in"
    {"\227\346", "\x97\xCB"},
#line 286 "simp2trad.in"
    {"V\342", "\x57\x18"},
#line 1278 "simp2trad.in"
    {"\201\017", "\x9A\xD2"},
#line 2568 "simp2trad.in"
    {"\201\017", "\x81\xDF"},
#line 457 "simp2trad.in"
    {"^\223", "\x5E\xAB"},
#line 816 "simp2trad.in"
    {"n\205", "\x6F\xFA"},
#line 1084 "simp2trad.in"
    {"|\307", "\x99\x31"},
#line 1737 "simp2trad.in"
    {"\217w", "\x8E\xE4"},
#line 924 "simp2trad.in"
    {"t<", "\x74\xCA"},
#line 440 "simp2trad.in"
    {"^\030", "\x7C\x3E"},
#line 507 "simp2trad.in"
    {"`\253", "\x61\x28"},
#line 2498 "simp2trad.in"
    {"\236d", "\x9D\xB4"},
#line 922 "simp2trad.in"
    {"t\017", "\x74\x89"},
#line 1200 "simp2trad.in"
    {"\177\020", "\x7D\xDA"},
#line 847 "simp2trad.in"
    {"p\177", "\x71\xE6"},
#line 871 "simp2trad.in"
    {"qE", "\x71\x46"},
#line 391 "simp2trad.in"
    {"\\\030", "\x58\x75"},
#line 1831 "simp2trad.in"
    {"\224\210", "\x91\xDD"},
#line 646 "simp2trad.in"
    {"gh", "\x69\x4A"},
#line 2461 "simp2trad.in"
    {"\236>", "\x9E\x1E"},
#line 2339 "simp2trad.in"
    {"\234\210", "\x9C\x78"},
#line 1551 "simp2trad.in"
    {"\213\362", "\x8A\xA8"},
#line 268 "simp2trad.in"
    {"Um", "\x56\xC0"},
#line 2164 "simp2trad.in"
    {"\230\210", "\x98\x38"},
#line 1170 "simp2trad.in"
    {"~\362", "\x7D\xC4"},
#line 517 "simp2trad.in"
    {"`\355", "\x61\x5A"},
#line 2290 "simp2trad.in"
    {"\232\210", "\x99\xE2"},
#line 1930 "simp2trad.in"
    {"\224\362", "\x93\xDF"},
#line 196 "simp2trad.in"
    {"S\213", "\x58\xD3"},
#line 1417 "simp2trad.in"
    {"\207H", "\x87\xC8"},
#line 110 "simp2trad.in"
    {"QQ", "\x51\x4C"},
#line 370 "simp2trad.in"
    {"Z\361", "\x5B\x19"},
#line 1513 "simp2trad.in"
    {"\213\314", "\x8B\x05"},
#line 2247 "simp2trad.in"
    {"\231\207", "\x99\x37"},
#line 1308 "simp2trad.in"
    {"\202\227", "\x85\x8C"},
#line 1132 "simp2trad.in"
    {"~\314", "\x7D\x40"},
#line 1239 "simp2trad.in"
    {"\177Q", "\x7D\xB2"},
#line 493 "simp2trad.in"
    {"`\034", "\x61\x90"},
#line 2407 "simp2trad.in"
    {"\234\314", "\x9F\x07"},
#line 248 "simp2trad.in"
    {"T\321", "\x55\x5E"},
#line 1960 "simp2trad.in"
    {"\225\020", "\x92\xB3"},
#line 1270 "simp2trad.in"
    {"\200\334", "\x52\xDD"},
#line 2324 "simp2trad.in"
    {"\232\314", "\x9A\xD5"},
#line 2233 "simp2trad.in"
    {"\231y", "\x99\x0E"},
#line 2435 "simp2trad.in"
    {"\236$", "\x9C\xF2"},
#line 444 "simp2trad.in"
    {"^.", "\x5E\x6B"},
#line 808 "simp2trad.in"
    {"n\024", "\x6F\x01"},
#line 2555 "simp2trad.in"
    {"\203\003", "\x7B\xC4"},
#line 634 "simp2trad.in"
    {"fV", "\x66\x89"},
#line 891 "simp2trad.in"
    {"r\355", "\x72\xF9"},
#line 76 "simp2trad.in"
    {"O&", "\x50\x2B"},
#line 2094 "simp2trad.in"
    {"\226\022", "\x95\xC3"},
#line 52 "simp2trad.in"
    {"N\232", "\x4E\x9E"},
#line 2093 "simp2trad.in"
    {"\226\021", "\x95\xCC"},
#line 441 "simp2trad.in"
    {"^\034", "\x5E\x5F"},
#line 178 "simp2trad.in"
    {"S&", "\x53\x2D"},
#line 1363 "simp2trad.in"
    {"\204\035", "\x86\x3F"},
#line 1743 "simp2trad.in"
    {"\217}", "\x8F\x09"},
#line 2017 "simp2trad.in"
    {"\225Q", "\x93\x8A"},
#line 2087 "simp2trad.in"
    {"\226\013", "\x9B\x29"},
#line 1367 "simp2trad.in"
    {"\204'", "\x85\x6D"},
#line 2445 "simp2trad.in"
    {"\236.", "\x9D\x1E"},
#line 1663 "simp2trad.in"
    {"\215G", "\x8C\xD5"},
#line 1202 "simp2trad.in"
    {"\177\022", "\x7E\x0B"},
#line 222 "simp2trad.in"
    {"T\025", "\x54\x42"},
#line 1201 "simp2trad.in"
    {"\177\021", "\x7D\xF1"},
#line 1544 "simp2trad.in"
    {"\213\353", "\x8A\xA1"},
#line 833 "simp2trad.in"
    {"oF", "\x70\x20"},
#line 1718 "simp2trad.in"
    {"\216\234", "\x8E\xA6"},
#line 1163 "simp2trad.in"
    {"~\353", "\x7D\xBE"},
#line 1923 "simp2trad.in"
    {"\224\353", "\x92\x9A"},
#line 1195 "simp2trad.in"
    {"\177\013", "\x7E\x62"},
#line 501 "simp2trad.in"
    {"`y", "\x61\xE8"},
#line 1276 "simp2trad.in"
    {"\201\011", "\x81\x08"},
#line 221 "simp2trad.in"
    {"T\023", "\x56\x87"},
#line 839 "simp2trad.in"
    {"o\234", "\x70\x3E"},
#line 448 "simp2trad.in"
    {"^B", "\x51\xAA"},
#line 784 "simp2trad.in"
    {"mT", "\x6F\x6F"},
#line 1733 "simp2trad.in"
    {"\217s", "\x8F\x64"},
#line 145 "simp2trad.in"
    {"Q\374", "\x6C\x39"},
#line 1397 "simp2trad.in"
    {"\206\177", "\x88\x06"},
#line 249 "simp2trad.in"
    {"T\322", "\x56\x60"},
#line 396 "simp2trad.in"
    {"\\B", "\x5C\x64"},
#line 61 "simp2trad.in"
    {"N\321", "\x4F\x96"},
#line 1818 "simp2trad.in"
    {"\221f", "\x91\xB1"},
#line 2540 "simp2trad.in"
    {"\237\210", "\x9F\x66"},
#line 1962 "simp2trad.in"
    {"\225\022", "\x92\xC3"},
#line 520 "simp2trad.in"
    {"a\015", "\x6E\x63"},
#line 1305 "simp2trad.in"
    {"\202z", "\x85\xDD"},
#line 1961 "simp2trad.in"
    {"\225\021", "\x92\xBB"},
#line 2465 "simp2trad.in"
    {"\236B", "\x9E\x1D"},
#line 1388 "simp2trad.in"
    {"\205\323", "\x86\x1A"},
#line 905 "simp2trad.in"
    {"sm", "\x73\x7A"},
#line 930 "simp2trad.in"
    {"t\356", "\x75\x15"},
#line 1955 "simp2trad.in"
    {"\225\013", "\x92\xD2"},
#line 1001 "simp2trad.in"
    {"xU", "\x78\xA9"},
#line 1621 "simp2trad.in"
    {"\215\035", "\x8C\x9D"},
#line 2050 "simp2trad.in"
    {"\225v", "\x94\x72"},
#line 640 "simp2trad.in"
    {"g:", "\x6A\x5F"},
#line 1557 "simp2trad.in"
    {"\213\370", "\x8A\xF8"},
#line 1631 "simp2trad.in"
    {"\215'", "\x8C\xA8"},
#line 1000 "simp2trad.in"
    {"xE", "\x77\xFD"},
#line 1176 "simp2trad.in"
    {"~\370", "\x7D\xA2"},
#line 1754 "simp2trad.in"
    {"\217\210", "\x8F\x29"},
#line 25 "simp2trad.in"
    {"N\035", "\x7D\x72"},
#line 1936 "simp2trad.in"
    {"\224\370", "\x94\x44"},
#line 352 "simp2trad.in"
    {"Y\253", "\x5A\xAF"},
#line 2072 "simp2trad.in"
    {"\225\374", "\x95\xE5"},
#line 29 "simp2trad.in"
    {"N'", "\x55\xAA"},
#line 850 "simp2trad.in"
    {"p\226", "\x71\xC9"},
#line 181 "simp2trad.in"
    {"S;", "\x91\xAB"},
#line 1445 "simp2trad.in"
    {"\211A", "\x7E\x48"},
#line 270 "simp2trad.in"
    {"Up", "\x56\xC9"},
#line 760 "simp2trad.in"
    {"l\370", "\x70\x18"},
#line 1364 "simp2trad.in"
    {"\204$", "\x87\xA2"},
#line 363 "simp2trad.in"
    {"Zs", "\x5A\xFF"},
#line 1010 "simp2trad.in"
    {"x\234", "\x78\xE3"},
#line 439 "simp2trad.in"
    {"^\020", "\x5E\x33"},
#line 1558 "simp2trad.in"
    {"\213\371", "\x8A\xCF"},
#line 21 "simp2trad.in"
    {"N\023", "\x5C\x08"},
#line 1177 "simp2trad.in"
    {"~\371", "\x7D\xAF"},
#line 1222 "simp2trad.in"
    {"\177&", "\x7E\x35"},
#line 2148 "simp2trad.in"
    {"\230x", "\x98\x07"},
#line 1937 "simp2trad.in"
    {"\224\371", "\x94\x12"},
#line 849 "simp2trad.in"
    {"p\211", "\x72\x10"},
#line 2274 "simp2trad.in"
    {"\232x", "\x99\xD9"},
#line 527 "simp2trad.in"
    {"a\267", "\x60\x35"},
#line 1502 "simp2trad.in"
    {"\213\301", "\x8B\x49"},
#line 1121 "simp2trad.in"
    {"~\301", "\x7D\x4F"},
#line 1457 "simp2trad.in"
    {"\211\313", "\x89\xA1"},
#line 2230 "simp2trad.in"
    {"\231v", "\x99\x52"},
#line 1887 "simp2trad.in"
    {"\224\301", "\x94\x35"},
#line 1496 "simp2trad.in"
    {"\213\273", "\x8A\x29"},
#line 1654 "simp2trad.in"
    {"\215>", "\x8C\xC8"},
#line 2396 "simp2trad.in"
    {"\234\301", "\x9C\x2E"},
#line 1115 "simp2trad.in"
    {"~\273", "\x7D\x35"},
#line 848 "simp2trad.in"
    {"p\200", "\x71\x6C"},
#line 1881 "simp2trad.in"
    {"\224\273", "\x94\x7D"},
#line 238 "simp2trad.in"
    {"T\217", "\x8A\x60"},
#line 1399 "simp2trad.in"
    {"\206\201", "\x87\xFB"},
#line 2390 "simp2trad.in"
    {"\234\273", "\x9B\xD4"},
#line 36 "simp2trad.in"
    {"N>", "\x82\x09"},
#line 972 "simp2trad.in"
    {"v\321", "\x76\xE3"},
#line 2086 "simp2trad.in"
    {"\226\012", "\x95\xB6"},
#line 1703 "simp2trad.in"
    {"\215\366", "\x8E\x82"},
#line 1376 "simp2trad.in"
    {"\204\340", "\x86\x3A"},
#line 530 "simp2trad.in"
    {"a\324", "\x61\xCD"},
#line 314 "simp2trad.in"
    {"W\253", "\x58\x8A"},
#line 1979 "simp2trad.in"
    {"\225&", "\x93\x26"},
#line 2029 "simp2trad.in"
    {"\225`", "\x93\xD0"},
#line 2061 "simp2trad.in"
    {"\225\361", "\x95\xC8"},
#line 2251 "simp2trad.in"
    {"\231\213", "\x99\x5E"},
#line 1008 "simp2trad.in"
    {"x\215", "\x79\x19"},
#line 343 "simp2trad.in"
    {"YB", "\x59\x50"},
#line 777 "simp2trad.in"
    {"mM", "\x6F\xAE"},
#line 2480 "simp2trad.in"
    {"\236Q", "\x9D\x89"},
#line 1194 "simp2trad.in"
    {"\177\012", "\x7E\x15"},
#line 1359 "simp2trad.in"
    {"\203\271", "\x74\x69"},
#line 348 "simp2trad.in"
    {"Y\207", "\x5A\x66"},
#line 568 "simp2trad.in"
    {"c\035", "\x64\xBE"},
#line 1277 "simp2trad.in"
    {"\201\015", "\x81\xBE"},
#line 1628 "simp2trad.in"
    {"\215$", "\x8C\xE2"},
#line 499 "simp2trad.in"
    {"`v", "\x60\xE1"},
#line 776 "simp2trad.in"
    {"mK", "\x6E\x2C"},
#line 934 "simp2trad.in"
    {"uE", "\x66\xA2"},
#line 1347 "simp2trad.in"
    {"\203m", "\x84\x52"},
#line 27 "simp2trad.in"
    {"N$", "\x51\x69"},
#line 1511 "simp2trad.in"
    {"\213\312", "\x8A\x3A"},
#line 373 "simp2trad.in"
    {"[f", "\x5B\x78"},
#line 1370 "simp2trad.in"
    {"\204\207", "\x85\x46"},
#line 1130 "simp2trad.in"
    {"~\312", "\x7D\x46"},
#line 723 "simp2trad.in"
    {"k\222", "\x6B\x9E"},
#line 422 "simp2trad.in"
    {"\\\346", "\x5D\xD2"},
#line 1895 "simp2trad.in"
    {"\224\312", "\x92\x48"},
#line 1553 "simp2trad.in"
    {"\213\364", "\x8A\xAA"},
#line 2405 "simp2trad.in"
    {"\234\312", "\x9B\xFF"},
#line 1172 "simp2trad.in"
    {"~\364", "\x7D\xAD"},
#line 1516 "simp2trad.in"
    {"\213\317", "\x8A\x54"},
#line 1638 "simp2trad.in"
    {"\215.", "\x8C\xAF"},
#line 1932 "simp2trad.in"
    {"\224\364", "\x94\x0B"},
#line 1135 "simp2trad.in"
    {"~\317", "\x7D\x93"},
#line 1261 "simp2trad.in"
    {"\200\203", "\x80\x85"},
#line 1899 "simp2trad.in"
    {"\224\317", "\x92\x76"},
#line 1954 "simp2trad.in"
    {"\225\012", "\x92\xDD"},
#line 451 "simp2trad.in"
    {"^v", "\x4E\x26"},
#line 2410 "simp2trad.in"
    {"\234\317", "\x9C\x25"},
#line 815 "simp2trad.in"
    {"n\203", "\x6F\x70"},
#line 2197 "simp2trad.in"
    {"\230\317", "\x98\xBA"},
#line 49 "simp2trad.in"
    {"N\217", "\x86\x67"},
#line 980 "simp2trad.in"
    {"wA", "\x77\x5C"},
#line 118 "simp2trad.in"
    {"Q}", "\x73\x78"},
#line 736 "simp2trad.in"
    {"l\"", "\x6C\x2B"},
#line 210 "simp2trad.in"
    {"S\314", "\x96\xD9"},
#line 297 "simp2trad.in"
    {"WB", "\x96\x2A"},
#line 24 "simp2trad.in"
    {"N\034", "\x67\x71"},
#line 619 "simp2trad.in"
    {"e\255", "\x65\xB7"},
#line 2270 "simp2trad.in"
    {"\232t", "\x9A\x62"},
#line 1537 "simp2trad.in"
    {"\213\344", "\x8A\xCD"},
#line 1486 "simp2trad.in"
    {"\213\261", "\x8A\x12"},
#line 1156 "simp2trad.in"
    {"~\344", "\x7D\x8C"},
#line 961 "simp2trad.in"
    {"v>", "\x76\x6E"},
#line 1105 "simp2trad.in"
    {"~\261", "\x7D\x17"},
#line 1917 "simp2trad.in"
    {"\224\344", "\x92\xCC"},
#line 2231 "simp2trad.in"
    {"\231w", "\x99\x09"},
#line 1871 "simp2trad.in"
    {"\224\261", "\x93\x22"},
#line 1252 "simp2trad.in"
    {"\2008", "\x80\x73"},
#line 1398 "simp2trad.in"
    {"\206\200", "\x87\x55"},
#line 2380 "simp2trad.in"
    {"\234\261", "\x9B\xE1"},
#line 958 "simp2trad.in"
    {"v\030", "\x76\x3A"},
#line 1998 "simp2trad.in"
    {"\225;", "\x93\x5B"},
#line 812 "simp2trad.in"
    {"n8", "\x90\x4A"},
#line 149 "simp2trad.in"
    {"R\030", "\x52\x89"},
#line 1658 "simp2trad.in"
    {"\215B", "\x8C\xC2"},
#line 1738 "simp2trad.in"
    {"\217x", "\x8E\xEB"},
#line 114 "simp2trad.in"
    {"Qs", "\x95\xDC"},
#line 1444 "simp2trad.in"
    {"\2114", "\x89\x64"},
#line 379 "simp2trad.in"
    {"[\241", "\x5B\xE9"},
#line 2012 "simp2trad.in"
    {"\225L", "\x94\x2B"},
#line 1792 "simp2trad.in"
    {"\217\371", "\x8D\xE1"},
#line 2108 "simp2trad.in"
    {"\2266", "\x96\x8E"},
#line 941 "simp2trad.in"
    {"u\241", "\x76\x0D"},
#line 1847 "simp2trad.in"
    {"\224\230", "\x92\x03"},
#line 1536 "simp2trad.in"
    {"\213\343", "\x8A\x63"},
#line 575 "simp2trad.in"
    {"c$", "\x64\xE0"},
#line 2355 "simp2trad.in"
    {"\234\230", "\x9B\x9C"},
#line 1155 "simp2trad.in"
    {"~\343", "\x7E\x61"},
#line 1779 "simp2trad.in"
    {"\217\301", "\x90\x77"},
#line 2180 "simp2trad.in"
    {"\230\230", "\x98\x4C"},
#line 1916 "simp2trad.in"
    {"\224\343", "\x92\x91"},
#line 2306 "simp2trad.in"
    {"\232\230", "\x9A\x2D"},
#line 2429 "simp2trad.in"
    {"\234\343", "\x9C\x63"},
#line 906 "simp2trad.in"
    {"s\221", "\x74\xA3"},
#line 1284 "simp2trad.in"
    {"\2011", "\x81\x2B"},
#line 536 "simp2trad.in"
    {"b,", "\x62\x29"},
#line 442 "simp2trad.in"
    {"^&", "\x5E\x36"},
#line 769 "simp2trad.in"
    {"mC", "\x6D\x79"},
#line 1049 "simp2trad.in"
    {"{\024", "\x7B\x46"},
#line 68 "simp2trad.in"
    {"O\031", "\x59\x25"},
#line 1418 "simp2trad.in"
    {"\207I", "\x87\xEC"},
#line 725 "simp2trad.in"
    {"k\232", "\x6B\xAB"},
#line 1014 "simp2trad.in"
    {"y<", "\x79\xAE"},
#line 895 "simp2trad.in"
    {"r\361", "\x73\x44"},
#line 121 "simp2trad.in"
    {"Q\210", "\x5C\xA1"},
#line 1819 "simp2trad.in"
    {"\221q", "\x91\xAC"},
#line 2048 "simp2trad.in"
    {"\225s", "\x94\x63"},
#line 2142 "simp2trad.in"
    {"\227\353", "\x97\xDE"},
#line 2026 "simp2trad.in"
    {"\225]", "\x93\xD1"},
#line 1504 "simp2trad.in"
    {"\213\303", "\x8A\x36"},
#line 1123 "simp2trad.in"
    {"~\303", "\x7D\xF4"},
#line 378 "simp2trad.in"
    {"[\240", "\x5B\xF5"},
#line 567 "simp2trad.in"
    {"c\034", "\x63\x97"},
#line 1889 "simp2trad.in"
    {"\224\303", "\x92\x34"},
#line 2437 "simp2trad.in"
    {"\236&", "\x9D\x09"},
#line 2494 "simp2trad.in"
    {"\236`", "\x9D\xB9"},
#line 2398 "simp2trad.in"
    {"\234\303", "\x9C\x13"},
#line 940 "simp2trad.in"
    {"u\240", "\x76\x58"},
#line 2237 "simp2trad.in"
    {"\231}", "\x99\x11"},
#line 1002 "simp2trad.in"
    {"xV", "\x78\x64"},
#line 592 "simp2trad.in"
    {"c\375", "\x65\x2C"},
#line 1379 "simp2trad.in"
    {"\204\346", "\x9A\x40"},
#line 1993 "simp2trad.in"
    {"\2256", "\x93\x76"},
#line 135 "simp2trad.in"
    {"Q\314", "\x6D\xE9"},
#line 1812 "simp2trad.in"
    {"\220\321", "\x91\x2D"},
#line 283 "simp2trad.in"
    {"V|", "\x52\x88"},
#line 1306 "simp2trad.in"
    {"\202\202", "\x7B\xC0"},
#line 1522 "simp2trad.in"
    {"\213\325", "\x8A\x66"},
#line 1527 "simp2trad.in"
    {"\213\332", "\x8A\xA0"},
#line 990 "simp2trad.in"
    {"x\001", "\x78\xBC"},
#line 1141 "simp2trad.in"
    {"~\325", "\x7E\x5E"},
#line 1146 "simp2trad.in"
    {"~\332", "\x7D\x62"},
#line 494 "simp2trad.in"
    {"`;", "\x7E\x3D"},
#line 1903 "simp2trad.in"
    {"\224\325", "\x92\xAA"},
#line 1907 "simp2trad.in"
    {"\224\332", "\x92\x8D"},
#line 2416 "simp2trad.in"
    {"\234\325", "\x9C\x48"},
#line 2227 "simp2trad.in"
    {"\231s", "\x98\xFF"},
#line 1673 "simp2trad.in"
    {"\215Q", "\x8D\x14"},
#line 2203 "simp2trad.in"
    {"\230\325", "\x98\xBC"},
#line 2208 "simp2trad.in"
    {"\230\332", "\x98\xC6"},
#line 160 "simp2trad.in"
    {"RB", "\x52\x91"},
#line 2062 "simp2trad.in"
    {"\225\362", "\x95\x91"},
#line 2565 "simp2trad.in"
    {"\225\362", "\x95\x92"},
#line 1734 "simp2trad.in"
    {"\217t", "\x8E\xF8"},
#line 1491 "simp2trad.in"
    {"\213\266", "\x8A\x1D"},
#line 380 "simp2trad.in"
    {"[\252", "\x61\xB2"},
#line 939 "simp2trad.in"
    {"u\237", "\x76\x27"},
#line 1110 "simp2trad.in"
    {"~\266", "\x7D\xB8"},
#line 505 "simp2trad.in"
    {"`}", "\x60\xF2"},
#line 1375 "simp2trad.in"
    {"\204\337", "\x85\x8A"},
#line 1876 "simp2trad.in"
    {"\224\266", "\x92\x33"},
#line 217 "simp2trad.in"
    {"S\371", "\x6B\x4E"},
#line 257 "simp2trad.in"
    {"T\337", "\x55\xB2"},
#line 2385 "simp2trad.in"
    {"\234\266", "\x9B\xF0"},
#line 1556 "simp2trad.in"
    {"\213\367", "\x8A\xCB"},
#line 1485 "simp2trad.in"
    {"\213\260", "\x8A\x18"},
#line 1175 "simp2trad.in"
    {"~\367", "\x7E\x43"},
#line 446 "simp2trad.in"
    {"^;", "\x5E\x58"},
#line 1104 "simp2trad.in"
    {"~\260", "\x7D\x15"},
#line 1935 "simp2trad.in"
    {"\224\367", "\x92\xA3"},
#line 1372 "simp2trad.in"
    {"\204\213", "\x85\x23"},
#line 1870 "simp2trad.in"
    {"\224\260", "\x92\x3A"},
#line 141 "simp2trad.in"
    {"Q\353", "\x9C\xE7"},
#line 2379 "simp2trad.in"
    {"\234\260", "\x9B\xEB"},
#line 1061 "simp2trad.in"
    {"{\200", "\x7C\x21"},
#line 718 "simp2trad.in"
    {"k'", "\x6B\x50"},
#line 2101 "simp2trad.in"
    {"\226\031", "\x95\xD5"},
#line 1826 "simp2trad.in"
    {"\222t", "\x94\x52"},
#line 1593 "simp2trad.in"
    {"\214\035", "\x8A\xDE"},
#line 759 "simp2trad.in"
    {"l\367", "\x70\x27"},
#line 2248 "simp2trad.in"
    {"\231\210", "\x99\x4B"},
#line 2013 "simp2trad.in"
    {"\225M", "\x93\xB3"},
#line 498 "simp2trad.in"
    {"`s", "\x61\xC7"},
#line 1603 "simp2trad.in"
    {"\214'", "\x8B\x10"},
#line 1585 "simp2trad.in"
    {"\214\025", "\x8A\xED"},
#line 2458 "simp2trad.in"
    {"\236;", "\x9D\x34"},
#line 1025 "simp2trad.in"
    {"y\306", "\x7A\x08"},
#line 1770 "simp2trad.in"
    {"\217\230", "\x8F\x46"},
#line 2265 "simp2trad.in"
    {"\232o", "\x99\xB4"},
#line 989 "simp2trad.in"
    {"x\000", "\x78\xAD"},
#line 1209 "simp2trad.in"
    {"\177\031", "\x7E\x09"},
#line 947 "simp2trad.in"
    {"u\310", "\x76\x70"},
#line 2475 "simp2trad.in"
    {"\236L", "\x9D\x6A"},
#line 20 "simp2trad.in"
    {"N\021", "\x91\x9C"},
#line 1801 "simp2trad.in"
    {"\220\223", "\x91\x27"},
#line 1583 "simp2trad.in"
    {"\214\023", "\x8B\x02"},
#line 1694 "simp2trad.in"
    {"\215v", "\x8D\x95"},
#line 364 "simp2trad.in"
    {"Zt", "\x5B\x30"},
#line 2556 "simp2trad.in"
    {"g~", "\x9B\x06"},
#line 382 "simp2trad.in"
    {"[\275", "\x5B\xEC"},
#line 1366 "simp2trad.in"
    {"\204&", "\x7E\x08"},
#line 2483 "simp2trad.in"
    {"\236T", "\x9D\xEB"},
#line 2055 "simp2trad.in"
    {"\225\353", "\x95\x86"},
#line 1228 "simp2trad.in"
    {"\177,", "\x7E\x88"},
#line 724 "simp2trad.in"
    {"k\223", "\x6B\xAE"},
#line 1074 "simp2trad.in"
    {"|A", "\x7C\x5F"},
#line 383 "simp2trad.in"
    {"[\276", "\x8C\xD3"},
#line 1350 "simp2trad.in"
    {"\203\205", "\x84\x9E"},
#line 1337 "simp2trad.in"
    {"\203c", "\x69\xAE"},
#line 618 "simp2trad.in"
    {"e\251", "\x65\xAC"},
#line 377 "simp2trad.in"
    {"[\236", "\x5B\xE6"},
#line 1695 "simp2trad.in"
    {"\215\213", "\x8D\xA8"},
#line 1968 "simp2trad.in"
    {"\225\031", "\x93\x2F"},
#line 526 "simp2trad.in"
    {"am", "\x61\x96"},
#line 2526 "simp2trad.in"
    {"\237\027", "\x97\x80"},
#line 738 "simp2trad.in"
    {"l2", "\x6C\x33"},
#line 2512 "simp2trad.in"
    {"\236s", "\x9E\x1B"},
#line 162 "simp2trad.in"
    {"RQ", "\x52\x8D"},
#line 2491 "simp2trad.in"
    {"\236]", "\x9D\xCA"},
#line 1588 "simp2trad.in"
    {"\214\030", "\x8A\xEE"},
#line 1051 "simp2trad.in"
    {"{:", "\x7B\x8B"},
#line 71 "simp2trad.in"
    {"O\036", "\x50\x98"},
#line 931 "simp2trad.in"
    {"t\357", "\x75\x0C"},
#line 688 "simp2trad.in"
    {"h\246", "\x59\x22"},
#line 388 "simp2trad.in"
    {"[\377", "\x58\xFD"},
#line 190 "simp2trad.in"
    {"St", "\x53\x7B"},
#line 672 "simp2trad.in"
    {"h\017", "\x6B\x04"},
#line 306 "simp2trad.in"
    {"W`", "\x58\x9C"},
#line 1983 "simp2trad.in"
    {"\225,", "\x93\x1F"},
#line 1028 "simp2trad.in"
    {"y\360", "\x7A\x31"},
#line 717 "simp2trad.in"
    {"k$", "\x6B\x5F"},
#line 2453 "simp2trad.in"
    {"\2366", "\x9D\xE5"},
#line 558 "simp2trad.in"
    {"b\343", "\x63\xC0"},
#line 1251 "simp2trad.in"
    {"\200'", "\x80\x2C"},
#line 689 "simp2trad.in"
    {"h\274", "\x6A\xAE"},
#line 687 "simp2trad.in"
    {"hi", "\x6A\x01"},
#line 950 "simp2trad.in"
    {"u\326", "\x76\x02"},
#line 2068 "simp2trad.in"
    {"\225\370", "\x95\x98"},
#line 1600 "simp2trad.in"
    {"\214$", "\x8B\x17"},
#line 131 "simp2trad.in"
    {"Q\273", "\x51\xCD"},
#line 896 "simp2trad.in"
    {"r\362", "\x73\x3B"},
#line 684 "simp2trad.in"
    {"hf", "\x6A\x3A"},
#line 1630 "simp2trad.in"
    {"\215&", "\x8C\xEC"},
#line 1688 "simp2trad.in"
    {"\215`", "\x8D\x08"},
#line 1420 "simp2trad.in"
    {"\207|", "\x87\xBB"},
#line 658 "simp2trad.in"
    {"g\253", "\x69\x53"},
#line 148 "simp2trad.in"
    {"R\022", "\x52\x83"},
#line 1324 "simp2trad.in"
    {"\203\024", "\x58\x4B"},
#line 813 "simp2trad.in"
    {"n~", "\x70\x63"},
#line 42 "simp2trad.in"
    {"N`", "\x7F\xD2"},
#line 497 "simp2trad.in"
    {"`K", "\x62\x00"},
#line 1400 "simp2trad.in"
    {"\206\202", "\x87\x9E"},
#line 93 "simp2trad.in"
    {"O\343", "\x4F\xC1"},
#line 1484 "simp2trad.in"
    {"\213\257", "\x8A\x0A"},
#line 1610 "simp2trad.in"
    {"\214.", "\x8B\x56"},
#line 2069 "simp2trad.in"
    {"\225\371", "\x9B\x27"},
#line 2560 "simp2trad.in"
    {"\225\371", "\x9B\x28"},
#line 1103 "simp2trad.in"
    {"~\257", "\x7D\x14"},
#line 2006 "simp2trad.in"
    {"\225C", "\x93\xA1"},
#line 679 "simp2trad.in"
    {"ha", "\x6A\x48"},
#line 1869 "simp2trad.in"
    {"\224\257", "\x92\x00"},
#line 1545 "simp2trad.in"
    {"\213\354", "\x8A\xA3"},
#line 2378 "simp2trad.in"
    {"\234\257", "\x9B\xD5"},
#line 1164 "simp2trad.in"
    {"~\354", "\x7D\xD3"},
#line 515 "simp2trad.in"
    {"`\353", "\x61\x8A"},
#line 1592 "simp2trad.in"
    {"\214\034", "\x8B\x0E"},
#line 1924 "simp2trad.in"
    {"\224\354", "\x92\x7B"},
#line 876 "simp2trad.in"
    {"rM", "\x72\x58"},
#line 384 "simp2trad.in"
    {"[\335", "\x5B\xE2"},
#line 693 "simp2trad.in"
    {"i\001", "\x69\xE8"},
#line 1729 "simp2trad.in"
    {"\217o", "\x8E\xDF"},
#line 661 "simp2trad.in"
    {"g\340", "\x6A\xB8"},
#line 942 "simp2trad.in"
    {"u\254", "\x9B\x01"},
#line 1077 "simp2trad.in"
    {"||", "\x79\xC8"},
#line 2123 "simp2trad.in"
    {"\226\317", "\x96\xDB"},
#line 1342 "simp2trad.in"
    {"\203h", "\x85\x41"},
#line 1275 "simp2trad.in"
    {"\200\366", "\x81\xA0"},
#line 534 "simp2trad.in"
    {"b\027", "\x62\x27"},
#line 1329 "simp2trad.in"
    {"\203Y", "\x85\x98"},
#line 662 "simp2trad.in"
    {"g\375", "\x6A\x89"},
#line 73 "simp2trad.in"
    {"O ", "\x50\xB3"},
#line 2476 "simp2trad.in"
    {"\236M", "\x9D\xA4"},
#line 1560 "simp2trad.in"
    {"\213\373", "\x8B\x80"},
#line 846 "simp2trad.in"
    {"p~", "\x70\x7D"},
#line 1179 "simp2trad.in"
    {"~\373", "\x7D\xA3"},
#line 136 "simp2trad.in"
    {"Q\317", "\x6E\x1B"},
#line 2232 "simp2trad.in"
    {"\231x", "\x99\x04"},
#line 1939 "simp2trad.in"
    {"\224\373", "\x92\xD9"},
#line 721 "simp2trad.in"
    {"k\207", "\x6B\xA4"},
#line 1576 "simp2trad.in"
    {"\214\014", "\x8A\xF6"},
#line 1290 "simp2trad.in"
    {"\201m", "\x9F\x76"},
#line 1218 "simp2trad.in"
    {"\177\"", "\x7E\x0A"},
#line 2474 "simp2trad.in"
    {"\236K", "\x9D\x93"},
#line 115 "simp2trad.in"
    {"Qt", "\x82\x08"},
#line 642 "simp2trad.in"
    {"gB", "\x96\xDC"},
#line 762 "simp2trad.in"
    {"l\373", "\x70\x09"},
#line 1243 "simp2trad.in"
    {"\177t", "\x7F\x86"},
#line 2000 "simp2trad.in"
    {"\225=", "\x93\x60"},
#line 1515 "simp2trad.in"
    {"\213\316", "\x8A\x58"},
#line 66 "simp2trad.in"
    {"O\027", "\x77\x3E"},
#line 430 "simp2trad.in"
    {"]]", "\x5D\x81"},
#line 1214 "simp2trad.in"
    {"\177\036", "\x7E\x17"},
#line 1134 "simp2trad.in"
    {"~\316", "\x7E\x79"},
#line 667 "simp2trad.in"
    {"h\011", "\x6A\xDB"},
#line 1898 "simp2trad.in"
    {"\224\316", "\x94\x38"},
#line 1651 "simp2trad.in"
    {"\215;", "\x8C\xBD"},
#line 140 "simp2trad.in"
    {"Q\344", "\x9C\xF3"},
#line 2409 "simp2trad.in"
    {"\234\316", "\x9C\x28"},
#line 577 "simp2trad.in"
    {"c&", "\x64\x8F"},
#line 665 "simp2trad.in"
    {"h\007", "\x6A\x19"},
#line 2196 "simp2trad.in"
    {"\230\316", "\x98\xA8"},
#line 1384 "simp2trad.in"
    {"\205r", "\x86\x04"},
#line 1217 "simp2trad.in"
    {"\177!", "\x7E\x2D"},
#line 349 "simp2trad.in"
    {"Y\210", "\x5A\xBD"},
#line 1668 "simp2trad.in"
    {"\215L", "\x8C\xED"},
#line 2064 "simp2trad.in"
    {"\225\364", "\x95\x93"},
#line 952 "simp2trad.in"
    {"u\352", "\x76\x13"},
#line 1975 "simp2trad.in"
    {"\225\"", "\x93\x2E"},
#line 500 "simp2trad.in"
    {"`x", "\x61\x5F"},
#line 1510 "simp2trad.in"
    {"\213\311", "\x8A\x34"},
#line 83 "simp2trad.in"
    {"Oe", "\x50\xC9"},
#line 39 "simp2trad.in"
    {"NL", "\x70\xCF"},
#line 1129 "simp2trad.in"
    {"~\311", "\x7E\x10"},
#line 1676 "simp2trad.in"
    {"\215T", "\x8C\xE0"},
#line 1894 "simp2trad.in"
    {"\224\311", "\x92\x49"},
#line 2049 "simp2trad.in"
    {"\225t", "\x94\x5E"},
#line 303 "simp2trad.in"
    {"W]", "\x58\xE9"},
#line 2404 "simp2trad.in"
    {"\234\311", "\x9C\x42"},
#line 909 "simp2trad.in"
    {"s\233", "\x74\x6A"},
#line 1971 "simp2trad.in"
    {"\225\036", "\x93\x01"},
#line 1076 "simp2trad.in"
    {"|{", "\x98\x5E"},
#line 823 "simp2trad.in"
    {"n\340", "\x70\x44"},
#line 41 "simp2trad.in"
    {"NT", "\x55\xAC"},
#line 216 "simp2trad.in"
    {"S\367", "\x86\x5F"},
#line 2443 "simp2trad.in"
    {"\236,", "\x9E\x15"},
#line 697 "simp2trad.in"
    {"i-", "\x6A\x62"},
#line 1013 "simp2trad.in"
    {"x\331", "\x6E\xFE"},
#line 1580 "simp2trad.in"
    {"\214\020", "\x8A\xE7"},
#line 1974 "simp2trad.in"
    {"\225!", "\x93\x2B"},
#line 2132 "simp2trad.in"
    {"\227e", "\x97\x68"},
#line 609 "simp2trad.in"
    {"d\270", "\x64\xFC"},
#line 907 "simp2trad.in"
    {"s\231", "\x74\xB5"},
#line 1685 "simp2trad.in"
    {"\215]", "\x8D\x17"},
#line 361 "simp2trad.in"
    {"Z2", "\x5A\xA7"},
#line 246 "simp2trad.in"
    {"T\314", "\x54\x71"},
#line 1254 "simp2trad.in"
    {"\200B", "\x80\x76"},
#line 867 "simp2trad.in"
    {"p\355", "\x71\xB1"},
#line 596 "simp2trad.in"
    {"d\002", "\x64\x5F"},
#line 803 "simp2trad.in"
    {"n\014", "\x6D\xE5"},
#line 611 "simp2trad.in"
    {"d\336", "\x64\xFB"},
#line 951 "simp2trad.in"
    {"u\350", "\x76\x46"},
#line 600 "simp2trad.in"
    {"dE", "\x65\x04"},
#line 1396 "simp2trad.in"
    {"\206~", "\x87\x66"},
#line 397 "simp2trad.in"
    {"\\C", "\x5C\x6D"},
#line 1304 "simp2trad.in"
    {"\202y", "\x82\x78"},
#line 818 "simp2trad.in"
    {"n\207", "\x6F\x0A"},
#line 1646 "simp2trad.in"
    {"\2156", "\x8C\xBA"},
#line 344 "simp2trad.in"
    {"YK", "\x59\x6E"},
#line 2228 "simp2trad.in"
    {"\231t", "\x98\xF4"},
#line 601 "simp2trad.in"
    {"dF", "\x64\xFA"},
#line 1216 "simp2trad.in"
    {"\177 ", "\x7E\x8F"},
#line 610 "simp2trad.in"
    {"d\272", "\x65\x1B"},
#line 1814 "simp2trad.in"
    {"\220\346", "\x91\x48"},
#line 2466 "simp2trad.in"
    {"\236C", "\x9D\x51"},
#line 1514 "simp2trad.in"
    {"\213\315", "\x8A\x5E"},
#line 2099 "simp2trad.in"
    {"\226\027", "\x95\xD0"},
#line 1133 "simp2trad.in"
    {"~\315", "\x7D\x39"},
#line 1796 "simp2trad.in"
    {"\220\022", "\x90\x5E"},
#line 1897 "simp2trad.in"
    {"\224\315", "\x92\x39"},
#line 1851 "simp2trad.in"
    {"\224\235", "\x92\x0D"},
#line 737 "simp2trad.in"
    {"l)", "\x6C\x2C"},
#line 2408 "simp2trad.in"
    {"\234\315", "\x9C\x2D"},
#line 2360 "simp2trad.in"
    {"\234\235", "\x9B\xBA"},
#line 511 "simp2trad.in"
    {"`\312", "\x9A\x5A"},
#line 1804 "simp2trad.in"
    {"\220\256", "\x90\xF5"},
#line 2185 "simp2trad.in"
    {"\230\235", "\x98\x4D"},
#line 714 "simp2trad.in"
    {"j\220", "\x7C\x37"},
#line 2311 "simp2trad.in"
    {"\232\235", "\x9A\x2E"},
#line 1012 "simp2trad.in"
    {"x\271", "\x95\x5F"},
#line 1207 "simp2trad.in"
    {"\177\027", "\x7D\xE1"},
#line 1422 "simp2trad.in"
    {"\207\200", "\x87\xBF"},
#line 2264 "simp2trad.in"
    {"\232n", "\x99\xB1"},
#line 2120 "simp2trad.in"
    {"\226\266", "\x96\xB8"},
#line 1249 "simp2trad.in"
    {"\177\332", "\x7F\xEC"},
#line 1973 "simp2trad.in"
    {"\225 ", "\x93\x29"},
#line 1041 "simp2trad.in"
    {"z\235", "\x7A\xA9"},
#line 1540 "simp2trad.in"
    {"\213\347", "\x8A\x6B"},
#line 1582 "simp2trad.in"
    {"\214\022", "\x8B\x01"},
#line 537 "simp2trad.in"
    {"b7", "\x62\x36"},
#line 1159 "simp2trad.in"
    {"~\347", "\x7E\x7C"},
#line 1034 "simp2trad.in"
    {"z3", "\x7A\x69"},
#line 395 "simp2trad.in"
    {"\\=", "\x76\xE1"},
#line 2567 "simp2trad.in"
    {"\\=", "\x51\x18"},
#line 1581 "simp2trad.in"
    {"\214\021", "\x8B\x14"},
#line 1920 "simp2trad.in"
    {"\224\347", "\x93\xF5"},
#line 1489 "simp2trad.in"
    {"\213\264", "\x8B\x33"},
#line 806 "simp2trad.in"
    {"n\020", "\x6F\x38"},
#line 983 "simp2trad.in"
    {"w\222", "\x77\x9E"},
#line 1108 "simp2trad.in"
    {"~\264", "\x7D\x1D"},
#line 1575 "simp2trad.in"
    {"\214\013", "\x8B\x00"},
#line 1033 "simp2trad.in"
    {"z#", "\x7A\x4C"},
#line 1874 "simp2trad.in"
    {"\224\264", "\x92\x37"},
#line 2460 "simp2trad.in"
    {"\236=", "\x9D\x3F"},
#line 1032 "simp2trad.in"
    {"z\016", "\x7A\x05"},
#line 2383 "simp2trad.in"
    {"\234\264", "\x9B\xDD"},
#line 1669 "simp2trad.in"
    {"\215M", "\x9F\x4E"},
#line 475 "simp2trad.in"
    {"_U", "\x93\x04"},
#line 1967 "simp2trad.in"
    {"\225\027", "\x93\x7A"},
#line 2145 "simp2trad.in"
    {"\230u", "\x98\x01"},
#line 465 "simp2trad.in"
    {"_\002", "\x75\x70"},
#line 2271 "simp2trad.in"
    {"\232u", "\x99\xD4"},
#line 1069 "simp2trad.in"
    {"{\321", "\x7C\x23"},
#line 690 "simp2trad.in"
    {"h\276", "\x68\xF6"},
#line 226 "simp2trad.in"
    {"T,", "\x80\x7D"},
#line 1667 "simp2trad.in"
    {"\215K", "\x8C\xE6"},
#line 722 "simp2trad.in"
    {"k\213", "\x6B\x98"},
#line 477 "simp2trad.in"
    {"_f", "\x5F\x65"},
#line 2433 "simp2trad.in"
    {"\236\"", "\x9C\xF6"},
#line 1503 "simp2trad.in"
    {"\213\302", "\x8A\x41"},
#line 1463 "simp2trad.in"
    {"\211\321", "\x89\xB7"},
#line 259 "simp2trad.in"
    {"U\035", "\x55\xCA"},
#line 1122 "simp2trad.in"
    {"~\302", "\x7D\x31"},
#line 2034 "simp2trad.in"
    {"\225e", "\x94\x65"},
#line 2550 "simp2trad.in"
    {"R6", "\x88\xFD"},
#line 1888 "simp2trad.in"
    {"\224\302", "\x92\x51"},
#line 2513 "simp2trad.in"
    {"\236t", "\x9E\x18"},
#line 2397 "simp2trad.in"
    {"\234\302", "\x9C\x03"},
#line 1295 "simp2trad.in"
    {"\201\221", "\x81\xCF"},
#line 420 "simp2trad.in"
    {"\\\344", "\x5D\xA0"},
#line 2067 "simp2trad.in"
    {"\225\367", "\x60\xB6"},
#line 1797 "simp2trad.in"
    {"\220&", "\x90\x90"},
#line 1292 "simp2trad.in"
    {"\201|", "\x97\x66"},
#line 1715 "simp2trad.in"
    {"\216p", "\x8E\x95"},
#line 630 "simp2trad.in"
    {"fR", "\x66\xEC"},
#line 1050 "simp2trad.in"
    {"{\025", "\x7B\x67"},
#line 2135 "simp2trad.in"
    {"\227\257", "\x97\xC9"},
#line 2432 "simp2trad.in"
    {"\236!", "\x96\xDE"},
#line 908 "simp2trad.in"
    {"s\232", "\x74\x52"},
#line 2044 "simp2trad.in"
    {"\225o", "\x94\x32"},
#line 828 "simp2trad.in"
    {"n\346", "\x70\x64"},
#line 1234 "simp2trad.in"
    {"\1772", "\x7E\x70"},
#line 2143 "simp2trad.in"
    {"\227\354", "\x97\xDC"},
#line 480 "simp2trad.in"
    {"_\225", "\x5F\xA0"},
#line 1060 "simp2trad.in"
    {"{~", "\x7C\x3D"},
#line 408 "simp2trad.in"
    {"\\\230", "\x5C\xF4"},
#line 987 "simp2trad.in"
    {"w\376", "\x79\x2C"},
#line 663 "simp2trad.in"
    {"h\000", "\x68\x94"},
#line 807 "simp2trad.in"
    {"n\021", "\x6F\xA0"},
#line 1602 "simp2trad.in"
    {"\214&", "\x8B\x19"},
#line 711 "simp2trad.in"
    {"jq", "\x6A\xE5"},
#line 419 "simp2trad.in"
    {"\\\343", "\x5D\xA2"},
#line 1636 "simp2trad.in"
    {"\215,", "\x8C\xB6"},
#line 468 "simp2trad.in"
    {"_%", "\x5F\x4C"},
#line 2213 "simp2trad.in"
    {"\231e", "\x99\x51"},
#line 292 "simp2trad.in"
    {"V\376", "\x57\x16"},
#line 715 "simp2trad.in"
    {"j\251", "\x6A\x81"},
#line 1027 "simp2trad.in"
    {"y\357", "\x7A\x4D"},
#line 31 "simp2trad.in"
    {"N,", "\x72\x3F"},
#line 999 "simp2trad.in"
    {"xA", "\x78\x5C"},
#line 1705 "simp2trad.in"
    {"\215\370", "\x8E\x55"},
#line 481 "simp2trad.in"
    {"_\241", "\x79\xA6"},
#line 1795 "simp2trad.in"
    {"\220\012", "\x90\x5C"},
#line 1725 "simp2trad.in"
    {"\217k", "\x8E\xD4"},
#line 1728 "simp2trad.in"
    {"\217n", "\x8F\x2A"},
#line 1053 "simp2trad.in"
    {"{>", "\x7C\x69"},
#line 1062 "simp2trad.in"
    {"{\223", "\x7C\x59"},
#line 1989 "simp2trad.in"
    {"\2252", "\x93\x65"},
#line 482 "simp2trad.in"
    {"_\306", "\x61\xB6"},
#line 822 "simp2trad.in"
    {"n\337", "\x70\x69"},
#line 861 "simp2trad.in"
    {"p\346", "\x71\x69"},
#line 2223 "simp2trad.in"
    {"\231o", "\x99\x1E"},
#line 918 "simp2trad.in"
    {"s\321", "\x74\xCF"},
#line 2107 "simp2trad.in"
    {"\2265", "\x96\x63"},
#line 416 "simp2trad.in"
    {"\\\303", "\x5D\xA8"},
#line 789 "simp2trad.in"
    {"m\235", "\x6F\x87"},
#line 1426 "simp2trad.in"
    {"\210T", "\x92\x9C"},
#line 186 "simp2trad.in"
    {"Sb", "\x76\xE7"},
#line 631 "simp2trad.in"
    {"fS", "\x66\xC9"},
#line 1706 "simp2trad.in"
    {"\215\371", "\x8E\x9A"},
#line 1716 "simp2trad.in"
    {"\216\177", "\x8E\xA5"},
#line 1659 "simp2trad.in"
    {"\215C", "\x8D\x13"},
#line 1291 "simp2trad.in"
    {"\201{", "\x81\xA9"},
#line 264 "simp2trad.in"
    {"U$", "\x55\x9A"},
#line 1574 "simp2trad.in"
    {"\214\012", "\x8A\xBC"},
#line 2431 "simp2trad.in"
    {"\236 ", "\x9C\xE9"},
#line 2549 "simp2trad.in"
    {"_\327", "\x8A\x8C"},
#line 1798 "simp2trad.in"
    {"\220;", "\x90\x8F"},
#line 1237 "simp2trad.in"
    {"\1775", "\x7E\x98"},
#line 2561 "simp2trad.in"
    {"\227b", "\x97\x62"},
#line 127 "simp2trad.in"
    {"Q\257", "\x99\xAE"},
#line 1735 "simp2trad.in"
    {"\217u", "\x8E\xF9"},
#line 69 "simp2trad.in"
    {"O\032", "\x67\x03"},
#line 1068 "simp2trad.in"
    {"{\253", "\x7C\x2B"},
#line 1296 "simp2trad.in"
    {"\201\334", "\x81\xE2"},
#line 112 "simp2trad.in"
    {"QZ", "\x9E\xE8"},
#line 1282 "simp2trad.in"
    {"\201\024", "\x81\xE0"},
#line 860 "simp2trad.in"
    {"p\337", "\x71\x59"},
#line 899 "simp2trad.in"
    {"s\025", "\x73\x7C"},
#line 1241 "simp2trad.in"
    {"\177Z", "\x7F\x70"},
#line 431 "simp2trad.in"
    {"]t", "\x81\x0A"},
#line 328 "simp2trad.in"
    {"X\231", "\x72\x46"},
#line 150 "simp2trad.in"
    {"R\031", "\x52\x47"},
#line 544 "simp2trad.in"
    {"bk", "\x63\x83"},
#line 1822 "simp2trad.in"
    {"\221\177", "\x91\xC0"},
#line 694 "simp2trad.in"
    {"i\037", "\x6A\xDD"},
#line 1721 "simp2trad.in"
    {"\217g", "\x8E\xCB"},
#line 882 "simp2trad.in"
    {"r\266", "\x72\xC0"},
#line 709 "simp2trad.in"
    {"j1", "\x6A\xFB"},
#line 599 "simp2trad.in"
    {"dD", "\x65\x1D"},
#line 1287 "simp2trad.in"
    {"\201J", "\x81\xD8"},
#line 1994 "simp2trad.in"
    {"\2257", "\x93\x54"},
#line 1390 "simp2trad.in"
    {"\206Q", "\x61\x6E"},
#line 1992 "simp2trad.in"
    {"\2255", "\x93\xD8"},
#line 144 "simp2trad.in"
    {"Q\373", "\x64\xCA"},
#line 595 "simp2trad.in"
    {"d\001", "\x64\xF1"},
#line 699 "simp2trad.in"
    {"i\204", "\x6B\x16"},
#line 1653 "simp2trad.in"
    {"\215=", "\x8D\x04"},
#line 1724 "simp2trad.in"
    {"\217j", "\x8E\xD1"},
#line 155 "simp2trad.in"
    {"R,", "\x52\x57"},
#line 591 "simp2trad.in"
    {"c\370", "\x64\x63"},
#line 2499 "simp2trad.in"
    {"\236e", "\x9D\xD6"},
#line 561 "simp2trad.in"
    {"b\347", "\x64\xF0"},
#line 35 "simp2trad.in"
    {"N=", "\x9E\x97"},
#line 2056 "simp2trad.in"
    {"\225\354", "\x95\x88"},
#line 2023 "simp2trad.in"
    {"\225Z", "\x93\xF0"},
#line 1419 "simp2trad.in"
    {"\207N", "\x88\x0D"},
#line 365 "simp2trad.in"
    {"Zu", "\x5B\x0B"},
#line 189 "simp2trad.in"
    {"Sk", "\x88\x5B"},
#line 1382 "simp2trad.in"
    {"\205:", "\x85\xFA"},
#line 1003 "simp2trad.in"
    {"xW", "\x78\xFD"},
#line 1377 "simp2trad.in"
    {"\204\343", "\x85\x77"},
#line 1626 "simp2trad.in"
    {"\215\"", "\x8C\xA1"},
#line 1021 "simp2trad.in"
    {"y\204", "\x79\x7F"},
#line 1232 "simp2trad.in"
    {"\1770", "\x97\xC1"},
#line 2508 "simp2trad.in"
    {"\236o", "\x9E\x07"},
#line 317 "simp2trad.in"
    {"W\261", "\x58\xCB"},
#line 802 "simp2trad.in"
    {"n\012", "\x6D\xF5"},
#line 608 "simp2trad.in"
    {"d\267", "\x64\xF7"},
#line 26 "simp2trad.in"
    {"N\"", "\x4E\x1F"},
#line 935 "simp2trad.in"
    {"ur", "\x4F\x58"},
#line 2071 "simp2trad.in"
    {"\225\373", "\x80\x5E"},
#line 615 "simp2trad.in"
    {"ep", "\x65\x78"},
#line 1622 "simp2trad.in"
    {"\215\036", "\x8C\x9E"},
#line 1242 "simp2trad.in"
    {"\177b", "\x7F\x77"},
#line 603 "simp2trad.in"
    {"dH", "\x64\xEF"},
#line 134 "simp2trad.in"
    {"Q\311", "\x6D\xBC"},
#line 541 "simp2trad.in"
    {"bg", "\x57\xF7"},
#line 1301 "simp2trad.in"
    {"\202;", "\x82\x6B"},
#line 2102 "simp2trad.in"
    {"\226\032", "\x95\xDE"},
#line 1625 "simp2trad.in"
    {"\215!", "\x8C\xA2"},
#line 1696 "simp2trad.in"
    {"\215\261", "\x8D\xB2"},
#line 1618 "simp2trad.in"
    {"\2146", "\x8B\x96"},
#line 1059 "simp2trad.in"
    {"{y", "\x7C\x4C"},
#line 594 "simp2trad.in"
    {"d\000", "\x65\x19"},
#line 543 "simp2trad.in"
    {"bj", "\x63\x6B"},
#line 1253 "simp2trad.in"
    {"\200;", "\x60\x65"},
#line 986 "simp2trad.in"
    {"w\366", "\x78\xEF"},
#line 2138 "simp2trad.in"
    {"\227\347", "\x97\xCC"},
#line 1987 "simp2trad.in"
    {"\2250", "\x93\x33"},
#line 109 "simp2trad.in"
    {"Q?", "\x51\x52"},
#line 2449 "simp2trad.in"
    {"\2362", "\x9D\x1D"},
#line 356 "simp2trad.in"
    {"Z\005", "\x5A\x6D"},
#line 1210 "simp2trad.in"
    {"\177\032", "\x7E\x1B"},
#line 1256 "simp2trad.in"
    {"\200L", "\x80\x77"},
#line 279 "simp2trad.in"
    {"V\030", "\x56\x53"},
#line 2136 "simp2trad.in"
    {"\227\264", "\x97\xDD"},
#line 2031 "simp2trad.in"
    {"\225b", "\x94\x81"},
#line 1326 "simp2trad.in"
    {"\203'", "\x7E\x6D"},
#line 904 "simp2trad.in"
    {"s.", "\x73\x7B"},
#line 1325 "simp2trad.in"
    {"\203\025", "\x71\x62"},
#line 1381 "simp2trad.in"
    {"\2059", "\x86\x1E"},
#line 188 "simp2trad.in"
    {"Sg", "\x81\xE5"},
#line 1258 "simp2trad.in"
    {"\200T", "\x80\x6F"},
#line 79 "simp2trad.in"
    {"O+", "\x4F\x47"},
#line 223 "simp2trad.in"
    {"T\027", "\x55\xCE"},
#line 51 "simp2trad.in"
    {"N\230", "\x4E\x99"},
#line 510 "simp2trad.in"
    {"`\257", "\x61\xAB"},
#line 252 "simp2trad.in"
    {"T\325", "\x56\x66"},
#line 207 "simp2trad.in"
    {"S\302", "\x53\xC3"},
#line 346 "simp2trad.in"
    {"Ye", "\x59\x67"},
#line 157 "simp2trad.in"
    {"R=", "\x52\x8A"},
#line 1303 "simp2trad.in"
    {"\202s", "\x8C\x54"},
#line 666 "simp2trad.in"
    {"h\010", "\x68\xE7"},
#line 2105 "simp2trad.in"
    {"\2263", "\x96\x7D"},
#line 516 "simp2trad.in"
    {"`\354", "\x61\x1C"},
#line 280 "simp2trad.in"
    {"V$", "\x56\xB6"},
#line 1225 "simp2trad.in"
    {"\177)", "\x7E\x2E"},
#line 2028 "simp2trad.in"
    {"\225_", "\x93\xC7"},
#line 1714 "simp2trad.in"
    {"\216R", "\x8E\x63"},
#line 1416 "simp2trad.in"
    {"\207G", "\x88\x05"},
#line 1969 "simp2trad.in"
    {"\225\032", "\x93\x28"},
#line 2002 "simp2trad.in"
    {"\225?", "\x93\x84"},
#line 573 "simp2trad.in"
    {"c\"", "\x64\x9F"},
#line 1338 "simp2trad.in"
    {"\203d", "\x84\x77"},
#line 2090 "simp2trad.in"
    {"\226\016", "\x95\xBB"},
#line 1224 "simp2trad.in"
    {"\177(", "\x7E\x93"},
#line 875 "simp2trad.in"
    {"r7", "\x72\x3A"},
#line 970 "simp2trad.in"
    {"v\317", "\x76\xDE"},
#line 1235 "simp2trad.in"
    {"\1773", "\x7E\x6F"},
#line 1698 "simp2trad.in"
    {"\215\303", "\x8E\x8D"},
#line 1624 "simp2trad.in"
    {"\215 ", "\x8C\x9F"},
#line 928 "simp2trad.in"
    {"t\216", "\x74\xD4"},
#line 287 "simp2trad.in"
    {"V\355", "\x57\x12"},
#line 1054 "simp2trad.in"
    {"{Q", "\x7B\xC9"},
#line 569 "simp2trad.in"
    {"c\036", "\x64\xBB"},
#line 1409 "simp2trad.in"
    {"\206\361", "\x86\xFA"},
#line 78 "simp2trad.in"
    {"O*", "\x50\x7D"},
#line 322 "simp2trad.in"
    {"W\332", "\x58\x1D"},
#line 1219 "simp2trad.in"
    {"\177#", "\x7E\x11"},
#line 2454 "simp2trad.in"
    {"\2367", "\x9D\xD9"},
#line 1198 "simp2trad.in"
    {"\177\016", "\x7D\xDE"},
#line 2452 "simp2trad.in"
    {"\2365", "\x9D\x15"},
#line 890 "simp2trad.in"
    {"r\354", "\x73\x68"},
#line 1307 "simp2trad.in"
    {"\202\210", "\x7F\x8B"},
#line 1981 "simp2trad.in"
    {"\225)", "\x93\x08"},
#line 572 "simp2trad.in"
    {"c!", "\x64\xCB"},
#line 464 "simp2trad.in"
    {"_\000", "\x95\x8B"},
#line 2024 "simp2trad.in"
    {"\225[", "\x93\xDE"},
#line 635 "simp2trad.in"
    {"f\202", "\x66\xAB"},
#line 1004 "simp2trad.in"
    {"xY", "\x78\xD1"},
#line 2003 "simp2trad.in"
    {"\225@", "\x93\x4D"},
#line 968 "simp2trad.in"
    {"v\261", "\x76\xBA"},
#line 704 "simp2trad.in"
    {"i\333", "\x6A\xBB"},
#line 291 "simp2trad.in"
    {"V\375", "\x57\x0B"},
#line 170 "simp2trad.in"
    {"R\261", "\x52\xF5"},
#line 1980 "simp2trad.in"
    {"\225(", "\x93\x41"},
#line 2488 "simp2trad.in"
    {"\236Z", "\x9D\xBF"},
#line 1990 "simp2trad.in"
    {"\2253", "\x93\x48"},
#line 2040 "simp2trad.in"
    {"\225k", "\x94\x19"},
#line 2043 "simp2trad.in"
    {"\225n", "\x94\x36"},
#line 2098 "simp2trad.in"
    {"\226\026", "\x95\xD4"},
#line 1231 "simp2trad.in"
    {"\177/", "\x7E\x52"},
#line 1315 "simp2trad.in"
    {"\202\314", "\x84\x07"},
#line 2115 "simp2trad.in"
    {"\226g", "\x96\x89"},
#line 1976 "simp2trad.in"
    {"\225#", "\x94\x7C"},
#line 1413 "simp2trad.in"
    {"\207\025", "\x86\xFB"},
#line 1958 "simp2trad.in"
    {"\225\016", "\x94\x26"},
#line 1589 "simp2trad.in"
    {"\214\031", "\x8A\xF3"},
#line 2025 "simp2trad.in"
    {"\225\\", "\x93\xE1"},
#line 1816 "simp2trad.in"
    {"\220\370", "\x91\x32"},
#line 1465 "simp2trad.in"
    {"\211\346", "\x89\xF8"},
#line 1206 "simp2trad.in"
    {"\177\026", "\x7D\xE8"},
#line 1048 "simp2trad.in"
    {"{\013", "\x7B\x4D"},
#line 1704 "simp2trad.in"
    {"\215\367", "\x8E\x7A"},
#line 1421 "simp2trad.in"
    {"\207~", "\x88\x11"},
#line 375 "simp2trad.in"
    {"[\201", "\x5B\xE7"},
#line 698 "simp2trad.in"
    {"i|", "\x6A\x13"},
#line 2081 "simp2trad.in"
    {"\226\005", "\x95\xB1"},
#line 65 "simp2trad.in"
    {"N\367", "\x50\xF9"},
#line 1608 "simp2trad.in"
    {"\214,", "\x8B\x2C"},
#line 938 "simp2trad.in"
    {"u\227", "\x76\x42"},
#line 1227 "simp2trad.in"
    {"\177+", "\x7E\x45"},
#line 1986 "simp2trad.in"
    {"\225/", "\x92\xF8"},
#line 1257 "simp2trad.in"
    {"\200M", "\x80\x79"},
#line 496 "simp2trad.in"
    {"`?", "\x61\xCC"},
#line 2219 "simp2trad.in"
    {"\231k", "\x98\xEB"},
#line 2222 "simp2trad.in"
    {"\231n", "\x98\xF2"},
#line 1286 "simp2trad.in"
    {"\2018", "\x81\xC9"},
#line 326 "simp2trad.in"
    {"X\025", "\x58\xAE"},
#line 571 "simp2trad.in"
    {"c ", "\x64\x93"},
#line 2447 "simp2trad.in"
    {"\2360", "\x9D\x12"},
#line 1189 "simp2trad.in"
    {"\177\005", "\x7D\xEC"},
#line 1255 "simp2trad.in"
    {"\200K", "\x80\x7E"},
#line 1808 "simp2trad.in"
    {"\220\301", "\x9B\x31"},
#line 1966 "simp2trad.in"
    {"\225\026", "\x93\x06"},
#line 153 "simp2trad.in"
    {"R ", "\x52\x2A"},
#line 2496 "simp2trad.in"
    {"\236b", "\x9D\xC1"},
#line 2036 "simp2trad.in"
    {"\225g", "\x94\x6D"},
#line 1807 "simp2trad.in"
    {"\220\273", "\x91\x30"},
#line 1395 "simp2trad.in"
    {"\206}", "\x96\xD6"},
#line 372 "simp2trad.in"
    {"[Y", "\x5B\x6B"},
#line 2518 "simp2trad.in"
    {"\236\311", "\x9E\xCC"},
#line 1274 "simp2trad.in"
    {"\200\353", "\x81\x1B"},
#line 1982 "simp2trad.in"
    {"\225+", "\x93\x07"},
#line 728 "simp2trad.in"
    {"k\301", "\x6B\xC0"},
#line 2039 "simp2trad.in"
    {"\225j", "\x93\xF9"},
#line 1226 "simp2trad.in"
    {"\177*", "\x7E\x46"},
#line 1642 "simp2trad.in"
    {"\2152", "\x8C\xC1"},
#line 957 "simp2trad.in"
    {"v\027", "\x76\x1E"},
#line 643 "simp2trad.in"
    {"gC", "\x6B\x0A"},
#line 2229 "simp2trad.in"
    {"\231u", "\x99\x0C"},
#line 466 "simp2trad.in"
    {"_\003", "\x68\xC4"},
#line 2493 "simp2trad.in"
    {"\236_", "\x9D\xB2"},
#line 1949 "simp2trad.in"
    {"\225\005", "\x93\x4B"},
#line 937 "simp2trad.in"
    {"u\226", "\x76\x64"},
#line 176 "simp2trad.in"
    {"R\332", "\x52\xE9"},
#line 982 "simp2trad.in"
    {"wQ", "\x77\xBC"},
#line 2462 "simp2trad.in"
    {"\236?", "\x9D\x3B"},
#line 1022 "simp2trad.in"
    {"y\205", "\x79\xAA"},
#line 1072 "simp2trad.in"
    {"{\361", "\x7C\x6C"},
#line 332 "simp2trad.in"
    {"X\366", "\x58\xFA"},
#line 995 "simp2trad.in"
    {"x:", "\x79\x2A"},
#line 428 "simp2trad.in"
    {"]Z", "\x5D\x94"},
#line 2215 "simp2trad.in"
    {"\231g", "\x99\x33"},
#line 910 "simp2trad.in"
    {"s\256", "\x74\x4B"},
#line 163 "simp2trad.in"
    {"Re", "\x52\x5D"},
#line 1441 "simp2trad.in"
    {"\210\344", "\x89\x32"},
#line 512 "simp2trad.in"
    {"`\347", "\x61\xFC"},
#line 887 "simp2trad.in"
    {"r\315", "\x9E\x85"},
#line 865 "simp2trad.in"
    {"p\353", "\x71\xD9"},
#line 2440 "simp2trad.in"
    {"\236)", "\x9D\x06"},
#line 2218 "simp2trad.in"
    {"\231j", "\x98\xEA"},
#line 1810 "simp2trad.in"
    {"\220\317", "\x90\xDF"},
#line 2489 "simp2trad.in"
    {"\236[", "\x9D\xA5"},
#line 528 "simp2trad.in"
    {"a\321", "\x61\xE3"},
#line 2463 "simp2trad.in"
    {"\236@", "\x9D\x50"},
#line 316 "simp2trad.in"
    {"W\257", "\x58\xB6"},
#line 966 "simp2trad.in"
    {"vo", "\x81\xD2"},
#line 2439 "simp2trad.in"
    {"\236(", "\x9D\x07"},
#line 1320 "simp2trad.in"
    {"\202\371", "\x86\x0B"},
#line 2450 "simp2trad.in"
    {"\2363", "\x9D\x1B"},
#line 2505 "simp2trad.in"
    {"\236k", "\x9D\xF2"},
#line 300 "simp2trad.in"
    {"WZ", "\x58\x05"},
#line 1647 "simp2trad.in"
    {"\2157", "\x8C\xB8"},
#line 716 "simp2trad.in"
    {"k\"", "\x6B\x61"},
#line 1645 "simp2trad.in"
    {"\2155", "\x8C\xB4"},
#line 1440 "simp2trad.in"
    {"\210\343", "\x89\x5D"},
#line 1311 "simp2trad.in"
    {"\202\301", "\x84\xEF"},
#line 1410 "simp2trad.in"
    {"\206\362", "\x87\xEF"},
#line 628 "simp2trad.in"
    {"f>", "\x98\x6F"},
#line 2434 "simp2trad.in"
    {"\236#", "\x9C\xF4"},
#line 1598 "simp2trad.in"
    {"\214\"", "\x8B\x1D"},
#line 2490 "simp2trad.in"
    {"\236\\", "\x9D\xA9"},
#line 1009 "simp2trad.in"
    {"x\233", "\x78\xE7"},
#line 1268 "simp2trad.in"
    {"\200\301", "\x81\x05"},
#line 878 "simp2trad.in"
    {"ru", "\x72\x7D"},
#line 1682 "simp2trad.in"
    {"\215Z", "\x8C\xFA"},
#line 1594 "simp2trad.in"
    {"\214\036", "\x8A\xDD"},
#line 2487 "simp2trad.in"
    {"\236X", "\x9D\xBB"},
#line 64 "simp2trad.in"
    {"N\354", "\x50\x11"},
#line 491 "simp2trad.in"
    {"`\005", "\x60\xB5"},
#line 2446 "simp2trad.in"
    {"\236/", "\x9D\x26"},
#line 1597 "simp2trad.in"
    {"\214!", "\x8B\x16"},
#line 605 "simp2trad.in"
    {"d\204", "\x65\x16"},
#line 1707 "simp2trad.in"
    {"\215\373", "\x8E\x8B"},
#line 691 "simp2trad.in"
    {"h\300", "\x6A\xA2"},
#line 529 "simp2trad.in"
    {"a\322", "\x61\xF6"},
#line 1362 "simp2trad.in"
    {"\204\032", "\x86\x00"},
#line 1467 "simp2trad.in"
    {"\212_", "\x8B\x8B"},
#line 702 "simp2trad.in"
    {"i\211", "\x6A\xF8"},
#line 2501 "simp2trad.in"
    {"\236g", "\x9D\xD3"},
#line 436 "simp2trad.in"
    {"^\005", "\x5E\x25"},
#line 856 "simp2trad.in"
    {"p\301", "\x72\x0D"},
#line 1323 "simp2trad.in"
    {"\203\021", "\x85\x26"},
#line 2442 "simp2trad.in"
    {"\236+", "\x9D\x87"},
#line 1318 "simp2trad.in"
    {"\202\317", "\x86\x07"},
#line 1640 "simp2trad.in"
    {"\2150", "\x8C\xB3"},
#line 2504 "simp2trad.in"
    {"\236j", "\x9D\xE6"},
#line 60 "simp2trad.in"
    {"N\316", "\x5F\x9E"},
#line 977 "simp2trad.in"
    {"w&", "\x77\x25"},
#line 32 "simp2trad.in"
    {"N0", "\x8C\x50"},
#line 1690 "simp2trad.in"
    {"\215b", "\x8D\x0F"},
#line 1250 "simp2trad.in"
    {"\200\"", "\x80\x2E"},
#line 1058 "simp2trad.in"
    {"{]", "\x7B\x8F"},
#line 305 "simp2trad.in"
    {"W_", "\x58\xB3"},
#line 1427 "simp2trad.in"
    {"\210e", "\x88\xDC"},
#line 236 "simp2trad.in"
    {"T[", "\x55\xC6"},
#line 429 "simp2trad.in"
    {"][", "\x5D\x33"},
#line 288 "simp2trad.in"
    {"V\361", "\x56\xEA"},
#line 1368 "simp2trad.in"
    {"\204(", "\x85\xA9"},
#line 247 "simp2trad.in"
    {"T\315", "\x97\xFF"},
#line 242 "simp2trad.in"
    {"T\235", "\x56\x5D"},
#line 225 "simp2trad.in"
    {"T(", "\x56\x78"},
#line 1020 "simp2trad.in"
    {"y\200", "\x7A\x1F"},
#line 522 "simp2trad.in"
    {"a$", "\x61\xA4"},
#line 1596 "simp2trad.in"
    {"\214 ", "\x8B\x9C"},
#line 681 "simp2trad.in"
    {"hc", "\x6A\x94"},
#line 1687 "simp2trad.in"
    {"\215_", "\x8D\x07"},
#line 2441 "simp2trad.in"
    {"\236*", "\x9D\x23"},
#line 224 "simp2trad.in"
    {"T#", "\x55\x1A"},
#line 1655 "simp2trad.in"
    {"\215?", "\x8C\xC4"},
#line 220 "simp2trad.in"
    {"T\016", "\x5F\x8C"},
#line 826 "simp2trad.in"
    {"n\344", "\x6F\xFE"},
#line 237 "simp2trad.in"
    {"T\\", "\x55\xDA"},
#line 479 "simp2trad.in"
    {"_\204", "\x5F\x91"},
#line 22 "simp2trad.in"
    {"N\032", "\x69\x6D"},
#line 730 "simp2trad.in"
    {"k\325", "\x75\x62"},
#line 301 "simp2trad.in"
    {"W[", "\x58\xC7"},
#line 1800 "simp2trad.in"
    {"\220e", "\x90\x59"},
#line 868 "simp2trad.in"
    {"q\025", "\x71\x65"},
#line 1587 "simp2trad.in"
    {"\214\027", "\x8B\x92"},
#line 834 "simp2trad.in"
    {"oG", "\x70\x1F"},
#line 234 "simp2trad.in"
    {"TX", "\x54\xE1"},
#line 427 "simp2trad.in"
    {"]X", "\x5D\xB8"},
#line 1294 "simp2trad.in"
    {"\201~", "\x9A\x30"},
#line 1281 "simp2trad.in"
    {"\201\023", "\x81\xBF"},
#line 713 "simp2trad.in"
    {"j|", "\x6A\xDE"},
#line 244 "simp2trad.in"
    {"T\264", "\x56\x45"},
#line 277 "simp2trad.in"
    {"Tu", "\x55\xEC"},
#line 227 "simp2trad.in"
    {"T/", "\x55\x5F"},
#line 1633 "simp2trad.in"
    {"\215)", "\x8C\xA9"},
#line 1683 "simp2trad.in"
    {"\215[", "\x8C\xFD"},
#line 294 "simp2trad.in"
    {"W#", "\x80\x56"},
#line 1335 "simp2trad.in"
    {"\203`", "\x85\xBA"},
#line 1656 "simp2trad.in"
    {"\215@", "\x8C\xB2"},
#line 302 "simp2trad.in"
    {"W\\", "\x58\xE2"},
#line 840 "simp2trad.in"
    {"o\321", "\x70\x28"},
#line 1632 "simp2trad.in"
    {"\215(", "\x8C\xEA"},
#line 1643 "simp2trad.in"
    {"\2153", "\x8C\xB0"},
#line 929 "simp2trad.in"
    {"t\322", "\x74\xDA"},
#line 645 "simp2trad.in"
    {"ge", "\x4F\x86"},
#line 1458 "simp2trad.in"
    {"\211\314", "\x89\xBF"},
#line 581 "simp2trad.in"
    {"cb", "\x63\xDB"},
#line 2327 "simp2trad.in"
    {"\233I", "\x9B\x4E"},
#line 1627 "simp2trad.in"
    {"\215#", "\x8C\xAC"},
#line 319 "simp2trad.in"
    {"W\264", "\x58\x16"},
#line 1684 "simp2trad.in"
    {"\215\\", "\x8C\xFE"},
#line 870 "simp2trad.in"
    {"q\030", "\x71\xFE"},
#line 677 "simp2trad.in"
    {"hJ", "\x68\xEC"},
#line 19 "simp2trad.in"
    {"N\016", "\x82\x07"},
#line 276 "simp2trad.in"
    {"U\353", "\x56\xC1"},
#line 325 "simp2trad.in"
    {"X\021", "\x58\x79"},
#line 1680 "simp2trad.in"
    {"\215X", "\x8D\x05"},
#line 579 "simp2trad.in"
    {"c_", "\x64\x0D"},
#line 1082 "simp2trad.in"
    {"|\256", "\x7C\xE7"},
#line 565 "simp2trad.in"
    {"c\032", "\x64\x6F"},
#line 686 "simp2trad.in"
    {"hh", "\x69\xF3"},
#line 1693 "simp2trad.in"
    {"\215u", "\x8D\x99"},
#line 1639 "simp2trad.in"
    {"\215/", "\x8C\xAB"},
#line 962 "simp2trad.in"
    {"v?", "\x76\x6D"},
#line 151 "simp2trad.in"
    {"R\032", "\x52\x5B"},
#line 158 "simp2trad.in"
    {"R?", "\x52\x8C"},
#line 810 "simp2trad.in"
    {"n\027", "\x6E\xF2"},
#line 1404 "simp2trad.in"
    {"\206\312", "\x88\x31"},
#line 820 "simp2trad.in"
    {"n\332", "\x6E\xFE"},
#line 1614 "simp2trad.in"
    {"\2142", "\x8B\x4E"},
#line 841 "simp2trad.in"
    {"o\322", "\x70\x15"},
#line 606 "simp2trad.in"
    {"d\221", "\x64\x90"},
#line 1412 "simp2trad.in"
    {"\206\364", "\x88\x10"},
#line 1435 "simp2trad.in"
    {"\210\257", "\x89\x4F"},
#line 920 "simp2trad.in"
    {"s\362", "\x74\x3F"},
#line 858 "simp2trad.in"
    {"p\303", "\x70\xF4"},
#line 1406 "simp2trad.in"
    {"\206\317", "\x87\xF6"},
#line 1821 "simp2trad.in"
    {"\221~", "\x91\xC3"},
#line 1635 "simp2trad.in"
    {"\215+", "\x8C\xA7"},
#line 1692 "simp2trad.in"
    {"\215j", "\x8D\x6C"},
#line 159 "simp2trad.in"
    {"R@", "\x52\x74"},
#line 583 "simp2trad.in"
    {"cn", "\x64\xDA"},
#line 165 "simp2trad.in"
    {"R\235", "\x52\xF8"},
#line 965 "simp2trad.in"
    {"vk", "\x76\x72"},
#line 574 "simp2trad.in"
    {"c#", "\x63\x99"},
#line 272 "simp2trad.in"
    {"Ux", "\x56\x2F"},
#line 525 "simp2trad.in"
    {"aQ", "\x61\xFE"},
#line 832 "simp2trad.in"
    {"o$", "\x6F\xEB"},
#line 607 "simp2trad.in"
    {"d\265", "\x65\x06"},
#line 1634 "simp2trad.in"
    {"\215*", "\x8C\xAA"},
#line 1619 "simp2trad.in"
    {"\2147", "\x7A\x40"},
#line 586 "simp2trad.in"
    {"c\264", "\x64\x51"},
#line 1617 "simp2trad.in"
    {"\2145", "\x8B\x6B"},
#line 30 "simp2trad.in"
    {"N*", "\x50\x0B"},
#line 927 "simp2trad.in"
    {"t\207", "\x74\xBF"},
#line 1717 "simp2trad.in"
    {"\216\217", "\x8E\xAA"},
#line 997 "simp2trad.in"
    {"x>", "\x79\x2B"},
#line 844 "simp2trad.in"
    {"po", "\x71\xC8"},
#line 1447 "simp2trad.in"
    {"\211\301", "\x89\x8B"},
#line 1015 "simp2trad.in"
    {"yN", "\x79\x95"},
#line 1386 "simp2trad.in"
    {"\205\256", "\x85\xEA"},
#line 164 "simp2trad.in"
    {"Rg", "\x52\x87"},
#line 985 "simp2trad.in"
    {"w\353", "\x77\xEF"},
#line 960 "simp2trad.in"
    {"v+", "\x76\x71"},
#line 1709 "simp2trad.in"
    {"\216\014", "\x8E\x8A"},
#line 154 "simp2trad.in"
    {"R+", "\x52\x25"},
#line 2564 "simp2trad.in"
    {"R+", "\x5F\x46"},
#line 903 "simp2trad.in"
    {"s,", "\x87\x5F"},
#line 1279 "simp2trad.in"
    {"\201\020", "\x81\xCD"},
#line 604 "simp2trad.in"
    {"dJ", "\x65\x24"},
#line 955 "simp2trad.in"
    {"v\005", "\x76\x49"},
#line 262 "simp2trad.in"
    {"U\"", "\x55\xE9"},
#line 923 "simp2trad.in"
    {"t\020", "\x74\x63"},
#line 1030 "simp2trad.in"
    {"y\376", "\x7A\x60"},
#line 271 "simp2trad.in"
    {"Ut", "\x56\x3D"},
#line 1612 "simp2trad.in"
    {"\2140", "\x8B\x95"},
#line 1456 "simp2trad.in"
    {"\211\312", "\x89\xAC"},
#line 978 "simp2trad.in"
    {"w,", "\x77\xD3"},
#line 959 "simp2trad.in"
    {"v*", "\x76\x5F"},
#line 949 "simp2trad.in"
    {"u\322", "\x76\x62"},
#line 994 "simp2trad.in"
    {"x\034", "\x78\xB8"},
#line 261 "simp2trad.in"
    {"U!", "\x55\x62"},
#line 1461 "simp2trad.in"
    {"\211\317", "\x89\xAF"},
#line 1429 "simp2trad.in"
    {"\210n", "\x88\x9E"},
#line 478 "simp2trad.in"
    {"_{", "\x5F\xB9"},
#line 617 "simp2trad.in"
    {"e\223", "\x65\x95"},
#line 523 "simp2trad.in"
    {"a&", "\x61\x92"},
#line 1590 "simp2trad.in"
    {"\214\032", "\x8A\xFA"},
#line 622 "simp2trad.in"
    {"e\366", "\x66\x42"},
#line 1280 "simp2trad.in"
    {"\201\021", "\x81\x66"},
#line 1802 "simp2trad.in"
    {"\220\235", "\x91\x3A"},
#line 1317 "simp2trad.in"
    {"\202\316", "\x82\xE7"},
#line 1299 "simp2trad.in"
    {"\2020", "\x82\x66"},
#line 381 "simp2trad.in"
    {"[\253", "\x5B\xAE"},
#line 1713 "simp2trad.in"
    {"\216Q", "\x8E\xA1"},
#line 866 "simp2trad.in"
    {"p\354", "\x71\xFC"},
#line 1605 "simp2trad.in"
    {"\214)", "\x8B\x3E"},
#line 925 "simp2trad.in"
    {"tv", "\x74\x64"},
#line 632 "simp2trad.in"
    {"fT", "\x66\xC4"},
#line 260 "simp2trad.in"
    {"U ", "\x56\x2E"},
#line 1604 "simp2trad.in"
    {"\214(", "\x8B\x39"},
#line 641 "simp2trad.in"
    {"g@", "\x6B\xBA"},
#line 1815 "simp2trad.in"
    {"\220\347", "\x91\x16"},
#line 1615 "simp2trad.in"
    {"\2143", "\x8B\x9E"},
#line 1620 "simp2trad.in"
    {"\214n", "\x8C\x76"},
#line 916 "simp2trad.in"
    {"s\317", "\x73\xA8"},
#line 1599 "simp2trad.in"
    {"\214#", "\x8B\x20"},
#line 1578 "simp2trad.in"
    {"\214\016", "\x8B\x0A"},
#line 620 "simp2trad.in"
    {"e\340", "\x71\x21"},
#line 1449 "simp2trad.in"
    {"\211\303", "\x89\x8E"},
#line 727 "simp2trad.in"
    {"k\264", "\x6B\xC6"},
#line 473 "simp2trad.in"
    {"_R", "\x6B\x78"},
#line 598 "simp2trad.in"
    {"d:", "\x65\x1C"},
#line 900 "simp2trad.in"
    {"s!", "\x73\x80"},
#line 913 "simp2trad.in"
    {"s\261", "\x74\x72"},
#line 1611 "simp2trad.in"
    {"\214/", "\x8B\x59"},
#line 289 "simp2trad.in"
    {"V\364", "\x57\x0D"},
#line 638 "simp2trad.in"
    {"g/", "\x88\x53"},
#line 1316 "simp2trad.in"
    {"\202\315", "\x84\xBC"},
#line 1586 "simp2trad.in"
    {"\214\026", "\x8A\xFC"},
#line 729 "simp2trad.in"
    {"k\302", "\x8F\x42"},
#line 811 "simp2trad.in"
    {"n)", "\x6E\xAB"},
#line 696 "simp2trad.in"
    {"i$", "\x6B\x0F"},
#line 1298 "simp2trad.in"
    {"\202#", "\x82\x64"},
#line 1607 "simp2trad.in"
    {"\214+", "\x8B\x7E"},
#line 1391 "simp2trad.in"
    {"\206Z", "\x86\x5B"},
#line 926 "simp2trad.in"
    {"tw", "\x74\xA6"},
#line 1570 "simp2trad.in"
    {"\214\005", "\x8A\xD2"},
#line 474 "simp2trad.in"
    {"_S", "\x75\x76"},
#line 805 "simp2trad.in"
    {"n\016", "\x70\x06"},
#line 1271 "simp2trad.in"
    {"\200\347", "\x67\x27"},
#line 706 "simp2trad.in"
    {"i\340", "\x6A\xE7"},
#line 472 "simp2trad.in"
    {"_:", "\x5F\x37"},
#line 1606 "simp2trad.in"
    {"\214*", "\x8B\x2B"},
#line 629 "simp2trad.in"
    {"fK", "\x66\x49"},
#line 852 "simp2trad.in"
    {"p\235", "\x71\x97"},
#line 1405 "simp2trad.in"
    {"\206\316", "\x88\x23"},
#line 333 "simp2trad.in"
    {"X\370", "\x58\xFC"},
#line 1352 "simp2trad.in"
    {"\203\261", "\x84\x0A"},
#line 1288 "simp2trad.in"
    {"\201L", "\x91\x83"},
#line 809 "simp2trad.in"
    {"n\026", "\x70\x0B"},
#line 700 "simp2trad.in"
    {"i\207", "\x6A\xEC"},
#line 1029 "simp2trad.in"
    {"y\375", "\x7A\x62"},
#line 1293 "simp2trad.in"
    {"\201}", "\x81\x83"},
#line 862 "simp2trad.in"
    {"p\347", "\x71\xD2"},
#line 625 "simp2trad.in"
    {"f\031", "\x66\xC7"},
#line 1260 "simp2trad.in"
    {"\200j", "\x80\x70"},
#line 1708 "simp2trad.in"
    {"\216\012", "\x8E\x34"},
#line 912 "simp2trad.in"
    {"s\260", "\x73\xFE"},
#line 845 "simp2trad.in"
    {"pu", "\x97\x48"},
#line 1083 "simp2trad.in"
    {"|\301", "\x7C\xDD"},
#line 471 "simp2trad.in"
    {"_9", "\x5F\x48"},
#line 612 "simp2trad.in"
    {"e\022", "\x65\x22"},
#line 872 "simp2trad.in"
    {"qs", "\x7C\xCA"},
#line 943 "simp2trad.in"
    {"u\256", "\x76\x21"},
#line 857 "simp2trad.in"
    {"p\302", "\x72\x1B"},
#line 1424 "simp2trad.in"
    {"\207\317", "\x88\x28"},
#line 1285 "simp2trad.in"
    {"\2016", "\x81\x61"},
#line 682 "simp2trad.in"
    {"hd", "\x69\xBF"},
#line 387 "simp2trad.in"
    {"[\374", "\x5C\x0E"},
#line 1055 "simp2trad.in"
    {"{Z", "\x7B\xF3"},
#line 1007 "simp2trad.in"
    {"xw", "\x9E\x7C"},
#line 676 "simp2trad.in"
    {"h>", "\x6B\x12"},
#line 1402 "simp2trad.in"
    {"\206\235", "\x88\x14"},
#line 1392 "simp2trad.in"
    {"\206k", "\x87\xF2"},
#line 1394 "simp2trad.in"
    {"\206n", "\x87\xE3"},
#line 1415 "simp2trad.in"
    {"\207!", "\x88\x1F"},
#line 616 "simp2trad.in"
    {"e\213", "\x9F\x4B"},
#line 1820 "simp2trad.in"
    {"\221}", "\x91\xC5"},
#line 1075 "simp2trad.in"
    {"|t", "\x7C\xF4"},
#line 1356 "simp2trad.in"
    {"\203\266", "\x85\x9F"},
#line 1339 "simp2trad.in"
    {"\203e", "\x6E\xCE"},
#line 996 "simp2trad.in"
    {"x;", "\x79\x31"},
#line 602 "simp2trad.in"
    {"dG", "\x64\x16"},
#line 627 "simp2trad.in"
    {"f=", "\x66\xE8"},
#line 1460 "simp2trad.in"
    {"\211\316", "\x89\xA6"},
#line 1817 "simp2trad.in"
    {"\221]", "\x91\x9E"},
#line 1387 "simp2trad.in"
    {"\205\301", "\x69\xC1"},
#line 1349 "simp2trad.in"
    {"\203o", "\x85\xE5"},
#line 911 "simp2trad.in"
    {"s\257", "\x74\xB0"},
#line 265 "simp2trad.in"
    {"U?", "\x54\x7C"},
#line 1455 "simp2trad.in"
    {"\211\311", "\x89\xBA"},
#line 485 "simp2trad.in"
    {"_\376", "\x61\x3E"},
#line 705 "simp2trad.in"
    {"i\337", "\x6A\xB3"},
#line 670 "simp2trad.in"
    {"h\014", "\x6A\xE8"},
#line 1414 "simp2trad.in"
    {"\207\027", "\x87\x78"},
#line 285 "simp2trad.in"
    {"V\257", "\x8B\x14"},
#line 836 "simp2trad.in"
    {"oM", "\x6F\xF0"},
#line 1056 "simp2trad.in"
    {"{[", "\x7B\xE9"},
#line 269 "simp2trad.in"
    {"Un", "\x9F\x67"},
#line 1824 "simp2trad.in"
    {"\221\314", "\x88\xCF"},
#line 2553 "simp2trad.in"
    {"\221\314", "\x88\xE1"},
#line 263 "simp2trad.in"
    {"U#", "\x55\x15"},
#line 835 "simp2trad.in"
    {"oK", "\x70\x32"},
#line 933 "simp2trad.in"
    {"u;", "\x75\x6B"},
#line 1385 "simp2trad.in"
    {"\205t", "\x86\x0A"},
#line 1459 "simp2trad.in"
    {"\211\315", "\x89\xA5"},
#line 613 "simp2trad.in"
    {"eL", "\x65\x75"},
#line 1057 "simp2trad.in"
    {"{\\", "\x7C\x39"},
#line 915 "simp2trad.in"
    {"s\311", "\x74\x49"},
#line 2326 "simp2trad.in"
    {"\233G", "\x9B\x58"},
#line 1711 "simp2trad.in"
    {"\216,", "\x8E\x93"},
#line 266 "simp2trad.in"
    {"Ug", "\x56\x16"},
#line 1330 "simp2trad.in"
    {"\203Z", "\x83\xA2"},
#line 712 "simp2trad.in"
    {"jy", "\x6A\xD3"},
#line 1018 "simp2trad.in"
    {"yw", "\x79\xB1"},
#line 1448 "simp2trad.in"
    {"\211\302", "\x89\xC0"},
#line 521 "simp2trad.in"
    {"a ", "\x61\x4D"},
#line 898 "simp2trad.in"
    {"s\016", "\x73\x75"},
#line 673 "simp2trad.in"
    {"h\021", "\x6A\x39"},
#line 979 "simp2trad.in"
    {"w@", "\x84\x57"},
#line 669 "simp2trad.in"
    {"h\013", "\x68\xDF"},
#line 2325 "simp2trad.in"
    {"\233\023", "\x9B\x22"},
#line 1334 "simp2trad.in"
    {"\203_", "\x85\x88"},
#line 282 "simp2trad.in"
    {"V\\", "\x56\x95"},
#line 873 "simp2trad.in"
    {"q\230", "\x6E\x9C"},
#line 902 "simp2trad.in"
    {"s+", "\x8C\x93"},
#line 953 "simp2trad.in"
    {"u\353", "\x76\x47"},
#line 701 "simp2trad.in"
    {"i\210", "\x6A\xDA"},
#line 1331 "simp2trad.in"
    {"\203[", "\x85\x58"},
#line 838 "simp2trad.in"
    {"ot", "\x70\x26"},
#line 1823 "simp2trad.in"
    {"\221\312", "\x91\xCB"},
#line 678 "simp2trad.in"
    {"h`", "\x69\x0F"},
#line 1345 "simp2trad.in"
    {"\203k", "\x85\x2D"},
#line 1348 "simp2trad.in"
    {"\203n", "\x84\x64"},
#line 2554 "simp2trad.in"
    {"|\373", "\x4F\xC2"},
#line 901 "simp2trad.in"
    {"s*", "\x8C\x6C"},
#line 1321 "simp2trad.in"
    {"\203\016", "\x83\x96"},
#line 1332 "simp2trad.in"
    {"\203\\", "\x84\xFD"},
#line 624 "simp2trad.in"
    {"e\370", "\x66\x98"},
#line 1355 "simp2trad.in"
    {"\203\264", "\x84\x35"},
#line 668 "simp2trad.in"
    {"h\012", "\x6A\xF3"},
#line 385 "simp2trad.in"
    {"[\371", "\x5C\x0D"},
#line 1341 "simp2trad.in"
    {"\203g", "\x71\x92"},
#line 1011 "simp2trad.in"
    {"x\261", "\x58\x3F"},
#line 1380 "simp2trad.in"
    {"\2057", "\x85\x94"},
#line 1344 "simp2trad.in"
    {"\203j", "\x84\xC0"},
#line 1079 "simp2trad.in"
    {"|\235", "\x7C\xF2"},
#line 954 "simp2trad.in"
    {"u\364", "\x76\x61"},
#line 936 "simp2trad.in"
    {"ut", "\x75\x87"},
#line 945 "simp2trad.in"
    {"u\261", "\x76\xB0"},
#line 1019 "simp2trad.in"
    {"yx", "\x79\x8D"},
#line 992 "simp2trad.in"
    {"x\027", "\x78\x68"},
#line 1023 "simp2trad.in"
    {"y\273", "\x96\xE2"},
#line 1073 "simp2trad.in"
    {"|\026", "\x7C\x6A"},
#line 524 "simp2trad.in"
    {"a?", "\x98\x58"},
#line 1719 "simp2trad.in"
    {"\216\257", "\x8E\xC0"},
#line 623 "simp2trad.in"
    {"e\367", "\x66\xE0"},
#line 1283 "simp2trad.in"
    {"\201\032", "\x81\x73"},
#line 695 "simp2trad.in"
    {"i ", "\x69\xE7"},
#line 1005 "simp2trad.in"
    {"xZ", "\x79\x04"},
#line 1024 "simp2trad.in"
    {"y\303", "\x79\xBF"},
#line 703 "simp2trad.in"
    {"i\332", "\x6A\x9F"},
#line 921 "simp2trad.in"
    {"t\016", "\x74\xA1"},
#line 1289 "simp2trad.in"
    {"\201X", "\x81\x95"},
#line 371 "simp2trad.in"
    {"[7", "\x5B\x24"},
#line 932 "simp2trad.in"
    {"u5", "\x96\xFB"},
#line 869 "simp2trad.in"
    {"q\026", "\x71\xDC"},
#line 944 "simp2trad.in"
    {"u\257", "\x76\x0B"},
#line 1017 "simp2trad.in"
    {"yo", "\x79\x8E"},
#line 993 "simp2trad.in"
    {"x\032", "\x78\x6F"},
#line 837 "simp2trad.in"
    {"o\\", "\x6F\x5B"},
#line 386 "simp2trad.in"
    {"[\373", "\x5C\x0B"},
#line 1712 "simp2trad.in"
    {"\216/", "\x8E\x91"},
#line 998 "simp2trad.in"
    {"x@", "\x79\x0E"},
#line 1006 "simp2trad.in"
    {"xn", "\x78\xBA"},
#line 948 "simp2trad.in"
    {"u\311", "\x75\xD9"},
#line 1710 "simp2trad.in"
    {"\216*", "\x8E\x64"},
#line 991 "simp2trad.in"
    {"x\026", "\x78\xDA"},
#line 683 "simp2trad.in"
    {"he", "\x6A\x4B"},
#line 614 "simp2trad.in"
    {"e[", "\x65\x82"},
#line 376 "simp2trad.in"
    {"[\235", "\x5B\xF6"},
#line 621 "simp2trad.in"
    {"e\347", "\x82\x0A"},
#line 946 "simp2trad.in"
    {"u\264", "\x5C\x59"},
#line 1016 "simp2trad.in"
    {"yb", "\x79\xB0"},
#line 710 "simp2trad.in"
    {"je", "\x6A\xEB"},
#line 374 "simp2trad.in"
    {"[j", "\x5B\x7F"},
#line 483 "simp2trad.in"
    {"_\317", "\x61\xFA"},
#line 675 "simp2trad.in"
    {"h7", "\x6A\x23"},
#line 1026 "simp2trad.in"
    {"y\315", "\x7A\x2E"},
#line 467 "simp2trad.in"
    {"_ ", "\x5F\x35"},
#line 680 "simp2trad.in"
    {"hb", "\x69\x68"},
#line 671 "simp2trad.in"
    {"h\016", "\x6A\xDF"},
#line 674 "simp2trad.in"
    {"h\026", "\x68\xF2"},
#line 685 "simp2trad.in"
    {"hg", "\x6A\x9C"},
#line 692 "simp2trad.in"
    {"h\302", "\x6B\x1E"},
#line 664 "simp2trad.in"
    {"h\005", "\x67\xF5"},
#line 708 "simp2trad.in"
    {"j/", "\x6A\xA3"},
#line 707 "simp2trad.in"
    {"j*", "\x6A\x6B"},
#line 476 "simp2trad.in"
    {"__", "\x5F\x60"},
#line 597 "simp2trad.in"
    {"d\005", "\x65\x2A"},
#line 484 "simp2trad.in"
    {"_\347", "\x61\x82"},
#line 470 "simp2trad.in"
    {"_/", "\x5F\x4E"},
#line 469 "simp2trad.in"
    {"_*", "\x5F\x33"}
  };

static const short lookup[] =
  {
       -1,    -1,     0,    -1,    -1,     1,     2,
        3,    -1,    -1,     4,     5,     6,    -1,
       -1,     7,     8,     9,    -1,    -1,    10,
       11,    12,    -1,    -1,    -1,    13,    14,
       -1,    -1,    15,    16,    17,    -1,    -1,
       18,    19,    20,    -1,    -1,    21,    22,
       23,    -1,    -1,    24,    25,    26,    -1,
       -1,    27,    28,    29,    -1,    -1,    30,
       31,    32,    -1,    -1,    33,    34,    35,
       -1,    -1,    36,    37,    38,    -1,    -1,
       -1,    -1,    39,    -1,    -1,    40,    41,
       42,    -1,    -1,    43,    44,    45,    -1,
       -1,    46,    47,    48,    -1,    -1,    49,
       50,    51,    -1,    -1,    52,    53,    54,
       -1,    -1,    -1,    55,    56,    -1,    -1,
       -1,    57,    58,    -1,    -1,    59,    60,
       61,    -1,    -1,    62,    -1,    63,    -1,
       -1,    64,    65,    66,    -1,    -1,    67,
       -1,    68,    -1,    -1,    69,    70,    71,
       -1,    -1,    -1,    72,    73,    -1,    -1,
       74,    75,    76,    -1,    -1,    77,    78,
       79,    -1,    -1,    80,    81,    82,    -1,
       -1,    83,    84,    85,    -1,    -1,    86,
       87,    88,    -1,    -1,    -1,    89,    90,
       -1,    -1,    -1,    91, -2725, -2459,    -2,
       94,    95,    96,    -1,    -1,    97,    98,
       99,    -1,   100,   101,   102,   103,    -1,
       -1,   104,   105,   106,    -1,    -1,   107,
      108,   109,    -1,    -1,   110,   111,   112,
       -1,    -1,   113,   114,   115,    -1,    -1,
      116,   117,   118,    -1,    -1,    -1,   119,
      120,    -1,    -1,    -1,    -1,   121,    -1,
       -1,   122,    -1,   123,    -1,    -1,   124,
      125,   126,    -1,    -1,   127,   128,   129,
       -1,    -1,   130,   131,   132,    -1,    -1,
      133,    -1,   134,    -1,    -1,   135,   136,
      137,    -1,    -1,   138,   139,   140,    -1,
       -1,   141,    -1,   142,    -1,    -1,   143,
      144,   145,    -1,    -1,   146,   147,   148,
       -1,    -1,    -1,   149,   150,    -1,    -1,
      151,   152,   153,    -1,    -1,   154,   155,
    -2840, -2395,    -2,    -1,   158,   159,    -1,
       -1,   160,   161,   162,    -1,    -1,   163,
      164,   165,    -1,    -1,   166,   167,   168,
       -1,    -1,   169,   170,   171,    -1,    -1,
       -1,   172,    -1,    -1,    -1,   173,   174,
      175,    -1,    -1,   176,   177,   178,    -1,
       -1,   179,   180,   181,    -1,    -1,    -1,
      182,   183,    -1,    -1,   184,   185,   186,
       -1,    -1,    -1,   187,   188,    -1,    -1,
      189,   190,   191,    -1,    -1,   192,   193,
      194,    -1,    -1,   195,   196,    -1,    -1,
       -1,   197,    -1,   198,    -1,    -1,   199,
      200,    -1,    -1,    -1,   201,   202,   203,
       -1,    -1,   204,   205,   206,    -1,    -1,
      207,   208,    -1,    -1,    -1,   209,   210,
      211,    -1,    -1,    -1,   212,   213,    -1,
       -1,    -1,   214,   215,    -1,    -1,   216,
      217,   218,    -1,    -1,    -1,   219,   220,
       -1,    -1,    -1,   221,   222,    -1,    -1,
      223,   224,   225,    -1,    -1,    -1,   226,
       -1,    -1,    -1,   227,   228,    -1,    -1,
       -1,   229,    -1,   230,    -1,    -1,   231,
      232,   233,    -1,    -1,    -1,   234,   235,
       -1,    -1,   236,   237,   238,    -1,    -1,
      239,   240,    -1,    -1,    -1,   241,    -1,
      242,    -1,    -1,   243,   244,    -1,    -1,
       -1,   245,   246,   247,    -1,   248,   249,
      250,    -1,    -1,    -1,   251,   252,    -1,
       -1,    -1,   253,   254,   255,    -1,    -1,
      256,   257,   258,    -1,    -1,   259,    -1,
      260,    -1,   261,   262,   263,   264,    -1,
       -1,   265,   266,   267,    -1,    -1,    -1,
      268,    -1,    -1,    -1,   269,   270,   271,
       -1,    -1,   272,   273,   274,    -1,    -1,
      275,   276,   277,    -1,    -1,   278,   279,
      280,    -1,    -1,   281,   282,   283,    -1,
       -1,   284,   285,   286,    -1,    -1,   287,
       -1,   288,    -1,    -1,    -1,   289,   290,
       -1,    -1,   291,   292,    -1,    -1,    -1,
       -1,    -1,   293,    -1,    -1,   294,    -1,
       -1,    -1,    -1,   295,   296,   297,    -1,
       -1,   298,   299,   300,    -1,    -1,   301,
      302,   303,    -1,    -1,   304,    -1,   305,
       -1,    -1,    -1,   306,    -1,    -1,    -1,
      307,   308,   309,    -1,    -1,    -1,   310,
      311,    -1,    -1,   312,   313,   314,    -1,
       -1,    -1,   315,   316,    -1,    -1,    -1,
       -1,   317,    -1,    -1,   318,   319,   320,
       -1,    -1,   321,   322,    -1,    -1,    -1,
      323,   324,   325,    -1,    -1,   326,    -1,
      327,    -1,    -1,   328,   329,   330,    -1,
       -1,    -1,   331,   332,    -1,    -1,    -1,
      333,    -1,    -1,    -1,   334,   335,    -1,
       -1,    -1,    -1,   336,   337,    -1,    -1,
       -1,   338,    -1,    -1,    -1,    -1,   339,
      340,    -1,    -1,   341,   342,   343,    -1,
       -1,    -1,    -1,   344,    -1,    -1,   345,
      346,   347,    -1,    -1,   348,    -1,   349,
       -1,    -1,   350,   351,   352,    -1,    -1,
      353,   354,   355,    -1,    -1,   356,   357,
       -1,    -1,    -1,   358,   359,   360,    -1,
       -1,   361,    -1,   362,    -1,    -1,   363,
      364,   365,    -1,    -1,   366,    -1,   367,
       -1,    -1,   368,   369,   370,    -1,    -1,
      371,   372,    -1,    -1,    -1,   373,   374,
      375,    -1,    -1,   376,   377,   378,    -1,
       -1,    -1,   379,   380,    -1,    -1,   381,
      382,   383,    -1,    -1,   384,   385,   386,
       -1,    -1,   387,    -1,    -1,    -1,    -1,
      388,    -1,   389,    -1,   390,   391,   392,
      393,    -1,    -1,   394,   395,   396,    -1,
       -1,   397,   398,   399,    -1,    -1,   400,
      401,   402,    -1,    -1,   403,   404,   405,
       -1,    -1,   406,   407,   408,    -1,    -1,
      409,   410,   411,    -1,    -1,   412,   413,
      414,    -1,    -1,   415,    -1,   416,    -1,
       -1,   417,   418,   419,    -1,    -1,    -1,
       -1,   420,    -1,    -1,    -1,   421,   422,
       -1,    -1,   423,   424,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   425,   426,
       -1,    -1,    -1,   427,   428,    -1,    -1,
       -1,   429,   430,   431,    -1,    -1,    -1,
      432,   433,    -1,    -1,   434,    -1,   435,
       -1,    -1,   436,   437,   438,    -1,    -1,
       -1,   439,   440,    -1,    -1,   441,   442,
      443,    -1,    -1,    -1,   444,   445,    -1,
       -1,   446,   447,    -1,    -1,    -1,    -1,
      448,    -1,    -1,    -1,    -1,   449,   450,
       -1,    -1,    -1,   451,   452,    -1,    -1,
      453,    -1,   454,    -1,    -1,   455,   456,
      457,    -1,    -1,   458,   459,   460,    -1,
       -1,   461,    -1,   462,    -1,    -1,   463,
      464,   465,    -1,    -1,   466,    -1,   467,
       -1,    -1,   468,   469,   470,    -1,    -1,
      471,   472,   473,    -1,    -1,    -1,   474,
      475,    -1,    -1,   476,   477,   478,    -1,
       -1,   479,    -1,   480,    -1,    -1,   481,
      482,   483,    -1,    -1,   484,   485,    -1,
       -1,    -1,   486,   487,   488,    -1,    -1,
       -1,    -1,   489,    -1,    -1,    -1,   490,
      491,    -1,    -1,   492,   493,   494,    -1,
       -1,    -1,    -1,   495,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,   496,    -1,   497,
       -1,    -1,   498,   499,   500,    -1,    -1,
      501,    -1,   502,    -1,    -1,    -1,   503,
      504,    -1,    -1,    -1,    -1,   505,    -1,
       -1,   506,   507,   508,    -1,    -1,   509,
      510,   511,    -1,    -1,   512,    -1,   513,
       -1,    -1,    -1,   514,   515,    -1,    -1,
      516,   517,    -1,    -1,    -1,   518,   519,
      520,    -1,    -1,   521,   522,   523,    -1,
       -1,   524,   525,   526,    -1,    -1,    -1,
      527,   528,    -1,    -1,   529,   530,   531,
       -1,    -1,    -1,   532,   533,    -1,    -1,
      534,   535,    -1,    -1,    -1,   536,   537,
      538,    -1,    -1,   539,   540,   541,    -1,
       -1,   542,   543,    -1,    -1,    -1,   544,
      545,   546,    -1,    -1,   547,   548,   549,
       -1,    -1,   550,    -1,   551,    -1,    -1,
      552,    -1,   553,    -1,    -1,   554,   555,
      556,    -1,    -1,   557,   558,   559,    -1,
       -1,   560,   561,   562,    -1,    -1,   563,
       -1,   564,    -1,    -1,   565,   566,   567,
       -1,    -1,   568,   569,    -1,    -1,    -1,
      570,   571,   572,    -1,    -1,   573,    -1,
       -1,    -1,    -1,   574,   575,   576,    -1,
       -1,   577,   578,   579,    -1,    -1,   580,
       -1,    -1,    -1,    -1,   581,    -1,   582,
       -1,    -1,   583,    -1,   584,    -1,    -1,
      585,   586,   587,    -1,    -1,   588,   589,
      590,    -1,    -1,   591,    -1,   592,    -1,
       -1,   593,   594,   595,    -1,    -1,   596,
      597,   598,    -1,    -1,   599,   600,   601,
       -1,    -1,   602,   603,   604,    -1,    -1,
      605,   606,   607,    -1,    -1,   608,   609,
      610,    -1,    -1,    -1,   611,    -1,    -1,
       -1,   612,   613,   614,    -1,    -1,    -1,
      615,   616,    -1,    -1,    -1,    -1,   617,
       -1,    -1,   618,   619,    -1,    -1,    -1,
      620,   621,   622,    -1,    -1,   623,   624,
      625,    -1,    -1,   626,    -1,   627,    -1,
       -1,   628,   629,   630,    -1,    -1,   631,
      632,   633,    -1,    -1,   634,   635,    -1,
       -1,    -1,    -1,   636,   637,    -1,    -1,
      638,   639,   640,    -1,    -1,   641,   642,
      643,    -1,    -1,   644,   645,   646,    -1,
       -1,   647,   648,   649,    -1,    -1,   650,
       -1,   651,    -1,    -1,    -1,    -1,   652,
       -1,    -1,   653,   654,   655,    -1,    -1,
       -1,   656,    -1,    -1,    -1,   657,   658,
      659,    -1,    -1,   660,   661,    -1,    -1,
       -1,    -1,   662,   663,    -1,    -1,   664,
      665,   666,    -1,    -1,   667,    -1,   668,
       -1,    -1,   669,   670,   671,    -1,    -1,
      672,   673,   674,    -1,    -1,    -1,   675,
      676,    -1,    -1,   677,    -1,   678,    -1,
       -1,    -1,    -1,   679,    -1,    -1,   680,
      681,   682,    -1,    -1,   683,   684,   685,
       -1,    -1,    -1,   686,   687,    -1,    -1,
      688,   689,   690,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   691,    -1,
       -1,   692,    -1,   693,    -1,    -1,   694,
      695,   696,    -1,    -1,   697,    -1,    -1,
       -1,    -1,   698,   699,   700,    -1,    -1,
      701,   702,   703,    -1,    -1,   704,   705,
      706,    -1,    -1,   707,   708,   709,    -1,
       -1,    -1,   710,    -1,    -1,    -1,   711,
      712,   713,    -1,    -1,   714,   715,   716,
       -1,    -1,    -1,   717,   718,    -1,    -1,
      719,   720,   721,    -1,    -1,    -1,   722,
      723,    -1,    -1,   724,    -1,   725,    -1,
       -1,   726,   727,   728,    -1,    -1,   729,
      730,   731,    -1,    -1,   732,   733,   734,
       -1,    -1,   735,   736,   737,    -1,    -1,
      738,   739,    -1,    -1,    -1,   740,   741,
      742,    -1,    -1,   743,   744,   745,    -1,
       -1,   746,   747,   748,    -1,    -1,   749,
      750,   751,    -1,    -1,    -1,   752,    -1,
       -1,    -1,    -1,   753,   754,    -1,    -1,
      755,   756,   757,    -1,    -1,   758,   759,
      760,    -1,    -1,    -1,   761,    -1,    -1,
       -1,    -1,   762,    -1,    -1,    -1,   763,
      764,   765,    -1,    -1,   766,   767,   768,
       -1,    -1,   769,    -1,    -1,    -1,    -1,
      770,   771,   772,    -1,    -1,   773,   774,
      775,    -1,    -1,   776,    -1,   777,    -1,
       -1,   778,   779,   780,    -1,    -1,   781,
      782,   783,    -1,    -1,   784,   785,    -1,
       -1,    -1,    -1,    -1,   786,    -1,    -1,
      787,   788,    -1,    -1,    -1,   789,   790,
      791,    -1,    -1,   792,   793,    -1,    -1,
       -1,   794,   795,    -1,    -1,    -1,   796,
       -1,   797,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,   798,   799,    -1,    -1,    -1,
      800,    -1,   801,    -1,    -1,   802,    -1,
      803,    -1,    -1,   804,    -1,   805,    -1,
       -1,   806,   807,   808,    -1,    -1,   809,
      810,   811,    -1,    -1,   812,   813,   814,
       -1,    -1,   815,    -1,   816,    -1,    -1,
      817,   818,   819,    -1,    -1,   820,   821,
       -1,    -1,    -1,   822,   823,    -1,    -1,
      824,    -1,   825,   826,    -1,    -1,    -1,
       -1,   827,    -1,    -1,   828,   829,   830,
       -1,    -1,    -1,    -1,   831,    -1,    -1,
      832,   833,    -1,    -1,    -1,   834,    -1,
      835,    -1,    -1,    -1,    -1,   836,    -1,
       -1,   837,   838,   839,    -1,    -1,   840,
      841,   842,    -1,    -1,   843,   844,   845,
       -1,    -1,   846,    -1,   847,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,   848,    -1,
      849,    -1,    -1,    -1,   850,    -1,    -1,
       -1,   851,   852,   853,    -1,    -1,   854,
      855,   856,    -1,    -1,   857,   858,    -1,
       -1,    -1,   859,   860,   861,    -1,    -1,
      862,   863,    -1,    -1,    -1,   864,   865,
      866,    -1,    -1,   867,   868,   869,    -1,
       -1,    -1,   870,   871,    -1,    -1,    -1,
       -1,   872,    -1,    -1,   873,    -1,    -1,
       -1,    -1,   874,   875,   876,    -1,    -1,
       -1,   877,   878,    -1,    -1,   879,   880,
      881,    -1,    -1,   882,    -1,   883,    -1,
       -1,   884,   885,   886,    -1,    -1, -4395,
       -1,   889, -1664,    -2,    -1,   890,   891,
       -1,    -1,   892,    -1,   893,    -1,    -1,
       -1,    -1,   894,    -1,    -1,    -1,    -1,
      895,    -1,    -1,    -1,   896,   897,    -1,
       -1,   898,   899,   900,    -1,    -1,   901,
      902,   903,    -1,    -1,    -1,   904,   905,
       -1,    -1,   906,    -1,   907,    -1,    -1,
      908,   909,   910,    -1,    -1,    -1,   911,
      912,    -1,    -1,    -1,   913,   914,    -1,
       -1,   915,   916,   917,    -1,    -1,   918,
       -1,   919,    -1,    -1,    -1,   920,   921,
       -1,    -1,    -1,    -1,   922,    -1,    -1,
      923,    -1,   924,    -1,    -1,   925,    -1,
      926,    -1,    -1,    -1,   927,    -1,    -1,
       -1,    -1,   928,   929,    -1,    -1,   930,
      931,   932,    -1,    -1,    -1,    -1,   933,
       -1,    -1,   934,   935,    -1,    -1,    -1,
      936,   937,   938,    -1,    -1,   939,   940,
      941,    -1,    -1,    -1,   942,   943,    -1,
       -1,    -1,   944,   945,    -1,    -1,    -1,
      946,   947,    -1,    -1,   948,    -1,   949,
       -1,    -1,   950,   951,   952,    -1,    -1,
      953,    -1,    -1,    -1,    -1,    -1,   954,
      955,    -1,    -1,   956,    -1,    -1,    -1,
       -1,   957,    -1,   958,    -1,    -1,   959,
      960,    -1,    -1,    -1,   961,   962,   963,
       -1,    -1,   964,    -1,    -1,    -1,    -1,
      965,   966,   967,    -1,    -1,   968,    -1,
      969,    -1,    -1,    -1,   970,   971,    -1,
       -1,    -1,   972,    -1,    -1,    -1,   973,
      974,   975,    -1,    -1,   976,   977,    -1,
       -1,    -1,    -1,    -1,   978,    -1,    -1,
      979,   980,   981,    -1,    -1,    -1,   982,
      983,    -1,    -1,    -1,   984,   985,    -1,
       -1,    -1,   986,   987,    -1,    -1,   988,
      989,   990,    -1,    -1,   991,   992,   993,
       -1,    -1,   994,   995,   996,    -1,    -1,
      997,   998,   999,    -1,    -1,    -1,  1000,
     1001,    -1,    -1,  1002,    -1,  1003,    -1,
       -1,    -1,  1004,  1005,    -1,    -1,  1006,
     1007,  1008,    -1,    -1,  1009,  1010,  1011,
       -1,    -1,  1012,    -1,    -1,    -1,    -1,
       -1,  1013,  1014,    -1,    -1,    -1,    -1,
     1015,    -1,    -1,  1016,  1017,  1018,    -1,
       -1,  1019,    -1,  1020,    -1,    -1,  1021,
     1022,  1023,    -1,    -1,    -1,  1024,  1025,
       -1,    -1,  1026,    -1,  1027,    -1,    -1,
     1028,    -1,  1029,    -1,    -1,  1030,  1031,
     1032,    -1,    -1,  1033,  1034,  1035,    -1,
       -1,    -1,  1036,  1037,    -1,    -1,  1038,
     1039,  1040,    -1,    -1,  1041,  1042,  1043,
       -1,    -1,  1044,  1045,  1046,    -1,    -1,
       -1,  1047,  1048,    -1,    -1,  1049,  1050,
     1051,    -1,    -1,  1052,  1053,  1054,    -1,
       -1,  1055,  1056,  1057,    -1,    -1,  1058,
     1059,  1060,    -1,    -1,  1061,  1062,  1063,
       -1,    -1,    -1,  1064,  1065,    -1,    -1,
     1066,    -1,  1067,    -1,    -1,  1068,  1069,
     1070,    -1,    -1,    -1,    -1,  1071,    -1,
       -1,  1072,  1073,  1074,    -1,    -1,    -1,
       -1,  1075,    -1,    -1,    -1,    -1,  1076,
       -1,    -1,  1077,  1078,  1079,    -1,    -1,
     1080,  1081,  1082,    -1,    -1,    -1,    -1,
     1083,    -1,    -1,  1084,  1085,  1086,    -1,
       -1,    -1,    -1,  1087,    -1,    -1,    -1,
     1088,  1089,    -1,    -1,  1090,    -1,  1091,
       -1,    -1,    -1,  1092,    -1,    -1,    -1,
     1093,  1094,  1095,    -1,    -1,  1096,  1097,
     1098,    -1,    -1,  1099,  1100,  1101,    -1,
       -1,  1102,  1103,  1104,    -1,    -1,  1105,
     1106,    -1,    -1,    -1,  1107,  1108,  1109,
       -1,    -1,  1110,  1111,  1112,    -1,    -1,
     1113,  1114,    -1,    -1,    -1,  1115,  1116,
     1117,    -1,    -1,  1118,  1119,  1120,    -1,
       -1,    -1,  1121,  1122,    -1,    -1,  1123,
       -1,  1124,    -1,    -1,  1125,  1126,    -1,
       -1,    -1,  1127,  1128,    -1,    -1,    -1,
     1129,  1130,  1131,    -1,    -1,    -1,  1132,
     1133,    -1,    -1,  1134,    -1,  1135,    -1,
       -1,  1136,    -1,  1137,    -1,    -1,  1138,
     1139,    -1,    -1,    -1,    -1,  1140,  1141,
       -1,    -1,  1142,  1143,  1144,    -1,    -1,
     1145,    -1,    -1,    -1,    -1,  1146,  1147,
     1148,    -1,    -1,  1149,  1150,  1151,    -1,
       -1,  1152,    -1,  1153,    -1,    -1,  1154,
       -1,    -1,    -1,    -1,  1155,    -1,  1156,
       -1,    -1,  1157,  1158,    -1,    -1,    -1,
     1159,  1160,  1161,    -1,    -1,    -1,    -1,
     1162,    -1,    -1,    -1,    -1,  1163,    -1,
       -1,    -1,  1164,  1165,    -1,    -1,  1166,
     1167,  1168,    -1,    -1,    -1,  1169,  1170,
       -1,    -1,  1171,  1172,  1173,    -1,    -1,
     1174,  1175,  1176,    -1,    -1,    -1,  1177,
     1178,    -1,    -1,    -1,  1179,  1180,    -1,
       -1,    -1,  1181,    -1,    -1,    -1,  1182,
     1183,    -1,    -1,    -1,  1184,  1185,  1186,
       -1,    -1,  1187,  1188,  1189,    -1,    -1,
     1190,    -1,  1191,    -1,    -1,  1192,  1193,
     1194,    -1,    -1,  1195,  1196,  1197,    -1,
       -1,  1198,  1199,    -1,    -1,    -1,  1200,
       -1,  1201,    -1,    -1,  1202,  1203,  1204,
       -1,    -1,  1205,  1206,  1207,    -1,    -1,
       -1,  1208,  1209,    -1,    -1,  1210,    -1,
     1211,    -1,    -1,    -1,  1212,  1213,    -1,
       -1,  1214,    -1,  1215,    -1,    -1,  1216,
       -1,  1217,    -1,    -1,  1218,  1219,  1220,
       -1,    -1,  1221,  1222,    -1,    -1,    -1,
       -1,  1223,    -1,    -1,    -1,  1224,  1225,
     1226,    -1,    -1,    -1,  1227,  1228,    -1,
       -1,  1229,  1230,  1231,    -1,    -1,    -1,
     1232,  1233,    -1,    -1,  1234,  1235,  1236,
       -1,    -1,  1237,    -1,  1238,    -1,    -1,
       -1,    -1,  1239,    -1,    -1,    -1,    -1,
     1240,    -1,    -1,  1241,  1242,  1243,    -1,
       -1,  1244,  1245,    -1,    -1,    -1,    -1,
     1246,    -1,    -1,    -1,  1247,    -1,  1248,
       -1,    -1,  1249,  1250,  1251,    -1,    -1,
       -1,  1252,  1253,    -1,    -1,  1254,  1255,
       -1,    -1,    -1,  1256,  1257,  1258,    -1,
       -1,  1259,  1260,    -1,    -1,    -1,  1261,
     1262,  1263,    -1,    -1,  1264,    -1,  1265,
       -1,    -1,  1266,    -1,  1267,    -1,    -1,
     1268,  1269,  1270,    -1,    -1,  1271,    -1,
       -1,    -1,    -1,  1272,    -1,  1273,    -1,
       -1,  1274,  1275,  1276,    -1,    -1,  1277,
     1278,  1279,    -1,    -1,    -1,  1280,    -1,
       -1,    -1,  1281,  1282,  1283,    -1,    -1,
     1284,    -1,  1285,    -1,    -1,    -1,    -1,
     1286,    -1,    -1,  1287,  1288,  1289,    -1,
       -1,  1290,  1291,  1292,    -1,    -1,  1293,
     1294,    -1,    -1,    -1,    -1,  1295,  1296,
       -1,    -1,  1297,  1298,  1299,    -1,    -1,
       -1,  1300,  1301,    -1,    -1,  1302,  1303,
     1304,    -1,    -1, -5329,  1307, -1246,    -2,
       -1,  1308,  1309,  1310,    -1,    -1,  1311,
     1312,  1313,    -1,    -1,  1314,  1315,  1316,
       -1,    -1,    -1,    -1,  1317,    -1,    -1,
       -1,    -1,  1318,    -1,    -1,    -1,  1319,
     1320,    -1,    -1,  1321,  1322,  1323,    -1,
       -1,  1324,    -1,  1325,    -1,    -1,  1326,
     1327,    -1,    -1,    -1,  1328,  1329,  1330,
       -1,    -1,  1331,  1332,  1333,    -1,    -1,
     1334, -5390,  1337, -1216,    -2,    -1,    -1,
     1338,    -1,    -1,  1339,  1340,    -1,    -1,
       -1,  1341,  1342,  1343,    -1,    -1,  1344,
     1345,    -1,    -1,    -1,  1346,    -1,  1347,
       -1,    -1,  1348,  1349,  1350,    -1,    -1,
     1351,  1352,  1353,    -1,    -1,  1354,  1355,
     1356,    -1,    -1,  1357,  1358,  1359,    -1,
       -1,  1360,    -1,  1361,    -1,    -1,  1362,
       -1,  1363,    -1,    -1,  1364,  1365,  1366,
       -1,    -1,  1367,  1368,  1369,    -1,    -1,
     1370,    -1,    -1,    -1,    -1,    -1,  1371,
     1372,    -1,    -1,  1373,  1374,    -1,    -1,
       -1,    -1,  1375,    -1,    -1,    -1,    -1,
     1376,  1377,    -1,    -1,  1378,  1379,  1380,
       -1,    -1,  1381,  1382,  1383,    -1,    -1,
     1384,    -1,  1385,    -1,    -1,    -1,  1386,
       -1,    -1,    -1,  1387,    -1,  1388,    -1,
       -1,  1389,  1390,  1391,    -1,    -1,  1392,
       -1,  1393,    -1,    -1,  1394,  1395,    -1,
       -1,    -1,  1396,  1397,    -1,    -1,    -1,
       -1,  1398,  1399,    -1,    -1,  1400,  1401,
     1402,    -1,    -1,    -1,    -1,  1403,    -1,
       -1,  1404,  1405,  1406,    -1,    -1,  1407,
     1408,  1409,    -1,    -1,  1410,  1411,    -1,
       -1,    -1,  1412,    -1,  1413,    -1,    -1,
       -1,  1414,  1415,    -1,    -1,    -1,    -1,
     1416,    -1,    -1,    -1,  1417,  1418,    -1,
       -1,  1419,  1420,    -1,    -1,    -1,  1421,
     1422,  1423,    -1,    -1,  1424,  1425,    -1,
       -1,    -1,  1426,    -1,    -1,    -1,    -1,
     1427,  1428,    -1,    -1,    -1,  1429,  1430,
     1431,    -1,    -1,    -1,  1432,  1433,    -1,
       -1,  1434,  1435,  1436,    -1,    -1,  1437,
     1438,  1439,    -1,    -1,  1440,    -1,  1441,
       -1,    -1,  1442,    -1,  1443,    -1,    -1,
     1444,    -1,  1445,    -1,    -1,    -1,  1446,
     1447,    -1,    -1,  1448,  1449,    -1,    -1,
       -1,  1450,  1451,    -1,    -1,    -1,  1452,
     1453,  1454,    -1,    -1,  1455,  1456,  1457,
       -1,    -1,  1458,  1459,  1460,    -1,    -1,
       -1,    -1,  1461,    -1,    -1,  1462,  1463,
     1464,    -1,    -1,  1465,  1466,  1467,    -1,
       -1,  1468,  1469,    -1,    -1,    -1,  1470,
     1471,  1472,    -1,    -1,  1473,  1474,  1475,
       -1,    -1,  1476,  1477,  1478,    -1,    -1,
     1479,    -1,  1480,    -1,    -1,    -1,    -1,
     1481,    -1,    -1,  1482,  1483,  1484,    -1,
       -1,  1485,    -1,  1486,    -1,    -1,  1487,
       -1,  1488,    -1,    -1,  1489,  1490,  1491,
       -1,    -1,  1492,  1493,  1494,    -1,    -1,
       -1,  1495,    -1,    -1,    -1,    -1,  1496,
       -1,    -1,    -1,  1497,  1498,  1499,    -1,
       -1,  1500,  1501,  1502,    -1,    -1,  1503,
     1504,  1505,    -1,    -1,  1506,  1507,    -1,
       -1,    -1,  1508,  1509,  1510,    -1,    -1,
     1511,  1512,  1513,    -1,    -1,  1514,    -1,
     1515,    -1,    -1,  1516,  1517,  1518,    -1,
       -1,  1519,    -1,  1520,    -1,    -1,    -1,
     1521,    -1,    -1,    -1,  1522,  1523,  1524,
       -1,    -1,    -1,  1525,  1526,    -1,    -1,
     1527,  1528,  1529,    -1,    -1,  1530,    -1,
     1531,    -1,    -1,  1532,  1533,  1534,    -1,
       -1,  1535,  1536,  1537,    -1,    -1,  1538,
     1539,  1540,    -1,    -1,    -1,  1541,  1542,
       -1,    -1,  1543,  1544,  1545,    -1,    -1,
     1546,  1547,  1548,    -1,    -1,    -1,    -1,
     1549,    -1,    -1,  1550,  1551,    -1,    -1,
       -1,  1552,    -1,  1553,    -1,    -1,  1554,
     1555,  1556,    -1,    -1,  1557,  1558,  1559,
       -1,    -1,  1560,  1561,    -1,    -1,    -1,
     1562,  1563,  1564,    -1,    -1,    -1,  1565,
     1566,    -1,    -1,    -1,    -1,  1567,    -1,
       -1,  1568,  1569,    -1,    -1,    -1,  1570,
     1571,  1572,    -1,    -1,  1573,  1574,  1575,
       -1,    -1,  1576,  1577,  1578,    -1,    -1,
     1579,  1580,    -1,    -1,    -1,    -1,  1581,
     1582,    -1,    -1,  1583,  1584,  1585,    -1,
       -1,  1586,  1587,  1588,    -1,    -1,    -1,
     1589,    -1,    -1,    -1,  1590,  1591,  1592,
       -1,    -1,  1593,  1594,  1595,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  1596,  1597,    -1,
       -1,  1598,  1599,  1600,    -1,    -1,  1601,
     1602,  1603,    -1,    -1,  1604,  1605,    -1,
       -1,    -1,  1606,  1607,  1608,    -1,    -1,
     1609,  1610,  1611,    -1,    -1, -5990,    -1,
     1614,  -939,    -2,  1615,  1616,  1617,    -1,
       -1,  1618,  1619,  1620,    -1,    -1,  1621,
     1622,  1623,    -1,    -1,  1624,  1625,    -1,
       -1,    -1,  1626,  1627,  1628,    -1,    -1,
     1629,  1630,  1631,    -1,    -1,  1632,    -1,
     1633,    -1,    -1,  1634,  1635,  1636,    -1,
       -1,  1637,    -1,  1638,    -1,    -1,  1639,
     1640,  1641,    -1,    -1,  1642,  1643,  1644,
       -1,    -1,    -1,  1645,  1646,    -1,    -1,
       -1,  1647,    -1,    -1,    -1,  1648,  1649,
     1650,    -1,    -1,  1651,  1652,    -1,    -1,
       -1,  1653,  1654,  1655,    -1,    -1,  1656,
     1657,    -1,    -1,    -1,    -1,  1658,  1659,
       -1,    -1,    -1,  1660,  1661,    -1,    -1,
     1662,    -1,  1663,    -1,    -1,    -1,    -1,
     1664,    -1,    -1,    -1,    -1,  1665,    -1,
       -1,  1666,  1667,  1668,    -1,    -1,  1669,
       -1,  1670,    -1,    -1,    -1,  1671,  1672,
       -1,    -1,  1673,  1674,  1675,    -1,    -1,
     1676,  1677,  1678,    -1,    -1,  1679,  1680,
     1681,    -1,    -1,  1682,  1683,  1684,    -1,
       -1,  1685,    -1,  1686,    -1,    -1,    -1,
     1687,    -1,    -1,    -1,  1688,    -1,  1689,
       -1,    -1,  1690,    -1,  1691,    -1,    -1,
     1692,  1693,  1694,    -1,    -1,  1695,  1696,
       -1,    -1,    -1,  1697,  1698,  1699,    -1,
       -1,  1700,    -1,    -1,    -1,    -1,  1701,
     1702,  1703,    -1,    -1,  1704,  1705,  1706,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     1707,  1708,  1709,    -1,    -1,  1710,  1711,
     1712,    -1,    -1,    -1,  1713,  1714,    -1,
       -1,  1715, -6210,  1718,  -835,    -2,  1719,
     1720,  1721,    -1,    -1,    -1,  1722,  1723,
       -1,    -1,    -1,  1724,  1725,    -1,    -1,
     1726,  1727,    -1,    -1,    -1,  1728,  1729,
     1730,    -1,    -1,    -1,  1731,  1732,    -1,
       -1,  1733,  1734,  1735,    -1,    -1,  1736,
     1737,  1738,    -1,    -1,  1739,  1740,  1741,
       -1,    -1,  1742,  1743,  1744,    -1,    -1,
       -1,  1745,  1746,    -1,    -1,  1747,  1748,
     1749,    -1,    -1,  1750,  1751,  1752,    -1,
       -1,    -1,  1753,  1754,    -1,    -1,    -1,
       -1,  1755,    -1,    -1,    -1,  1756,  1757,
       -1,    -1,  1758,  1759,  1760,    -1,  1761,
     1762,  1763,  1764,    -1,    -1,    -1,  1765,
     1766,    -1,    -1,  1767,  1768,  1769,    -1,
       -1,  1770,  1771,    -1,    -1,    -1,  1772,
     1773,  1774,    -1,    -1,  1775,  1776,  1777,
       -1,    -1,    -1,    -1,  1778,    -1,    -1,
     1779,  1780,  1781,    -1,    -1,  1782,  1783,
       -1,    -1,    -1,  1784,  1785,  1786,    -1,
       -1,  1787,  1788,  1789,    -1,    -1,  1790,
     1791,  1792,    -1,    -1,  1793,    -1,    -1,
       -1,    -1,    -1,  1794,  1795,    -1,    -1,
       -1,  1796,  1797,    -1,    -1,  1798,  1799,
     1800,    -1,    -1,    -1,  1801,  1802,    -1,
       -1,  1803,    -1,    -1,    -1,  1804,    -1,
     1805,  1806,    -1,    -1,    -1,  1807,  1808,
       -1,    -1,  1809,  1810,  1811,    -1,    -1,
     1812,    -1,  1813,    -1,    -1,  1814,  1815,
     1816,    -1,    -1,  1817,  1818,  1819,    -1,
       -1,  1820,    -1,  1821,    -1,    -1,  1822,
       -1,  1823,    -1,    -1,  1824,  1825,  1826,
       -1,    -1,    -1,  1827,    -1,    -1,    -1,
     1828,  1829,  1830,    -1,    -1,  1831,  1832,
     1833,    -1,    -1,  1834,  1835,  1836,    -1,
       -1,  1837,    -1,  1838,    -1,    -1,    -1,
     1839,  1840,    -1,    -1,    -1,  1841,  1842,
       -1,    -1,  1843,  1844,    -1,    -1,    -1,
       -1,    -1,  1845,    -1,    -1,    -1,  1846,
     1847,    -1,    -1,  1848,  1849,  1850,    -1,
     1851, -6490,  1854,  1855,  -699,    -2,    -1,
       -1,  1856,    -1,    -1,  1857,  1858,  1859,
       -1,    -1,  1860,  1861,  1862,    -1,    -1,
     1863,  1864,  1865,    -1,    -1,  1866,  1867,
     1868,    -1,    -1,    -1,  1869,  1870,    -1,
       -1,    -1,  1871,  1872,    -1,    -1,    -1,
     1873,  1874,    -1,    -1,    -1,  1875,  1876,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  1877,  1878,    -1,    -1,    -1,  1879,
     1880,    -1,    -1,  1881,  1882,  1883,    -1,
       -1,  1884,  1885,  1886,    -1,    -1,    -1,
     1887,  1888,    -1,    -1,  1889,  1890,  1891,
       -1,    -1,    -1,  1892,  1893,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  1894,  1895,
     1896,    -1,    -1,    -1,  1897,  1898,    -1,
       -1,    -1,  1899,  1900,    -1,    -1,  1901,
     1902,    -1,    -1,    -1,  1903,    -1,  1904,
       -1,    -1,  1905,  1906,  1907,    -1,    -1,
       -1,  1908,  1909,    -1,    -1,  1910,  1911,
     1912,    -1,    -1,    -1,  1913,  1914,    -1,
       -1,    -1,  1915,  1916,    -1,    -1,    -1,
     1917,  1918,    -1,    -1,  1919,  1920,  1921,
       -1,    -1,  1922,  1923,  1924,    -1,    -1,
       -1,  1925,  1926,    -1,    -1,  1927,  1928,
     1929,    -1,    -1,    -1,    -1,  1930,    -1,
       -1,    -1,  1931,  1932,    -1,    -1,  1933,
     1934,  1935,    -1,    -1,  1936,  1937,    -1,
       -1,    -1,  1938,  1939,  1940,    -1,    -1,
     1941,  1942,  1943,    -1,    -1,  1944,    -1,
     1945,    -1,    -1,    -1,  1946,  1947,    -1,
       -1,  1948,  1949,  1950,    -1,    -1,    -1,
     1951,  1952,    -1,    -1,    -1,    -1,  1953,
       -1,    -1,    -1,  1954,  1955,    -1,    -1,
       -1,  1956,  1957,    -1,    -1,    -1,  1958,
     1959,    -1,    -1,    -1,  1960,  1961,    -1,
       -1,  1962,  1963,  1964,    -1,    -1,    -1,
     1965,  1966,    -1,    -1,  1967,  1968,  1969,
       -1,    -1,  1970,  1971,  1972,    -1,    -1,
     1973,  1974,  1975,    -1,    -1,    -1,    -1,
     1976,    -1,    -1,  1977,  1978,  1979,    -1,
       -1,    -1,  1980,  1981,    -1,    -1,    -1,
       -1,  1982,    -1,    -1,  1983,  1984,  1985,
       -1,    -1,  1986,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  1987,  1988,
     1989,    -1,    -1,  1990,  1991,  1992,    -1,
       -1,    -1,    -1,  1993,    -1,    -1,  1994,
     1995,  1996,    -1,    -1,  1997,  1998,  1999,
       -1,    -1,  2000,  2001,  2002,    -1,    -1,
     2003,  2004,    -1,    -1,    -1,  2005,  2006,
     2007,    -1,    -1,    -1,    -1,  2008,    -1,
       -1,    -1,    -1,  2009,    -1,    -1,    -1,
     2010,  2011,    -1,    -1,  2012,  2013,  2014,
       -1,    -1,    -1,  2015,  2016,    -1,    -1,
       -1,  2017,  2018,    -1,    -1,  2019,  2020,
       -1,    -1,    -1,  2021,  2022,  2023,    -1,
       -1,  2024,  2025,  2026,    -1,    -1,    -1,
     2027,  2028,    -1,    -1,  2029,  2030,    -1,
       -1,    -1,  2031,    -1,  2032,    -1,    -1,
     2033,  2034,  2035,    -1,    -1,  2036,    -1,
     2037,    -1,    -1,  2038,  2039,  2040,    -1,
       -1,  2041,  2042,  2043,    -1,    -1,  2044,
     2045,  2046,    -1,    -1,  2047,  2048,    -1,
       -1,    -1,  2049,  2050,  2051,    -1,    -1,
       -1,  2052,  2053,    -1,    -1,  2054,    -1,
     2055,    -1,    -1,  2056,  2057,  2058,    -1,
       -1,  2059,  2060,  2061,    -1,    -1,  2062,
     2063,  2064,    -1,    -1,  2065,  2066,  2067,
       -1,    -1,    -1,  2068,  2069,    -1,    -1,
       -1,  2070,  2071,    -1,    -1,  2072,  2073,
     2074,    -1,    -1,  2075,  2076,  2077,    -1,
       -1,    -1,  2078,  2079,    -1,    -1,  2080,
     2081,  2082,    -1,    -1,  2083,  2084,  2085,
       -1,    -1,  2086,    -1,  2087,    -1,    -1,
     2088,  2089,  2090,    -1,    -1,    -1,  2091,
     2092,    -1,    -1,    -1,  2093,  2094,    -1,
       -1,    -1,    -1,  2095,    -1,    -1,    -1,
     2096,  2097,    -1,    -1,  2098,  2099,    -1,
       -1,    -1,    -1,  2100,  2101,    -1,    -1,
       -1,  2102,    -1,    -1,    -1,  2103,  2104,
     2105,    -1,    -1,    -1,    -1,  2106,    -1,
       -1,    -1,  2107,  2108,    -1,    -1,    -1,
     2109,  2110,    -1,    -1,  2111,  2112,  2113,
       -1,    -1,  2114,  2115,    -1,    -1,    -1,
       -1,  2116,  2117,    -1,    -1,  2118,  2119,
     2120,    -1,    -1,  2121,    -1,  2122,    -1,
       -1,    -1,  2123,  2124,    -1,    -1,    -1,
     2125,  2126,    -1,    -1,    -1,  2127,  2128,
       -1,    -1,  2129,    -1,    -1,    -1,    -1,
       -1,  2130,    -1,    -1,    -1,  2131,  2132,
     2133,    -1,    -1,    -1,  2134,  2135,    -1,
       -1,    -1,  2136,  2137,    -1,    -1,  2138,
       -1,  2139,    -1,    -1,  2140,  2141,  2142,
       -1,    -1,    -1,  2143,  2144,    -1,    -1,
     2145,  2146,  2147,    -1,    -1,    -1,  2148,
       -1,    -1,    -1,    -1,    -1,  2149,    -1,
       -1,    -1,  2150,    -1,    -1,    -1,    -1,
     2151,  2152,    -1,    -1,    -1,  2153,  2154,
       -1,    -1,    -1,  2155,  2156,    -1,    -1,
     2157,    -1,  2158,    -1,    -1,    -1,  2159,
       -1,    -1,    -1,    -1,    -1,  2160,    -1,
       -1,  2161,  2162,  2163,    -1,    -1,    -1,
     2164,  2165,    -1,    -1,    -1,  2166,  2167,
       -1,    -1,    -1,  2168,    -1,    -1,    -1,
     2169,  2170,    -1,    -1,    -1,  2171,  2172,
     2173,    -1,    -1,    -1,  2174,  2175,    -1,
       -1,  2176,  2177,  2178,    -1,    -1,  2179,
     2180,  2181,    -1,    -1,    -1,    -1,  2182,
       -1,    -1,    -1,  2183,  2184,    -1,    -1,
       -1,    -1,  2185,    -1,    -1,    -1,  2186,
     2187,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2188,    -1,  2189,    -1,    -1,    -1,
     2190,    -1,    -1,    -1,    -1,    -1,  2191,
       -1,    -1,    -1,    -1,  2192,    -1,    -1,
       -1,  2193,  2194,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  2195,    -1,    -1,
       -1,  2196,  2197,    -1,    -1,    -1,    -1,
       -1,  2198,    -1,    -1,    -1,  2199,  2200,
       -1,    -1,    -1,    -1,  2201,    -1,    -1,
       -1,    -1,  2202,    -1,    -1,    -1,    -1,
     2203,    -1,    -1,    -1,  2204,    -1,    -1,
       -1,    -1,  2205,  2206,    -1,    -1,  2207,
     2208,    -1,    -1,    -1,    -1,  2209,  2210,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     2211,  2212,  2213,    -1,    -1,  2214,  2215,
     2216,    -1,    -1,    -1,  2217,    -1,    -1,
       -1,  2218,  2219,    -1,    -1,    -1,  2220,
     2221,  2222,    -1,    -1,  2223,  2224,  2225,
       -1,    -1,    -1,    -1,  2226,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  2227,  2228,
     2229,    -1,    -1,    -1,    -1,  2230,    -1,
       -1,    -1,  2231,  2232,    -1,    -1,  2233,
     2234,  2235,    -1,    -1,    -1,    -1,  2236,
       -1,    -1,  2237,  2238,  2239,    -1,    -1,
       -1,  2240,  2241,    -1,    -1,    -1,  2242,
     2243,    -1,    -1,    -1,  2244,  2245,    -1,
       -1,  2246,  2247,  2248,    -1,    -1,    -1,
     2249,  2250,    -1,    -1,  2251,    -1,    -1,
       -1,    -1,    -1,  2252,  2253,    -1,    -1,
     2254,  2255,    -1,    -1,    -1,    -1,  2256,
     2257,    -1,    -1,  2258,    -1,    -1,    -1,
       -1,  2259,  2260,  2261,    -1,    -1,    -1,
     2262,    -1,    -1,    -1,    -1,  2263,    -1,
       -1,    -1,    -1,  2264,  2265,    -1,    -1,
       -1,    -1,  2266,    -1,    -1,    -1,  2267,
       -1,    -1,    -1,    -1,  2268,    -1,    -1,
       -1,  2269,    -1,  2270,    -1,    -1,    -1,
       -1,  2271,    -1,    -1,    -1,  2272,  2273,
       -1,    -1,    -1,  2274,    -1,    -1,    -1,
       -1,  2275,  2276,    -1,    -1,  2277,  2278,
     2279,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2280,  2281,    -1,    -1,    -1,
     2282,  2283,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2284,  2285,    -1,    -1,    -1,
     2286,  2287,  2288,    -1,    -1,    -1,  2289,
     2290,    -1,    -1,  2291,  2292,  2293,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2294,    -1,    -1,    -1,  2295,    -1,
       -1,    -1,    -1,  2296,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2297,
     2298,    -1,    -1,    -1,    -1,  2299,    -1,
       -1,    -1,  2300,    -1,    -1,    -1,    -1,
       -1,  2301,    -1,    -1,  2302,    -1,  2303,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  2304,    -1,
       -1,  2305,    -1,  2306,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  2307,  2308,
       -1,    -1,  2309,    -1,  2310,    -1,    -1,
       -1,    -1,  2311,    -1,    -1,    -1,  2312,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2313,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  2314,  2315,
       -1,    -1,  2316,  2317,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  2318,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2319,    -1,    -1,    -1,  2320,    -1,
       -1,    -1,  2321, -7730,  2324,  -229,    -2,
     2325,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2326,    -1,  2327,    -1,
       -1,    -1,    -1,  2328,    -1,    -1,  2329,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2330,  2331,    -1,    -1,
     2332,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2333,    -1,  2334,    -1,
       -1,    -1,    -1,  2335,    -1,    -1,    -1,
     2336,    -1,    -1,    -1,  2337,  2338,  2339,
       -1,    -1,    -1,    -1,  2340,    -1,    -1,
       -1,  2341,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  2342,    -1,
       -1,    -1,    -1,  2343,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2344,
       -1,    -1,    -1,  2345,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  2346,  2347,    -1,
       -1,    -1,  2348,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  2349,    -1,  2350,
       -1,    -1,    -1,    -1,  2351,    -1,    -1,
       -1,  2352,    -1,    -1,    -1,  2353,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2354,    -1,    -1,    -1,  2355,
       -1,  2356,    -1,    -1,  2357,  2358,  2359,
       -1,    -1,  2360,    -1,  2361,    -1,    -1,
       -1,    -1,  2362,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  2363,    -1,
       -1,    -1,    -1,  2364,    -1,    -1,    -1,
       -1,  2365,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2366,    -1,    -1,    -1,
       -1,    -1,  2367,    -1,    -1,  2368,    -1,
     2369,    -1,    -1,    -1,  2370,  2371,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2372,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2373,  2374,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  2375,    -1,    -1,
       -1,    -1,  2376,    -1,    -1,    -1,    -1,
     2377,    -1,    -1,    -1,  2378,    -1,  2379,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2380,    -1,    -1,    -1,  2381,
     2382,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  2383,  2384,
       -1,    -1,  2385,    -1,    -1,    -1,    -1,
       -1,    -1,  2386,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  2387,    -1,
       -1,    -1,    -1,  2388,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2389,
       -1,    -1,    -1,    -1,  2390,    -1,    -1,
       -1,  2391,  2392,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  2393,    -1,    -1,
       -1,    -1,  2394,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  2395,    -1,    -1,
     2396,  2397,  2398,    -1,    -1,    -1,  2399,
       -1,    -1,    -1,    -1,  2400,    -1,    -1,
       -1,    -1,    -1,  2401,    -1,    -1,  2402,
     2403,    -1,    -1,    -1,  2404,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     2405,  2406,    -1,    -1,    -1,    -1,    -1,
     2407,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2408,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2409,  2410,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2411,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2412,  2413,    -1,    -1,  2414,
       -1,    -1,    -1,    -1,  2415,    -1,    -1,
       -1,    -1,  2416,    -1,  2417,    -1,    -1,
       -1,  2418,    -1,    -1,    -1,    -1,  2419,
     2420,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2421,  2422,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  2423,  2424,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     2425,  2426,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     2427,    -1,  2428,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  2429,    -1,
       -1,    -1,  2430,    -1,    -1,    -1,  2431,
       -1,    -1,    -1,    -1,    -1,  2432,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     2433,    -1,  2434,    -1,    -1,    -1,  2435,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2436,    -1,    -1,    -1,
     2437,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2438,    -1,    -1,    -1,
       -1,  2439,  2440,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  2441,    -1,  2442,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2443,    -1,    -1,  2444,
     2445,  2446,    -1,    -1,    -1, -8424,  -104,
       -2,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2449,    -1,    -1,    -1,  2450,
     2451,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2452,    -1,    -1,    -1,
     2453,    -1,    -1,    -1,  2454,    -1,    -1,
       -1,    -1,    -1,  2455,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2456,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2457,
     2458,    -1,    -1,    -1,    -1,  2459,    -1,
       -1,    -1,    -1,  2460,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2461,    -1,    -1,    -1,
       -1,  2462,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2463,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  2464,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2465,
       -1,    -1,    -1,  2466,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2467,
       -1,    -1,    -1,  2468,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2469,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2470,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2471,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2472,    -1,    -1,    -1,
       -1,    -1,  2473,  2474,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  2475,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2476,
     2477,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2478,    -1,    -1,    -1,    -1,  2479,
       -1,    -1,    -1,    -1,    -1,  2480,  2481,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2482,
     2483,    -1,    -1,    -1,    -1,  2484,    -1,
       -1,    -1,  2485,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  2486,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  2487,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2488,
     2489,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2490,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2491,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2492,    -1,    -1,    -1,    -1,  2493,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2494,    -1,    -1,    -1,  2495,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2496,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2497,    -1,    -1,  2498,    -1,  2499,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2500,  2501,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  2502,    -1,    -1,
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
       -1,    -1,    -1,    -1,    -1,    -1,  2503,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2504,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2505,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  2506,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,  2507,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     2508,    -1,    -1,    -1,    -1,  2509,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  2510,    -1,    -1,
       -1,    -1,  2511,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2512,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2513,    -1,    -1,    -1,    -1,    -1,
     2514,    -1,    -1,    -1,    -1,    -1,  2515,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2516,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2517,    -1,    -1,    -1,
     2518,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2519,    -1,    -1,    -1,    -1,    -1,
     2520,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2521,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2522,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2523,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2524,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2525,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2526,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2527,  2528,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2529,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2530,    -1,    -1,    -1,  2531,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,  2532,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     2533,  2534,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,  2535,
       -1,    -1,    -1,    -1,  2536,    -1,    -1,
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
       -1,    -1,    -1,    -1,    -1,    -1,  2537,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2538,    -1,    -1,    -1,
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
       -1,    -1,    -1,    -1,  2539,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2540,    -1,    -1,    -1,
       -1,    -1,  2541,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2542,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
     2543,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,  2544,    -1,    -1,    -1,    -1,
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
       -1,    -1,    -1,    -1,    -1,  2545,    -1,
       -1,    -1,  2546,    -1,    -1,    -1,    -1,
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
       -1,    -1,  2547,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,  2548,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,    -1,    -1,    -1,    -1,
       -1,    -1,    -1,  2549,    -1,    -1,    -1,
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
       -1,    -1,    -1,    -1,    -1,    -1,  2550
  };

#ifdef __GNUC__
__inline
#endif
const struct char_map_s *
simp2trad_lookup (str, len)
     register const char *str;
     register unsigned int len;
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = simp2trad_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              if (len == lengthtable[index])
                {
                  register const char *s = simp2trad_wordlist[index].src;

                  if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
                    return &simp2trad_wordlist[index];
                }
            }
          else if (index < -TOTAL_KEYWORDS)
            {
              register int offset = - 1 - TOTAL_KEYWORDS - index;
              register const unsigned char *lengthptr = &lengthtable[TOTAL_KEYWORDS + lookup[offset]];
              register const struct char_map_s *wordptr = &simp2trad_wordlist[TOTAL_KEYWORDS + lookup[offset]];
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

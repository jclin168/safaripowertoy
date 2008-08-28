/* C code produced by gperf version 3.0.1 */
/* Command-line: gperf -F trad2simp_x86_init -H trad2simp_x86_hash -N trad2simp_x86_lookup -C -c -G -D -W trad2simp_x86_wordlist trad2simp_x86.in  */
/* Computed positions: -k'1-3,$' */

#line 4 "trad2simp_x86.in"

/*
   This is a part of SafariPowerToy source code
   (C)2006 written by jclin (jiancheng@gmail.com)
*/
#line 11 "trad2simp_x86.in"
struct char_map_s {
  char * src;
  char * dst;
};

#define TOTAL_KEYWORDS 2987
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 8
#define MIN_HASH_VALUE 5
#define MAX_HASH_VALUE 12708
/* maximum key range = 12704, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
trad2simp_x86_hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static const unsigned short asso_values[] =
    {
       1870,  1118,   908,   818,   779,  2604,  3285,   874,   319,   379,
       1134,   534,  3945,    44,   328,  2210,  3484,   843,  3634,    73,
       1954,  3314,   644,   993,  1063,  1129,  2930,   124,  1184,    28,
       2359,  2434,  2934,   844,  1980,  2360,   380,  1239,    68,  3754,
       3424,  3455,   360,    18,  1064,   188,   398,   763,  3689,  2619,
        709,   404,   468,  3820,   479,  1904,  3589,   838,  1499,  3944,
        570,  1179,  3575,   243,  1419,  3905,  2829,  2819,  3839,  2659,
         74,  3955,  2309,  3195,  3714,   358,  3615,   608,  2865,   359,
       1415,  4030,  1380,  2475,   129,  1000,  1230,   214,   170,  3955,
          4,  3015,    14,  1910,   255,   545,    19,    70,   650,  2775,
        145,  2800,  1985,  2080,  3310,    39,   995,   280,  2790,     9,
       2925,   325,   115,   459,   655,   405,  3705,   260,   100,  1090,
       2965,  3170,  3940,  1029,  2095,     5,    20,  3235,   410,  1485,
       2625,  3250,  1155,  1030,  2730,  1505,  2510,   595,     0,   350,
       1300,   149,   575,  3100,  1565,  1690,    10,    15,   435,   885,
        910,  2445,    65,  2130,   755,  1995,  1430,   645,  1630,  1095,
        778,  3279,  2939,   463,  1273,   963,   494,  3610,  2999,  4025,
        294,  1899,  3929,  3569,  3460,  3220,  1013,   999,  2084,   163,
        148,   553,   603,  3270,   583,   195,   839,  4029,  3770,  3685,
        939,  1789,  2664,   899,   363,  3864,  1854,  2280,  3095,    89,
        318,  3794,  3004,  1369,    73,  3749,  3364,   283,  1115,  4070,
          3,    18,  3029,   273,  2890,  2530,   528,    53,   604,     8,
        634,   354,   619,    13,   323,  2655,   994,  1734,  1949,    33,
        268,  2315,  2450,   213,  3305,   924,  3079,  2565,  1648,  1994,
        793,  3509,   664,  1794,   274,  3130,   529,   403,  3409,   113,
       3190,   454,   108,  1429,    90,  1460, 12709
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[2]+1];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
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
     4,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  4,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  4,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  4,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  4,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  4,  2,  4,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  8,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,  2,  4,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  4,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  4,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  4,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  4,  8,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  4,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  8,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  4,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  4,  2,  2,  2,  2,  2,  4,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  6,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  4,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  4,  2,  2,  2,  2,  4,  2,
     2,  2,  2,  2,  2,  2,  2,  6,  2,  2,  2,  2,  4,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  6,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  6,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  4,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,
     2,  2,  2,  4,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  4,  2,  4,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  4,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  8,  2,
     2,  2,  2,  2,  2,  2,  4,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  4,  2,  2,  2,  2,  2,  4,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,
     2,  2,  4,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,  2,
     2,  4,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  8,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  4,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     6,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  4,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  4,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  4,  2,  2,  2,  2,  2,  4,  4,
     2,  2,  2,  2,  2,  2,  6,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  4,  2,  4,  2,  2,  2,  2,  2,  6,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  6,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  4,  4,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,  2,  4,
     2,  4,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  4,  2,  2,  2,  2,  4,  2,
     2,  2,  2,  2,  2,  2,  4,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  4,  2,  2,  2,  4,  2,  2,  2,
     2,  2,  6,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  4,  4,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  4,  2,  2,  4,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  4,  2,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,  4,
     2,  2,  2,  2,  2,  2,  8,  4,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  4
  };

static const struct char_map_s trad2simp_x86_wordlist[] =
  {
#line 1787 "trad2simp_x86.in"
    {"\322\212","\x05\x8c" },
#line 1790 "trad2simp_x86.in"
    {"\333\212","\x00\x8c" },
#line 1741 "trad2simp_x86.in"
    {"m\212","\xe1\x8b" },
#line 1759 "trad2simp_x86.in"
    {"\222\212","\xf6\x8b" },
#line 1333 "trad2simp_x86.in"
    {"\322}","\xea\x7e" },
#line 335 "trad2simp_x86.in"
    {"mZ","\x05\x5a" },
#line 1733 "trad2simp_x86.in"
    {"`\212","\x8f\x54" },
#line 828 "trad2simp_x86.in"
    {"\322m","\xc4\x51" },
#line 2194 "trad2simp_x86.in"
    {"\322\222","\x0b\x95" },
#line 2150 "trad2simp_x86.in"
    {"Z\222","\xc6\x94" },
#line 1308 "trad2simp_x86.in"
    {"\223}","\xcf\x7e" },
#line 1708 "trad2simp_x86.in"
    {"\035\212","\xb6\x8b" },
#line 2157 "trad2simp_x86.in"
    {"m\222","\xbd\x94" },
#line 2260 "trad2simp_x86.in"
    {"\212\223","\x51\x95" },
#line 2196 "trad2simp_x86.in"
    {"\337\222","\x13\x95" },
#line 2245 "trad2simp_x86.in"
    {"Z\223","\x96\x94" },
#line 2167 "trad2simp_x86.in"
    {"\223\222","\xe8\x94" },
#line 1270 "trad2simp_x86.in"
    {"\035}","\xb4\x7e" },
#line 1738 "trad2simp_x86.in"
    {"i\212","\xd7\x8b" },
#line 1407 "trad2simp_x86.in"
    {"\212~","\xa9\x7e" },
#line 381 "trad2simp_x86.in"
    {"\\\\","\x49\x5c" },
#line 2291 "trad2simp_x86.in"
    {"\337\223","\xf2\x94" },
#line 1391 "trad2simp_x86.in"
    {"Z~","\x2d\x7f" },
#line 1404 "trad2simp_x86.in"
    {"}~","\x24\x7f" },
#line 2229 "trad2simp_x86.in"
    {"+\223","\x21\x95" },
#line 1398 "trad2simp_x86.in"
    {"m~","\x27\x83" },
#line 2256 "trad2simp_x86.in"
    {"~\223","\x9f\x94" },
#line 830 "trad2simp_x86.in"
    {"\345m","\x0c\x6e" },
#line 2199 "trad2simp_x86.in"
    {"\345\222","\x03\x95" },
#line 1258 "trad2simp_x86.in"
    {"\015}","\xb3\x7e" },
#line 1411 "trad2simp_x86.in"
    {"\223~","\x28\x7f" },
#line 1369 "trad2simp_x86.in"
    {"+~","\x1d\x7f" },
#line 1405 "trad2simp_x86.in"
    {"~~","\x31\x7f" },
#line 1337 "trad2simp_x86.in"
    {"\331}","\x02\x7f" },
#line 2119 "trad2simp_x86.in"
    {"\015\222","\x9d\x94" },
#line 1761 "trad2simp_x86.in"
    {"\230\212","\xf1\x8b" },
#line 1365 "trad2simp_x86.in"
    {"\035~","\x1c\x7f" },
#line 2249 "trad2simp_x86.in"
    {"i\223","\x18\x95" },
#line 1734 "trad2simp_x86.in"
    {"a\212","\xe9\x8b" },
#line 376 "trad2simp_x86.in"
    {"\015\\","\xf9\x5b" },
#line 1702 "trad2simp_x86.in"
    {"\023\212","\xad\x8b" },
#line 1723 "trad2simp_x86.in"
    {"F\212","\xcb\x8b" },
#line 1395 "trad2simp_x86.in"
    {"i~","\xf3\x7e" },
#line 1293 "trad2simp_x86.in"
    {"a}","\xdc\x7e" },
#line 1260 "trad2simp_x86.in"
    {"\023}","\xbe\x7e" },
#line 1286 "trad2simp_x86.in"
    {"F}","\xca\x7e" },
#line 2169 "trad2simp_x86.in"
    {"\230\222","\xed\x94" },
#line 711 "trad2simp_x86.in"
    {"mi","\x1a\x4e" },
#line 2127 "trad2simp_x86.in"
    {"&\222","\x9b\x94" },
#line 1781 "trad2simp_x86.in"
    {"\307\212","\x08\x8c" },
#line 1809 "trad2simp_x86.in"
    {"\376\212","\xfa\x8b" },
#line 709 "trad2simp_x86.in"
    {"\\i","\xe1\x80" },
#line 2192 "trad2simp_x86.in"
    {"\314\222","\xe4\x94" },
#line 2142 "trad2simp_x86.in"
    {"F\222","\xbb\x94" },
#line 2265 "trad2simp_x86.in"
    {"\230\223","\x49\x95" },
#line 720 "trad2simp_x86.in"
    {"\323i","\x60\x67" },
#line 2227 "trad2simp_x86.in"
    {"&\223","\x26\x95" },
#line 1330 "trad2simp_x86.in"
    {"\307}","\x01\x7f" },
#line 1748 "trad2simp_x86.in"
    {"v\212","\x6c\x91" },
#line 379 "trad2simp_x86.in"
    {"F\\","\x4a\x5c" },
#line 2283 "trad2simp_x86.in"
    {"\314\223","\x46\x95" },
#line 2238 "trad2simp_x86.in"
    {"F\223","\x94\x94" },
#line 1414 "trad2simp_x86.in"
    {"\230~","\x35\x7f" },
#line 1808 "trad2simp_x86.in"
    {"\374\212","\x16\x8c" },
#line 2191 "trad2simp_x86.in"
    {"\307\222","\xa1\x94" },
#line 1393 "trad2simp_x86.in"
    {"a~","\xe3\x7e" },
#line 475 "trad2simp_x86.in"
    {"F`","\x52\x60" },
#line 1385 "trad2simp_x86.in"
    {"F~","\x2a\x7f" },
#line 1743 "trad2simp_x86.in"
    {"p\212","\xd8\x8b" },
#line 2281 "trad2simp_x86.in"
    {"\307\223","\x5f\x95" },
#line 2158 "trad2simp_x86.in"
    {"v\222","\xcf\x94" },
#line 1353 "trad2simp_x86.in"
    {"\371}","\x07\x7f" },
#line 1707 "trad2simp_x86.in"
    {"\033\212","\xb9\x8b" },
#line 1297 "trad2simp_x86.in"
    {"p}","\xd6\x7e" },
#line 481 "trad2simp_x86.in"
    {"\307`","\x66\x65" },
#line 2211 "trad2simp_x86.in"
    {"\374\222","\xa2\x94" },
#line 1727 "trad2simp_x86.in"
    {"T\212","\xcf\x8b" },
#line 2253 "trad2simp_x86.in"
    {"v\223","\x36\x95" },
#line 331 "trad2simp_x86.in"
    {"\033Z","\x31\x5a" },
#line 1268 "trad2simp_x86.in"
    {"\033}","\xb7\x7e" },
#line 2527 "trad2simp_x86.in"
    {"\333\230","\xde\x98" },
#line 509 "trad2simp_x86.in"
    {"\212a","\xeb\x60" },
#line 2299 "trad2simp_x86.in"
    {"\371\223","\x6a\x95" },
#line 498 "trad2simp_x86.in"
    {"Za","\xed\x60" },
#line 2251 "trad2simp_x86.in"
    {"p\223","\x3e\x95" },
#line 2484 "trad2simp_x86.in"
    {"+\230","\xef\x4f" },
#line 1757 "trad2simp_x86.in"
    {"\215\212","\xa4\x8b" },
#line 512 "trad2simp_x86.in"
    {"\222a","\x26\x61" },
#line 525 "trad2simp_x86.in"
    {"\337a","\x3c\x60" },
#line 2223 "trad2simp_x86.in"
    {"\033\223","\x1b\x95" },
#line 1400 "trad2simp_x86.in"
    {"p~","\x32\x7f" },
#line 1320 "trad2simp_x86.in"
    {"\264}","\x00\x7f" },
#line 2243 "trad2simp_x86.in"
    {"T\223","\x37\x95" },
#line 507 "trad2simp_x86.in"
    {"~a","\x32\x6b" },
#line 2529 "trad2simp_x86.in"
    {"\345\230","\x66\x99" },
#line 1364 "trad2simp_x86.in"
    {"\033~","\x1a\x7f" },
#line 2154 "trad2simp_x86.in"
    {"d\222","\xa9\x94" },
#line 1388 "trad2simp_x86.in"
    {"T~","\xc7\x7e" },
#line 1730 "trad2simp_x86.in"
    {"X\212","\xce\x8b" },
#line 384 "trad2simp_x86.in"
    {"d\\","\x42\x5c" },
#line 2247 "trad2simp_x86.in"
    {"d\223","\x38\x95" },
#line 2183 "trad2simp_x86.in"
    {"\263\222","\x10\x95" },
#line 2901 "trad2simp_x86.in"
    {"Z\376","\x09\xff" },
#line 1715 "trad2simp_x86.in"
    {"-\212","\xbe\x8b" },
#line 1409 "trad2simp_x86.in"
    {"\215~","\x2f\x7d" },
#line 2277 "trad2simp_x86.in"
    {"\263\223","\x4d\x95" },
#line 2903 "trad2simp_x86.in"
    {"\\\376","\x5d\xff" },
#line 1776 "trad2simp_x86.in"
    {"\271\212","\xfd\x8b" },
#line 2483 "trad2simp_x86.in"
    {"&\230","\x8f\x98" },
#line 2907 "trad2simp_x86.in"
    {"`\376","\x06\xff" },
#line 2244 "trad2simp_x86.in"
    {"X\223","\xe1\x94" },
#line 2477 "trad2simp_x86.in"
    {"\023\230","\x7f\x98" },
#line 2492 "trad2simp_x86.in"
    {"F\230","\x97\x98" },
#line 1323 "trad2simp_x86.in"
    {"\271}","\xfa\x7e" },
#line 1090 "trad2simp_x86.in"
    {"mv","\x3f\x76" },
#line 522 "trad2simp_x86.in"
    {"\314a","\x3f\x60" },
#line 1729 "trad2simp_x86.in"
    {"W\212","\xc7\x8b" },
#line 2185 "trad2simp_x86.in"
    {"\271\222","\x08\x95" },
#line 36 "trad2simp_x86.in"
    {"aF","\x4c\x46" },
#line 2914 "trad2simp_x86.in"
    {"i\376","\x04\xff" },
#line 2539 "trad2simp_x86.in"
    {"\376\230","\x70\x99" },
#line 1346 "trad2simp_x86.in"
    {"\351}","\x13\x7f" },
#line 1370 "trad2simp_x86.in"
    {"-~","\x21\x7f" },
#line 520 "trad2simp_x86.in"
    {"\307a","\x73\x60" },
#line 534 "trad2simp_x86.in"
    {"\376a","\x51\x61" },
#line 2202 "trad2simp_x86.in"
    {"\351\222","\xd3\x94" },
#line 2149 "trad2simp_x86.in"
    {"W\222","\xb3\x94" },
#line 940 "trad2simp_x86.in"
    {"}p","\x7e\x70" },
#line 2537 "trad2simp_x86.in"
    {"\374\230","\x72\x99" },
#line 1088 "trad2simp_x86.in"
    {"iv","\x5e\x76" },
#line 505 "trad2simp_x86.in"
    {"va","\x86\x5e" },
#line 1069 "trad2simp_x86.in"
    {"\015v","\xa1\x75" },
#line 2510 "trad2simp_x86.in"
    {"p\230","\xa6\x98" },
#line 533 "trad2simp_x86.in"
    {"\374a","\xe7\x60" },
#line 2908 "trad2simp_x86.in"
    {"a\376","\x0a\xff" },
#line 1281 "trad2simp_x86.in"
    {"?}","\xd0\x7e" },
#line 1732 "trad2simp_x86.in"
    {"^\212","\xcd\x8b" },
#line 922 "trad2simp_x86.in"
    {"\035p","\xa5\x6c" },
#line 2499 "trad2simp_x86.in"
    {"T\230","\x9c\x98" },
#line 1747 "trad2simp_x86.in"
    {"u\212","\xdc\x8b" },
#line 2139 "trad2simp_x86.in"
    {"?\222","\xbf\x94" },
#line 487 "trad2simp_x86.in"
    {"\033a","\x31\x72" },
#line 1292 "trad2simp_x86.in"
    {"^}","\xde\x7e" },
#line 1797 "trad2simp_x86.in"
    {"\346\212","\x1b\x8c" },
#line 939 "trad2simp_x86.in"
    {"ip","\xdf\x6e" },
#line 1083 "trad2simp_x86.in"
    {"av","\xf4\x75" },
#line 1070 "trad2simp_x86.in"
    {"\023v","\xea\x75" },
#line 1077 "trad2simp_x86.in"
    {"Fv","\xe8\x75" },
#line 2152 "trad2simp_x86.in"
    {"^\222","\xba\x94" },
#line 1344 "trad2simp_x86.in"
    {"\346}","\x0c\x7f" },
#line 1739 "trad2simp_x86.in"
    {"k\212","\xe7\x8b" },
#line 1785 "trad2simp_x86.in"
    {"\317\212","\xf9\x8b" },
#line 1351 "trad2simp_x86.in"
    {"\364}","\xc3\x7e" },
#line 2200 "trad2simp_x86.in"
    {"\346\222","\x14\x95" },
#line 2252 "trad2simp_x86.in"
    {"u\223","\x2e\x95" },
#line 2518 "trad2simp_x86.in"
    {"\263\230","\x2e\x52" },
#line 1771 "trad2simp_x86.in"
    {"\252\212","\xf4\x8b" },
#line 1392 "trad2simp_x86.in"
    {"^~","\xd5\x7e" },
#line 925 "trad2simp_x86.in"
    {"&p","\x74\x6f" },
#line 2500 "trad2simp_x86.in"
    {"X\230","\x3f\x61" },
#line 388 "trad2simp_x86.in"
    {"\364\\","\x98\x5c" },
#line 2193 "trad2simp_x86.in"
    {"\317\222","\xd7\x94" },
#line 584 "trad2simp_x86.in"
    {"\\d","\xbc\x63" },
#line 593 "trad2simp_x86.in"
    {"\223d","\x20\x63" },
#line 611 "trad2simp_x86.in"
    {"\323d","\xdf\x39" },
#line 2896 "trad2simp_x86.in"
    {"T\376","\x1b\xff" },
#line 497 "trad2simp_x86.in"
    {"Xa","\xe8\x60" },
#line 2178 "trad2simp_x86.in"
    {"\252\222","\xd5\x94" },
#line 1092 "trad2simp_x86.in"
    {"pv","\xc8\x75" },
#line 2485 "trad2simp_x86.in"
    {"-\230","\x34\x59" },
#line 1697 "trad2simp_x86.in"
    {"\010\212","\xa1\x8b" },
#line 1397 "trad2simp_x86.in"
    {"k~","\xfb\x7c" },
#line 1794 "trad2simp_x86.in"
    {"\340\212","\xa7\x55" },
#line 2273 "trad2simp_x86.in"
    {"\252\223","\x3c\x95" },
#line 2911 "trad2simp_x86.in"
    {"d\376","\x1c\xff" },
#line 1700 "trad2simp_x86.in"
    {"\016\212","\xa8\x8b" },
#line 1255 "trad2simp_x86.in"
    {"\010}","\xa8\x7e" },
#line 1341 "trad2simp_x86.in"
    {"\340}","\x14\x7f" },
#line 572 "trad2simp_x86.in"
    {"\015d","\x5f\x63" },
#line 712 "trad2simp_x86.in"
    {"ui","\x81\x67" },
#line 2117 "trad2simp_x86.in"
    {"\010\222","\x9a\x94" },
#line 298 "trad2simp_x86.in"
    {"\212X","\xab\x57" },
#line 1939 "trad2simp_x86.in"
    {"\015\215","\x61\x8d" },
#line 2530 "trad2simp_x86.in"
    {"\351\230","\x68\x99" },
#line 293 "trad2simp_x86.in"
    {"ZX","\xa2\x51" },
#line 1085 "trad2simp_x86.in"
    {"dv","\x96\x75" },
#line 374 "trad2simp_x86.in"
    {"\010\\","\x13\x4e" },
#line 2282 "trad2simp_x86.in"
    {"\310\223","\xfe\x94" },
#line 2216 "trad2simp_x86.in"
    {"\010\223","\x29\x95" },
#line 313 "trad2simp_x86.in"
    {"\337X","\x84\x57" },
#line 1792 "trad2simp_x86.in"
    {"\335\212","\x1e\x8c" },
#line 377 "trad2simp_x86.in"
    {"\016\\","\xfc\x5b" },
#line 308 "trad2simp_x86.in"
    {"\323X","\x8b\x53" },
#line 1355 "trad2simp_x86.in"
    {"\010~","\x26\x84" },
#line 1714 "trad2simp_x86.in"
    {"*\212","\xbf\x8b" },
#line 1779 "trad2simp_x86.in"
    {"\302\212","\x04\x8c" },
#line 1339 "trad2simp_x86.in"
    {"\335}","\x09\x7f" },
#line 1399 "trad2simp_x86.in"
    {"o~","\x33\x7f" },
#line 284 "trad2simp_x86.in"
    {"\035X","\xda\x57" },
#line 1081 "trad2simp_x86.in"
    {"Xv","\xa0\x75" },
#line 1942 "trad2simp_x86.in"
    {"\023\215","\x43\x8d" },
#line 714 "trad2simp_x86.in"
    {"\252i","\x69\x67" },
#line 2195 "trad2simp_x86.in"
    {"\335\222","\x0a\x95" },
#line 938 "trad2simp_x86.in"
    {"dp","\xe6\x6e" },
#line 2145 "trad2simp_x86.in"
    {"K\222","\x28\x52" },
#line 608 "trad2simp_x86.in"
    {"\307d","\xe9\x62" },
#line 627 "trad2simp_x86.in"
    {"\376d","\x70\x62" },
#line 2289 "trad2simp_x86.in"
    {"\335\223","\x58\x95" },
#line 2503 "trad2simp_x86.in"
    {"^\230","\x7b\x7c" },
#line 2241 "trad2simp_x86.in"
    {"K\223","\x05\x95" },
#line 1256 "trad2simp_x86.in"
    {"\011}","\xab\x7e" },
#line 588 "trad2simp_x86.in"
    {"vd","\x9f\x62" },
#line 310 "trad2simp_x86.in"
    {"\331X","\x39\x57" },
#line 2899 "trad2simp_x86.in"
    {"W\376","\x01\xff" },
#line 626 "trad2simp_x86.in"
    {"\374d","\xb8\x64" },
#line 2118 "trad2simp_x86.in"
    {"\011\222","\xa0\x94" },
#line 935 "trad2simp_x86.in"
    {"Xp","\xe9\x6e" },
#line 1805 "trad2simp_x86.in"
    {"\367\212","\xbd\x8b" },
#line 2536 "trad2simp_x86.in"
    {"\364\230","\x74\x99" },
#line 1746 "trad2simp_x86.in"
    {"s\212","\xe6\x8b" },
#line 1950 "trad2simp_x86.in"
    {"\374\215","\x40\x5c" },
#line 1273 "trad2simp_x86.in"
    {".}","\x4e\x62" },
#line 2507 "trad2simp_x86.in"
    {"k\230","\xa4\x98" },
#line 1277 "trad2simp_x86.in"
    {"3}","\xc5\x7e" },
#line 1300 "trad2simp_x86.in"
    {"s}","\xdb\x7e" },
#line 2129 "trad2simp_x86.in"
    {".\222","\xcc\x94" },
#line 1356 "trad2simp_x86.in"
    {"\011~","\x19\x7f" },
#line 502 "trad2simp_x86.in"
    {"ka","\x02\x60" },
#line 1944 "trad2simp_x86.in"
    {"\033\215","\x63\x8d" },
#line 2891 "trad2simp_x86.in"
    {"?\376","\x27\x22" },
#line 2131 "trad2simp_x86.in"
    {"3\222","\xb6\x94" },
#line 2230 "trad2simp_x86.in"
    {".\223","\x22\x95" },
#line 306 "trad2simp_x86.in"
    {"\307X","\x5b\x57" },
#line 2163 "trad2simp_x86.in"
    {"\200\222","\xf6\x94" },
#line 2298 "trad2simp_x86.in"
    {"\367\223","\x64\x95" },
#line 2232 "trad2simp_x86.in"
    {"3\223","\x30\x95" },
#line 2905 "trad2simp_x86.in"
    {"^\376","\x3d\xff" },
#line 1371 "trad2simp_x86.in"
    {".~","\x29\x7f" },
#line 485 "trad2simp_x86.in"
    {"\367`","\x22\x88" },
#line 1375 "trad2simp_x86.in"
    {"3~","\x1a\x7f" },
#line 1401 "trad2simp_x86.in"
    {"s~","\x34\x7f" },
#line 2526 "trad2simp_x86.in"
    {"\310\230","\xda\x98" },
#line 2469 "trad2simp_x86.in"
    {"\010\230","\x7b\x98" },
#line 602 "trad2simp_x86.in"
    {"\263d","\xff\x63" },
#line 2509 "trad2simp_x86.in"
    {"o\230","\x3e\x66" },
#line 2472 "trad2simp_x86.in"
    {"\016\230","\x80\x98" },
#line 1744 "trad2simp_x86.in"
    {"q\212","\xdd\x8b" },
#line 2916 "trad2simp_x86.in"
    {"k\376","\x20\xff"},
#line 345 "trad2simp_x86.in"
    {"\373Z","\x34\x5a" },
#line 1766 "trad2simp_x86.in"
    {"\243\212","\xec\x8b" },
#line 1354 "trad2simp_x86.in"
    {"\373}","\xf4\x81" },
#line 2262 "trad2simp_x86.in"
    {"\224\223","\x55\x95" },
#line 1717 "trad2simp_x86.in"
    {"4\212","\xc9\x8b" },
#line 1298 "trad2simp_x86.in"
    {"q}","\xdf\x7e" },
#line 270 "trad2simp_x86.in"
    {"\015W","\xf4\x56" },
#line 1313 "trad2simp_x86.in"
    {"\243}","\xfb\x7e" },
#line 2210 "trad2simp_x86.in"
    {"\373\222","\x74\x92" },
#line 1412 "trad2simp_x86.in"
    {"\224~","\x4d\x62" },
#line 1718 "trad2simp_x86.in"
    {"6\212","\xc3\x8b" },
#line 2173 "trad2simp_x86.in"
    {"\243\222","\xf7\x94" },
#line 295 "trad2simp_x86.in"
    {"dX","\xd9\x57" },
#line 2132 "trad2simp_x86.in"
    {"4\222","\xc3\x94" },
#line 2496 "trad2simp_x86.in"
    {"O\230","\x9c\x98" },
#line 486 "trad2simp_x86.in"
    {"\373`","\x7b\x60" },
#line 2269 "trad2simp_x86.in"
    {"\243\223","\xe5\x84" },
#line 1769 "trad2simp_x86.in"
    {"\246\212","\xf5\x8b" },
#line 823 "trad2simp_x86.in"
    {"6m","\x79\x6c" },
#line 495 "trad2simp_x86.in"
    {"Ka","\x01\x60" },
#line 273 "trad2simp_x86.in"
    {"\023W","\x06\x57" },
#line 303 "trad2simp_x86.in"
    {"\263X","\x5f\x57" },
#line 945 "trad2simp_x86.in"
    {"\364p","\xc3\x70" },
#line 1376 "trad2simp_x86.in"
    {"4~","\xa4\x7e" },
#line 2233 "trad2simp_x86.in"
    {"6\223","\x68\x88" },
#line 2482 "trad2simp_x86.in"
    {"$\230","\x90\x98" },
#line 944 "trad2simp_x86.in"
    {"\317p","\x4c\x4e" },
#line 2175 "trad2simp_x86.in"
    {"\246\222","\xdf\x94" },
#line 1378 "trad2simp_x86.in"
    {"6~","\x77\x7d" },
#line 1058 "trad2simp_x86.in"
    {"\212u","\xe0\x53" },
#line 444 "trad2simp_x86.in"
    {"\337^","\x99\x5e" },
#line 2270 "trad2simp_x86.in"
    {"\246\223","\x4f\x95" },
#line 420 "trad2simp_x86.in"
    {"+^","\x08\x5e" },
#line 1804 "trad2simp_x86.in"
    {"\366\212","\x0c\x8c" },
#line 434 "trad2simp_x86.in"
    {"~^","\xe0\x51" },
#line 2512 "trad2simp_x86.in"
    {"s\230","\x9e\x98" },
#line 280 "trad2simp_x86.in"
    {"\374W","\x0e\x5d" },
#line 1336 "trad2simp_x86.in"
    {"\330}","\x04\x7f" },
#line 1352 "trad2simp_x86.in"
    {"\366}","\x0f\x7f" },
#line 530 "trad2simp_x86.in"
    {"\367a","\x00\x60" },
#line 1257 "trad2simp_x86.in"
    {"\013}","\xb9\x7e" },
#line 504 "trad2simp_x86.in"
    {"sa","\xad\x60" },
#line 834 "trad2simp_x86.in"
    {"\366m","\x9e\x6d" },
#line 2208 "trad2simp_x86.in"
    {"\366\222","\x0d\x95" },
#line 315 "trad2simp_x86.in"
    {"\351X","\x5d\x57" },
#line 292 "trad2simp_x86.in"
    {"WX","\x82\x6d" },
#line 389 "trad2simp_x86.in"
    {"\366\\","\x9b\x5c" },
#line 2287 "trad2simp_x86.in"
    {"\330\223","\x35\x95" },
#line 375 "trad2simp_x86.in"
    {"\013\\","\xfb\x5b" },
#line 1321 "trad2simp_x86.in"
    {"\265}","\x69\x5f" },
#line 622 "trad2simp_x86.in"
    {"\364d","\x69\x62" },
#line 1721 "trad2simp_x86.in"
    {"<\212","\xc1\x8b" },
#line 713 "trad2simp_x86.in"
    {"\246i","\x72\x5e" },
#line 1060 "trad2simp_x86.in"
    {"\331u","\xc9\x75" },
#line 1358 "trad2simp_x86.in"
    {"\013~","\x12\x7f" },
#line 1067 "trad2simp_x86.in"
    {"\011v","\x08\x61" },
#line 1280 "trad2simp_x86.in"
    {"<}","\xcb\x7e" },
#line 2278 "trad2simp_x86.in"
    {"\265\223","\x53\x95" },
#line 2890 "trad2simp_x86.in"
    {"3\376","\x5c\xff" },
#line 191 "trad2simp_x86.in"
    {"\016T","\x0e\x54" },
#line 1049 "trad2simp_x86.in"
    {"&u","\xcf\x82" },
#line 2511 "trad2simp_x86.in"
    {"q\230","\x85\x98" },
#line 478 "trad2simp_x86.in"
    {"\265`","\x05\x60" },
#line 1322 "trad2simp_x86.in"
    {"\270}","\xb6\x7e" },
#line 296 "trad2simp_x86.in"
    {"uX","\x18\x5c" },
#line 1775 "trad2simp_x86.in"
    {"\266\212","\x07\x8c" },
#line 490 "trad2simp_x86.in"
    {"4a","\x06\x60" },
#line 917 "trad2simp_x86.in"
    {"\011p","\xfb\x6c" },
#line 1065 "trad2simp_x86.in"
    {"\376u","\xb4\x75" },
#line 614 "trad2simp_x86.in"
    {"\340d","\x24\x63" },
#line 1338 "trad2simp_x86.in"
    {"\332}","\xbf\x7e" },
#line 586 "trad2simp_x86.in"
    {"od","\x1a\x63" },
#line 1936 "trad2simp_x86.in"
    {"\010\215","\x60\x8d" },
#line 1793 "trad2simp_x86.in"
    {"\336\212","\x1d\x8c" },
#line 1056 "trad2simp_x86.in"
    {"vu","\x53\x5f" },
#line 829 "trad2simp_x86.in"
    {"\332m","\xea\x6c" },
#line 788 "trad2simp_x86.in"
    {"\230k","\x8b\x6b" },
#line 2146 "trad2simp_x86.in"
    {"M\222","\xcb\x94" },
#line 1340 "trad2simp_x86.in"
    {"\336}","\x0e\x7f" },
#line 782 "trad2simp_x86.in"
    {"ak","\x22\x6b" },
#line 801 "trad2simp_x86.in"
    {"\314k","\xcb\x6b" },
#line 1791 "trad2simp_x86.in"
    {"\334\212","\x0d\x8c" },
#line 1055 "trad2simp_x86.in"
    {"pu","\x02\x5f" },
#line 380 "trad2simp_x86.in"
    {"M\\","\x38\x5c" },
#line 2242 "trad2simp_x86.in"
    {"M\223","\x40\x95" },
#line 479 "trad2simp_x86.in"
    {"\266`","\xf7\x95" },
#line 1704 "trad2simp_x86.in"
    {"\026\212","\xab\x8b" },
#line 2290 "trad2simp_x86.in"
    {"\336\223","\x5b\x95" },
#line 1735 "trad2simp_x86.in"
    {"b\212","\xe2\x8b" },
#line 1263 "trad2simp_x86.in"
    {"\026}","\xbc\x7e" },
#line 1745 "trad2simp_x86.in"
    {"r\212","\xe5\x8b" },
#line 903 "trad2simp_x86.in"
    {"\333o","\x99\x84" },
#line 1093 "trad2simp_x86.in"
    {"qv","\x2b\x76" },
#line 1294 "trad2simp_x86.in"
    {"b}","\xda\x7e" },
#line 192 "trad2simp_x86.in"
    {"3T","\x34\x54" },
#line 905 "trad2simp_x86.in"
    {"\337o","\x4e\x6d" },
#line 2288 "trad2simp_x86.in"
    {"\334\223","\x57\x95" },
#line 1299 "trad2simp_x86.in"
    {"r}","\x1d\x4e" },
#line 529 "trad2simp_x86.in"
    {"\366a","\xd2\x61" },
#line 2153 "trad2simp_x86.in"
    {"b\222","\xb5\x94" },
#line 1350 "trad2simp_x86.in"
    {"\362}","\x08\x7f" },
#line 383 "trad2simp_x86.in"
    {"b\\","\x61\x5c" },
#line 426 "trad2simp_x86.in"
    {"X^","\x3b\x5e" },
#line 499 "trad2simp_x86.in"
    {"_a","\x78\x60" },
#line 276 "trad2simp_x86.in"
    {"uW","\x18\x4e" },
#line 1394 "trad2simp_x86.in"
    {"b~","\x0b\x7f" },
#line 623 "trad2simp_x86.in"
    {"\367d","\xb7\x64" },
#line 587 "trad2simp_x86.in"
    {"sd","\xa0\x62" },
#line 289 "trad2simp_x86.in"
    {"KX","\x14\x83" },
#line 290 "trad2simp_x86.in"
    {"OX","\xb2\x57" },
#line 1855 "trad2simp_x86.in"
    {"\212\213","\xd8\x53" },
#line 484 "trad2simp_x86.in"
    {"\362`","\x7d\x60" },
#line 1842 "trad2simp_x86.in"
    {"Z\213","\x2d\x8c" },
#line 1851 "trad2simp_x86.in"
    {"}\213","\x89\x8a" },
#line 1846 "trad2simp_x86.in"
    {"m\213","\xc1\x6b" },
#line 1858 "trad2simp_x86.in"
    {"\222\213","\x17\x8c" },
#line 2520 "trad2simp_x86.in"
    {"\270\230","\xd4\x98" },
#line 1843 "trad2simp_x86.in"
    {"\\\213","\x31\x8c" },
#line 1859 "trad2simp_x86.in"
    {"\223\213","\xa9\x8b" },
#line 1827 "trad2simp_x86.in"
    {"+\213","\x2a\x8c" },
#line 1276 "trad2simp_x86.in"
    {"2}","\xc1\x7e" },
#line 1852 "trad2simp_x86.in"
    {"~\213","\x2b\x8c" },
#line 449 "trad2simp_x86.in"
    {"\351^","\xea\x5e" },
#line 425 "trad2simp_x86.in"
    {"W^","\x3c\x5e" },
#line 2906 "trad2simp_x86.in"
    {"_\376","\x03\xff" },
#line 1824 "trad2simp_x86.in"
    {"\035\213","\x22\x8c" },
#line 2519 "trad2simp_x86.in"
    {"\266\230","\xd3\x98" },
#line 1068 "trad2simp_x86.in"
    {"\013v","\xaf\x75" },
#line 193 "trad2simp_x86.in"
    {"6T","\x50\x54" },
#line 2494 "trad2simp_x86.in"
    {"M\230","\x9d\x98" },
#line 913 "trad2simp_x86.in"
    {"\376o","\xe4\x6e" },
#line 518 "trad2simp_x86.in"
    {"\266a","\xc6\x5f" },
#line 625 "trad2simp_x86.in"
    {"\373d","\xde\x64" },
#line 1082 "trad2simp_x86.in"
    {"_v","\x2a\x76" },
#line 496 "trad2simp_x86.in"
    {"Ma","\x20\x61" },
#line 1374 "trad2simp_x86.in"
    {"2~","\x27\x7f" },
#line 597 "trad2simp_x86.in"
    {"\243d","\xb8\x63" },
#line 1762 "trad2simp_x86.in"
    {"\232\212","\xee\x8b" },
#line 912 "trad2simp_x86.in"
    {"\374o","\xfa\x6c" },
#line 524 "trad2simp_x86.in"
    {"\336a","\x99\x84" },
#line 918 "trad2simp_x86.in"
    {"\013p","\x88\x6c" },
#line 883 "trad2simp_x86.in"
    {"po","\x83\x6e" },
#line 579 "trad2simp_x86.in"
    {"6d","\xa2\x62" },
#line 431 "trad2simp_x86.in"
    {"u^","\x00\x5f" },
#line 1834 "trad2simp_x86.in"
    {"F\213","\x3b\x56" },
#line 2170 "trad2simp_x86.in"
    {"\232\222","\xeb\x94" },
#line 1764 "trad2simp_x86.in"
    {"\240\212","\xda\x8b" },
#line 878 "trad2simp_x86.in"
    {"To","\x01\x6d" },
#line 2504 "trad2simp_x86.in"
    {"b\230","\x9f\x98" },
#line 1099 "trad2simp_x86.in"
    {"\270v","\xb2\x76" },
#line 599 "trad2simp_x86.in"
    {"\246d","\x6f\x62" },
#line 2266 "trad2simp_x86.in"
    {"\232\223","\x24\x95" },
#line 1311 "trad2simp_x86.in"
    {"\240}","\xff\x7e" },
#line 1251 "trad2simp_x86.in"
    {"\004}","\xa6\x7e" },
#line 429 "trad2simp_x86.in"
    {"k^","\x2e\x5e" },
#line 190 "trad2simp_x86.in"
    {"\013T","\xf8\x5b" },
#line 2231 "trad2simp_x86.in"
    {"/\223","\x19\x95" },
#line 2535 "trad2simp_x86.in"
    {"\362\230","\x6e\x99" },
#line 881 "trad2simp_x86.in"
    {"do","\xa6\x6d" },
#line 2172 "trad2simp_x86.in"
    {"\240\222","\xd1\x94" },
#line 2116 "trad2simp_x86.in"
    {"\004\222","\xad\x94" },
#line 1053 "trad2simp_x86.in"
    {"ku","\x3b\x75" },
#line 1372 "trad2simp_x86.in"
    {"/~","\x14\x6f" },
#line 528 "trad2simp_x86.in"
    {"\362a","\xe9\x60" },
#line 287 "trad2simp_x86.in"
    {"4X","\x3a\x57" },
#line 2213 "trad2simp_x86.in"
    {"\004\223","\x55\x5f" },
#line 2206 "trad2simp_x86.in"
    {"\360\222","\x02\x95" },
#line 1848 "trad2simp_x86.in"
    {"p\213","\xae\x8b" },
#line 1696 "trad2simp_x86.in"
    {"\003\212","\xa3\x8b" },
#line 1103 "trad2simp_x86.in"
    {"\336v","\xcf\x76" },
#line 2296 "trad2simp_x86.in"
    {"\360\223","\x5a\x95" },
#line 1823 "trad2simp_x86.in"
    {"\033\213","\xb2\x8b" },
#line 1450 "trad2simp_x86.in"
    {"}\200","\x2c\x54" },
#line 440 "trad2simp_x86.in"
    {"\310^","\xa6\x53" },
#line 1838 "trad2simp_x86.in"
    {"T\213","\xb0\x64" },
#line 2909 "trad2simp_x86.in"
    {"b\376","\x0b\xff" },
#line 279 "trad2simp_x86.in"
    {"\367W","\x67\x62" },
#line 1938 "trad2simp_x86.in"
    {"\013\215","\x5d\x8d" },
#line 445 "trad2simp_x86.in"
    {"\340^","\x82\x53" },
#line 1102 "trad2simp_x86.in"
    {"\334v","\xd7\x76" },
#line 585 "trad2simp_x86.in"
    {"_d","\x02\x64" },
#line 2115 "trad2simp_x86.in"
    {"\003\222","\x98\x94" },
#line 2487 "trad2simp_x86.in"
    {"2\230","\x8b\x98" },
#line 1451 "trad2simp_x86.in"
    {"~\200","\x4b\x80" },
#line 1061 "trad2simp_x86.in"
    {"\340u","\x78\x91" },
#line 52 "trad2simp_x86.in"
    {"TO","\x60\x53" },
#line 1278 "trad2simp_x86.in"
    {"9}","\xcd\x7e" },
#line 1324 "trad2simp_x86.in"
    {"\272}","\xee\x7e" },
#line 1084 "trad2simp_x86.in"
    {"bv","\xd2\x75" },
#line 1271 "trad2simp_x86.in"
    {"!}","\xba\x7e" },
#line 1094 "trad2simp_x86.in"
    {"rv","\x6b\x76" },
#line 2135 "trad2simp_x86.in"
    {"9\222","\xcd\x94" },
#line 2121 "trad2simp_x86.in"
    {"\021\222","\xa3\x94" },
#line 443 "trad2simp_x86.in"
    {"\335^","\xae\x53" },
#line 309 "trad2simp_x86.in"
    {"\330X","\x92\x57" },
#line 1840 "trad2simp_x86.in"
    {"X\213","\xc6\x8b" },
#line 438 "trad2simp_x86.in"
    {"\302^","\xa2\x53" },
#line 2347 "trad2simp_x86.in"
    {"}\224","\xbb\x94" },
#line 1380 "trad2simp_x86.in"
    {"9~","\x25\x7f" },
#line 2340 "trad2simp_x86.in"
    {"m\224","\x67\x95" },
#line 1050 "trad2simp_x86.in"
    {"*u","\xd2\x89" },
#line 1360 "trad2simp_x86.in"
    {"\021~","\x23\x7f" },
#line 1254 "trad2simp_x86.in"
    {"\007}","\xa5\x7e" },
#line 1760 "trad2simp_x86.in"
    {"\225\212","\xde\x8b" },
#line 2317 "trad2simp_x86.in"
    {"+\224","\x4c\x95" },
#line 2335 "trad2simp_x86.in"
    {"`\224","\xc4\x94" },
#line 2348 "trad2simp_x86.in"
    {"~\224","\xae\x92" },
#line 875 "trad2simp_x86.in"
    {"?o","\x46\x6d" },
#line 613 "trad2simp_x86.in"
    {"\332d","\x6e\x63" },
#line 513 "trad2simp_x86.in"
    {"\232a","\xee\x60" },
#line 2311 "trad2simp_x86.in"
    {"\035\224","\x62\x95" },
#line 1022 "trad2simp_x86.in"
    {"\376s","\xb0\x73" },
#line 373 "trad2simp_x86.in"
    {"\007\\","\x06\x5c" },
#line 2215 "trad2simp_x86.in"
    {"\007\223","\x2b\x95" },
#line 1695 "trad2simp_x86.in"
    {"\002\212","\xa2\x8b" },
#line 1455 "trad2simp_x86.in"
    {"\307\200","\xba\x80" },
#line 421 "trad2simp_x86.in"
    {"3^","\x10\x5e" },
#line 1250 "trad2simp_x86.in"
    {"\002}","\xa3\x7e" },
#line 2188 "trad2simp_x86.in"
    {"\301\222","\xdd\x94" },
#line 1447 "trad2simp_x86.in"
    {"v\200","\x42\x80" },
#line 964 "trad2simp_x86.in"
    {"\322q","\xe7\x70" },
#line 901 "trad2simp_x86.in"
    {"\325o","\x7f\x6e" },
#line 1799 "trad2simp_x86.in"
    {"\353\212","\x0f\x8c" },
#line 1008 "trad2simp_x86.in"
    {"ps","\xde\x72" },
#line 955 "trad2simp_x86.in"
    {"\222q","\x67\x83" },
#line 2168 "trad2simp_x86.in"
    {"\226\222","\xe2\x94" },
#line 967 "trad2simp_x86.in"
    {"\337q","\x25\x84" },
#line 573 "trad2simp_x86.in"
    {"\026d","\x47\x64" },
#line 1443 "trad2simp_x86.in"
    {"p\200","\x6a\x80" },
#line 2314 "trad2simp_x86.in"
    {"&\224","\x0e\x95" },
#line 929 "trad2simp_x86.in"
    {"2p","\x4b\x6f" },
#line 2263 "trad2simp_x86.in"
    {"\226\223","\x01\x95" },
#line 1943 "trad2simp_x86.in"
    {"\026\215","\x4e\x8d" },
#line 2307 "trad2simp_x86.in"
    {"\023\224","\x66\x95" },
#line 311 "trad2simp_x86.in"
    {"\332X","\x86\x57" },
#line 2465 "trad2simp_x86.in"
    {"\003\230","\x77\x98" },
#line 1327 "trad2simp_x86.in"
    {"\276}","\xeb\x7e" },
#line 1413 "trad2simp_x86.in"
    {"\226~","\xa4\x7e" },
#line 621 "trad2simp_x86.in"
    {"\362d","\xb7\x63" },
#line 1097 "trad2simp_x86.in"
    {"\232v","\x91\x76" },
#line 953 "trad2simp_x86.in"
    {"iq","\xe6\x70" },
#line 312 "trad2simp_x86.in"
    {"\336X","\x4f\x57" },
#line 269 "trad2simp_x86.in"
    {"\013W","\xfd\x56" },
#line 1768 "trad2simp_x86.in"
    {"\245\212","\xf0\x8b" },
#line 2490 "trad2simp_x86.in"
    {"9\230","\x93\x98" },
#line 2521 "trad2simp_x86.in"
    {"\272\230","\x6c\x62" },
#line 787 "trad2simp_x86.in"
    {"\200k","\x2d\x59" },
#line 965 "trad2simp_x86.in"
    {"\331q","\xeb\x70" },
#line 2475 "trad2simp_x86.in"
    {"\021\230","\x7d\x98" },
#line 2481 "trad2simp_x86.in"
    {"!\230","\x89\x98" },
#line 882 "trad2simp_x86.in"
    {"oo","\x54\x6d" },
#line 54 "trad2simp_x86.in"
    {"uO","\x76\x5e" },
#line 1845 "trad2simp_x86.in"
    {"k\213","\x35\x8c" },
#line 2174 "trad2simp_x86.in"
    {"\245\222","\xf1\x94" },
#line 283 "trad2simp_x86.in"
    {"\026X","\xb4\x57" },
#line 2341 "trad2simp_x86.in"
    {"p\224","\xa5\x94" },
#line 422 "trad2simp_x86.in"
    {"6^","\x26\x5e" },
#line 294 "trad2simp_x86.in"
    {"bX","\x5e\x57" },
#line 1705 "trad2simp_x86.in"
    {"\027\212","\x58\x62" },
#line 1795 "trad2simp_x86.in"
    {"\342\212","\xe8\x8b" },
#line 2332 "trad2simp_x86.in"
    {"T\224","\x72\x95" },
#line 1728 "trad2simp_x86.in"
    {"U\212","\xc4\x8b" },
#line 1264 "trad2simp_x86.in"
    {"\027}","\xb1\x7e" },
#line 2468 "trad2simp_x86.in"
    {"\007\230","\x78\x98" },
#line 974 "trad2simp_x86.in"
    {"\376q","\x18\x71" },
#line 1318 "trad2simp_x86.in"
    {"\261}","\xb2\x7e" },
#line 1289 "trad2simp_x86.in"
    {"U}","\xdd\x7e" },
#line 1773 "trad2simp_x86.in"
    {"\260\212","\x01\x8c" },
#line 2337 "trad2simp_x86.in"
    {"d\224","\x28\x52" },
#line 2181 "trad2simp_x86.in"
    {"\261\222","\xde\x94" },
#line 2148 "trad2simp_x86.in"
    {"U\222","\xb7\x94" },
#line 1317 "trad2simp_x86.in"
    {"\260}","\xfe\x7e" },
#line 2293 "trad2simp_x86.in"
    {"\342\223","\x56\x95" },
#line 1847 "trad2simp_x86.in"
    {"o\213","\xd1\x8b" },
#line 973 "trad2simp_x86.in"
    {"\374q","\xec\x70" },
#line 1816 "trad2simp_x86.in"
    {"\016\213","\x1c\x8c" },
#line 1749 "trad2simp_x86.in"
    {"{\212","\xaf\x54" },
#line 1753 "trad2simp_x86.in"
    {"\205\212","\xdb\x8b" },
#line 1362 "trad2simp_x86.in"
    {"\027~","\x1e\x7f" },
#line 1396 "trad2simp_x86.in"
    {"j~","\xd8\x7e" },
#line 2464 "trad2simp_x86.in"
    {"\002\230","\x76\x98" },
#line 1100 "trad2simp_x86.in"
    {"\272v","\xb1\x76" },
#line 1389 "trad2simp_x86.in"
    {"U~","\x2e\x7f" },
#line 62 "trad2simp_x86.in"
    {"\340O","\xa0\x4f" },
#line 2276 "trad2simp_x86.in"
    {"\260\223","\x52\x95" },
#line 1072 "trad2simp_x86.in"
    {"!v","\xae\x75" },
#line 594 "trad2simp_x86.in"
    {"\232d","\xc8\x62" },
#line 2161 "trad2simp_x86.in"
    {"{\222","\xec\x94" },
#line 2165 "trad2simp_x86.in"
    {"\205\222","\xdc\x94" },
#line 578 "trad2simp_x86.in"
    {"/d","\x8f\x63" },
#line 2532 "trad2simp_x86.in"
    {"\353\230","\x6b\x99" },
#line 427 "trad2simp_x86.in"
    {"_^","\x1c\x5e" },
#line 1837 "trad2simp_x86.in"
    {"O\213","\xa5\x8b" },
#line 886 "trad2simp_x86.in"
    {"\200o","\xa9\x6d" },
#line 277 "trad2simp_x86.in"
    {"\334W","\xce\x91" },
#line 1706 "trad2simp_x86.in"
    {"\030\212","\xb0\x8b" },
#line 477 "trad2simp_x86.in"
    {"\205`","\xa6\x60" },
#line 943 "trad2simp_x86.in"
    {"\272p","\x3a\x4e" },
#line 1010 "trad2simp_x86.in"
    {"us","\x0e\x73" },
#line 274 "trad2simp_x86.in"
    {"\026W","\xfe\x56" },
#line 1265 "trad2simp_x86.in"
    {"\030}","\xae\x7e" },
#line 1272 "trad2simp_x86.in"
    {",}","\x37\x43" },
#line 1441 "trad2simp_x86.in"
    {"^\200","\xfb\x95" },
#line 1934 "trad2simp_x86.in"
    {"\004\215","\x3d\x8d" },
#line 1446 "trad2simp_x86.in"
    {"u\200","\x69\x80" },
#line 61 "trad2simp_x86.in"
    {"\302O","\xfb\x7c" },
#line 619 "trad2simp_x86.in"
    {"\360d","\xe7\x62" },
#line 890 "trad2simp_x86.in"
    {"\224o","\x69\x6d" },
#line 802 "trad2simp_x86.in"
    {"\330k","\xd7\x6b" },
#line 1006 "trad2simp_x86.in"
    {"ks","\x03\x73" },
#line 2220 "trad2simp_x86.in"
    {"\030\223","\x24\x95" },
#line 463 "trad2simp_x86.in"
    {"Z_","\x47\x6c" },
#line 2949 "trad2simp_x86.in"
    {"r^\262~","\x7e\x4e\xb2\x7e" },
#line 285 "trad2simp_x86.in"
    {"/X","\x27\x5c" },
#line 1829 "trad2simp_x86.in"
    {"3\213","\xb4\x8b" },
#line 781 "trad2simp_x86.in"
    {"_k","\x24\x6b" },
#line 1066 "trad2simp_x86.in"
    {"\002v","\xd6\x75" },
#line 1853 "trad2simp_x86.in"
    {"\200\213","\xfb\x8b" },
#line 2326 "trad2simp_x86.in"
    {"?\224","\x71\x95" },
#line 442 "trad2simp_x86.in"
    {"\332^","\xa8\x53" },
#line 2478 "trad2simp_x86.in"
    {"\027\230","\x87\x98" },
#line 2528 "trad2simp_x86.in"
    {"\342\230","\x65\x99" },
#line 2334 "trad2simp_x86.in"
    {"^\224","\x74\x95" },
#line 2517 "trad2simp_x86.in"
    {"\261\230","\xf0\x53" },
#line 2343 "trad2simp_x86.in"
    {"u\224","\x50\x7f" },
#line 1698 "trad2simp_x86.in"
    {"\012\212","\xaf\x8b" },
#line 501 "trad2simp_x86.in"
    {"ja","\x04\x60" },
#line 2114 "trad2simp_x86.in"
    {"\001\222","\xab\x94" },
#line 1266 "trad2simp_x86.in"
    {"\031}","\xb8\x7e" },
#line 894 "trad2simp_x86.in"
    {"\246o","\xea\x6e" },
#line 1442 "trad2simp_x86.in"
    {"o\200","\x54\x80" },
#line 2212 "trad2simp_x86.in"
    {"\001\223","\x1e\x95" },
#line 1965 "trad2simp_x86.in"
    {"\212\216","\x0c\x8e" },
#line 1982 "trad2simp_x86.in"
    {"\322\216","\x69\x8f" },
#line 1752 "trad2simp_x86.in"
    {"\204\212","\xd4\x8b" },
#line 1984 "trad2simp_x86.in"
    {"\333\216","\x6d\x8f" },
#line 2221 "trad2simp_x86.in"
    {"\031\223","\x31\x95" },
#line 1969 "trad2simp_x86.in"
    {"\222\216","\xde\x8d" },
#line 1985 "trad2simp_x86.in"
    {"\337\216","\x6f\x8f" },
#line 458 "trad2simp_x86.in"
    {"F_","\x2b\x52" },
#line 1970 "trad2simp_x86.in"
    {"\223\216","\x2c\x8e" },
#line 1953 "trad2simp_x86.in"
    {"+\216","\xb0\x78" },
#line 1959 "trad2simp_x86.in"
    {"`\216","\xd6\x8d" },
#line 1052 "trad2simp_x86.in"
    {"bu","\xd5\x6b" },
#line 1357 "trad2simp_x86.in"
    {"\012~","\x22\x7f" },
#line 2915 "trad2simp_x86.in"
    {"j\376","\x05\xff" },
#line 902 "trad2simp_x86.in"
    {"\330o","\xde\x6c" },
#line 2897 "trad2simp_x86.in"
    {"U\376","\x1a\xff" },
#line 1945 "trad2simp_x86.in"
    {"\225\215","\x76\x8d" },
#line 1062 "trad2simp_x86.in"
    {"\362u","\xbb\x9e" },
#line 2258 "trad2simp_x86.in"
    {"\204\223","\x3f\x95" },
#line 968 "trad2simp_x86.in"
    {"\346q","\x7f\x70" },
#line 606 "trad2simp_x86.in"
    {"\301d","\xe5\x62" },
#line 971 "trad2simp_x86.in"
    {"\364q","\xe9\x70" },
#line 2479 "trad2simp_x86.in"
    {"\030\230","\x86\x98" },
#line 1269 "trad2simp_x86.in"
    {"\034}","\xad\x7e" },
#line 880 "trad2simp_x86.in"
    {"_o","\x04\x82" },
#line 2137 "trad2simp_x86.in"
    {"=\222","\xb8\x94" },
#line 1437 "trad2simp_x86.in"
    {"$\200","\xc9\x85" },
#line 775 "trad2simp_x86.in"
    {"\026k","\x84\x69" },
#line 1675 "trad2simp_x86.in"
    {"\223\211","\xc5\x89" },
#line 1664 "trad2simp_x86.in"
    {"`\211","\xc6\x88" },
#line 1670 "trad2simp_x86.in"
    {"~\211","\x7f\x89" },
#line 1098 "trad2simp_x86.in"
    {"\260v","\xb1\x75" },
#line 783 "trad2simp_x86.in"
    {"rk","\x81\x5c" },
#line 1439 "trad2simp_x86.in"
    {".\200","\x22\x80" },
#line 1381 "trad2simp_x86.in"
    {"=~","\x3b\x60" },
#line 1016 "trad2simp_x86.in"
    {"\200s","\x21\x73" },
#line 1980 "trad2simp_x86.in"
    {"\314\216","\x68\x8f" },
#line 1445 "trad2simp_x86.in"
    {"s\200","\x38\x80" },
#line 604 "trad2simp_x86.in"
    {"\276d","\x1d\x63" },
#line 934 "trad2simp_x86.in"
    {"Up","\x13\x6f" },
#line 961 "trad2simp_x86.in"
    {"\310q","\x6f\x70" },
#line 1712 "trad2simp_x86.in"
    {"%\212","\xb7\x8b" },
#line 1994 "trad2simp_x86.in"
    {"\376\216","\x7c\x8f" },
#line 942 "trad2simp_x86.in"
    {"\260p","\xae\x70" },
#line 1844 "trad2simp_x86.in"
    {"_\213","\x6a\x56" },
#line 2463 "trad2simp_x86.in"
    {"\001\230","\x75\x98" },
#line 2303 "trad2simp_x86.in"
    {"\011\224","\xe3\x94" },
#line 598 "trad2simp_x86.in"
    {"\245d","\xe8\x62" },
#line 1677 "trad2simp_x86.in"
    {"\230\211","\xc7\x89" },
#line 1993 "trad2simp_x86.in"
    {"\374\216","\x76\x8f" },
#line 2126 "trad2simp_x86.in"
    {"%\222","\xac\x94" },
#line 1990 "trad2simp_x86.in"
    {"\371\216","\x75\x8f" },
#line 2470 "trad2simp_x86.in"
    {"\012\230","\x7c\x98" },
#line 2318 "trad2simp_x86.in"
    {".\224","\x70\x95" },
#line 1831 "trad2simp_x86.in"
    {"<\213","\x7c\x54" },
#line 1767 "trad2simp_x86.in"
    {"\244\212","\xef\x8b" },
#line 2321 "trad2simp_x86.in"
    {"3\224","\x6d\x95" },
#line 1857 "trad2simp_x86.in"
    {"\216\213","\xe0\x96" },
#line 305 "trad2simp_x86.in"
    {"\276X","\xa6\x57" },
#line 574 "trad2simp_x86.in"
    {"\027d","\x63\x63" },
#line 904 "trad2simp_x86.in"
    {"\334o","\x55\x6d" },
#line 474 "trad2simp_x86.in"
    {"\271_","\x7b\x5f" },
#line 997 "trad2simp_x86.in"
    {"6s","\xb9\x72" },
#line 2795 "trad2simp_x86.in"
    {"\212\235","\x52\x9e" },
#line 921 "trad2simp_x86.in"
    {"\030p","\xf8\x6c" },
#line 1961 "trad2simp_x86.in"
    {"d\216","\x2a\x8e" },
#line 1967 "trad2simp_x86.in"
    {"\215\216","\xc3\x8d" },
#line 1756 "trad2simp_x86.in"
    {"\214\212","\xd7\x5f" },
#line 268 "trad2simp_x86.in"
    {"\007W","\xf5\x56" },
#line 2782 "trad2simp_x86.in"
    {"\\\235","\x48\x9e" },
#line 2797 "trad2simp_x86.in"
    {"\223\235","\x4b\x9e" },
#line 2815 "trad2simp_x86.in"
    {"\323\235","\x67\x9e" },
#line 2784 "trad2simp_x86.in"
    {"`\235","\x44\x9e" },
#line 2480 "trad2simp_x86.in"
    {"\034\230","\x8c\x98" },
#line 987 "trad2simp_x86.in"
    {"}r","\x75\x72" },
#line 2764 "trad2simp_x86.in"
    {"\035\235","\x32\x9e" },
#line 589 "trad2simp_x86.in"
    {"{d","\xba\x63" },
#line 58 "trad2simp_x86.in"
    {"\266O","\xa3\x4f" },
#line 2820 "trad2simp_x86.in"
    {"\345\235","\x36\x9e" },
#line 488 "trad2simp_x86.in"
    {"\034a","\xec\x60" },
#line 985 "trad2simp_x86.in"
    {"`r","\x83\x5b" },
#line 2261 "trad2simp_x86.in"
    {"\214\223","\x70\x95" },
#line 314 "trad2simp_x86.in"
    {"\342X","\x5c\x57" },
#line 1665 "trad2simp_x86.in"
    {"d\211","\x34\x89" },
#line 771 "trad2simp_x86.in"
    {"\004k","\x0f\x68" },
#line 1408 "trad2simp_x86.in"
    {"\214~","\xed\x7e" },
#line 31 "trad2simp_x86.in"
    {"s4","\x47\x34" },
#line 2818 "trad2simp_x86.in"
    {"\331\235","\x37\x9e" },
#line 1819 "trad2simp_x86.in"
    {"\026\213","\x21\x8c" },
#line 914 "trad2simp_x86.in"
    {"\001p","\x3e\x6f" },
#line 2323 "trad2simp_x86.in"
    {"6\224","\x6e\x95" },
#line 976 "trad2simp_x86.in"
    {"\015r","\xc1\x70" },
#line 2799 "trad2simp_x86.in"
    {"\230\235","\x55\x9e" },
#line 2768 "trad2simp_x86.in"
    {"&\235","\x2f\x9e" },
#line 872 "trad2simp_x86.in"
    {"2o","\xa8\x6d" },
#line 2785 "trad2simp_x86.in"
    {"a\235","\x49\x9e" },
#line 1783 "trad2simp_x86.in"
    {"\313\212","\xf7\x8b" },
#line 465 "trad2simp_x86.in"
    {"k_","\xd5\x96" },
#line 972 "trad2simp_x86.in"
    {"\373q","\x8f\x71" },
#line 342 "trad2simp_x86.in"
    {"\313Z","\x85\x88" },
#line 1332 "trad2simp_x86.in"
    {"\313}","\xef\x7e" },
#line 1726 "trad2simp_x86.in"
    {"R\212","\xd2\x8b" },
#line 983 "trad2simp_x86.in"
    {"Fr","\x99\x58" },
#line 595 "trad2simp_x86.in"
    {"\237d","\x22\x63" },
#line 2948 "trad2simp_x86.in"
    {"r^\242~","\x7e\x4e\x05\x7d" },
#line 796 "trad2simp_x86.in"
    {"\272k","\x40\x67" },
#line 2828 "trad2simp_x86.in"
    {"\371\235","\x70\x9e" },
#line 2304 "trad2simp_x86.in"
    {"\013\224","\xf4\x94" },
#line 2790 "trad2simp_x86.in"
    {"p\235","\xd5\x96" },
#line 437 "trad2simp_x86.in"
    {"\301^","\x95\x53" },
#line 2898 "trad2simp_x86.in"
    {"V\376","\x1f\xff" },
#line 514 "trad2simp_x86.in"
    {"\244a","\x24\x61" },
#line 2763 "trad2simp_x86.in"
    {"\033\235","\x33\x9e" },
#line 1725 "trad2simp_x86.in"
    {"P\212","\xc8\x8b" },
#line 1387 "trad2simp_x86.in"
    {"R~","\x2f\x7f" },
#line 994 "trad2simp_x86.in"
    {"\371r","\xed\x72" },
#line 1288 "trad2simp_x86.in"
    {"P}","\xd3\x7e" },
#line 892 "trad2simp_x86.in"
    {"\240o","\x11\x6e" },
#line 1282 "trad2simp_x86.in"
    {"@}","\xcc\x7e" },
#line 1937 "trad2simp_x86.in"
    {"\012\215","\x5e\x8d" },
#line 978 "trad2simp_x86.in"
    {"\033r","\xc2\x70" },
#line 2808 "trad2simp_x86.in"
    {"\264\235","\x64\x9e" },
#line 2140 "trad2simp_x86.in"
    {"@\222","\xbe\x94" },
#line 1309 "trad2simp_x86.in"
    {"\234}","\xfc\x7e" },
#line 909 "trad2simp_x86.in"
    {"\360o","\x4d\x6f" },
#line 1976 "trad2simp_x86.in"
    {"\252\216","\x8f\x8e" },
#line 718 "trad2simp_x86.in"
    {"\313i","\x84\x67" },
#line 550 "trad2simp_x86.in"
    {"\264b","\xf3\x66" },
#line 2235 "trad2simp_x86.in"
    {"@\223","\x1d\x95" },
#line 2171 "trad2simp_x86.in"
    {"\234\222","\x54\x88" },
#line 1862 "trad2simp_x86.in"
    {"\232\213","\x5e\x8d" },
#line 390 "trad2simp_x86.in"
    {"\375\\","\xe1\x5c" },
#line 2301 "trad2simp_x86.in"
    {"\375\223","\x08\x95" },
#line 1692 "trad2simp_x86.in"
    {"\364\211","\xde\x89" },
#line 1009 "trad2simp_x86.in"
    {"rs","\xb7\x83" },
#line 346 "trad2simp_x86.in"
    {"\377Z","\x73\x5a" },
#line 1415 "trad2simp_x86.in"
    {"\234~","\x06\x7f" },
#line 57 "trad2simp_x86.in"
    {"\232O","\x87\x5f" },
#line 282 "trad2simp_x86.in"
    {"\012X","\xa9\x57" },
#line 1444 "trad2simp_x86.in"
    {"r\200","\xf0\x58" },
#line 1813 "trad2simp_x86.in"
    {"\004\213","\x8a\x8a" },
#line 984 "trad2simp_x86.in"
    {"Xr","\x4d\x72" },
#line 1681 "trad2simp_x86.in"
    {"\252\211","\xb2\x4e" },
#line 275 "trad2simp_x86.in"
    {"\030W","\xe2\x56" },
#line 455 "trad2simp_x86.in"
    {"3_","\x2a\x5f" },
#line 1302 "trad2simp_x86.in"
    {"\201}","\xd1\x7e" },
#line 979 "trad2simp_x86.in"
    {"-r","\x89\x4e" },
#line 1719 "trad2simp_x86.in"
    {":\212","\xca\x8b" },
#line 1966 "trad2simp_x86.in"
    {"\213\216","\xfb\x8d" },
#line 941 "trad2simp_x86.in"
    {"\244p","\x67\x71" },
#line 447 "trad2simp_x86.in"
    {"\342^","\x9f\x5e" },
#line 1755 "trad2simp_x86.in"
    {"\207\212","\x38\x59" },
#line 1279 "trad2simp_x86.in"
    {":}","\xc0\x7e" },
#line 2497 "trad2simp_x86.in"
    {"R\230","\x99\x98" },
#line 2645 "trad2simp_x86.in"
    {"\322\232","\x0f\x81" },
#line 2636 "trad2simp_x86.in"
    {"Z\232","\xca\x60" },
#line 1668 "trad2simp_x86.in"
    {"o\211","\x6c\x88" },
#line 1656 "trad2simp_x86.in"
    {"\016\211","\x96\x88" },
#line 2136 "trad2simp_x86.in"
    {":\222","\xb0\x94" },
#line 826 "trad2simp_x86.in"
    {"\207m","\xfe\x6c" },
#line 2342 "trad2simp_x86.in"
    {"r\224","\x76\x95" },
#line 2617 "trad2simp_x86.in"
    {"+\232","\x9e\x9a" },
#line 576 "trad2simp_x86.in"
    {"%d","\x76\x63" },
#line 2775 "trad2simp_x86.in"
    {"?\235","\x3d\x9e" },
#line 2259 "trad2simp_x86.in"
    {"\207\223","\x45\x95" },
#line 1830 "trad2simp_x86.in"
    {"9\213","\x28\x8c" },
#line 1672 "trad2simp_x86.in"
    {"\213\211","\xc1\x89" },
#line 1691 "trad2simp_x86.in"
    {"\335\211","\xb5\x62" },
#line 899 "trad2simp_x86.in"
    {"\301o","\x4a\x6d" },
#line 966 "trad2simp_x86.in"
    {"\334q","\x16\x71" },
#line 2611 "trad2simp_x86.in"
    {"\015\232","\x92\x9a" },
#line 545 "trad2simp_x86.in"
    {"^b","\x4d\x63" },
#line 2821 "trad2simp_x86.in"
    {"\346\235","\x6a\x9e" },
#line 2538 "trad2simp_x86.in"
    {"\375\230","\x71\x99" },
#line 2895 "trad2simp_x86.in"
    {"R\376","\x0e\xff" },
#line 2826 "trad2simp_x86.in"
    {"\364\235","\x47\x9e" },
#line 951 "trad2simp_x86.in"
    {"bq","\x15\x83" },
#line 907 "trad2simp_x86.in"
    {"\353o","\xe5\x6e" },
#line 2320 "trad2simp_x86.in"
    {"2\224","\x6f\x95" },
#line 1080 "trad2simp_x86.in"
    {"Rv","\x08\x61" },
#line 2804 "trad2simp_x86.in"
    {"\252\235","\x17\x4d" },
#line 1860 "trad2simp_x86.in"
    {"\225\213","\x30\x8c" },
#line 898 "trad2simp_x86.in"
    {"\276o","\xe0\x3c" },
#line 2540 "trad2simp_x86.in"
    {"\377\230","\x73\x99" },
#line 1658 "trad2simp_x86.in"
    {"3\211","\xe2\x88" },
#line 2893 "trad2simp_x86.in"
    {"P\376","\x0c\xff" },
#line 2892 "trad2simp_x86.in"
    {"@\376","\x28\x22" },
#line 432 "trad2simp_x86.in"
    {"w^","\x76\x5e" },
#line 1992 "trad2simp_x86.in"
    {"\373\216","\x72\x8f" },
#line 1812 "trad2simp_x86.in"
    {"\002\213","\x13\x8c" },
#line 2759 "trad2simp_x86.in"
    {"\010\235","\xc1\x96" },
#line 1861 "trad2simp_x86.in"
    {"\226\213","\x36\x8c" },
#line 2789 "trad2simp_x86.in"
    {"o\235","\x4e\x9e" },
#line 60 "trad2simp_x86.in"
    {"\301O","\xe3\x4f" },
#line 1955 "trad2simp_x86.in"
    {"4\216","\x0a\x8e" },
#line 56 "trad2simp_x86.in"
    {"\226O","\xd1\x4e" },
#line 1763 "trad2simp_x86.in"
    {"\236\212","\xed\x8b" },
#line 2319 "trad2simp_x86.in"
    {"/\224","\x83\x49" },
#line 1310 "trad2simp_x86.in"
    {"\236}","\x0d\x7f" },
#line 473 "trad2simp_x86.in"
    {"\265_","\x81\x5f" },
#line 1975 "trad2simp_x86.in"
    {"\246\216","\x9c\x8e" },
#line 2942 "trad2simp_x86.in"
    {"r^\333v","\x72\x5e\xdb\x76" },
#line 1801 "trad2simp_x86.in"
    {"\356\212","\x18\x8c" },
#line 897 "trad2simp_x86.in"
    {"\261o","\xc0\x6d" },
#line 784 "trad2simp_x86.in"
    {"wk","\x86\x53" },
#line 2813 "trad2simp_x86.in"
    {"\302\235","\x5e\x9e" },
#line 2640 "trad2simp_x86.in"
    {"d\232","\xa7\x9a" },
#line 610 "trad2simp_x86.in"
    {"\313d","\x21\x63" },
#line 1435 "trad2simp_x86.in"
    {"\021\200","\xef\x7a" },
#line 1436 "trad2simp_x86.in"
    {"!\200","\xa9\x52" },
#line 2204 "trad2simp_x86.in"
    {"\356\222","\xd6\x94" },
#line 2760 "trad2simp_x86.in"
    {"\011\235","\x26\x9e" },
#line 537 "trad2simp_x86.in"
    {"\011b","\xba\x94" },
#line 1680 "trad2simp_x86.in"
    {"\246\211","\xce\x89" },
#line 1096 "trad2simp_x86.in"
    {"\201v","\x82\x76" },
#line 2302 "trad2simp_x86.in"
    {"\003\224","\xd9\x94" },
#line 1758 "trad2simp_x86.in"
    {"\221\212","\xf3\x8b" },
#line 1820 "trad2simp_x86.in"
    {"\027\213","\x24\x8c" },
#line 772 "trad2simp_x86.in"
    {"\012k","\x43\x67" },
#line 1958 "trad2simp_x86.in"
    {"_\216","\xf9\x8f" },
#line 2618 "trad2simp_x86.in"
    {"-\232","\x98\x9a" },
#line 1074 "trad2simp_x86.in"
    {":v","\x18\x76" },
#line 1307 "trad2simp_x86.in"
    {"\221}","\x46\x63" },
#line 2989 "trad2simp_x86.in"
    {"m\205r^","\x27\x84\x7e\x4e" },
#line 510 "trad2simp_x86.in"
    {"\220a","\x1c\x60" },
#line 581 "trad2simp_x86.in"
    {"@d","\x42\x63" },
#line 2166 "trad2simp_x86.in"
    {"\221\222","\xe3\x94" },
#line 53 "trad2simp_x86.in"
    {"jO","\x8a\x5f" },
#line 871 "trad2simp_x86.in"
    {",o","\x0d\x6e" },
#line 1693 "trad2simp_x86.in"
    {"\366\211","\xef\x89" },
#line 291 "trad2simp_x86.in"
    {"RX","\xd8\x57" },
#line 2635 "trad2simp_x86.in"
    {"W\232","\x8c\x9a" },
#line 1854 "trad2simp_x86.in"
    {"\205\213","\x09\x8c" },
#line 549 "trad2simp_x86.in"
    {"\224b","\xb1\x62" },
#line 778 "trad2simp_x86.in"
    {"=k","\xa6\x94" },
#line 884 "trad2simp_x86.in"
    {"wo","\xd7\x6e" },
#line 1343 "trad2simp_x86.in"
    {"\343}","\x18\x7f" },
#line 1964 "trad2simp_x86.in"
    {"\211\216","\xb8\x8d" },
#line 419 "trad2simp_x86.in"
    {"%^","\x05\x5e" },
#line 2197 "trad2simp_x86.in"
    {"\343\222","\xd8\x94" },
#line 2772 "trad2simp_x86.in"
    {"4\235","\x3b\x9e" },
#line 546 "trad2simp_x86.in"
    {"qb","\xd2\x63" },
#line 946 "trad2simp_x86.in"
    {"!q","\xe0\x65" },
#line 1828 "trad2simp_x86.in"
    {",\213","\x2c\x8c" },
#line 1673 "trad2simp_x86.in"
    {"\216\211","\xc3\x89" },
#line 866 "trad2simp_x86.in"
    {"\001o","\x14\x6e" },
#line 318 "trad2simp_x86.in"
    {"\375X","\xff\x5b" },
#line 300 "trad2simp_x86.in"
    {"\234X","\x60\x57" },
#line 543 "trad2simp_x86.in"
    {"6b","\x37\x62" },
#line 2363 "trad2simp_x86.in"
    {"\222\225","\xf2\x95" },
#line 2647 "trad2simp_x86.in"
    {"\325\232","\xcc\x9a" },
#line 867 "trad2simp_x86.in"
    {"\012o","\x87\x6e" },
#line 2364 "trad2simp_x86.in"
    {"\223\225","\xf4\x95" },
#line 2392 "trad2simp_x86.in"
    {"\323\225","\xff\x95" },
#line 1778 "trad2simp_x86.in"
    {"\277\212","\x03\x8c" },
#line 1850 "trad2simp_x86.in"
    {"w\213","\xa4\x62" },
#line 2644 "trad2simp_x86.in"
    {"\317\232","\xc5\x9a" },
#line 1803 "trad2simp_x86.in"
    {"\363\212","\x19\x8c" },
#line 341 "trad2simp_x86.in"
    {"\277Z","\x27\x61" },
#line 1328 "trad2simp_x86.in"
    {"\277}","\xf5\x7e" },
#line 2400 "trad2simp_x86.in"
    {"\345\225","\xfc\x95" },
#line 1005 "trad2simp_x86.in"
    {"js","\xef\x72" },
#line 1988 "trad2simp_x86.in"
    {"\362\216","\x71\x8f" },
#line 959 "trad2simp_x86.in"
    {"\301q","\xe8\x70" },
#line 1811 "trad2simp_x86.in"
    {"\001\213","\x12\x8c" },
#line 2279 "trad2simp_x86.in"
    {"\277\223","\x4e\x95" },
#line 2415 "trad2simp_x86.in"
    {"\212\226","\x1f\x96" },
#line 2412 "trad2simp_x86.in"
    {"}\226","\x33\x96" },
#line 2429 "trad2simp_x86.in"
    {"\333\226","\xcf\x96" },
#line 1821 "trad2simp_x86.in"
    {"\031\213","\x26\x8c" },
#line 511 "trad2simp_x86.in"
    {"\221a","\xed\x51" },
#line 790 "trad2simp_x86.in"
    {"\244k","\x87\x6b" },
#line 1815 "trad2simp_x86.in"
    {"\012\213","\x0e\x8c" },
#line 2366 "trad2simp_x86.in"
    {"\230\225","\xf8\x95" },
#line 2612 "trad2simp_x86.in"
    {"\016\232","\x91\x9a" },
#line 1014 "trad2simp_x86.in"
    {"{s","\x2e\x73" },
#line 1017 "trad2simp_x86.in"
    {"\205s","\x99\x59" },
#line 2390 "trad2simp_x86.in"
    {"\314\225","\x11\x96" },
#line 1669 "trad2simp_x86.in"
    {"r\211","\xad\x88" },
#line 1452 "trad2simp_x86.in"
    {"\205\200","\x83\x80" },
#line 1780 "trad2simp_x86.in"
    {"\304\212","\x06\x8c" },
#line 592 "trad2simp_x86.in"
    {"\220d","\x91\x64" },
#line 958 "trad2simp_x86.in"
    {"\276q","\xbd\x70" },
#line 2386 "trad2simp_x86.in"
    {"\307\225","\x97\x66" },
#line 1329 "trad2simp_x86.in"
    {"\304}","\xf2\x7e" },
#line 2339 "trad2simp_x86.in"
    {"j\224","\x89\x70" },
#line 716 "trad2simp_x86.in"
    {"\277i","\x64\x68" },
#line 470 "trad2simp_x86.in"
    {"\240_","\x95\x5f" },
#line 2633 "trad2simp_x86.in"
    {"O\232","\xa3\x9a" },
#line 2333 "trad2simp_x86.in"
    {"U\224","\x27\x95" },
#line 723 "trad2simp_x86.in"
    {"\363i","\x68\x68" },
#line 2428 "trad2simp_x86.in"
    {"\331\226","\xcc\x53" },
#line 526 "trad2simp_x86.in"
    {"\343a","\xd1\x61" },
#line 1249 "trad2simp_x86.in"
    {"\000}","\xaa\x7e" },
#line 1438 "trad2simp_x86.in"
    {",\200","\x27\x80" },
#line 2794 "trad2simp_x86.in"
    {"\211\235","\x51\x9e" },
#line 2113 "trad2simp_x86.in"
    {"\000\222","\xaf\x94" },
#line 2819 "trad2simp_x86.in"
    {"\332\235","\x68\x9e" },
#line 1657 "trad2simp_x86.in"
    {"2\211","\xe4\x88" },
#line 1011 "trad2simp_x86.in"
    {"ws","\xb7\x72" },
#line 1972 "trad2simp_x86.in"
    {"\232\216","\xf9\x8d" },
#line 2619 "trad2simp_x86.in"
    {".\232","\x9d\x9a" },
#line 1314 "trad2simp_x86.in"
    {"\253}","\xbf\x7e" },
#line 1448 "trad2simp_x86.in"
    {"w\200","\x4c\x80" },
#line 993 "trad2simp_x86.in"
    {"\332r","\xe6\x65" },
#line 957 "trad2simp_x86.in"
    {"\261q","\xed\x70" },
#line 2179 "trad2simp_x86.in"
    {"\253\222","\xef\x94" },
#line 1291 "trad2simp_x86.in"
    {"]}","\xd4\x7e" },
#line 2951 "trad2simp_x86.in"
    {"r^u\226","\x7e\x4e\x75\x96" },
#line 893 "trad2simp_x86.in"
    {"\244o","\xfd\x6c" },
#line 2133 "trad2simp_x86.in"
    {"7\222","\xb4\x94" },
#line 423 "trad2simp_x86.in"
    {"@^","\x27\x5e" },
#line 1839 "trad2simp_x86.in"
    {"V\213","\x2e\x8c" },
#line 378 "trad2simp_x86.in"
    {"7\\","\x34\x5c" },
#line 2309 "trad2simp_x86.in"
    {"\030\224","\x9f\x94" },
#line 1105 "trad2simp_x86.in"
    {"\343v","\xd1\x76" },
#line 2409 "trad2simp_x86.in"
    {"p\226","\x34\x96" },
#line 382 "trad2simp_x86.in"
    {"]\\","\x49\x62" },
#line 996 "trad2simp_x86.in"
    {"\031s","\xf0\x72" },
#line 1379 "trad2simp_x86.in"
    {"7~","\x15\x7f" },
#line 2791 "trad2simp_x86.in"
    {"r\235","\x4a\x9e" },
#line 1796 "trad2simp_x86.in"
    {"\344\212","\x14\x8c" },
#line 2824 "trad2simp_x86.in"
    {"\362\235","\x6b\x9e" },
#line 2344 "trad2simp_x86.in"
    {"w\224","\x4a\x95" },
#line 1261 "trad2simp_x86.in"
    {"\024}","\xaf\x7e" },
#line 2378 "trad2simp_x86.in"
    {"\271\225","\x09\x96" },
#line 2423 "trad2simp_x86.in"
    {"\264\226","\x47\x96" },
#line 2198 "trad2simp_x86.in"
    {"\344\222","\x04\x95" },
#line 2122 "trad2simp_x86.in"
    {"\024\222","\x9e\x94" },
#line 780 "trad2simp_x86.in"
    {"Pk","\x27\x6b" },
#line 2294 "trad2simp_x86.in"
    {"\344\223","\x42\x95" },
#line 1710 "trad2simp_x86.in"
    {"\"\212","\x23\x6b" },
#line 2524 "trad2simp_x86.in"
    {"\304\230","\xd8\x98" },
#line 1737 "trad2simp_x86.in"
    {"f\212","\xd5\x8b" },
#line 2621 "trad2simp_x86.in"
    {"6\232","\x7a\x9a" },
#line 2405 "trad2simp_x86.in"
    {"X\226","\x49\x96" },
#line 333 "trad2simp_x86.in"
    {"fZ","\x87\x59" },
#line 1952 "trad2simp_x86.in"
    {"!\216","\x37\x87" },
#line 1295 "trad2simp_x86.in"
    {"f}","\xd9\x7e" },
#line 757 "trad2simp_x86.in"
    {"\333j","\x09\x68" },
#line 2310 "trad2simp_x86.in"
    {"\031\224","\x6b\x95" },
#line 1856 "trad2simp_x86.in"
    {"\214\213","\xb4\x5b" },
#line 760 "trad2simp_x86.in"
    {"\337j","\x0e\x68" },
#line 1348 "trad2simp_x86.in"
    {"\357}","\xac\x7e" },
#line 2155 "trad2simp_x86.in"
    {"f\222","\xb2\x94" },
#line 755 "trad2simp_x86.in"
    {"\323j","\x79\x6a" },
#line 542 "trad2simp_x86.in"
    {"2b","\x0f\x62" },
#line 2226 "trad2simp_x86.in"
    {"\"\223","\xb1\x94" },
#line 2205 "trad2simp_x86.in"
    {"\357\222","\x06\x95" },
#line 980 "trad2simp_x86.in"
    {"2r","\x3a\x4e" },
#line 804 "trad2simp_x86.in"
    {"\377k","\xf5\x6b" },
#line 761 "trad2simp_x86.in"
    {"\345j","\x71\x6a" },
#line 616 "trad2simp_x86.in"
    {"\343d","\x63\x63" },
#line 1057 "trad2simp_x86.in"
    {"\207u","\x74\x75" },
#line 200 "trad2simp_x86.in"
    {"\035U","\xca\x55" },
#line 1686 "trad2simp_x86.in"
    {"\272\211","\xc9\x89" },
#line 299 "trad2simp_x86.in"
    {"\221X","\x92\x58" },
#line 963 "trad2simp_x86.in"
    {"\320q","\xf7\x78" },
#line 2488 "trad2simp_x86.in"
    {"7\230","\x94\x98" },
#line 1971 "trad2simp_x86.in"
    {"\225\216","\x70\x8e" },
#line 515 "trad2simp_x86.in"
    {"\253a","\xaf\x60" },
#line 2394 "trad2simp_x86.in"
    {"\325\225","\x19\x96" },
#line 491 "trad2simp_x86.in"
    {"7a","\x7a\x60" },
#line 2800 "trad2simp_x86.in"
    {"\232\235","\x57\x9e" },
#line 1440 "trad2simp_x86.in"
    {"V\200","\x23\x57" },
#line 2770 "trad2simp_x86.in"
    {"/\235","\x38\x9e" },
#line 2638 "trad2simp_x86.in"
    {"_\232","\xa4\x9a" },
#line 1564 "trad2simp_x86.in"
    {"\212\205","\xdf\x84" },
#line 728 "trad2simp_x86.in"
    {"\023j","\x7c\x69" },
#line 1655 "trad2simp_x86.in"
    {"\007\211","\x0d\x59" },
#line 1209 "trad2simp_x86.in"
    {"\333{","\xac\x7b" },
#line 1561 "trad2simp_x86.in"
    {"m\205","\x27\x84" },
#line 1987 "trad2simp_x86.in"
    {"\353\216","\x78\x8f" },
#line 2407 "trad2simp_x86.in"
    {"^\226","\x47\x53" },
#line 605 "trad2simp_x86.in"
    {"\277d","\x61\x63" },
#line 2823 "trad2simp_x86.in"
    {"\360\235","\xd5\x71" },
#line 1774 "trad2simp_x86.in"
    {"\262\212","\xfe\x8b" },
#line 2387 "trad2simp_x86.in"
    {"\310\225","\xf1\x95" },
#line 217 "trad2simp_x86.in"
    {"\307U","\x6c\x55" },
#line 2904 "trad2simp_x86.in"
    {"]\376","\x3b\xff" },
#line 1576 "trad2simp_x86.in"
    {"\345\205","\x6f\x83" },
#line 1319 "trad2simp_x86.in"
    {"\262}","\x51\x7f" },
#line 1750 "trad2simp_x86.in"
    {"|\212","\xd9\x8b" },
#line 1559 "trad2simp_x86.in"
    {"i\205","\x61\x83" },
#line 1676 "trad2simp_x86.in"
    {"\226\211","\xc6\x89" },
#line 2182 "trad2simp_x86.in"
    {"\262\222","\x0a\x71" },
#line 2313 "trad2simp_x86.in"
    {"%\224","\x85\x49" },
#line 1974 "trad2simp_x86.in"
    {"\245\216","\x7f\x8e" },
#line 2421 "trad2simp_x86.in"
    {"\252\226","\x69\x96" },
#line 2632 "trad2simp_x86.in"
    {"M\232","\x81\x9a" },
#line 2934 "trad2simp_x86.in"
    {"r^\026W","\x7e\x4e\xfe\x56" },
#line 2358 "trad2simp_x86.in"
    {"\213\225","\x00\x5f" },
#line 2534 "trad2simp_x86.in"
    {"\357\230","\x6d\x99" },
#line 2255 "trad2simp_x86.in"
    {"|\223","\x88\x94" },
#line 1550 "trad2simp_x86.in"
    {"&\205","\x11\x83" },
#line 2809 "trad2simp_x86.in"
    {"\272\235","\x61\x9e" },
#line 1863 "trad2simp_x86.in"
    {"\234\213","\x20\x8c" },
#line 1196 "trad2simp_x86.in"
    {"F{","\x14\x7b" },
#line 1553 "trad2simp_x86.in"
    {"F\205","\x87\x84" },
#line 1403 "trad2simp_x86.in"
    {"|~","\xe7\x7e" },
#line 936 "trad2simp_x86.in"
    {"]p","\x4f\x70" },
#line 607 "trad2simp_x86.in"
    {"\304d","\xb3\x63" },
#line 949 "trad2simp_x86.in"
    {"Vq","\x96\x66" },
#line 1106 "trad2simp_x86.in"
    {"\344v","\xd8\x76" },
#line 1957 "trad2simp_x86.in"
    {"U\216","\xf8\x8d" },
#line 749 "trad2simp_x86.in"
    {"\263j","\xdf\x69" },
#line 2614 "trad2simp_x86.in"
    {"\026\232","\x9b\x9a" },
#line 889 "trad2simp_x86.in"
    {"\207o","\x9d\x6d" },
#line 2639 "trad2simp_x86.in"
    {"b\232","\x74\x9a" },
#line 2758 "trad2simp_x86.in"
    {"\007\235","\x28\x9e" },
#line 2913 "trad2simp_x86.in"
    {"f\376","\x1d\xff" },
#line 1581 "trad2simp_x86.in"
    {"\371\205","\x3c\x85" },
#line 536 "trad2simp_x86.in"
    {"\007b","\x06\x62" },
#line 2404 "trad2simp_x86.in"
    {"O\226","\x8b\x96" },
#line 2353 "trad2simp_x86.in"
    {"\200\225","\xe8\x95" },
#line 1666 "trad2simp_x86.in"
    {"j\211","\x9c\x88" },
#line 600 "trad2simp_x86.in"
    {"\253d","\x9a\x62" },
#line 789 "trad2simp_x86.in"
    {"\236k","\x92\x6b" },
#line 1112 "trad2simp_x86.in"
    {"\\w","\x41\x77" },
#line 1121 "trad2simp_x86.in"
    {"\323w","\x2c\x77" },
#line 2798 "trad2simp_x86.in"
    {"\226\235","\x59\x9e" },
#line 2869 "trad2simp_x86.in"
    {"\\\237","\x87\x9f" },
#line 2365 "trad2simp_x86.in"
    {"\224\225","\xf5\x95" },
#line 2871 "trad2simp_x86.in"
    {"`\237","\x86\x9f" },
#line 2506 "trad2simp_x86.in"
    {"g\230","\x7e\x98" },
#line 220 "trad2simp_x86.in"
    {"\351U","\x22\x55" },
#line 204 "trad2simp_x86.in"
    {"WU","\x56\x55" },
#line 988 "trad2simp_x86.in"
    {"\226r","\x66\x83" },
#line 517 "trad2simp_x86.in"
    {"\262a","\xaa\x5b" },
#line 2410 "trad2simp_x86.in"
    {"s\226","\x48\x96" },
#line 1557 "trad2simp_x86.in"
    {"X\205","\x5b\x83" },
#line 2368 "trad2simp_x86.in"
    {"\243\225","\x01\x96" },
#line 506 "trad2simp_x86.in"
    {"|a","\x1a\x62" },
#line 301 "trad2simp_x86.in"
    {"\253X","\x3d\x6a" },
#line 448 "trad2simp_x86.in"
    {"\343^","\x7f\x5e" },
#line 1116 "trad2simp_x86.in"
    {"\230w","\x0d\x77" },
#line 1551 "trad2simp_x86.in"
    {"-\205","\x6b\x83" },
#line 2331 "trad2simp_x86.in"
    {"R\224","\x74\x92" },
#line 2802 "trad2simp_x86.in"
    {"\245\235","\x5b\x9e" },
#line 205 "trad2simp_x86.in"
    {"^U","\xd1\x54" },
#line 2872 "trad2simp_x86.in"
    {"a\237","\x84\x9f" },
#line 1120 "trad2simp_x86.in"
    {"\307w","\x99\x84" },
#line 740 "trad2simp_x86.in"
    {"kj","\x2a\x6a" },
#line 1212 "trad2simp_x86.in"
    {"\351{","\x5b\x7b" },
#line 2435 "trad2simp_x86.in"
    {"\373\226","\x35\x75" },
#line 1087 "trad2simp_x86.in"
    {"gv","\xac\x75" },
#line 618 "trad2simp_x86.in"
    {"\357d","\x48\x64" },
#line 2786 "trad2simp_x86.in"
    {"j\235","\x4c\x9e" },
#line 704 "trad2simp_x86.in"
    {"\017i","\x60\x68" },
#line 2807 "trad2simp_x86.in"
    {"\261\235","\x9e\x9a" },
#line 2879 "trad2simp_x86.in"
    {"v\237","\x6d\x81" },
#line 211 "trad2simp_x86.in"
    {"\252U","\x27\x4e" },
#line 1095 "trad2simp_x86.in"
    {"|v","\xd1\x53" },
#line 948 "trad2simp_x86.in"
    {"Rq","\x9c\x70" },
#line 2190 "trad2simp_x86.in"
    {"\305\222","\x0c\x95" },
#line 452 "trad2simp_x86.in"
    {"\363^","\x85\x53" },
#line 1059 "trad2simp_x86.in"
    {"\277u","\xf1\x75" },
#line 1063 "trad2simp_x86.in"
    {"\363u","\xbb\x9e" },
#line 1798 "trad2simp_x86.in"
    {"\347\212","\x10\x8c" },
#line 2867 "trad2simp_x86.in"
    {"T\237","\x80\x9f" },
#line 2609 "trad2simp_x86.in"
    {"\003\232","\x46\x54" },
#line 2143 "trad2simp_x86.in"
    {"H\222","\xca\x94" },
#line 1864 "trad2simp_x86.in"
    {"\236\213","\x33\x8c" },
#line 316 "trad2simp_x86.in"
    {"\357X","\xee\x58" },
#line 2881 "trad2simp_x86.in"
    {"\215\237","\x99\x9f" },
#line 2473 "trad2simp_x86.in"
    {"\017\230","\x83\x98" },
#line 758 "trad2simp_x86.in"
    {"\335j","\x1f\x69" },
#line 2360 "trad2simp_x86.in"
    {"\216\225","\xf3\x95" },
#line 736 "trad2simp_x86.in"
    {"Kj","\x65\x68" },
#line 1386 "trad2simp_x86.in"
    {"H~","\x41\x89" },
#line 752 "trad2simp_x86.in"
    {"\302j","\xf9\x68" },
#line 2350 "trad2simp_x86.in"
    {"\201\224","\x86\x49" },
#line 202 "trad2simp_x86.in"
    {"OU","\xee\x95" },
#line 1711 "trad2simp_x86.in"
    {"#\212","\xc0\x8b" },
#line 439 "trad2simp_x86.in"
    {"\304^","\xa9\x53" },
#line 2357 "trad2simp_x86.in"
    {"\211\225","\xed\x95" },
#line 2325 "trad2simp_x86.in"
    {":\224","\xdb\x94" },
#line 2377 "trad2simp_x86.in"
    {"\266\225","\x0a\x96" },
#line 601 "trad2simp_x86.in"
    {"\262d","\x51\x62" },
#line 975 "trad2simp_x86.in"
    {"\377q","\x00\x80" },
#line 2124 "trad2simp_x86.in"
    {"\036\222","\xa7\x94" },
#line 2125 "trad2simp_x86.in"
    {"#\222","\x99\x94" },
#line 1210 "trad2simp_x86.in"
    {"\340{","\x71\x7b" },
#line 1948 "trad2simp_x86.in"
    {"\262\215","\xb1\x8d" },
#line 1454 "trad2simp_x86.in"
    {"\220\200","\xf3\x80" },
#line 2397 "trad2simp_x86.in"
    {"\336\225","\x1a\x96" },
#line 467 "trad2simp_x86.in"
    {"\214_","\x0e\x54" },
#line 721 "trad2simp_x86.in"
    {"\347i","\x20\x69" },
#line 2416 "trad2simp_x86.in"
    {"\216\226","\x36\x96" },
#line 1366 "trad2simp_x86.in"
    {"\036~","\x1f\x7f" },
#line 1368 "trad2simp_x86.in"
    {"#~","\xbf\x53" },
#line 2424 "trad2simp_x86.in"
    {"\270\226","\xb6\x96" },
#line 2396 "trad2simp_x86.in"
    {"\334\225","\x73\x51" },
#line 1202 "trad2simp_x86.in"
    {"\213{","\x3a\x7b" },
#line 436 "trad2simp_x86.in"
    {"\253^","\x93\x5e" },
#line 1575 "trad2simp_x86.in"
    {"\335\205","\x7a\x82" },
#line 2414 "trad2simp_x86.in"
    {"\211\226","\x67\x96" },
#line 1662 "trad2simp_x86.in"
    {"V\211","\x84\x88" },
#line 743 "trad2simp_x86.in"
    {"\224j","\x63\x68" },
#line 1946 "trad2simp_x86.in"
    {"\231\215","\x75\x8d" },
#line 1051 "trad2simp_x86.in"
    {"]u","\xa9\x4e" },
#line 1709 "trad2simp_x86.in"
    {"\037\212","\xbc\x8b" },
#line 1113 "trad2simp_x86.in"
    {"^w","\x50\x77" },
#line 2431 "trad2simp_x86.in"
    {"\336\226","\x21\x9e" },
#line 919 "trad2simp_x86.in"
    {"\017p","\x4f\x6d" },
#line 770 "trad2simp_x86.in"
    {"\373j","\x31\x6a" },
#line 2792 "trad2simp_x86.in"
    {"\204\235","\x16\x4d" },
#line 821 "trad2simp_x86.in"
    {"\037m","\x95\x6d" },
#line 747 "trad2simp_x86.in"
    {"\243j","\x2f\x6a" },
#line 2430 "trad2simp_x86.in"
    {"\334\226","\x42\x67" },
#line 1530 "trad2simp_x86.in"
    {"d\204","\x6e\x83" },
#line 1021 "trad2simp_x86.in"
    {"\356s","\x69\x4f" },
#line 791 "trad2simp_x86.in"
    {"\253k","\x9a\x6b" },
#line 1345 "trad2simp_x86.in"
    {"\350}","\x16\x7f" },
#line 1580 "trad2simp_x86.in"
    {"\367\205","\xaf\x85" },
#line 2224 "trad2simp_x86.in"
    {"\037\223","\x2c\x95" },
#line 831 "trad2simp_x86.in"
    {"\350m","\xc0\x51" },
#line 2201 "trad2simp_x86.in"
    {"\350\222","\x07\x95" },
#line 1367 "trad2simp_x86.in"
    {"\037~","\x1b\x7f" },
#line 2264 "trad2simp_x86.in"
    {"\227\223","\xaa\x67" },
#line 266 "trad2simp_x86.in"
    {"\323V","\x6e\x55" },
#line 237 "trad2simp_x86.in"
    {"`V","\xd2\x54" },
#line 2295 "trad2simp_x86.in"
    {"\350\223","\x3e\x93" },
#line 2434 "trad2simp_x86.in"
    {"\362\226","\x91\x4e" },
#line 1567 "trad2simp_x86.in"
    {"\224\205","\x37\x85" },
#line 1047 "trad2simp_x86.in"
    {"\"u","\xa7\x4e" },
#line 223 "trad2simp_x86.in"
    {"\015V","\xbd\x55" },
#line 2642 "trad2simp_x86.in"
    {"j\232","\x8a\x9a" },
#line 1940 "trad2simp_x86.in"
    {"\017\215","\x62\x8d" },
#line 2634 "trad2simp_x86.in"
    {"U\232","\x84\x9a" },
#line 1107 "trad2simp_x86.in"
    {"\347v","\x62\x53" },
#line 1979 "trad2simp_x86.in"
    {"\313\216","\x67\x8f" },
#line 1305 "trad2simp_x86.in"
    {"\210}","\xe8\x7e" },
#line 1529 "trad2simp_x86.in"
    {"W\204","\x40\x77" },
#line 722 "trad2simp_x86.in"
    {"\350i","\x01\x69" },
#line 221 "trad2simp_x86.in"
    {"\366U","\xd4\x54" },
#line 1789 "trad2simp_x86.in"
    {"\327\212","\x02\x8c" },
#line 264 "trad2simp_x86.in"
    {"\314V","\xcf\x82" },
#line 737 "trad2simp_x86.in"
    {"_j","\x3a\x67" },
#line 343 "trad2simp_x86.in"
    {"\327Z","\xaa\x59" },
#line 1111 "trad2simp_x86.in"
    {"Ow","\xf0\x56" },
#line 1335 "trad2simp_x86.in"
    {"\327}","\x03\x7f" },
#line 206 "trad2simp_x86.in"
    {"_U","\x2f\x54" },
#line 2863 "trad2simp_x86.in"
    {"K\237","\x8b\x65" },
#line 2865 "trad2simp_x86.in"
    {"O\237","\x51\x9f" },
#line 1406 "trad2simp_x86.in"
    {"\210~","\x2c\x7f" },
#line 707 "trad2simp_x86.in"
    {"Si","\xab\x67" },
#line 1570 "trad2simp_x86.in"
    {"\246\205","\x50\x83" },
#line 1071 "trad2simp_x86.in"
    {"\036v","\x17\x76" },
#line 2286 "trad2simp_x86.in"
    {"\327\223","\xff\x94" },
#line 1800 "trad2simp_x86.in"
    {"\355\212","\x15\x8c" },
#line 2859 "trad2simp_x86.in"
    {"\011\237","\x0d\x9f" },
#line 1810 "trad2simp_x86.in"
    {"\000\213","\x0b\x8c" },
#line 750 "trad2simp_x86.in"
    {"\270j","\xe0\x67" },
#line 209 "trad2simp_x86.in"
    {"\216U","\x9e\x35" },
#line 2403 "trad2simp_x86.in"
    {"/\226","\x40\x57" },
#line 1543 "trad2simp_x86.in"
    {"\364\204","\xbc\x83" },
#line 742 "trad2simp_x86.in"
    {"\211j","\xfd\x67" },
#line 1579 "trad2simp_x86.in"
    {"\366\205","\xc8\x82" },
#line 527 "trad2simp_x86.in"
    {"\350a","\x79\x60" },
#line 756 "trad2simp_x86.in"
    {"\332j","\x88\x69" },
#line 906 "trad2simp_x86.in"
    {"\344o","\x9b\x6d" },
#line 1909 "trad2simp_x86.in"
    {"\322\214","\x4a\x8d" },
#line 219 "trad2simp_x86.in"
    {"\332U","\x5c\x54" },
#line 2498 "trad2simp_x86.in"
    {"S\230","\x9b\x98" },
#line 256 "trad2simp_x86.in"
    {"\264V","\x25\x4e" },
#line 759 "trad2simp_x86.in"
    {"\336j","\x7c\x6a" },
#line 1252 "trad2simp_x86.in"
    {"\005}","\xa2\x7e" },
#line 1874 "trad2simp_x86.in"
    {"\223\214","\x2b\x73" },
#line 1910 "trad2simp_x86.in"
    {"\323\214","\xbe\x5b" },
#line 1716 "trad2simp_x86.in"
    {"1\212","\xb8\x8b" },
#line 1678 "trad2simp_x86.in"
    {"\234\211","\x3a\x77" },
#line 255 "trad2simp_x86.in"
    {"\263V","\xbe\x55" },
#line 2884 "trad2simp_x86.in"
    {"\224\237","\x9a\x9f" },
#line 2608 "trad2simp_x86.in"
    {"\001\232","\x8b\x9a" },
#line 1275 "trad2simp_x86.in"
    {"1}","\xc2\x7e" },
#line 869 "trad2simp_x86.in"
    {"\"o","\x49\x6c" },
#line 1532 "trad2simp_x86.in"
    {"o\204","\x6f\x83" },
#line 271 "trad2simp_x86.in"
    {"\017W","\x08\x57" },
#line 2615 "trad2simp_x86.in"
    {"\031\232","\x97\x9a" },
#line 738 "trad2simp_x86.in"
    {"bj","\x2d\x69" },
#line 795 "trad2simp_x86.in"
    {"\262k","\x7c\x6b" },
#line 207 "trad2simp_x86.in"
    {"bU","\x21\x55" },
#line 1912 "trad2simp_x86.in"
    {"\331\214","\x52\x8d" },
#line 1818 "trad2simp_x86.in"
    {"\024\213","\x11\x8c" },
#line 2257 "trad2simp_x86.in"
    {"\202\223","\x41\x95" },
#line 2861 "trad2simp_x86.in"
    {"4\237","\x39\x9f" },
#line 1373 "trad2simp_x86.in"
    {"1~","\xb5\x7e" },
#line 923 "trad2simp_x86.in"
    {"\037p","\x47\x6f" },
#line 1342 "trad2simp_x86.in"
    {"\341}","\x17\x7f" },
#line 1197 "trad2simp_x86.in"
    {"M{","\x0b\x7b" },
#line 551 "trad2simp_x86.in"
    {"\313b","\x9b\x62" },
#line 2780 "trad2simp_x86.in"
    {"R\235","\x46\x9e" },
#line 2141 "trad2simp_x86.in"
    {"E\222","\x9c\x94" },
#line 2292 "trad2simp_x86.in"
    {"\341\223","\x5c\x95" },
#line 1905 "trad2simp_x86.in"
    {"\307\214","\x44\x8d" },
#line 1933 "trad2simp_x86.in"
    {"\376\214","\x5c\x8d" },
#line 482 "trad2simp_x86.in"
    {"\341`","\x76\x60" },
#line 2533 "trad2simp_x86.in"
    {"\355\230","\x6c\x99" },
#line 1384 "trad2simp_x86.in"
    {"E~","\x2b\x7f" },
#line 1872 "trad2simp_x86.in"
    {"v\214","\x6e\x8c" },
#line 2417 "trad2simp_x86.in"
    {"\225\226","\x68\x96" },
#line 1931 "trad2simp_x86.in"
    {"\374\214","\x2d\x8d" },
#line 2382 "trad2simp_x86.in"
    {"\276\225","\x08\x96" },
#line 1558 "trad2simp_x86.in"
    {"b\205","\x89\x84" },
#line 544 "trad2simp_x86.in"
    {"Pb","\xc2\x4e" },
#line 469 "trad2simp_x86.in"
    {"\236_","\xce\x4e" },
#line 1213 "trad2simp_x86.in"
    {"\362{","\x57\x5f" },
#line 575 "trad2simp_x86.in"
    {"\037d","\xc0\x64" },
#line 1869 "trad2simp_x86.in"
    {"T\214","\x73\x82" },
#line 1754 "trad2simp_x86.in"
    {"\206\212","\xd3\x8b" },
#line 2370 "trad2simp_x86.in"
    {"\245\225","\x00\x96" },
#line 2466 "trad2simp_x86.in"
    {"\005\230","\x79\x98" },
#line 2870 "trad2simp_x86.in"
    {"_\237","\x83\x9f" },
#line 995 "trad2simp_x86.in"
    {"\375r","\xc8\x72" },
#line 1304 "trad2simp_x86.in"
    {"\206}","\xe0\x7e" },
#line 1535 "trad2simp_x86.in"
    {"\224\204","\xb3\x83" },
#line 1890 "trad2simp_x86.in"
    {"\264\214","\x35\x8d" },
#line 1873 "trad2simp_x86.in"
    {"\215\214","\xf8\x72" },
#line 210 "trad2simp_x86.in"
    {"\232U","\x24\x55" },
#line 152 "trad2simp_x86.in"
    {"\212R","\x3d\x52" },
#line 1889 "trad2simp_x86.in"
    {"\263\214","\x30\x8d" },
#line 2399 "trad2simp_x86.in"
    {"\342\225","\x9f\x8f" },
#line 508 "trad2simp_x86.in"
    {"\202a","\xe7\x5f" },
#line 161 "trad2simp_x86.in"
    {"\333R","\xcb\x52" },
#line 2376 "trad2simp_x86.in"
    {"\261\225","\x05\x96" },
#line 773 "trad2simp_x86.in"
    {"\017k","\x24\x69" },
#line 960 "trad2simp_x86.in"
    {"\304q","\x30\x71" },
#line 1736 "trad2simp_x86.in"
    {"c\212","\xe3\x8b" },
#line 262 "trad2simp_x86.in"
    {"\310V","\x53\x54" },
#line 199 "trad2simp_x86.in"
    {"\004U","\x57\x54" },
#line 468 "trad2simp_x86.in"
    {"\221_","\x84\x5f" },
#line 1122 "trad2simp_x86.in"
    {"\332w","\xa9\x77" },
#line 240 "trad2simp_x86.in"
    {"oV","\xf3\x55" },
#line 1740 "trad2simp_x86.in"
    {"l\212","\xdf\x8b" },
#line 2523 "trad2simp_x86.in"
    {"\300\230","\xd7\x98" },
#line 2793 "trad2simp_x86.in"
    {"\207\235","\x2b\x9e" },
#line 334 "trad2simp_x86.in"
    {"lZ","\xeb\x6d" },
#line 2889 "trad2simp_x86.in"
    {"1\376","\x5c\xff" },
#line 590 "trad2simp_x86.in"
    {"\210d","\x5e\x63" },
#line 824 "trad2simp_x86.in"
    {"lm","\xcc\x91" },
#line 981 "trad2simp_x86.in"
    {":r","\x37\x72" },
#line 2156 "trad2simp_x86.in"
    {"l\222","\xbc\x94" },
#line 160 "trad2simp_x86.in"
    {"\331R","\xa1\x52" },
#line 2432 "trad2simp_x86.in"
    {"\342\226","\xbb\x79" },
#line 386 "trad2simp_x86.in"
    {"l\\","\x5e\x5c" },
#line 2422 "trad2simp_x86.in"
    {"\261\226","\x90\x96" },
#line 2250 "trad2simp_x86.in"
    {"l\223","\x39\x95" },
#line 260 "trad2simp_x86.in"
    {"\302V","\xa3\x56" },
#line 2308 "trad2simp_x86.in"
    {"\024\224","\x61\x95" },
#line 733 "trad2simp_x86.in"
    {"9j","\x11\x68" },
#line 1284 "trad2simp_x86.in"
    {"C}","\x26\x5f" },
#line 2248 "trad2simp_x86.in"
    {"e\223","\x32\x95" },
#line 727 "trad2simp_x86.in"
    {"\021j","\x81\x68" },
#line 915 "trad2simp_x86.in"
    {"\005p","\xe2\x6e" },
#line 76 "trad2simp_x86.in"
    {"}P","\x2a\x4f" },
#line 1204 "trad2simp_x86.in"
    {"\240{","\xf0\x68" },
#line 476 "trad2simp_x86.in"
    {"e`","\x3b\x80" },
#line 1283 "trad2simp_x86.in"
    {"B}","\xc8\x7e" },
#line 1968 "trad2simp_x86.in"
    {"\221\216","\x2f\x8e" },
#line 1865 "trad2simp_x86.in"
    {"?\214","\xaa\x6e" },
#line 2878 "trad2simp_x86.in"
    {"r\237","\x8b\x9f" },
#line 70 "trad2simp_x86.in"
    {"+P","\x26\x4f" },
#line 2237 "trad2simp_x86.in"
    {"C\223","\x2a\x95" },
#line 1104 "trad2simp_x86.in"
    {"\341v","\x3d\x5c" },
#line 229 "trad2simp_x86.in"
    {".V","\x20\x55" },
#line 1383 "trad2simp_x86.in"
    {"C~","\xf7\x7e" },
#line 2352 "trad2simp_x86.in"
    {"w\225","\x7f\x95" },
#line 2950 "trad2simp_x86.in"
    {"r^a\214","\x7e\x4e\x61\x8c" },
#line 98 "trad2simp_x86.in"
    {"\345P","\xa5\x4f" },
#line 2975 "trad2simp_x86.in"
    {"@w\313k","\x40\x77\xcb\x6b" },
#line 1724 "trad2simp_x86.in"
    {"N\212","\xb5\x8b" },
#line 1921 "trad2simp_x86.in"
    {"\346\214","\x4b\x8d" },
#line 2746 "trad2simp_x86.in"
    {"m\234","\x9a\x9c" },
#line 245 "trad2simp_x86.in"
    {"\200V","\x9b\x54" },
#line 1911 "trad2simp_x86.in"
    {"\325\214","\x47\x8d" },
#line 1926 "trad2simp_x86.in"
    {"\364\214","\x56\x8d" },
#line 1287 "trad2simp_x86.in"
    {"N}","\xd7\x7e" },
#line 2742 "trad2simp_x86.in"
    {"`\234","\x99\x9c" },
#line 1048 "trad2simp_x86.in"
    {"#u","\xa7\x4e" },
#line 2402 "trad2simp_x86.in"
    {",\226","\x51\x57" },
#line 2391 "trad2simp_x86.in"
    {"\320\225","\x17\x96" },
#line 1788 "trad2simp_x86.in"
    {"\326\212","\xba\x8b" },
#line 2750 "trad2simp_x86.in"
    {"\345\234","\x1f\x9e" },
#line 1883 "trad2simp_x86.in"
    {"\252\214","\x2a\x8d" },
#line 79 "trad2simp_x86.in"
    {"\230P","\x1e\x4f" },
#line 725 "trad2simp_x86.in"
    {"\002j","\x50\x4e" },
#line 1572 "trad2simp_x86.in"
    {"\272\205","\x60\x83" },
#line 1935 "trad2simp_x86.in"
    {"\005\215","\x58\x8d" },
#line 2710 "trad2simp_x86.in"
    {"\015\234","\xc5\x9c" },
#line 1015 "trad2simp_x86.in"
    {"|s","\x15\x73" },
#line 154 "trad2simp_x86.in"
    {"\215R","\x51\x52" },
#line 198 "trad2simp_x86.in"
    {"\341T","\x58\x54" },
#line 765 "trad2simp_x86.in"
    {"\353j","\x65\x6a" },
#line 500 "trad2simp_x86.in"
    {"ca","\xef\x60" },
#line 1906 "trad2simp_x86.in"
    {"\310\214","\x3e\x8d" },
#line 776 "trad2simp_x86.in"
    {"\036k","\xc2\x68" },
#line 2508 "trad2simp_x86.in"
    {"l\230","\xa5\x98" },
#line 1916 "trad2simp_x86.in"
    {"\340\214","\x54\x8d" },
#line 1742 "trad2simp_x86.in"
    {"n\212","\xe0\x8b" },
#line 2625 "trad2simp_x86.in"
    {"@\232","\xe6\x84" },
#line 2505 "trad2simp_x86.in"
    {"e\230","\xa2\x98" },
#line 2712 "trad2simp_x86.in"
    {"\023\234","\xc3\x9c" },
#line 24 "trad2simp_x86.in"
    {"q%","\x0f\xff" },
#line 2976 "trad2simp_x86.in"
    {"@w\313k\270^\256\213","\x57\x84\xcb\x6b\xb8\x5e\xae\x8b" },
#line 1267 "trad2simp_x86.in"
    {"\032}","\xa7\x7e" },
#line 101 "trad2simp_x86.in"
    {"\371P","\xf7\x4e" },
#line 281 "trad2simp_x86.in"
    {"\005X","\x5a\x57" },
#line 615 "trad2simp_x86.in"
    {"\341d","\xac\x62" },
#line 1312 "trad2simp_x86.in"
    {"\242}","\xf8\x7e" },
#line 2756 "trad2simp_x86.in"
    {"\376\234","\x13\x4d" },
#line 1949 "trad2simp_x86.in"
    {"\341\215","\xf9\x8f" },
#line 252 "trad2simp_x86.in"
    {"\246V","\x56\x54" },
#line 2910 "trad2simp_x86.in"
    {"c\376","\x0d\xff" },
#line 286 "trad2simp_x86.in"
    {"1X","\xa5\x62" },
#line 2222 "trad2simp_x86.in"
    {"\032\223","\xee\x94" },
#line 2971 "trad2simp_x86.in"
    {"@w\270^","\x57\x84\xb8\x5e" },
#line 1901 "trad2simp_x86.in"
    {"\302\214","\x42\x8d" },
#line 2225 "trad2simp_x86.in"
    {" \223","\x2d\x95" },
#line 2346 "trad2simp_x86.in"
    {"|\224","\x23\x95" },
#line 2970 "trad2simp_x86.in"
    {"@w\015T","\x57\x84\x0d\x54" },
#line 2268 "trad2simp_x86.in"
    {"\242\223","\xa8\x94" },
#line 1363 "trad2simp_x86.in"
    {"\032~","\xe6\x7e" },
#line 167 "trad2simp_x86.in"
    {"\351R","\xda\x52" },
#line 141 "trad2simp_x86.in"
    {"WR","\x2c\x52" },
#line 2413 "trad2simp_x86.in"
    {"\204\226","\x24\x58" },
#line 86 "trad2simp_x86.in"
    {"\264P","\x1b\x4f" },
#line 1688 "trad2simp_x86.in"
    {"\277\211","\xcc\x89" },
#line 2912 "trad2simp_x86.in"
    {"e\376","\x1e\xff" },
#line 1488 "trad2simp_x86.in"
    {"\337\201","\x0f\x81" },
#line 2713 "trad2simp_x86.in"
    {"\033\234","\xc1\x9c" },
#line 2159 "trad2simp_x86.in"
    {"x\222","\xf0\x94" },
#line 1462 "trad2simp_x86.in"
    {"+\201","\x31\x81" },
#line 2736 "trad2simp_x86.in"
    {"T\234","\xdd\x9c" },
#line 1089 "trad2simp_x86.in"
    {"lv","\x63\x76" },
#line 85 "trad2simp_x86.in"
    {"\263P","\x20\x4f" },
#line 457 "trad2simp_x86.in"
    {"7_","\x3a\x5f" },
#line 2495 "trad2simp_x86.in"
    {"N\230","\x6d\x81" },
#line 1770 "trad2simp_x86.in"
    {"\250\212","\xf2\x8b" },
#line 1086 "trad2simp_x86.in"
    {"ev","\xc7\x75" },
#line 2947 "trad2simp_x86.in"
    {"r^\261}","\x7e\x4e\xb2\x7e" },
#line 1491 "trad2simp_x86.in"
    {"\345\201","\x67\x53" },
#line 937 "trad2simp_x86.in"
    {"cp","\x7e\x6e" },
#line 870 "trad2simp_x86.in"
    {"#o","\x9f\x6d" },
#line 1331 "trad2simp_x86.in"
    {"\312}","\x27\x7d" },
#line 1731 "trad2simp_x86.in"
    {"[\212","\xc5\x8b" },
#line 2176 "trad2simp_x86.in"
    {"\250\222","\xf5\x94" },
#line 146 "trad2simp_x86.in"
    {"uR","\x1b\x52" },
#line 1486 "trad2simp_x86.in"
    {"\331\201","\xed\x80" },
#line 1290 "trad2simp_x86.in"
    {"[}","\xe6\x7e" },
#line 51 "trad2simp_x86.in"
    {"HO","\x03\x5e" },
#line 166 "trad2simp_x86.in"
    {"\346R","\x7f\x52" },
#line 1076 "trad2simp_x86.in"
    {"Bv","\x97\x75" },
#line 2739 "trad2simp_x86.in"
    {"X\234","\x9f\x9c" },
#line 158 "trad2simp_x86.in"
    {"\325R","\xa8\x52" },
#line 2151 "trad2simp_x86.in"
    {"[\222","\xc5\x94" },
#line 1334 "trad2simp_x86.in"
    {"\324}","\xf1\x7e" },
#line 1466 "trad2simp_x86.in"
    {"a\201","\x36\x81" },
#line 2369 "trad2simp_x86.in"
    {"\244\225","\x08\x54" },
#line 454 "trad2simp_x86.in"
    {"\024_","\x0a\x54" },
#line 2246 "trad2simp_x86.in"
    {"[\223","\x3b\x95" },
#line 2722 "trad2simp_x86.in"
    {"-\234","\xcd\x9c" },
#line 931 "trad2simp_x86.in"
    {"Cp","\xa3\x6c" },
#line 1930 "trad2simp_x86.in"
    {"\373\214","\x59\x8d" },
#line 1560 "trad2simp_x86.in"
    {"j\205","\x9c\x82" },
#line 1556 "trad2simp_x86.in"
    {"U\205","\xb8\x83" },
#line 257 "trad2simp_x86.in"
    {"\266V","\x24\x56" },
#line 2858 "trad2simp_x86.in"
    {"\007\237","\xcc\x9c" },
#line 503 "trad2simp_x86.in"
    {"na","\x51\x86" },
#line 2359 "trad2simp_x86.in"
    {"\214\225","\xf6\x95" },
#line 2752 "trad2simp_x86.in"
    {"\351\234","\x20\x9e" },
#line 2738 "trad2simp_x86.in"
    {"W\234","\xde\x9c" },
#line 2885 "trad2simp_x86.in"
    {"\225\237","\x9b\x9f" },
#line 2812 "trad2simp_x86.in"
    {"\277\235","\x5a\x9e" },
#line 278 "trad2simp_x86.in"
    {"\341W","\xad\x57" },
#line 2825 "trad2simp_x86.in"
    {"\363\235","\x47\x9e" },
#line 745 "trad2simp_x86.in"
    {"\237j","\xda\x69" },
#line 194 "trad2simp_x86.in"
    {"BT","\x15\x54" },
#line 1347 "trad2simp_x86.in"
    {"\354}","\x05\x7f" },
#line 74 "trad2simp_x86.in"
    {"uP","\xa6\x4f" },
#line 2419 "trad2simp_x86.in"
    {"\244\226","\x93\x98" },
#line 1459 "trad2simp_x86.in"
    {"\033\201","\xeb\x80" },
#line 891 "trad2simp_x86.in"
    {"\227o","\xa7\x6d" },
#line 1986 "trad2simp_x86.in"
    {"\344\216","\x77\x8f" },
#line 1663 "trad2simp_x86.in"
    {"]\211","\xe3\x88" },
#line 95 "trad2simp_x86.in"
    {"\325P","\xc6\x4e" },
#line 225 "trad2simp_x86.in"
    {"\026V","\x67\x55" },
#line 754 "trad2simp_x86.in"
    {"\320j","\x2f\x7d" },
#line 724 "trad2simp_x86.in"
    {"\001j","\x69\x68" },
#line 582 "trad2simp_x86.in"
    {"Cd","\x5b\x62" },
#line 1306 "trad2simp_x86.in"
    {"\217}","\xe5\x7e" },
#line 162 "trad2simp_x86.in"
    {"\335R","\xdc\x80" },
#line 241 "trad2simp_x86.in"
    {"rV","\xd9\x54" },
#line 139 "trad2simp_x86.in"
    {"KR","\x4b\x51" },
#line 729 "trad2simp_x86.in"
    {"\031j","\x07\x68" },
#line 135 "trad2simp_x86.in"
    {"*R","\x20\x52" },
#line 195 "trad2simp_x86.in"
    {"NT","\x3a\x5c" },
#line 1091 "trad2simp_x86.in"
    {"nv","\x3e\x76" },
#line 2514 "trad2simp_x86.in"
    {"\250\230","\xce\x98" },
#line 2062 "trad2simp_x86.in"
    {"\212\220","\xb9\x8f" },
#line 25 "trad2simp_x86.in"
    {"r%","\x3c\xff" },
#line 2754 "trad2simp_x86.in"
    {"\364\234","\x23\x9e" },
#line 435 "trad2simp_x86.in"
    {"\202^","\xc4\x4e" },
#line 344 "trad2simp_x86.in"
    {"\365Z","\xa9\x59" },
#line 2389 "trad2simp_x86.in"
    {"\313\225","\x15\x96" },
#line 1410 "trad2simp_x86.in"
    {"\217~","\x20\x7f" },
#line 2065 "trad2simp_x86.in"
    {"\337\220","\xcf\x90" },
#line 2050 "trad2simp_x86.in"
    {"\\\220","\x0a\x90" },
#line 2502 "trad2simp_x86.in"
    {"[\230","\xa0\x98" },
#line 833 "trad2simp_x86.in"
    {"\365m","\x0a\x6e" },
#line 2052 "trad2simp_x86.in"
    {"`\220","\xdc\x8f" },
#line 1562 "trad2simp_x86.in"
    {"w\205","\xe3\x84" },
#line 1569 "trad2simp_x86.in"
    {"\237\205","\xb6\x83" },
#line 2650 "trad2simp_x86.in"
    {"\356\232","\xd1\x53" },
#line 2297 "trad2simp_x86.in"
    {"\365\223","\xe7\x94" },
#line 924 "trad2simp_x86.in"
    {" p","\x46\x6f" },
#line 446 "trad2simp_x86.in"
    {"\341^","\x91\x5e" },
#line 2053 "trad2simp_x86.in"
    {"i\220","\x02\x90" },
#line 535 "trad2simp_x86.in"
    {"\000b","\x4b\x60" },
#line 1114 "trad2simp_x86.in"
    {"jw","\x7e\x77" },
#line 2707 "trad2simp_x86.in"
    {"\010\234","\xbd\x9c" },
#line 1301 "trad2simp_x86.in"
    {"y}","\xe2\x7e" },
#line 1893 "trad2simp_x86.in"
    {"\270\214","\x37\x8d" },
#line 1523 "trad2simp_x86.in"
    {"\007\204","\xcc\x82" },
#line 2876 "trad2simp_x86.in"
    {"j\237","\x8a\x9f" },
#line 825 "trad2simp_x86.in"
    {"ym","\x43\x6d" },
#line 2426 "trad2simp_x86.in"
    {"\313\226","\xbd\x96" },
#line 1807 "trad2simp_x86.in"
    {"\372\212","\x1a\x8c" },
#line 90 "trad2simp_x86.in"
    {"\302P","\x7b\x50" },
#line 2773 "trad2simp_x86.in"
    {"7\235","\x15\x4d" },
#line 2902 "trad2simp_x86.in"
    {"[\376","\x5b\xff" },
#line 2783 "trad2simp_x86.in"
    {"]\235","\x45\x9e" },
#line 1891 "trad2simp_x86.in"
    {"\266\214","\x2c\x8d" },
#line 1913 "trad2simp_x86.in"
    {"\332\214","\x49\x8d" },
#line 835 "trad2simp_x86.in"
    {"\372m","\x45\x6d" },
#line 65 "trad2simp_x86.in"
    {"\011P","\xd3\x4e" },
#line 1402 "trad2simp_x86.in"
    {"y~","\xce\x7e" },
#line 1200 "trad2simp_x86.in"
    {"\204{","\x85\x7b" },
#line 172 "trad2simp_x86.in"
    {"\373R","\x00\x53" },
#line 2144 "trad2simp_x86.in"
    {"I\222","\xc9\x94" },
#line 1915 "trad2simp_x86.in"
    {"\336\214","\x4f\x8d" },
#line 2300 "trad2simp_x86.in"
    {"\372\223","\x7d\x49" },
#line 230 "trad2simp_x86.in"
    {"/V","\x78\x55" },
#line 799 "trad2simp_x86.in"
    {"\300k","\xc1\x6b" },
#line 2525 "trad2simp_x86.in"
    {"\306\230","\xd9\x98" },
#line 338 "trad2simp_x86.in"
    {"\257Z","\xab\x59" },
#line 596 "trad2simp_x86.in"
    {"\242d","\xb8\x63" },
#line 1962 "trad2simp_x86.in"
    {"g\216","\xdf\x7c" },
#line 1914 "trad2simp_x86.in"
    {"\334\214","\x50\x8d" },
#line 1751 "trad2simp_x86.in"
    {"\177\212","\xd6\x8b" },
#line 2708 "trad2simp_x86.in"
    {"\011\234","\xc7\x9c" },
#line 1484 "trad2simp_x86.in"
    {"\325\201","\x98\x81" },
#line 2649 "trad2simp_x86.in"
    {"\343\232","\xff\x4e" },
#line 1875 "trad2simp_x86.in"
    {"\235\214","\x1d\x8d" },
#line 1468 "trad2simp_x86.in"
    {"k\201","\xbf\x80" },
#line 2939 "trad2simp_x86.in"
    {"r^\334f","\x7e\x4e\xdc\x66" },
#line 1483 "trad2simp_x86.in"
    {"\317\201","\x91\x81" },
#line 538 "trad2simp_x86.in"
    {"\024b","\x0b\x62" },
#line 2162 "trad2simp_x86.in"
    {"\177\222","\xea\x94" },
#line 2047 "trad2simp_x86.in"
    {"T\220","\xbe\x8f" },
#line 1303 "trad2simp_x86.in"
    {"\203}","\xe1\x7e" },
#line 2725 "trad2simp_x86.in"
    {"3\234","\xd3\x9c" },
#line 2842 "trad2simp_x86.in"
    {"}\236","\xd0\x76" },
#line 2164 "trad2simp_x86.in"
    {"\203\222","\xf3\x94" },
#line 1684 "trad2simp_x86.in"
    {"\262\211","\xd0\x89" },
#line 887 "trad2simp_x86.in"
    {"\202o","\x84\x6f" },
#line 1765 "trad2simp_x86.in"
    {"\241\212","\xeb\x8b" },
#line 2880 "trad2simp_x86.in"
    {"w\237","\x8c\x9f" },
#line 2822 "trad2simp_x86.in"
    {"\357\235","\x69\x9e" },
#line 428 "trad2simp_x86.in"
    {"c^","\x01\x5e" },
#line 2836 "trad2simp_x86.in"
    {"\035\236","\x42\x9e" },
#line 1458 "trad2simp_x86.in"
    {"\010\201","\x09\x81" },
#line 2184 "trad2simp_x86.in"
    {"\267\222","\x00\x95" },
#line 1489 "trad2simp_x86.in"
    {"\340\201","\x14\x81" },
#line 609 "trad2simp_x86.in"
    {"\312d","\xfb\x51" },
#line 1253 "trad2simp_x86.in"
    {"\006}","\xa1\x7e" },
#line 1947 "trad2simp_x86.in"
    {"\250\215","\x8b\x8d" },
#line 1549 "trad2simp_x86.in"
    {"%\205","\x71\x84" },
#line 430 "trad2simp_x86.in"
    {"l^","\x31\x5e" },
#line 1814 "trad2simp_x86.in"
    {"\005\213","\xcc\x8b" },
#line 989 "trad2simp_x86.in"
    {"\233r","\x66\x72" },
#line 387 "trad2simp_x86.in"
    {"\241\\","\x88\x51" },
#line 2267 "trad2simp_x86.in"
    {"\241\223","\x43\x95" },
#line 1054 "trad2simp_x86.in"
    {"lu","\x72\x75" },
#line 1703 "trad2simp_x86.in"
    {"\025\212","\xaa\x8b" },
#line 2214 "trad2simp_x86.in"
    {"\006\223","\x16\x95" },
#line 612 "trad2simp_x86.in"
    {"\324d","\xc5\x62" },
#line 1296 "trad2simp_x86.in"
    {"h}","\xd2\x7e" },
#line 832 "trad2simp_x86.in"
    {"\352m","\xa6\x6c" },
#line 1262 "trad2simp_x86.in"
    {"\025}","\xb0\x7e" },
#line 2203 "trad2simp_x86.in"
    {"\352\222","\xfa\x94" },
#line 2952 "trad2simp_x86.in"
    {"r^\206\226","\x7e\x4e\x86\x96" },
#line 1617 "trad2simp_x86.in"
    {"\310\207","\x48\x87" },
#line 424 "trad2simp_x86.in"
    {"C^","\x0f\x5e" },
#line 532 "trad2simp_x86.in"
    {"\372a","\xcf\x5f" },
#line 2849 "trad2simp_x86.in"
    {"\314\236","\xc9\x9e" },
#line 2123 "trad2simp_x86.in"
    {"\025\222","\xae\x94" },
#line 385 "trad2simp_x86.in"
    {"h\\","\x66\x5c" },
#line 2219 "trad2simp_x86.in"
    {"\025\223","\x1f\x95" },
#line 249 "trad2simp_x86.in"
    {"\225V","\x5c\x56" },
#line 2516 "trad2simp_x86.in"
    {"\257\230","\xd2\x98" },
#line 1361 "trad2simp_x86.in"
    {"\025~","\x0a\x7f" },
#line 151 "trad2simp_x86.in"
    {"\211R","\x18\x52" },
#line 259 "trad2simp_x86.in"
    {"\301V","\xeb\x55" },
#line 1565 "trad2simp_x86.in"
    {"\214\205","\x97\x82" },
#line 956 "trad2simp_x86.in"
    {"\227q","\x9d\x70" },
#line 66 "trad2simp_x86.in"
    {"\013P","\x2a\x4e" },
#line 617 "trad2simp_x86.in"
    {"\354d","\xdf\x62" },
#line 1525 "trad2simp_x86.in"
    {",\204","\x07\x4e" },
#line 1469 "trad2simp_x86.in"
    {"s\201","\x1a\x81" },
#line 1877 "trad2simp_x86.in"
    {"\240\214","\x1f\x8d" },
#line 163 "trad2simp_x86.in"
    {"\336R","\xb3\x52" },
#line 888 "trad2simp_x86.in"
    {"\206o","\x47\x6d" },
#line 87 "trad2simp_x86.in"
    {"\265P","\x3a\x50" },
#line 2835 "trad2simp_x86.in"
    {"\033\236","\x73\x9e" },
#line 2051 "trad2simp_x86.in"
    {"^\220","\x12\x90" },
#line 710 "trad2simp_x86.in"
    {"hi","\x62\x68" },
#line 2755 "trad2simp_x86.in"
    {"\366\234","\x22\x9e" },
#line 591 "trad2simp_x86.in"
    {"\217d","\x26\x63" },
#line 1079 "trad2simp_x86.in"
    {"Iv","\x05\x76" },
#line 2096 "trad2simp_x86.in"
    {"\323\221","\x86\x94" },
#line 459 "trad2simp_x86.in"
    {"H_","\x39\x5f" },
#line 1533 "trad2simp_x86.in"
    {"w\204","\x64\x83" },
#line 34 "trad2simp_x86.in"
    {"s:","\xd0\x39" },
#line 2741 "trad2simp_x86.in"
    {"_\234","\x8e\x9c" },
#line 1806 "trad2simp_x86.in"
    {"\370\212","\xf8\x8b" },
#line 2622 "trad2simp_x86.in"
    {"7\232","\x9a\x9a" },
#line 2467 "trad2simp_x86.in"
    {"\006\230","\x7a\x98" },
#line 1109 "trad2simp_x86.in"
    {"%w","\x26\x77" },
#line 744 "trad2simp_x86.in"
    {"\234j","\x67\x68" },
#line 251 "trad2simp_x86.in"
    {"\245V","\xbd\x54" },
#line 779 "trad2simp_x86.in"
    {"Nk","\xf9\x53" },
#line 1208 "trad2simp_x86.in"
    {"\313{","\xa7\x7b" },
#line 2209 "trad2simp_x86.in"
    {"\370\222","\x2f\x95" },
#line 2730 "trad2simp_x86.in"
    {"<\234","\xdb\x9c" },
#line 2101 "trad2simp_x86.in"
    {"\331\221","\x8b\x94" },
#line 2531 "trad2simp_x86.in"
    {"\352\230","\x6a\x99" },
#line 1894 "trad2simp_x86.in"
    {"\272\214","\x36\x8d" },
#line 1555 "trad2simp_x86.in"
    {"R\205","\x6c\x83" },
#line 1524 "trad2simp_x86.in"
    {"\012\204","\xb1\x83" },
#line 55 "trad2simp_x86.in"
    {"\206O","\x65\x67" },
#line 96 "trad2simp_x86.in"
    {"\336P","\x2a\x4f" },
#line 226 "trad2simp_x86.in"
    {"\027V","\x1d\x5c" },
#line 2228 "trad2simp_x86.in"
    {"(\223","\x1a\x95" },
#line 1713 "trad2simp_x86.in"
    {")\212","\xbb\x8b" },
#line 2362 "trad2simp_x86.in"
    {"\221\225","\xf2\x95" },
#line 1625 "trad2simp_x86.in"
    {"\373\207","\x81\x86" },
#line 337 "trad2simp_x86.in"
    {"\256Z","\x77\x50" },
#line 1002 "trad2simp_x86.in"
    {"Es","\xee\x72" },
#line 2112 "trad2simp_x86.in"
    {"\376\221","\x7a\x49" },
#line 822 "trad2simp_x86.in"
    {")m","\xc4\x6c" },
#line 68 "trad2simp_x86.in"
    {"\026P","\x78\x5e" },
#line 741 "trad2simp_x86.in"
    {"\201j","\xa9\x6a" },
#line 624 "trad2simp_x86.in"
    {"\372d","\x46\x64" },
#line 970 "trad2simp_x86.in"
    {"\355q","\xdb\x70" },
#line 1701 "trad2simp_x86.in"
    {"\020\212","\xa6\x8b" },
#line 2045 "trad2simp_x86.in"
    {"K\220","\xd0\x8f" },
#line 734 "trad2simp_x86.in"
    {":j","\x66\x68" },
#line 2275 "trad2simp_x86.in"
    {"\256\223","\x47\x95" },
#line 2110 "trad2simp_x86.in"
    {"\371\221","\x95\x94" },
#line 1259 "trad2simp_x86.in"
    {"\020}","\xbd\x7e" },
#line 2351 "trad2simp_x86.in"
    {"\202\224","\x4b\x95" },
#line 1485 "trad2simp_x86.in"
    {"\330\201","\x4a\x81" },
#line 1900 "trad2simp_x86.in"
    {"\301\214","\x32\x8d" },
#line 2120 "trad2simp_x86.in"
    {"\020\222","\xa4\x94" },
#line 1108 "trad2simp_x86.in"
    {"\352v","\x61\x83" },
#line 1802 "trad2simp_x86.in"
    {"\361\212","\xb3\x8b" },
#line 297 "trad2simp_x86.in"
    {"yX","\x11\x58" },
#line 2217 "trad2simp_x86.in"
    {"\020\223","\x25\x95" },
#line 916 "trad2simp_x86.in"
    {"\006p","\x0e\x6e" },
#line 1349 "trad2simp_x86.in"
    {"\361}","\x11\x7f" },
#line 2838 "trad2simp_x86.in"
    {"u\236","\x64\x53" },
#line 1359 "trad2simp_x86.in"
    {"\020~","\xc9\x7e" },
#line 785 "trad2simp_x86.in"
    {"xk","\x52\x5f" },
#line 196 "trad2simp_x86.in"
    {"\267T","\x55\x55" },
#line 2207 "trad2simp_x86.in"
    {"\361\222","\xfd\x94" },
#line 317 "trad2simp_x86.in"
    {"\372X","\xf6\x58" },
#line 2853 "trad2simp_x86.in"
    {"\364\236","\x09\x97" },
#line 715 "trad2simp_x86.in"
    {"\256i","\x63\x83" },
#line 1623 "trad2simp_x86.in"
    {"\366\207","\xcf\x86" },
#line 1018 "trad2simp_x86.in"
    {"\206s","\x79\x51" },
#line 920 "trad2simp_x86.in"
    {"\025p","\xd2\x6f" },
#line 483 "trad2simp_x86.in"
    {"\361`","\x7c\x60" },
#line 531 "trad2simp_x86.in"
    {"\370a","\xac\x60" },
#line 2433 "trad2simp_x86.in"
    {"\343\226","\xbe\x96" },
#line 1608 "trad2simp_x86.in"
    {"_\207","\x2c\x73" },
#line 2383 "trad2simp_x86.in"
    {"\277\225","\x0c\x96" },
#line 1201 "trad2simp_x86.in"
    {"\207{","\x2a\x4e" },
#line 489 "trad2simp_x86.in"
    {"(a","\xab\x60" },
#line 1836 "trad2simp_x86.in"
    {"N\213","\x32\x8c" },
#line 2073 "trad2simp_x86.in"
    {"-\221","\xd1\x90" },
#line 2724 "trad2simp_x86.in"
    {"2\234","\xcc\x9c" },
#line 2866 "trad2simp_x86.in"
    {"R\237","\x7f\x9f" },
#line 1487 "trad2simp_x86.in"
    {"\332\201","\xea\x80" },
#line 571 "trad2simp_x86.in"
    {"\006d","\x84\x67" },
#line 1316 "trad2simp_x86.in"
    {"\255}","\xf4\x7e" },
#line 868 "trad2simp_x86.in"
    {"\032o","\xa4\x6c" },
#line 81 "trad2simp_x86.in"
    {"\232P","\x48\x65" },
#line 450 "trad2simp_x86.in"
    {"\354^","\x90\x5e" },
#line 2515 "trad2simp_x86.in"
    {"\256\230","\xd1\x98" },
#line 2107 "trad2simp_x86.in"
    {"\351\221","\x92\x94" },
#line 1918 "trad2simp_x86.in"
    {"\342\214","\x24\x8d" },
#line 2138 "trad2simp_x86.in"
    {">\222","\xc0\x94" },
#line 516 "trad2simp_x86.in"
    {"\256a","\x03\x60" },
#line 2933 "trad2simp_x86.in"
    {"r^\376V","\x7e\x4e\xfe\x56" },
#line 2984 "trad2simp_x86.in"
    {"\250~\344\210P[\037_","\xa8\x7e\xd4\x7e\x50\x5b\x1f\x5f" },
#line 2134 "trad2simp_x86.in"
    {"8\222","\xb9\x94" },
#line 1117 "trad2simp_x86.in"
    {"\234w","\x56\x40" },
#line 1887 "trad2simp_x86.in"
    {"\260\214","\x33\x8d" },
#line 2474 "trad2simp_x86.in"
    {"\020\230","\x84\x98" },
#line 1382 "trad2simp_x86.in"
    {">~","\xe9\x7e" },
#line 336 "trad2simp_x86.in"
    {"\247Z","\x32\x5a" },
#line 2234 "trad2simp_x86.in"
    {"8\223","\xfc\x94" },
#line 2886 "trad2simp_x86.in"
    {"\234\237","\x9f\x9f" },
#line 1000 "trad2simp_x86.in"
    {"Cs","\x46\x54" },
#line 1822 "trad2simp_x86.in"
    {"\032\213","\x25\x8c" },
#line 1825 "trad2simp_x86.in"
    {" \213","\x23\x8c" },
#line 803 "trad2simp_x86.in"
    {"\354k","\x03\x74" },
#line 2271 "trad2simp_x86.in"
    {"\247\223","\xe0\x94" },
#line 227 "trad2simp_x86.in"
    {"\034V","\x1b\x55" },
#line 2336 "trad2simp_x86.in"
    {"c\224","\x73\x95" },
#line 2105 "trad2simp_x86.in"
    {"\346\221","\x63\x62" },
#line 2765 "trad2simp_x86.in"
    {"\036\235","\x2e\x9e" },
#line 2767 "trad2simp_x86.in"
    {"#\235","\x2a\x9e" },
#line 2098 "trad2simp_x86.in"
    {"\325\221","\x8c\x94" },
#line 927 "trad2simp_x86.in"
    {"(p","\xd1\x6f" },
#line 800 "trad2simp_x86.in"
    {"\306k","\xb4\x6b" },
#line 157 "trad2simp_x86.in"
    {"\301R","\xb2\x52" },
#line 2855 "trad2simp_x86.in"
    {"\367\236","\xe9\x9e" },
#line 2218 "trad2simp_x86.in"
    {"\022\223","\x15\x95" },
#line 879 "trad2simp_x86.in"
    {"[o","\x5c\x6f" },
#line 2373 "trad2simp_x86.in"
    {"\253\225","\x03\x96" },
#line 2338 "trad2simp_x86.in"
    {"e\224","\x65\x95" },
#line 67 "trad2simp_x86.in"
    {"\021P","\xec\x4e" },
#line 1622 "trad2simp_x86.in"
    {"\362\207","\x6b\x86" },
#line 1003 "trad2simp_x86.in"
    {"Ns","\x56\x59" },
#line 1540 "trad2simp_x86.in"
    {"\313\204","\xd6\x76" },
#line 433 "trad2simp_x86.in"
    {"y^","\x72\x5e" },
#line 1115 "trad2simp_x86.in"
    {"\207w","\x2f\x77" },
#line 1528 "trad2simp_x86.in"
    {"R\204","\x6d\x83" },
#line 340 "trad2simp_x86.in"
    {"\275Z","\x88\x59" },
#line 1326 "trad2simp_x86.in"
    {"\275}","\xf0\x7e" },
#line 2728 "trad2simp_x86.in"
    {"9\234","\xa3\x9c" },
#line 1274 "trad2simp_x86.in"
    {"0}","\xc6\x7e" },
#line 1671 "trad2simp_x86.in"
    {"\210\211","\x38\x68" },
#line 307 "trad2simp_x86.in"
    {"\316X","\xd9\x57" },
#line 954 "trad2simp_x86.in"
    {"lq","\x80\x70" },
#line 2130 "trad2simp_x86.in"
    {"0\222","\xc8\x94" },
#line 1064 "trad2simp_x86.in"
    {"\372u","\xf9\x75" },
#line 577 "trad2simp_x86.in"
    {"(d","\x53\x62" },
#line 492 "trad2simp_x86.in"
    {">a","\xfe\x5f" },
#line 952 "trad2simp_x86.in"
    {"eq","\x15\x71" },
#line 2489 "trad2simp_x86.in"
    {"8\230","\x88\x98" },
#line 2613 "trad2simp_x86.in"
    {"\017\232","\x90\x9a" },
#line 480 "trad2simp_x86.in"
    {"\275`","\xc4\x51" },
#line 2766 "trad2simp_x86.in"
    {"\037\235","\x31\x9e" },
#line 1474 "trad2simp_x86.in"
    {"\232\201","\xa4\x80" },
#line 908 "trad2simp_x86.in"
    {"\354o","\x5a\x6d" },
#line 2406 "trad2simp_x86.in"
    {"]\226","\x55\x96" },
#line 2102 "trad2simp_x86.in"
    {"\335\221","\x88\x94" },
#line 1007 "trad2simp_x86.in"
    {"ns","\xdd\x72" },
#line 1544 "trad2simp_x86.in"
    {"\375\204","\x5c\x83" },
#line 78 "trad2simp_x86.in"
    {"\226P","\x27\x4f" },
#line 2240 "trad2simp_x86.in"
    {"J\223","\xbc\x70" },
#line 2493 "trad2simp_x86.in"
    {"L\230","\x98\x98" },
#line 1476 "trad2simp_x86.in"
    {"\240\201","\xf6\x80" },
#line 1784 "trad2simp_x86.in"
    {"\315\212","\xe4\x8b" },
#line 1566 "trad2simp_x86.in"
    {"\221\205","\xdc\x59" },
#line 164 "trad2simp_x86.in"
    {"\342R","\xbf\x52" },
#line 2882 "trad2simp_x86.in"
    {"\220\237","\x9e\x5e" },
#line 2068 "trad2simp_x86.in"
    {"\011\221","\x61\x4e" },
#line 247 "trad2simp_x86.in"
    {"\214V","\xdc\x54" },
#line 2476 "trad2simp_x86.in"
    {"\022\230","\x81\x98" },
#line 2781 "trad2simp_x86.in"
    {"S\235","\x41\x9e" },
#line 2706 "trad2simp_x86.in"
    {"\002\234","\x97\x9c" },
#line 89 "trad2simp_x86.in"
    {"\276P","\x3e\x50" },
#line 1777 "trad2simp_x86.in"
    {"\274\212","\x0a\x8c" },
#line 2128 "trad2simp_x86.in"
    {"'\222","\xaa\x94" },
#line 1012 "trad2simp_x86.in"
    {"xs","\x7d\x51" },
#line 339 "trad2simp_x86.in"
    {"\274Z","\xaa\x5a" },
#line 2284 "trad2simp_x86.in"
    {"\315\223","\x59\x95" },
#line 794 "trad2simp_x86.in"
    {"\257k","\xa1\x6b" },
#line 1941 "trad2simp_x86.in"
    {"\020\215","\x46\x8d" },
#line 2109 "trad2simp_x86.in"
    {"\367\221","\x8d\x94" },
#line 767 "trad2simp_x86.in"
    {"\363j","\x0a\x68" },
#line 2054 "trad2simp_x86.in"
    {"r\220","\xdf\x8f" },
#line 827 "trad2simp_x86.in"
    {"\274m","\xc9\x51" },
#line 2854 "trad2simp_x86.in"
    {"\366\236","\xe1\x9e" },
#line 2187 "trad2simp_x86.in"
    {"\274\222","\x09\x95" },
#line 706 "trad2simp_x86.in"
    {"Ji","\x68\x67" },
#line 1782 "trad2simp_x86.in"
    {"\311\212","\xff\x8b" },
#line 786 "trad2simp_x86.in"
    {"\177k","\x81\x6b" },
#line 620 "trad2simp_x86.in"
    {"\361d","\x01\x64" },
#line 302 "trad2simp_x86.in"
    {"\256X","\x15\x58" },
#line 2312 "trad2simp_x86.in"
    {" \224","\x68\x95" },
#line 930 "trad2simp_x86.in"
    {">p","\x9c\x6f" },
#line 1463 "trad2simp_x86.in"
    {"9\201","\xc0\x80" },
#line 1019 "trad2simp_x86.in"
    {"\250s","\xcf\x73" },
#line 1118 "trad2simp_x86.in"
    {"\236w","\x92\x77" },
#line 2846 "trad2simp_x86.in"
    {"\265\236","\x62\x97" },
#line 1977 "trad2simp_x86.in"
    {"\300\216","\xaf\x8e" },
#line 2418 "trad2simp_x86.in"
    {"\233\226","\x45\x96" },
#line 2486 "trad2simp_x86.in"
    {"0\230","\x8a\x98" },
#line 2817 "trad2simp_x86.in"
    {"\327\235","\x25\x9e" },
#line 414 "trad2simp_x86.in"
    {"\322]","\xe6\x5c" },
#line 1456 "trad2simp_x86.in"
    {"\312\200","\x10\x67" },
#line 72 "trad2simp_x86.in"
    {"jP","\x3c\x90" },
#line 719 "trad2simp_x86.in"
    {"\315i","\xaa\x67" },
#line 1870 "trad2simp_x86.in"
    {"V\214","\x8d\x4e" },
#line 1046 "trad2simp_x86.in"
    {"\025u","\xee\x74" },
#line 2513 "trad2simp_x86.in"
    {"t\230","\xa7\x98" },
#line 2043 "trad2simp_x86.in"
    {"2\220","\xdb\x8f" },
#line 911 "trad2simp_x86.in"
    {"\372o","\x85\x6e" },
#line 2076 "trad2simp_x86.in"
    {"4\221","\xba\x90" },
#line 1285 "trad2simp_x86.in"
    {"D}","\xc4\x7e" },
#line 147 "trad2simp_x86.in"
    {"wR","\xf2\x94" },
#line 1214 "trad2simp_x86.in"
    {"\363{","\x5a\x7b" },
#line 1689 "trad2simp_x86.in"
    {"\300\211","\xc2\x89" },
#line 1473 "trad2simp_x86.in"
    {"\225\201","\x58\x81" },
#line 2077 "trad2simp_x86.in"
    {"6\221","\xd0\x90" },
#line 1377 "trad2simp_x86.in"
    {"5~","\x26\x7f" },
#line 391 "trad2simp_x86.in"
    {"\015]","\x03\x5d" },
#line 580 "trad2simp_x86.in"
    {">d","\xa8\x69" },
#line 2888 "trad2simp_x86.in"
    {"0\376","\x36\x22" },
#line 2616 "trad2simp_x86.in"
    {"#\232","\x03\x9b" },
#line 441 "trad2simp_x86.in"
    {"\316^","\xbc\x5e" },
#line 1534 "trad2simp_x86.in"
    {"\220\204","\x1c\x64" },
#line 2850 "trad2simp_x86.in"
    {"\336\236","\xb9\x70" },
#line 2883 "trad2simp_x86.in"
    {"\221\237","\xae\x4d" },
#line 2189 "trad2simp_x86.in"
    {"\303\222","\x12\x95" },
#line 885 "trad2simp_x86.in"
    {"\177o","\xa0\x6d" },
#line 32 "trad2simp_x86.in"
    {"\0326","\x0e\x36" },
#line 523 "trad2simp_x86.in"
    {"\315a","\xd4\x61" },
#line 464 "trad2simp_x86.in"
    {"e_","\x66\x5f" },
#line 2280 "trad2simp_x86.in"
    {"\303\223","\x5e\x95" },
#line 1835 "trad2simp_x86.in"
    {"I\213","\xc1\x8b" },
#line 212 "trad2simp_x86.in"
    {"\253U","\x03\x54" },
#line 2522 "trad2simp_x86.in"
    {"\274\230","\xd5\x98" },
#line 1722 "trad2simp_x86.in"
    {"A\212","\xc2\x8b" },
#line 2100 "trad2simp_x86.in"
    {"\330\221","\x89\x94" },
#line 1479 "trad2simp_x86.in"
    {"\276\201","\x0d\x81" },
#line 1206 "trad2simp_x86.in"
    {"\304{","\x03\x83" },
#line 332 "trad2simp_x86.in"
    {"AZ","\x04\x5a" },
#line 149 "trad2simp_x86.in"
    {"\204R","\x2d\x67" },
#line 705 "trad2simp_x86.in"
    {"Di","\x3e\x53" },
#line 928 "trad2simp_x86.in"
    {"0p","\x25\x5f" },
#line 1453 "trad2simp_x86.in"
    {"\217\200","\xcd\x64" },
#line 2852 "trad2simp_x86.in"
    {"\362\236","\xea\x9e" },
#line 1960 "trad2simp_x86.in"
    {"c\216","\x52\x8e" },
#line 2935 "trad2simp_x86.in"
    {"r^dW","\x7e\x4e\x64\x57" },
#line 1772 "trad2simp_x86.in"
    {"\254\212","\xf4\x8b" },
#line 418 "trad2simp_x86.in"
    {"\371]","\x7a\x53" },
#line 521 "trad2simp_x86.in"
    {"\311a","\x94\x5e" },
#line 2236 "trad2simp_x86.in"
    {"A\223","\x28\x95" },
#line 1315 "trad2simp_x86.in"
    {"\254}","\xf6\x7e" },
#line 1536 "trad2simp_x86.in"
    {"\236\204","\x85\x83" },
#line 717 "trad2simp_x86.in"
    {"\303i","\xd8\x76" },
#line 1720 "trad2simp_x86.in"
    {";\212","\xe8\x6c" },
#line 1699 "trad2simp_x86.in"
    {"\014\212","\xa7\x8b" },
#line 2180 "trad2simp_x86.in"
    {"\254\222","\xd0\x94" },
#line 2747 "trad2simp_x86.in"
    {"w\234","\xc4\x9c" },
#line 1073 "trad2simp_x86.in"
    {"'v","\x9f\x75" },
#line 461 "trad2simp_x86.in"
    {"N_","\x2f\x5f" },
#line 1541 "trad2simp_x86.in"
    {"\356\204","\xb2\x83" },
#line 2274 "trad2simp_x86.in"
    {"\254\223","\x50\x95" },
#line 2160 "trad2simp_x86.in"
    {"z\222","\xd2\x94" },
#line 1490 "trad2simp_x86.in"
    {"\342\201","\xdc\x81" },
#line 246 "trad2simp_x86.in"
    {"\207V","\x13\x54" },
#line 2956 "trad2simp_x86.in"
    {"p_\016f\203\217@w","\x70\x5f\x0e\x66\x83\x8f\x57\x84" },
#line 2254 "trad2simp_x86.in"
    {"z\223","\x17\x95" },
#line 992 "trad2simp_x86.in"
    {"\300r","\xb6\x72" },
#line 739 "trad2simp_x86.in"
    {"fj","\x62\x5e" },
#line 493 "trad2simp_x86.in"
    {"Da","\x17\x68" },
#line 1667 "trad2simp_x86.in"
    {"l\211","\x46\x64" },
#line 926 "trad2simp_x86.in"
    {"'p","\xf7\x6c" },
#line 2239 "trad2simp_x86.in"
    {"G\223","\x34\x95" },
#line 59 "trad2simp_x86.in"
    {"\267O","\x40\x5c" },
#line 1449 "trad2simp_x86.in"
    {"y\200","\x4d\x80" },
#line 2663 "trad2simp_x86.in"
    {"Z\233","\x7c\x9c" },
#line 1390 "trad2simp_x86.in"
    {"Y~","\xfb\x7f" },
#line 969 "trad2simp_x86.in"
    {"\354q","\xc1\x6b" },
#line 2693 "trad2simp_x86.in"
    {"\333\233","\xb7\x9c" },
#line 134 "trad2simp_x86.in"
    {"%R","\x2b\x52" },
#line 2674 "trad2simp_x86.in"
    {"\222\233","\x8b\x9c" },
#line 519 "trad2simp_x86.in"
    {"\303a","\xe4\x52" },
#line 2675 "trad2simp_x86.in"
    {"\223\233","\x8a\x9c" },
#line 1211 "trad2simp_x86.in"
    {"\344{","\x03\x7b" },
#line 1607 "trad2simp_x86.in"
    {"U\207","\x80\x86" },
#line 1546 "trad2simp_x86.in"
    {"\024\205","\x5c\x53" },
#line 1868 "trad2simp_x86.in"
    {"P\214","\x30\x4e" },
#line 451 "trad2simp_x86.in"
    {"\361^","\xc8\x75" },
#line 793 "trad2simp_x86.in"
    {"\256k","\x93\x6b" },
#line 2071 "trad2simp_x86.in"
    {"\026\221","\xe7\x90" },
#line 248 "trad2simp_x86.in"
    {"\220V","\x1d\x5c" },
#line 197 "trad2simp_x86.in"
    {"\274T","\x59\x54" },
#line 1932 "trad2simp_x86.in"
    {"\375\214","\x5b\x8d" },
#line 49 "trad2simp_x86.in"
    {"\025O","\x2b\x59" },
#line 708 "trad2simp_x86.in"
    {"Yi","\x02\x83" },
#line 2652 "trad2simp_x86.in"
    {"\015\233","\xe1\x80" },
#line 665 "trad2simp_x86.in"
    {"\230f","\x33\x96" },
#line 1325 "trad2simp_x86.in"
    {"\273}","\xfd\x7e" },
#line 2345 "trad2simp_x86.in"
    {"y\224","\x69\x95" },
#line 2714 "trad2simp_x86.in"
    {"\034\234","\xd2\x9c" },
#line 2177 "trad2simp_x86.in"
    {"\251\222","\xe5\x94" },
#line 2186 "trad2simp_x86.in"
    {"\273\222","\x11\x95" },
#line 2147 "trad2simp_x86.in"
    {"Q\222","\xc2\x94" },
#line 288 "trad2simp_x86.in"
    {"JX","\x57\x57" },
#line 2272 "trad2simp_x86.in"
    {"\251\223","\xe9\x94" },
#line 672 "trad2simp_x86.in"
    {"\307f","\x19\x66" },
#line 153 "trad2simp_x86.in"
    {"\214R","\x3f\x52" },
#line 272 "trad2simp_x86.in"
    {"\022W","\xed\x56" },
#line 1101 "trad2simp_x86.in"
    {"\303v","\x6f\x67" },
#line 932 "trad2simp_x86.in"
    {"Dp","\xe0\x6e" },
#line 1786 "trad2simp_x86.in"
    {"\321\212","\xfc\x8b" },
#line 2491 "trad2simp_x86.in"
    {";\230","\x91\x98" },
#line 2471 "trad2simp_x86.in"
    {"\014\230","\x82\x98" },
#line 2687 "trad2simp_x86.in"
    {"\307\233","\xa9\x9c" },
#line 2787 "trad2simp_x86.in"
    {"l\235","\x4f\x9e" },
#line 215 "trad2simp_x86.in"
    {"\262U","\xdf\x54" },
#line 2501 "trad2simp_x86.in"
    {"Y\230","\xa1\x98" },
#line 2075 "trad2simp_x86.in"
    {"2\221","\xf8\x90" },
#line 2737 "trad2simp_x86.in"
    {"V\234","\xdc\x9c" },
#line 494 "trad2simp_x86.in"
    {"Ga","\xb7\x6b" },
#line 2718 "trad2simp_x86.in"
    {"%\234","\xcf\x9c" },
#line 2285 "trad2simp_x86.in"
    {"\321\223","\x5d\x95" },
#line 2349 "trad2simp_x86.in"
    {"\177\224","\xff\x51" },
#line 2778 "trad2simp_x86.in"
    {"C\235","\x3c\x9e" },
#line 896 "trad2simp_x86.in"
    {"\256o","\x4d\x6d" },
#line 947 "trad2simp_x86.in"
    {"Iq","\xbc\x70" },
#line 2610 "trad2simp_x86.in"
    {"\005\232","\x93\x9a" },
#line 1020 "trad2simp_x86.in"
    {"\352s","\x2d\x57" },
#line 2777 "trad2simp_x86.in"
    {"B\235","\x3a\x9e" },
#line 1004 "trad2simp_x86.in"
    {"hs","\xec\x72" },
#line 1826 "trad2simp_x86.in"
    {"(\213","\x1f\x8c" },
#line 792 "trad2simp_x86.in"
    {"\255k","\xf5\x50" },
#line 2048 "trad2simp_x86.in"
    {"U\220","\xdd\x8f" },
#line 2830 "trad2simp_x86.in"
    {"\007\236","\x6f\x9e" },
#line 2900 "trad2simp_x86.in"
    {"Y\376","\x08\xff" },
#line 1198 "trad2simp_x86.in"
    {"g{","\x15\x7b" },
#line 2671 "trad2simp_x86.in"
    {"\215\233","\x8f\x9c" },
#line 1075 "trad2simp_x86.in"
    {";v","\x18\x76" },
#line 777 "trad2simp_x86.in"
    {"8k","\x09\x55" },
#line 1978 "trad2simp_x86.in"
    {"\312\216","\x66\x8f" },
#line 1078 "trad2simp_x86.in"
    {"Gv","\xeb\x75" },
#line 910 "trad2simp_x86.in"
    {"\361o","\xe8\x6e" },
#line 2662 "trad2simp_x86.in"
    {"X\233","\x47\x9b" },
#line 1612 "trad2simp_x86.in"
    {"\204\207","\xf3\x86" },
#line 2630 "trad2simp_x86.in"
    {"E\232","\x71\x9a" },
#line 1123 "trad2simp_x86.in"
    {"\357w","\xeb\x77" },
#line 2874 "trad2simp_x86.in"
    {"f\237","\x88\x9f" },
#line 1983 "trad2simp_x86.in"
    {"\324\216","\x6b\x8f" },
#line 2816 "trad2simp_x86.in"
    {"\326\235","\x65\x9e" },
#line 1817 "trad2simp_x86.in"
    {"\020\213","\x27\x8c" },
#line 1568 "trad2simp_x86.in"
    {"\231\205","\x43\x52" },
#line 774 "trad2simp_x86.in"
    {"\022k","\x3e\x68" },
#line 1465 "trad2simp_x86.in"
    {"V\201","\xe8\x80" },
#line 2946 "trad2simp_x86.in"
    {"r^\005}","\x7e\x4e\xa2\x7e" },
#line 1229 "trad2simp_x86.in"
    {"\\|","\xa8\x7b" },
#line 1221 "trad2simp_x86.in"
    {"+|","\xab\x7b" },
#line 1231 "trad2simp_x86.in"
    {"`|","\x3c\x7b" },
#line 2894 "trad2simp_x86.in"
    {"Q\376","\x01\x30" },
#line 2788 "trad2simp_x86.in"
    {"n\235","\x50\x9e" },
#line 1690 "trad2simp_x86.in"
    {"\324\211","\x4b\x7b" },
#line 2055 "trad2simp_x86.in"
    {"w\220","\xc1\x8f" },
#line 2844 "trad2simp_x86.in"
    {"\245\236","\xa6\x9e" },
#line 397 "trad2simp_x86.in"
    {"3]","\x5b\x5d" },
#line 659 "trad2simp_x86.in"
    {"^f","\xe6\x66" },
#line 1234 "trad2simp_x86.in"
    {"i|","\x3e\x7b" },
#line 1876 "trad2simp_x86.in"
    {"\236\214","\x1e\x8d" },
#line 1216 "trad2simp_x86.in"
    {"\015|","\xd3\x7b" },
#line 874 "trad2simp_x86.in"
    {"8o","\x10\x6e" },
#line 2735 "trad2simp_x86.in"
    {"R\234","\xdf\x9c" },
#line 798 "trad2simp_x86.in"
    {"\275k","\xb4\x80" },
#line 990 "trad2simp_x86.in"
    {"\242r","\x8a\x72" },
#line 674 "trad2simp_x86.in"
    {"\317f","\x11\x54" },
#line 403 "trad2simp_x86.in"
    {"\224]","\x5a\x5d" },
#line 2040 "trad2simp_x86.in"
    {"\031\220","\xd9\x8f" },
#line 933 "trad2simp_x86.in"
    {"Qp","\x12\x6d" },
#line 2594 "trad2simp_x86.in"
    {"\322\231","\x79\x9a" },
#line 2703 "trad2simp_x86.in"
    {"\364\233","\xba\x9c" },
#line 150 "trad2simp_x86.in"
    {"\207R","\x67\x52" },
#line 2599 "trad2simp_x86.in"
    {"\333\231","\x76\x9a" },
#line 2875 "trad2simp_x86.in"
    {"g\237","\x6e\x55" },
#line 2601 "trad2simp_x86.in"
    {"\337\231","\x77\x9a" },
#line 2582 "trad2simp_x86.in"
    {"\\\231","\x0d\x99" },
#line 1832 "trad2simp_x86.in"
    {">\213","\x29\x8c" },
#line 2090 "trad2simp_x86.in"
    {"\301\221","\x45\x88" },
#line 1248 "trad2simp_x86.in"
    {"\376|","\xa0\x7e" },
#line 2680 "trad2simp_x86.in"
    {"\252\233","\x94\x9c" },
#line 2060 "trad2simp_x86.in"
    {"\204\220","\xd8\x8f" },
#line 2972 "trad2simp_x86.in"
    {"@wU_","\x57\x84\x55\x5f" },
#line 1674 "trad2simp_x86.in"
    {"\217\211","\xc4\x89" },
#line 676 "trad2simp_x86.in"
    {"\340f","\xf7\x65" },
#line 2316 "trad2simp_x86.in"
    {"(\224","\x44\x95" },
#line 1531 "trad2simp_x86.in"
    {"f\204","\xc7\x82" },
#line 735 "trad2simp_x86.in"
    {"Hj","\x61\x68" },
#line 1542 "trad2simp_x86.in"
    {"\357\204","\xc1\x82" },
#line 762 "trad2simp_x86.in"
    {"\347j","\xe0\x69" },
#line 686 "trad2simp_x86.in"
    {"\264g","\xd0\x62" },
#line 2641 "trad2simp_x86.in"
    {"e\232","\xa5\x9a" },
#line 2598 "trad2simp_x86.in"
    {"\331\231","\x78\x9a" },
#line 2666 "trad2simp_x86.in"
    {"o\233","\x81\x9c" },
#line 603 "trad2simp_x86.in"
    {"\273d","\x1e\x63" },
#line 583 "trad2simp_x86.in"
    {"Qd","\xb4\x63" },
#line 466 "trad2simp_x86.in"
    {"\177_","\x5b\x4f" },
#line 2628 "trad2simp_x86.in"
    {"C\232","\xa0\x9a" },
#line 797 "trad2simp_x86.in"
    {"\274k","\xf3\x58" },
#line 2552 "trad2simp_x86.in"
    {"\023\231","\x7f\x99" },
#line 1919 "trad2simp_x86.in"
    {"\343\214","\x56\x53" },
#line 1232 "trad2simp_x86.in"
    {"d|","\x7e\x7b" },
#line 2627 "trad2simp_x86.in"
    {"B\232","\x96\x9a" },
#line 1991 "trad2simp_x86.in"
    {"\372\216","\x7a\x8f" },
#line 2694 "trad2simp_x86.in"
    {"\335\233","\xb4\x9c" },
#line 2985 "trad2simp_x86.in"
    {"\356~f\211","\xee\x7e\x66\x89" },
#line 730 "trad2simp_x86.in"
    {"\036j","\xa2\x67" },
#line 731 "trad2simp_x86.in"
    {"#j","\x37\x68" },
#line 2305 "trad2simp_x86.in"
    {"\020\224","\x63\x95" },
#line 304 "trad2simp_x86.in"
    {"\273X","\x99\x58" },
#line 236 "trad2simp_x86.in"
    {"]V","\x9d\x54" },
#line 3003 "trad2simp_x86.in"
    {"\207\234|\234","\xb6\x9c\x7c\x9c"},
#line 661 "trad2simp_x86.in"
    {"sf","\x70\x66" },
#line 2087 "trad2simp_x86.in"
    {"\261\221","\xd1\x53" },
#line 2556 "trad2simp_x86.in"
    {"\033\231","\x84\x99" },
#line 1661 "trad2simp_x86.in"
    {"I\211","\xe5\x88" },
#line 2659 "trad2simp_x86.in"
    {".\233","\x04\x96" },
#line 1898 "trad2simp_x86.in"
    {"\277\214","\x38\x8d" },
#line 2796 "trad2simp_x86.in"
    {"\217\235","\x21\x9e" },
#line 2831 "trad2simp_x86.in"
    {"\012\236","\x19\x4d" },
#line 2354 "trad2simp_x86.in"
    {"\202\225","\xe9\x95" },
#line 2648 "trad2simp_x86.in"
    {"\326\232","\xcb\x9a" },
#line 409 "trad2simp_x86.in"
    {"\270]","\x58\x5d" },
#line 1849 "trad2simp_x86.in"
    {"t\213","\x34\x8c" },
#line 2590 "trad2simp_x86.in"
    {"\264\231","\x6f\x9a" },
#line 1683 "trad2simp_x86.in"
    {"\257\211","\xcf\x89" },
#line 2943 "trad2simp_x86.in"
    {"r^\333v\026N","\x7e\x4e\xdb\x76\x16\x4e" },
#line 224 "trad2simp_x86.in"
    {"\024V","\x55\x54" },
#line 1547 "trad2simp_x86.in"
    {"\036\205","\x8c\x84" },
#line 1548 "trad2simp_x86.in"
    {"#\205","\x8b\x84" },
#line 2589 "trad2simp_x86.in"
    {"\263\231","\x70\x9a" },
#line 2398 "trad2simp_x86.in"
    {"\341\225","\x10\x96" },
#line 1973 "trad2simp_x86.in"
    {"\241\216","\x51\x8e" },
#line 763 "trad2simp_x86.in"
    {"\350j","\x0c\x68" },
#line 239 "trad2simp_x86.in"
    {"fV","\xd5\x54" },
#line 155 "trad2simp_x86.in"
    {"\221R","\x42\x52" },
#line 2678 "trad2simp_x86.in"
    {"\243\233","\x9f\x4c" },
#line 1903 "trad2simp_x86.in"
    {"\304\214","\x3f\x8d" },
#line 2324 "trad2simp_x86.in"
    {"8\224","\xce\x94" },
#line 1685 "trad2simp_x86.in"
    {"\267\211","\xd1\x89" },
#line 2994 "trad2simp_x86.in"
    {"\241\213;u","\xa1\x8b\x12\x52" },
#line 1246 "trad2simp_x86.in"
    {"\364|","\x74\x7c" },
#line 1045 "trad2simp_x86.in"
    {"\014u","\xef\x74" },
#line 1679 "trad2simp_x86.in"
    {"\241\211","\xcb\x89" },
#line 873 "trad2simp_x86.in"
    {"5o","\x86\x6e" },
#line 2581 "trad2simp_x86.in"
    {"W\231","\xe8\x98" },
#line 203 "trad2simp_x86.in"
    {"SU","\x2f\x54" },
#line 2829 "trad2simp_x86.in"
    {"\372\235","\x6d\x9e" },
#line 2679 "trad2simp_x86.in"
    {"\246\233","\x96\x9c" },
#line 2329 "trad2simp_x86.in"
    {"L\224","\x54\x95" },
#line 165 "trad2simp_x86.in"
    {"\343R","\xe9\x7e" },
#line 2095 "trad2simp_x86.in"
    {"\320\221","\x98\x53" },
#line 1884 "trad2simp_x86.in"
    {"\253\214","\x2f\x8d" },
#line 2356 "trad2simp_x86.in"
    {"\206\225","\xeb\x95" },
#line 2571 "trad2simp_x86.in"
    {"?\231","\x8a\x99" },
#line 2306 "trad2simp_x86.in"
    {"\022\224","\xf9\x94" },
#line 1606 "trad2simp_x86.in"
    {":\207","\x13\x97" },
#line 2806 "trad2simp_x86.in"
    {"\257\235","\xba\x83" },
#line 900 "trad2simp_x86.in"
    {"\303o","\x53\x6d" },
#line 2583 "trad2simp_x86.in"
    {"^\231","\x8b\x99" },
#line 77 "trad2simp_x86.in"
    {"\221P","\x70\x67" },
#line 2637 "trad2simp_x86.in"
    {"[\232","\x7f\x9a" },
#line 2596 "trad2simp_x86.in"
    {"\325\231","\x7e\x9a" },
#line 2646 "trad2simp_x86.in"
    {"\324\232","\x53\x4f" },
#line 2997 "trad2simp_x86.in"
    {"a\214\201_","\x61\x8c\x81\x5f" },
#line 1241 "trad2simp_x86.in"
    {"\335|","\xc1\x7c" },
#line 1920 "trad2simp_x86.in"
    {"\344\214","\x31\x8d" },
#line 548 "trad2simp_x86.in"
    {"\203b","\xda\x62" },
#line 669 "trad2simp_x86.in"
    {"\270f","\x86\x4e" },
#line 169 "trad2simp_x86.in"
    {"\363R","\xcb\x52" },
#line 876 "trad2simp_x86.in"
    {"Ao","\x8d\x98" },
#line 683 "trad2simp_x86.in"
    {".g","\x2f\x67" },
#line 1989 "trad2simp_x86.in"
    {"\370\216","\x74\x8f" },
#line 97 "trad2simp_x86.in"
    {"\343P","\xed\x50" },
#line 664 "trad2simp_x86.in"
    {"\211f","\x56\x66" },
#line 2801 "trad2simp_x86.in"
    {"\241\235","\x56\x9e" },
#line 1563 "trad2simp_x86.in"
    {"\210\205","\x5f\x83" },
#line 2757 "trad2simp_x86.in"
    {"\006\235","\x29\x9e" },
#line 2544 "trad2simp_x86.in"
    {"\010\231","\xcd\x7c" },
#line 2328 "trad2simp_x86.in"
    {"J\224","\x6c\x95" },
#line 2548 "trad2simp_x86.in"
    {"\016\231","\x79\x99" },
#line 250 "trad2simp_x86.in"
    {"\231V","\x6e\x55" },
#line 726 "trad2simp_x86.in"
    {"\005j","\x9e\x67" },
#line 2408 "trad2simp_x86.in"
    {"c\226","\x35\x96" },
#line 405 "trad2simp_x86.in"
    {"\240]","\xe4\x5c" },
#line 1694 "trad2simp_x86.in"
    {"\370\211","\xe6\x89" },
#line 1475 "trad2simp_x86.in"
    {"\236\201","\xdd\x43" },
#line 33 "trad2simp_x86.in"
    {"n9","\x18\x39" },
#line 2762 "trad2simp_x86.in"
    {"\025\235","\x35\x9e" },
#line 1833 "trad2simp_x86.in"
    {"A\213","\xd7\x54" },
#line 2080 "trad2simp_x86.in"
    {"V\221","\x29\x9e" },
#line 417 "trad2simp_x86.in"
    {"\360]","\xef\x5d" },
#line 2600 "trad2simp_x86.in"
    {"\335\231","\x7c\x9a" },
#line 2059 "trad2simp_x86.in"
    {"\201\220","\xc8\x8f" },
#line 2577 "trad2simp_x86.in"
    {"K\231","\x88\x99" },
#line 685 "trad2simp_x86.in"
    {"qg","\x1c\x4e" },
#line 660 "trad2simp_x86.in"
    {"bf","\x70\x66" },
#line 2315 "trad2simp_x86.in"
    {"'\224","\x0f\x95" },
#line 1578 "trad2simp_x86.in"
    {"\355\205","\xd6\x44" },
#line 1951 "trad2simp_x86.in"
    {"\020\216","\xf5\x8d" },
#line 2061 "trad2simp_x86.in"
    {"\207\220","\xe9\x8f" },
#line 2545 "trad2simp_x86.in"
    {"\011\231","\x77\x99" },
#line 1613 "trad2simp_x86.in"
    {"\236\207","\x82\x86" },
#line 1001 "trad2simp_x86.in"
    {"Ds","\xf1\x72" },
#line 2753 "trad2simp_x86.in"
    {"\363\234","\xe4\x51" },
#line 1841 "trad2simp_x86.in"
    {"Y\213","\x2f\x8c" },
#line 410 "trad2simp_x86.in"
    {"\272]","\xad\x5c" },
#line 2395 "trad2simp_x86.in"
    {"\326\225","\xef\x95" },
#line 392 "trad2simp_x86.in"
    {"\021]","\x06\x66" },
#line 2563 "trad2simp_x86.in"
    {"3\231","\x67\x99" },
#line 143 "trad2simp_x86.in"
    {"]R","\x65\x52" },
#line 50 "trad2simp_x86.in"
    {"GO","\x2b\x4f" },
#line 895 "trad2simp_x86.in"
    {"\251o","\xf6\x6c" },
#line 877 "trad2simp_x86.in"
    {"Qo","\xfc\x6c" },
#line 1888 "trad2simp_x86.in"
    {"\262\214","\x40\x8d" },
#line 2856 "trad2simp_x86.in"
    {"\375\236","\xfe\x9e" },
#line 2322 "trad2simp_x86.in"
    {"5\224","\xc1\x94" },
#line 2064 "trad2simp_x86.in"
    {"\220\220","\x26\x90" },
#line 2827 "trad2simp_x86.in"
    {"\370\235","\x6c\x9e" },
#line 63 "trad2simp_x86.in"
    {"\000P","\x25\x4f" },
#line 460 "trad2simp_x86.in"
    {"L_","\x25\x5f" },
#line 2327 "trad2simp_x86.in"
    {"D\224","\xf8\x94" },
#line 2427 "trad2simp_x86.in"
    {"\326\226","\x7d\x86" },
#line 962 "trad2simp_x86.in"
    {"\311q","\x96\x70" },
#line 2769 "trad2simp_x86.in"
    {"(\235","\x2d\x9e" },
#line 999 "trad2simp_x86.in"
    {"As","\xb8\x72" },
#line 1247 "trad2simp_x86.in"
    {"\366|","\x9c\x7c" },
#line 2857 "trad2simp_x86.in"
    {"\377\236","\x0b\x9f" },
#line 1205 "trad2simp_x86.in"
    {"\300{","\x82\x82" },
#line 453 "trad2simp_x86.in"
    {"\022_","\x11\x5f" },
#line 2643 "trad2simp_x86.in"
    {"\257\232","\xae\x80" },
#line 1230 "trad2simp_x86.in"
    {"_|","\x41\x7c" },
#line 2565 "trad2simp_x86.in"
    {"6\231","\x89\x99" },
#line 261 "trad2simp_x86.in"
    {"\305V","\x81\x51" },
#line 1240 "trad2simp_x86.in"
    {"\265|","\xa4\x7c" },
#line 1619 "trad2simp_x86.in"
    {"\343\207","\x6e\x86" },
#line 2676 "trad2simp_x86.in"
    {"\232\233","\x92\x9c" },
#line 2094 "trad2simp_x86.in"
    {"\313\221","\xca\x91" },
#line 1013 "trad2simp_x86.in"
    {"zs","\x6d\x73" },
#line 998 "trad2simp_x86.in"
    {";s","\xf2\x72" },
#line 540 "trad2simp_x86.in"
    {")b","\x2c\x62" },
#line 1480 "trad2simp_x86.in"
    {"\277\201","\x13\x81" },
#line 2727 "trad2simp_x86.in"
    {"7\234","\xa6\x9c" },
#line 1956 "trad2simp_x86.in"
    {"L\216","\xc4\x8d" },
#line 2371 "trad2simp_x86.in"
    {"\250\225","\xfa\x95" },
#line 2740 "trad2simp_x86.in"
    {"]\234","\xbc\x9c" },
#line 2388 "trad2simp_x86.in"
    {"\312\225","\x14\x96" },
#line 208 "trad2simp_x86.in"
    {"cU","\x54\x88" },
#line 1659 "trad2simp_x86.in"
    {"8\211","\x1b\x89" },
#line 2969 "trad2simp_x86.in"
    {"@w\\O","\x57\x84\x5c\x4f" },
#line 2702 "trad2simp_x86.in"
    {"\360\233","\x87\x9c" },
#line 2411 "trad2simp_x86.in"
    {"x\226","\x46\x96" },
#line 2597 "trad2simp_x86.in"
    {"\330\231","\x80\x9a" },
#line 977 "trad2simp_x86.in"
    {"\020r","\x89\x70" },
#line 2966 "trad2simp_x86.in"
    {"\013m\376l","\x0b\x6d\xfe\x6c" },
#line 2393 "trad2simp_x86.in"
    {"\324\225","\x16\x96" },
#line 2584 "trad2simp_x86.in"
    {"_\231","\x95\x99" },
#line 1242 "trad2simp_x86.in"
    {"\336|","\xaa\x7c" },
#line 2083 "trad2simp_x86.in"
    {"\234\221","\x11\x4e" },
#line 393 "trad2simp_x86.in"
    {"\027]","\x97\x5c" },
#line 2420 "trad2simp_x86.in"
    {"\250\226","\x8f\x96" },
#line 2684 "trad2simp_x86.in"
    {"\272\233","\x9d\x9c" },
#line 2568 "trad2simp_x86.in"
    {"<\231","\x69\x99" },
#line 2945 "trad2simp_x86.in"
    {"r^@w%`","\x7e\x4e\x40\x77\x25\x60" },
#line 1954 "trad2simp_x86.in"
    {"0\216","\x3e\x90" },
#line 655 "trad2simp_x86.in"
    {"\007f","\x47\x53" },
#line 1238 "trad2simp_x86.in"
    {"r|","\x01\x54" },
#line 1245 "trad2simp_x86.in"
    {"\362|","\x9d\x7c" },
#line 2955 "trad2simp_x86.in"
    {"p_\016f","\x70\x5f\x0e\x66" },
#line 1616 "trad2simp_x86.in"
    {"\304\207","\xf0\x86" },
#line 2385 "trad2simp_x86.in"
    {"\306\225","\x7f\x67" },
#line 2361 "trad2simp_x86.in"
    {"\217\225","\xf0\x95" },
#line 950 "trad2simp_x86.in"
    {"Yq","\xdf\x70" },
#line 1687 "trad2simp_x86.in"
    {"\275\211","\xc8\x89" },
#line 2078 "trad2simp_x86.in"
    {":\221","\x9d\x90" },
#line 1904 "trad2simp_x86.in"
    {"\305\214","\x45\x8d" },
#line 982 "trad2simp_x86.in"
    {">r","\x14\x5c" },
#line 2686 "trad2simp_x86.in"
    {"\301\233","\xa0\x9c" },
#line 2444 "trad2simp_x86.in"
    {"Z\227","\x53\x97" },
#line 1981 "trad2simp_x86.in"
    {"\315\216","\x9b\x51" },
#line 2330 "trad2simp_x86.in"
    {"Q\224","\x74\x92" },
#line 2445 "trad2simp_x86.in"
    {"\\\227","\x59\x97" },
#line 2457 "trad2simp_x86.in"
    {"\323\227","\xe9\x97" },
#line 1866 "trad2simp_x86.in"
    {"H\214","\x82\x5c" },
#line 456 "trad2simp_x86.in"
    {"5_","\x20\x5f" },
#line 2701 "trad2simp_x86.in"
    {"\353\233","\xb0\x9c" },
#line 1922 "trad2simp_x86.in"
    {"\347\214","\x55\x8d" },
#line 991 "trad2simp_x86.in"
    {"\247r","\x7a\x72" },
#line 2761 "trad2simp_x86.in"
    {"\022\235","\x30\x9e" },
#line 1554 "trad2simp_x86.in"
    {"N\205","\x5e\x83" },
#line 746 "trad2simp_x86.in"
    {"\242j","\xc0\x68" },
#line 2967 "trad2simp_x86.in"
    {"\013m\376l\350n","\x0b\x6d\xfe\x6c\x5c\x6d" },
#line 235 "trad2simp_x86.in"
    {"SV","\x18\x56" },
#line 2744 "trad2simp_x86.in"
    {"g\234","\xe2\x9c" },
#line 2458 "trad2simp_x86.in"
    {"\331\227","\xea\x97" },
#line 394 "trad2simp_x86.in"
    {"\031]","\xd1\x4e" },
#line 1467 "trad2simp_x86.in"
    {"f\201","\x11\x81" },
#line 80 "trad2simp_x86.in"
    {"\231P","\x07\x59" },
#line 2455 "trad2simp_x86.in"
    {"\314\227","\xe7\x97" },
#line 2441 "trad2simp_x86.in"
    {"F\227","\xc7\x53" },
#line 2873 "trad2simp_x86.in"
    {"c\237","\xfa\x51" },
#line 668 "trad2simp_x86.in"
    {"\261f","\x35\x66" },
#line 1538 "trad2simp_x86.in"
    {"\300\204","\x6a\x83" },
#line 401 "trad2simp_x86.in"
    {"\204]","\x2d\x5d" },
#line 680 "trad2simp_x86.in"
    {"\003g","\x1a\x4f" },
#line 2771 "trad2simp_x86.in"
    {"0\235","\x39\x9e" },
#line 2877 "trad2simp_x86.in"
    {"l\237","\x89\x9f" },
#line 1244 "trad2simp_x86.in"
    {"\360|","\xe2\x56" },
#line 2696 "trad2simp_x86.in"
    {"\342\233","\xb5\x9c" },
#line 541 "trad2simp_x86.in"
    {"0b","\x18\x62" },
#line 1609 "trad2simp_x86.in"
    {"f\207","\x7e\x86" },
#line 662 "trad2simp_x86.in"
    {"{f","\x97\x66" },
#line 1621 "trad2simp_x86.in"
    {"\357\207","\xf2\x86" },
#line 2084 "trad2simp_x86.in"
    {"\236\221","\x5d\x91" },
#line 986 "trad2simp_x86.in"
    {"tr","\xb5\x62" },
#line 472 "trad2simp_x86.in"
    {"\254_","\xc1\x65" },
#line 2355 "trad2simp_x86.in"
    {"\203\225","\xea\x95" },
#line 1643 "trad2simp_x86.in"
    {"Z\210","\xe1\x80" },
#line 1217 "trad2simp_x86.in"
    {"\021|","\xd1\x84" },
#line 1219 "trad2simp_x86.in"
    {"!|","\x80\x7b" },
#line 2542 "trad2simp_x86.in"
    {"\004\231","\x78\x99" },
#line 462 "trad2simp_x86.in"
    {"Y_","\x47\x6c" },
#line 2367 "trad2simp_x86.in"
    {"\241\225","\x02\x96" },
#line 539 "trad2simp_x86.in"
    {"'b","\x17\x62" },
#line 2864 "trad2simp_x86.in"
    {"N\237","\x4d\x8d" },
#line 2811 "trad2simp_x86.in"
    {"\274\235","\x63\x9e" },
#line 1628 "trad2simp_x86.in"
    {"\015\210","\x4e\x87" },
#line 766 "trad2simp_x86.in"
    {"\354j","\x87\x69" },
#line 2541 "trad2simp_x86.in"
    {"\003\231","\x7a\x99" },
#line 179 "trad2simp_x86.in"
    {"TS","\x4f\x53" },
#line 2668 "trad2simp_x86.in"
    {"w\233","\x7f\x9c" },
#line 2814 "trad2simp_x86.in"
    {"\311\235","\x18\x4d" },
#line 2624 "trad2simp_x86.in"
    {">\232","\xa1\x9a" },
#line 2998 "trad2simp_x86.in"
    {"a\214\201_@w","\x61\x8c\xb5\x5f\x40\x77" },
#line 1963 "trad2simp_x86.in"
    {"z\216","\xf7\x8d" },
#line 1639 "trad2simp_x86.in"
    {"F\210","\x17\x4f" },
#line 216 "trad2simp_x86.in"
    {"\306U","\x5b\x54" },
#line 186 "trad2simp_x86.in"
    {"\264S","\xa3\x53" },
#line 2623 "trad2simp_x86.in"
    {"8\232","\x9f\x9a" },
#line 2550 "trad2simp_x86.in"
    {"\021\231","\x7d\x99" },
#line 2559 "trad2simp_x86.in"
    {"!\231","\x85\x99" },
#line 91 "trad2simp_x86.in"
    {"\305P","\xc5\x4e" },
#line 2103 "trad2simp_x86.in"
    {"\343\221","\x93\x94" },
#line 471 "trad2simp_x86.in"
    {"\251_","\x0d\x59" },
#line 1682 "trad2simp_x86.in"
    {"\254\211","\xca\x89" },
#line 258 "trad2simp_x86.in"
    {"\300V","\x6d\x55" },
#line 1660 "trad2simp_x86.in"
    {";\211","\xb5\x4e" },
#line 174 "trad2simp_x86.in"
    {"-S","\x26\x53" },
#line 1203 "trad2simp_x86.in"
    {"\217{","\x5d\x7b" },
#line 2591 "trad2simp_x86.in"
    {"\301\231","\x73\x9a" },
#line 1925 "trad2simp_x86.in"
    {"\355\214","\x4c\x8d" },
#line 2733 "trad2simp_x86.in"
    {"H\234","\xd5\x9c" },
#line 2923 "trad2simp_x86.in"
    {"\015T@w","\x0d\x54\x57\x84" },
#line 2751 "trad2simp_x86.in"
    {"\347\234","\xeb\x51" },
#line 769 "trad2simp_x86.in"
    {"\372j","\xc2\x68" },
#line 1235 "trad2simp_x86.in"
    {"j|","\x16\x7c" },
#line 413 "trad2simp_x86.in"
    {"\313]","\xbf\x5c" },
#line 69 "trad2simp_x86.in"
    {"#P","\xff\x4e" },
#line 2776 "trad2simp_x86.in"
    {"A\235","\x14\x4d" },
#line 2620 "trad2simp_x86.in"
    {"0\232","\x7e\x81" },
#line 399 "trad2simp_x86.in"
    {"R]","\xa9\x5c" },
#line 748 "trad2simp_x86.in"
    {"\257j","\xf0\x53" },
#line 2805 "trad2simp_x86.in"
    {"\254\235","\x27\x9e" },
#line 2717 "trad2simp_x86.in"
    {"#\234","\xa5\x9c" },
#line 2631 "trad2simp_x86.in"
    {"J\232","\x85\x9a" },
#line 2058 "trad2simp_x86.in"
    {"|\220","\xbd\x8f" },
#line 2655 "trad2simp_x86.in"
    {"%\233","\x97\x65" },
#line 2774 "trad2simp_x86.in"
    {";\235","\x3f\x9e" },
#line 398 "trad2simp_x86.in"
    {"P]","\x9a\x5c" },
#line 547 "trad2simp_x86.in"
    {"zb","\xb5\x62" },
#line 2401 "trad2simp_x86.in"
    {"(\226","\x84\x53" },
#line 1582 "trad2simp_x86.in"
    {"\372\205","\x3a\x85" },
#line 2602 "trad2simp_x86.in"
    {"\342\231","\x88\x9a" },
#line 1917 "trad2simp_x86.in"
    {"\341\214","\x53\x8d" },
#line 2588 "trad2simp_x86.in"
    {"\261\231","\x6e\x9a" },
#line 238 "trad2simp_x86.in"
    {"eV","\xdd\x54" },
#line 2992 "trad2simp_x86.in"
    {"\301\211\256_","\xc1\x89\xae\x5f" },
#line 1899 "trad2simp_x86.in"
    {"\300\214","\x3a\x8d" },
#line 2436 "trad2simp_x86.in"
    {"$\227","\x9c\x6e" },
#line 2085 "trad2simp_x86.in"
    {"\253\221","\x3b\x53" },
#line 99 "trad2simp_x86.in"
    {"\350P","\x7e\x50" },
#line 159 "trad2simp_x86.in"
    {"\327R","\xd6\x52" },
#line 2715 "trad2simp_x86.in"
    {"\037\234","\xd1\x9c" },
#line 764 "trad2simp_x86.in"
    {"\352j","\xa5\x67" },
#line 1650 "trad2simp_x86.in"
    {"\317\210","\xcc\x91" },
#line 400 "trad2simp_x86.in"
    {"\201]","\x5d\x5d" },
#line 1648 "trad2simp_x86.in"
    {"\252\210","\x5b\x79" },
#line 2803 "trad2simp_x86.in"
    {"\251\235","\x5c\x9e" },
#line 2810 "trad2simp_x86.in"
    {"\273\235","\x58\x9e" },
#line 2779 "trad2simp_x86.in"
    {"Q\235","\x43\x9e" },
#line 2554 "trad2simp_x86.in"
    {"\030\231","\x59\x4f" },
#line 2561 "trad2simp_x86.in"
    {",\231","\xca\x7c" },
#line 402 "trad2simp_x86.in"
    {"\207]","\x96\x5c" },
#line 2104 "trad2simp_x86.in"
    {"\344\221","\x90\x94" },
#line 1460 "trad2simp_x86.in"
    {"#\201","\x07\x55" },
#line 2070 "trad2simp_x86.in"
    {"\024\221","\xac\x90" },
#line 2375 "trad2simp_x86.in"
    {"\255\225","\xfe\x95" },
#line 21 "trad2simp_x86.in"
    {"R\"","\x48\x22" },
#line 2461 "trad2simp_x86.in"
    {"\373\227","\xf5\x97" },
#line 1545 "trad2simp_x86.in"
    {"\006\205","\xf1\x83" },
#line 2629 "trad2simp_x86.in"
    {"D\232","\xa2\x9a" },
#line 2841 "trad2simp_x86.in"
    {"|\236","\x77\x78" },
#line 218 "trad2simp_x86.in"
    {"\316U","\x17\x54" },
#line 1577 "trad2simp_x86.in"
    {"\352\205","\xae\x85" },
#line 1223 "trad2simp_x86.in"
    {"=|","\x7e\x7b" },
#line 552 "trad2simp_x86.in"
    {"\321b","\xb3\x94" },
#line 1652 "trad2simp_x86.in"
    {"\335\210","\xc5\x88" },
#line 2592 "trad2simp_x86.in"
    {"\320\231","\x7b\x9a" },
#line 2449 "trad2simp_x86.in"
    {"\246\227","\xcb\x79" },
#line 1871 "trad2simp_x86.in"
    {"l\214","\x2a\x73" },
#line 2546 "trad2simp_x86.in"
    {"\012\231","\x7b\x51" },
#line 1502 "trad2simp_x86.in"
    {"d\202","\x23\x82" },
#line 768 "trad2simp_x86.in"
    {"\370j","\x89\x69" },
#line 1539 "trad2simp_x86.in"
    {"\306\204","\x2d\x5e" },
#line 2626 "trad2simp_x86.in"
    {"A\232","\x9c\x9a" },
#line 2704 "trad2simp_x86.in"
    {"\375\233","\xab\x9c" },
#line 1492 "trad2simp_x86.in"
    {"\350\201","\x34\x4e" },
#line 1574 "trad2simp_x86.in"
    {"\316\205","\x69\x83" },
#line 243 "trad2simp_x86.in"
    {"xV","\x28\x54" },
#line 2569 "trad2simp_x86.in"
    {"=\231","\x88\x99" },
#line 2557 "trad2simp_x86.in"
    {"\034\231","\x83\x99" },
#line 2922 "trad2simp_x86.in"
    {"\010T@w","\x08\x54\x57\x84" },
#line 2705 "trad2simp_x86.in"
    {"\377\233","\xca\x9c" },
#line 2381 "trad2simp_x86.in"
    {"\275\225","\x0d\x96" },
#line 253 "trad2simp_x86.in"
    {"\250V","\x99\x54" },
#line 214 "trad2simp_x86.in"
    {"\256U","\x55\x53" },
#line 1867 "trad2simp_x86.in"
    {"N\214","\xd6\x7a" },
#line 2931 "trad2simp_x86.in"
    {"r^fS","\x7e\x4e\x66\x53" },
#line 1599 "trad2simp_x86.in"
    {"\\\206","\x4f\x86" },
#line 2669 "trad2simp_x86.in"
    {"\201\233","\x85\x9c" },
#line 2723 "trad2simp_x86.in"
    {"1\234","\xa2\x9c" },
#line 173 "trad2simp_x86.in"
    {"\013S","\x76\x96" },
#line 2041 "trad2simp_x86.in"
    {"#\220","\xde\x8f" },
#line 1636 "trad2simp_x86.in"
    {"6\210","\x95\x86" },
#line 2860 "trad2simp_x86.in"
    {"\025\237","\xac\x51" },
#line 1527 "trad2simp_x86.in"
    {"I\204","\xf6\x53" },
#line 2460 "trad2simp_x86.in"
    {"\336\227","\xeb\x97" },
#line 2732 "trad2simp_x86.in"
    {"E\234","\xd9\x9c" },
#line 2459 "trad2simp_x86.in"
    {"\334\227","\xec\x97" },
#line 1504 "trad2simp_x86.in"
    {"k\202","\x3b\x82" },
#line 1879 "trad2simp_x86.in"
    {"\242\214","\x21\x8d" },
#line 2380 "trad2simp_x86.in"
    {"\274\225","\x0f\x96" },
#line 2672 "trad2simp_x86.in"
    {"\220\233","\x90\x9c" },
#line 568 "trad2simp_x86.in"
    {"\333c","\x62\x63" },
#line 2983 "trad2simp_x86.in"
    {"\250~\344\210","\xa8\x7e\xd4\x7e" },
#line 1495 "trad2simp_x86.in"
    {"\010\202","\x74\x51" },
#line 2988 "trad2simp_x86.in"
    {"'\204r^","\x27\x84\x7e\x4e" },
#line 1457 "trad2simp_x86.in"
    {"\005\201","\xc1\x80" },
#line 732 "trad2simp_x86.in"
    {"8j","\x34\x67" },
#line 201 "trad2simp_x86.in"
    {"8U","\xf5\x5f" },
#line 817 "trad2simp_x86.in"
    {"\222l","\xa1\x6c" },
#line 808 "trad2simp_x86.in"
    {"+l","\x22\x6c" },
#line 1881 "trad2simp_x86.in"
    {"\250\214","\x27\x8d" },
#line 1907 "trad2simp_x86.in"
    {"\312\214","\x3c\x8d" },
#line 1227 "trad2simp_x86.in"
    {"P|","\xe4\x85" },
#line 654 "trad2simp_x86.in"
    {"\333e","\x61\x5e" },
#line 2837 "trad2simp_x86.in"
    {"\036\236","\x3e\x9e" },
#line 2677 "trad2simp_x86.in"
    {"\236\233","\x95\x9c" },
#line 140 "trad2simp_x86.in"
    {"NR","\x39\x52" },
#line 636 "trad2simp_x86.in"
    {"\035e","\x44\x64" },
#line 1496 "trad2simp_x86.in"
    {"\011\202","\x3e\x4e" },
#line 244 "trad2simp_x86.in"
    {"yV","\x53\x5f" },
#line 2384 "trad2simp_x86.in"
    {"\303\225","\x12\x96" },
#line 2743 "trad2simp_x86.in"
    {"c\234","\xe3\x9c" },
#line 2580 "trad2simp_x86.in"
    {"R\231","\x76\x99" },
#line 1593 "trad2simp_x86.in"
    {"-\206","\x70\x51" },
#line 1651 "trad2simp_x86.in"
    {"\334\210","\x65\x88" },
#line 2092 "trad2simp_x86.in"
    {"\305\221","\x7d\x91" },
#line 570 "trad2simp_x86.in"
    {"\371c","\xcc\x80" },
#line 1924 "trad2simp_x86.in"
    {"\354\214","\x26\x8d" },
#line 2673 "trad2simp_x86.in"
    {"\221\233","\x8d\x9c" },
#line 144 "trad2simp_x86.in"
    {"nR","\x50\x52" },
#line 2079 "trad2simp_x86.in"
    {"H\221","\xe6\x90" },
#line 2106 "trad2simp_x86.in"
    {"\347\221","\x8f\x94" },
#line 2374 "trad2simp_x86.in"
    {"\254\225","\x06\x96" },
#line 1472 "trad2simp_x86.in"
    {"\206\201","\xc9\x55" },
#line 1595 "trad2simp_x86.in"
    {"?\206","\x1d\x84" },
#line 2843 "trad2simp_x86.in"
    {"\227\236","\x3d\x4e" },
#line 1505 "trad2simp_x86.in"
    {"q\202","\x70\x82" },
#line 2851 "trad2simp_x86.in"
    {"\350\236","\x5a\x51" },
#line 175 "trad2simp_x86.in"
    {"/S","\x47\x6c" },
#line 2607 "trad2simp_x86.in"
    {"\377\231","\x8f\x9a" },
#line 634 "trad2simp_x86.in"
    {"\033e","\xba\x64" },
#line 2974 "trad2simp_x86.in"
    {"@w\011g","\x57\x84\x09\x67" },
#line 816 "trad2simp_x86.in"
    {"\215l","\xb1\x51" },
#line 1927 "trad2simp_x86.in"
    {"\365\214","\x57\x8d" },
#line 222 "trad2simp_x86.in"
    {"\006V","\xf9\x53" },
#line 2042 "trad2simp_x86.in"
    {"1\220","\x68\x54" },
#line 45 "trad2simp_x86.in"
    {"~N","\x72\x5e" },
#line 1110 "trad2simp_x86.in"
    {">w","\x17\x4f" },
#line 2567 "trad2simp_x86.in"
    {":\231","\x8e\x99" },
#line 1199 "trad2simp_x86.in"
    {"t{","\x56\x7b" },
#line 267 "trad2simp_x86.in"
    {"\352V","\xf1\x56" },
#line 82 "trad2simp_x86.in"
    {"\242P","\xb6\x5b" },
#line 644 "trad2simp_x86.in"
    {"Xe","\xd9\x53" },
#line 142 "trad2simp_x86.in"
    {"[R","\x1a\x52" },
#line 1498 "trad2simp_x86.in"
    {"\013\202","\x45\x88" },
#line 1602 "trad2simp_x86.in"
    {"o\206","\x6c\x86" },
#line 2450 "trad2simp_x86.in"
    {"\301\227","\x30\x7f" },
#line 1929 "trad2simp_x86.in"
    {"\372\214","\x5a\x8d" },
#line 2716 "trad2simp_x86.in"
    {" \234","\xcb\x9c" },
#line 2372 "trad2simp_x86.in"
    {"\251\225","\xfd\x95" },
#line 43 "trad2simp_x86.in"
    {"&N","\x76\x5e" },
#line 2379 "trad2simp_x86.in"
    {"\273\225","\x0e\x96" },
#line 396 "trad2simp_x86.in"
    {"\"]","\xe5\x5c" },
#line 1573 "trad2simp_x86.in"
    {"\315\205","\xdd\x84" },
#line 2993 "trad2simp_x86.in"
    {"\301\211\256_\345w@w","\xc1\x89\xae\x5f\xe5\x77\x57\x84" },
#line 643 "trad2simp_x86.in"
    {"We","\x25\x8d" },
#line 1886 "trad2simp_x86.in"
    {"\257\214","\x2e\x8d" },
#line 670 "trad2simp_x86.in"
    {"\304f","\x54\x66" },
#line 2748 "trad2simp_x86.in"
    {"x\234","\x88\x9c" },
#line 557 "trad2simp_x86.in"
    {"kc","\x6a\x62" },
#line 93 "trad2simp_x86.in"
    {"\312P","\xd9\x4e" },
#line 1464 "trad2simp_x86.in"
    {"N\201","\xbe\x80" },
#line 2979 "trad2simp_x86.in"
    {"@w\351~","\x57\x84\xe9\x7e" },
#line 2425 "trad2simp_x86.in"
    {"\273\226","\xea\x53" },
#line 1207 "trad2simp_x86.in"
    {"\311{","\x51\x7b" },
#line 753 "trad2simp_x86.in"
    {"\303j","\xdc\x67" },
#line 645 "trad2simp_x86.in"
    {"ue","\x4c\x65" },
#line 1630 "trad2simp_x86.in"
    {"\021\210","\x7e\x87" },
#line 667 "trad2simp_x86.in"
    {"\253f","\x82\x66" },
#line 1892 "trad2simp_x86.in"
    {"\267\214","\x70\x4e" },
#line 1878 "trad2simp_x86.in"
    {"\241\214","\x22\x8d" },
#line 658 "trad2simp_x86.in"
    {"]f","\x3c\x66" },
#line 2681 "trad2simp_x86.in"
    {"\253\233","\x9b\x9c" },
#line 170 "trad2simp_x86.in"
    {"\365R","\xb1\x52" },
#line 1499 "trad2simp_x86.in"
    {"\026\202","\xfa\x94" },
#line 805 "trad2simp_x86.in"
    {"\010l","\xe1\x6b" },
#line 2862 "trad2simp_x86.in"
    {"J\237","\x50\x9f" },
#line 1923 "trad2simp_x86.in"
    {"\352\214","\x28\x8d" },
#line 2944 "trad2simp_x86.in"
    {"r^@w","\x72\x5e\x40\x77" },
#line 2604 "trad2simp_x86.in"
    {"\356\231","\x73\x9a" },
#line 2099 "trad2simp_x86.in"
    {"\327\221","\x8a\x94" },
#line 1604 "trad2simp_x86.in"
    {"\373\206","\x15\x87" },
#line 228 "trad2simp_x86.in"
    {")V","\xd7\x54" },
#line 839 "trad2simp_x86.in"
    {"&n","\xa1\x6d" },
#line 254 "trad2simp_x86.in"
    {"\256V","\x11\x54" },
#line 856 "trad2simp_x86.in"
    {"\314n","\xa4\x6d" },
#line 213 "trad2simp_x86.in"
    {"\254U","\x54\x4e" },
#line 820 "trad2simp_x86.in"
    {"\335l","\xaf\x6e" },
#line 1470 "trad2simp_x86.in"
    {"x\201","\xa0\x80" },
#line 2697 "trad2simp_x86.in"
    {"\344\233","\xb2\x9c" },
#line 864 "trad2simp_x86.in"
    {"\376n","\xda\x6e" },
#line 189 "trad2simp_x86.in"
    {"\342S","\x1b\x4e" },
#line 22 "trad2simp_x86.in"
    {"f\"","\x64\x22" },
#line 1614 "trad2simp_x86.in"
    {"\242\207","\x24\x84" },
#line 1119 "trad2simp_x86.in"
    {"\274w","\x51\x77" },
#line 138 "trad2simp_x86.in"
    {"IR","\x09\x95" },
#line 640 "trad2simp_x86.in"
    {"*e","\x05\x64" },
#line 653 "trad2simp_x86.in"
    {"\302e","\xd7\x65" },
#line 1552 "trad2simp_x86.in"
    {"A\205","\x68\x83" },
#line 2654 "trad2simp_x86.in"
    {"\"\233","\x13\x9b" },
#line 837 "trad2simp_x86.in"
    {"\033n","\xcf\x51" },
#line 1611 "trad2simp_x86.in"
    {"x\207","\x17\x87" },
#line 182 "trad2simp_x86.in"
    {"{S","\x74\x53" },
#line 639 "trad2simp_x86.in"
    {"$e","\x4a\x64" },
#line 810 "trad2simp_x86.in"
    {"3l","\x32\x6c" },
#line 1588 "trad2simp_x86.in"
    {"\013\206","\xf9\x82" },
#line 2046 "trad2simp_x86.in"
    {"N\220","\xc7\x8f" },
#line 1195 "trad2simp_x86.in"
    {";{","\x47\x7b" },
#line 1600 "trad2simp_x86.in"
    {"_\206","\xf7\x53" },
#line 1928 "trad2simp_x86.in"
    {"\370\214","\x69\x52" },
#line 148 "trad2simp_x86.in"
    {"\203R","\x12\x52" },
#line 852 "trad2simp_x86.in"
    {"\263n","\xa2\x6d" },
#line 751 "trad2simp_x86.in"
    {"\273j","\xdb\x69" },
#line 71 "trad2simp_x86.in"
    {"IP","\x1f\x4f" },
#line 2938 "trad2simp_x86.in"
    {"r^\346e","\x7e\x4e\xe6\x65" },
#line 554 "trad2simp_x86.in"
    {"6c","\x40\x5c" },
#line 23 "trad2simp_x86.in"
    {"g\"","\x65\x22" },
#line 2089 "trad2simp_x86.in"
    {"\300\221","\x7f\x91" },
#line 233 "trad2simp_x86.in"
    {"8V","\x52\x54" },
#line 84 "trad2simp_x86.in"
    {"\257P","\x6c\x50" },
#line 2932 "trad2simp_x86.in"
    {"r^\277S","\x7e\x4e\xbf\x53" },
#line 2734 "trad2simp_x86.in"
    {"I\234","\xd6\x9c" },
#line 351 "trad2simp_x86.in"
    {"\035[","\x85\x88" },
#line 1215 "trad2simp_x86.in"
    {"\000|","\xa6\x7b" },
#line 2438 "trad2simp_x86.in"
    {"=\227","\x01\x97" },
#line 1126 "trad2simp_x86.in"
    {"dx","\x56\x78" },
#line 1537 "trad2simp_x86.in"
    {"\274\204","\xcd\x82" },
#line 1571 "trad2simp_x86.in"
    {"\251\205","\x28\x84" },
#line 1620 "trad2simp_x86.in"
    {"\354\207","\x49\x87" },
#line 1222 "trad2simp_x86.in"
    {"7|","\x90\x6a" },
#line 2056 "trad2simp_x86.in"
    {"x\220","\x09\x90" },
#line 88 "trad2simp_x86.in"
    {"\267P","\x24\x4f" },
#line 843 "trad2simp_x86.in"
    {"^n","\x48\x6d" },
#line 2082 "trad2simp_x86.in"
    {"\206\221","\xcf\x76" },
#line 64 "trad2simp_x86.in"
    {"\006P","\xe9\x4f" },
#line 1494 "trad2simp_x86.in"
    {"\007\202","\x0e\x4e" },
#line 1526 "trad2simp_x86.in"
    {"5\204","\xb4\x83" },
#line 2928 "trad2simp_x86.in"
    {"r^\035N","\x7e\x4e\x1d\x4e" },
#line 681 "trad2simp_x86.in"
    {"\"g","\x1b\x67" },
#line 2868 "trad2simp_x86.in"
    {"Y\237","\x85\x9f" },
#line 231 "trad2simp_x86.in"
    {"0V","\xfd\x53" },
#line 567 "trad2simp_x86.in"
    {"\332c","\x6c\x62" },
#line 2960 "trad2simp_x86.in"
    {"\260d@w","\xb0\x64\x57\x84" },
#line 1493 "trad2simp_x86.in"
    {"\372\201","\xf0\x53" },
#line 2566 "trad2simp_x86.in"
    {"7\231","\x87\x99" },
#line 242 "trad2simp_x86.in"
    {"tV","\xb7\x55" },
#line 171 "trad2simp_x86.in"
    {"\370R","\x9d\x52" },
#line 2745 "trad2simp_x86.in"
    {"h\234","\xbf\x9c" },
#line 846 "trad2simp_x86.in"
    {"on","\x64\x6c" },
#line 26 "trad2simp_x86.in"
    {"t%","\x3f\xff" },
#line 2995 "trad2simp_x86.in"
    {"\272\213@w","\xba\x8b\x57\x84" },
#line 812 "trad2simp_x86.in"
    {"Ml","\x38\x4e" },
#line 2834 "trad2simp_x86.in"
    {"\032\236","\x66\x9e" },
#line 1624 "trad2simp_x86.in"
    {"\372\207","\xee\x87" },
#line 558 "trad2simp_x86.in"
    {"rc","\x77\x53" },
#line 2980 "trad2simp_x86.in"
    {"@w\005\200","\x57\x84\x05\x80" },
#line 1880 "trad2simp_x86.in"
    {"\247\214","\x2b\x8d" },
#line 2553 "trad2simp_x86.in"
    {"\024\231","\xfa\x54" },
#line 355 "trad2simp_x86.in"
    {"-[","\x76\x59" },
#line 1471 "trad2simp_x86.in"
    {"\203\201","\x7d\x81" },
#line 1131 "trad2simp_x86.in"
    {"\252x","\x27\x78" },
#line 2006 "trad2simp_x86.in"
    {"\035\217","\x89\x8f" },
#line 2063 "trad2simp_x86.in"
    {"\217\220","\x3b\x90" },
#line 1584 "trad2simp_x86.in"
    {"\004\206","\x72\x85" },
#line 368 "trad2simp_x86.in"
    {"\351[","\xa1\x5b" },
#line 632 "trad2simp_x86.in"
    {"\026e","\x84\x64" },
#line 861 "trad2simp_x86.in"
    {"\367n","\x64\x53" },
#line 263 "trad2simp_x86.in"
    {"\311V","\x70\x55" },
#line 1128 "trad2simp_x86.in"
    {"ox","\x1a\x78" },
#line 2454 "trad2simp_x86.in"
    {"\313\227","\xe6\x97" },
#line 2066 "trad2simp_x86.in"
    {"\365\220","\xae\x90" },
#line 2986 "trad2simp_x86.in"
    {"\356~f\211\250~\344\210","\xee\x7e\x66\x89\xa8\x7e\xd4\x7e" },
#line 404 "trad2simp_x86.in"
    {"\227]","\x02\x5d" },
#line 2010 "trad2simp_x86.in"
    {"&\217","\x87\x8f" },
#line 168 "trad2simp_x86.in"
    {"\361R","\xa2\x52" },
#line 2028 "trad2simp_x86.in"
    {"a\217","\x94\x8f" },
#line 2001 "trad2simp_x86.in"
    {"\023\217","\x3d\x63" },
#line 2022 "trad2simp_x86.in"
    {"F\217","\x98\x8f" },
#line 232 "trad2simp_x86.in"
    {"5V","\xd3\x54" },
#line 2720 "trad2simp_x86.in"
    {"(\234","\xce\x9c" },
#line 1897 "trad2simp_x86.in"
    {"\275\214","\x3b\x8d" },
#line 1605 "trad2simp_x86.in"
    {"\006\207","\xac\x86" },
#line 366 "trad2simp_x86.in"
    {"\346[","\x9e\x5b" },
#line 44 "trad2simp_x86.in"
    {"<N","\x95\x4e" },
#line 863 "trad2simp_x86.in"
    {"\373n","\x50\x6d" },
#line 2698 "trad2simp_x86.in"
    {"\347\233","\xb3\x9c" },
#line 360 "trad2simp_x86.in"
    {"k[","\x59\x5b" },
#line 2721 "trad2simp_x86.in"
    {")\234","\xd0\x9c" },
#line 1610 "trad2simp_x86.in"
    {"h\207","\x71\x86" },
#line 2004 "trad2simp_x86.in"
    {"\033\217","\x86\x8f" },
#line 2026 "trad2simp_x86.in"
    {"T\217","\x9a\x8f" },
#line 1586 "trad2simp_x86.in"
    {"\007\206","\xcf\x82" },
#line 100 "trad2simp_x86.in"
    {"\361P","\xc7\x96" },
#line 1506 "trad2simp_x86.in"
    {"w\202","\x73\x82" },
#line 2030 "trad2simp_x86.in"
    {"d\217","\x73\x8f" },
#line 347 "trad2simp_x86.in"
    {"\010[","\x06\x5a" },
#line 2462 "trad2simp_x86.in"
    {"\377\227","\xcd\x54" },
#line 1147 "trad2simp_x86.in"
    {"+y","\x3e\x78" },
#line 234 "trad2simp_x86.in"
    {"AV","\x76\x60" },
#line 177 "trad2simp_x86.in"
    {"@S","\x3a\x53" },
#line 1896 "trad2simp_x86.in"
    {"\274\214","\x34\x8d" },
#line 1618 "trad2simp_x86.in"
    {"\316\207","\xa8\x87" },
#line 628 "trad2simp_x86.in"
    {"\004e","\x45\x64" },
#line 1497 "trad2simp_x86.in"
    {"\012\202","\xe7\x65" },
#line 354 "trad2simp_x86.in"
    {"*[","\xd4\x5a" },
#line 83 "trad2simp_x86.in"
    {"\255P","\x63\x4f" },
#line 1641 "trad2simp_x86.in"
    {"R\210","\xab\x70" },
#line 1145 "trad2simp_x86.in"
    {"&y","\xff\x77" },
#line 2097 "trad2simp_x86.in"
    {"\324\221","\x87\x94" },
#line 353 "trad2simp_x86.in"
    {"$[","\x37\x5b" },
#line 677 "trad2simp_x86.in"
    {"\350f","\x3d\x66" },
#line 1461 "trad2simp_x86.in"
    {")\201","\xee\x4f" },
#line 2839 "trad2simp_x86.in"
    {"y\236","\xb8\x54" },
#line 2731 "trad2simp_x86.in"
    {">\234","\xd4\x9c" },
#line 2699 "trad2simp_x86.in"
    {"\350\233","\xb8\x9c" },
#line 2018 "trad2simp_x86.in"
    {"?\217","\x06\x82" },
#line 2039 "trad2simp_x86.in"
    {"\025\220","\xf3\x8f" },
#line 1654 "trad2simp_x86.in"
    {"\375\210","\x36\x52" },
#line 1589 "trad2simp_x86.in"
    {"\027\206","\x16\x86" },
#line 1596 "trad2simp_x86.in"
    {"U\206","\x04\x59" },
#line 1902 "trad2simp_x86.in"
    {"\303\214","\x41\x8d" },
#line 145 "trad2simp_x86.in"
    {"tR","\x40\x52" },
#line 2549 "trad2simp_x86.in"
    {"\017\231","\x7b\x99" },
#line 1432 "trad2simp_x86.in"
    {"\322\177","\x60\x4e" },
#line 2037 "trad2simp_x86.in"
    {"\364\217","\xde\x56" },
#line 2093 "trad2simp_x86.in"
    {"\306\221","\xc7\x91" },
#line 819 "trad2simp_x86.in"
    {"\301l","\xb5\x51" },
#line 663 "trad2simp_x86.in"
    {"\210f","\x55\x66" },
#line 649 "trad2simp_x86.in"
    {"\225e","\x93\x65" },
#line 1156 "trad2simp_x86.in"
    {"\215y","\x78\x79" },
#line 818 "trad2simp_x86.in"
    {"\226l","\xb2\x51" },
#line 2711 "trad2simp_x86.in"
    {"\022\234","\xc6\x9c" },
#line 849 "trad2simp_x86.in"
    {"\235n","\x9f\x6c" },
#line 1516 "trad2simp_x86.in"
    {"\212\203","\x84\x5e" },
#line 1243 "trad2simp_x86.in"
    {"\347|","\xae\x7c" },
#line 2108 "trad2simp_x86.in"
    {"\365\221","\x97\x94" },
#line 1133 "trad2simp_x86.in"
    {"\270x","\x1c\x78" },
#line 860 "trad2simp_x86.in"
    {"\362n","\x17\x6e" },
#line 2692 "trad2simp_x86.in"
    {"\327\233","\x9e\x9c" },
#line 1885 "trad2simp_x86.in"
    {"\254\214","\x23\x8d" },
#line 265 "trad2simp_x86.in"
    {"\321V","\x31\x56" },
#line 1137 "trad2simp_x86.in"
    {"\332x","\x16\x78" },
#line 73 "trad2simp_x86.in"
    {"tP","\xa7\x4f" },
#line 1511 "trad2simp_x86.in"
    {"\015\203","\xdf\x82" },
#line 1218 "trad2simp_x86.in"
    {"\036|","\xaa\x7b" },
#line 1220 "trad2simp_x86.in"
    {"#|","\xd1\x7b" },
#line 364 "trad2simp_x86.in"
    {"\330[","\x6e\x7f" },
#line 372 "trad2simp_x86.in"
    {"\366[","\x9d\x5b" },
#line 2012 "trad2simp_x86.in"
    {"*\217","\x6e\x8f" },
#line 348 "trad2simp_x86.in"
    {"\013[","\x75\x5a" },
#line 3002 "trad2simp_x86.in"
    {"\207\230@w","\x87\x98\x57\x84" },
#line 2574 "trad2simp_x86.in"
    {"H\231","\x90\x99" },
#line 2111 "trad2simp_x86.in"
    {"\372\221","\x8e\x94" },
#line 2833 "trad2simp_x86.in"
    {"\025\236","\x2c\x9e" },
#line 1998 "trad2simp_x86.in"
    {"\011\217","\x7d\x8f" },
#line 1434 "trad2simp_x86.in"
    {"\371\177","\xd8\x7f" },
#line 1421 "trad2simp_x86.in"
    {"p\177","\x5a\x7f" },
#line 1587 "trad2simp_x86.in"
    {"\012\206","\x74\x85" },
#line 136 "trad2simp_x86.in"
    {"DR","\x2d\x52" },
#line 2014 "trad2simp_x86.in"
    {"3\217","\x8f\x8f" },
#line 2660 "trad2simp_x86.in"
    {"1\233","\xc1\x90" },
#line 2719 "trad2simp_x86.in"
    {"'\234","\xa2\x4c" },
#line 2558 "trad2simp_x86.in"
    {"\036\231","\x6f\x99" },
#line 1165 "trad2simp_x86.in"
    {"\317y","\x17\x80" },
#line 92 "trad2simp_x86.in"
    {"\311P","\x65\x4f" },
#line 1882 "trad2simp_x86.in"
    {"\251\214","\x29\x8d" },
#line 2958 "trad2simp_x86.in"
    {"@b@wKb","\x40\x62\x40\x77\x4b\x62" },
#line 1895 "trad2simp_x86.in"
    {"\273\214","\x39\x8d" },
#line 2081 "trad2simp_x86.in"
    {"\203\221","\x4c\x81" },
#line 700 "trad2simp_x86.in"
    {"\337h","\x0b\x68" },
#line 1160 "trad2simp_x86.in"
    {"\252y","\x85\x79" },
#line 35 "trad2simp_x86.in"
    {"\261C","\xac\x43" },
#line 1124 "trad2simp_x86.in"
    {"2x","\xae\x70" },
#line 809 "trad2simp_x86.in"
    {",l","\x29\x6c" },
#line 2695 "trad2simp_x86.in"
    {"\341\233","\xb1\x9c" },
#line 1647 "trad2simp_x86.in"
    {"\236\210","\x6e\x88" },
#line 2685 "trad2simp_x86.in"
    {"\300\233","\xa7\x9c" },
#line 1478 "trad2simp_x86.in"
    {"\275\201","\xc6\x80" },
#line 2936 "trad2simp_x86.in"
    {"r^\205[","\x7e\x4e\x85\x5b" },
#line 1164 "trad2simp_x86.in"
    {"\310y","\x7c\x7c" },
#line 641 "trad2simp_x86.in"
    {",e","\xfd\x63" },
#line 2067 "trad2simp_x86.in"
    {"\006\221","\xd3\x90" },
#line 1143 "trad2simp_x86.in"
    {"\016y","\x40\x78" },
#line 1908 "trad2simp_x86.in"
    {"\321\214","\x48\x8d" },
#line 2726 "trad2simp_x86.in"
    {"5\234","\xd8\x9c" },
#line 693 "trad2simp_x86.in"
    {"\230h","\xa7\x67" },
#line 1597 "trad2simp_x86.in"
    {"V\206","\x7c\x54" },
#line 2031 "trad2simp_x86.in"
    {"\246\217","\x9e\x52" },
#line 1146 "trad2simp_x86.in"
    {"*y","\x3a\x78" },
#line 560 "trad2simp_x86.in"
    {"\204c","\xa1\x62" },
#line 2973 "trad2simp_x86.in"
    {"@w\016f","\x57\x84\x0e\x66" },
#line 416 "trad2simp_x86.in"
    {"\326]","\xa9\x5c" },
#line 137 "trad2simp_x86.in"
    {"GR","\x19\x52" },
#line 1482 "trad2simp_x86.in"
    {"\315\201","\x10\x81" },
#line 633 "trad2simp_x86.in"
    {"\031e","\x00\x64" },
#line 1422 "trad2simp_x86.in"
    {"u\177","\x82\x9a" },
#line 2027 "trad2simp_x86.in"
    {"_\217","\x70\x8f" },
#line 395 "trad2simp_x86.in"
    {" ]","\xbd\x5c" },
#line 406 "trad2simp_x86.in"
    {"\242]","\xe3\x5c" },
#line 848 "trad2simp_x86.in"
    {"\226n","\xc6\x51" },
#line 1481 "trad2simp_x86.in"
    {"\311\201","\x38\x81" },
#line 1134 "trad2simp_x86.in"
    {"\272x","\x6e\x78" },
#line 75 "trad2simp_x86.in"
    {"zP","\xb1\x54" },
#line 1522 "trad2simp_x86.in"
    {"\364\203","\xb5\x5e" },
#line 2999 "trad2simp_x86.in"
    {"W\220@w","\x57\x90\x57\x84" },
#line 635 "trad2simp_x86.in"
    {"\034e","\x3a\x64" },
#line 156 "trad2simp_x86.in"
    {"\273R","\x21\x53" },
#line 656 "trad2simp_x86.in"
    {"Bf","\xf6\x65" },
#line 2749 "trad2simp_x86.in"
    {"z\234","\xa1\x9c" },
#line 2729 "trad2simp_x86.in"
    {";\234","\xd7\x9c" },
#line 2709 "trad2simp_x86.in"
    {"\014\234","\xa1\x4c" },
#line 2024 "trad2simp_x86.in"
    {"M\217","\x99\x8f" },
#line 1129 "trad2simp_x86.in"
    {"\225x","\x0e\x5d" },
#line 408 "trad2simp_x86.in"
    {"\250]","\xc3\x5c" },
#line 1427 "trad2simp_x86.in"
    {"\213\177","\x88\x82" },
#line 2603 "trad2simp_x86.in"
    {"\355\231","\x87\x9a" },
#line 1159 "trad2simp_x86.in"
    {"\246y","\xa1\x5f" },
#line 2044 "trad2simp_x86.in"
    {"J\220","\x38\x6e" },
#line 415 "trad2simp_x86.in"
    {"\324]","\xc5\x5d" },
#line 2029 "trad2simp_x86.in"
    {"b\217","\x79\x8f" },
#line 2661 "trad2simp_x86.in"
    {"N\233","\x49\x9b" },
#line 675 "trad2simp_x86.in"
    {"\326f","\xa7\x66" },
#line 2543 "trad2simp_x86.in"
    {"\005\231","\x7c\x99" },
#line 352 "trad2simp_x86.in"
    {"![","\xd2\x5a" },
#line 2446 "trad2simp_x86.in"
    {"f\227","\x7c\x81" },
#line 2562 "trad2simp_x86.in"
    {"1\231","\xc7\x7c" },
#line 2691 "trad2simp_x86.in"
    {"\326\233","\xad\x9c" },
#line 94 "trad2simp_x86.in"
    {"\321P","\xa8\x4f" },
#line 1515 "trad2simp_x86.in"
    {"s\203","\x46\x8c" },
#line 666 "trad2simp_x86.in"
    {"\242f","\x45\x75" },
#line 840 "trad2simp_x86.in"
    {",n","\x4b\x6d" },
#line 1157 "trad2simp_x86.in"
    {"\216y","\x6f\x79" },
#line 2573 "trad2simp_x86.in"
    {"E\231","\x92\x99" },
#line 2653 "trad2simp_x86.in"
    {"\032\233","\x7b\x98" },
#line 1637 "trad2simp_x86.in"
    {"7\210","\x3c\x88" },
#line 1645 "trad2simp_x86.in"
    {"]\210","\xb2\x51" },
#line 369 "trad2simp_x86.in"
    {"\353[","\x99\x51" },
#line 1594 "trad2simp_x86.in"
    {":\206","\xe0\x84" },
#line 17 "trad2simp_x86.in"
    {"\257\000","\xc9\x02" },
#line 2013 "trad2simp_x86.in"
    {"/\217","\x91\x8f" },
#line 1631 "trad2simp_x86.in"
    {"\024\210","\x9d\x86" },
#line 836 "trad2simp_x86.in"
    {"\031n","\xa3\x6d" },
#line 1236 "trad2simp_x86.in"
    {"l|","\xf1\x7b" },
#line 1233 "trad2simp_x86.in"
    {"e|","\xa0\x9f" },
#line 2689 "trad2simp_x86.in"
    {"\312\233","\xa8\x9c" },
#line 1477 "trad2simp_x86.in"
    {"\251\201","\x7b\x81" },
#line 2664 "trad2simp_x86.in"
    {"[\233","\x7d\x9c" },
#line 1225 "trad2simp_x86.in"
    {"C|","\xee\x7b" },
#line 2929 "trad2simp_x86.in"
    {"r^~N","\xb7\x5e\x7e\x4e" },
#line 2069 "trad2simp_x86.in"
    {"\022\221","\xb9\x90" },
#line 1995 "trad2simp_x86.in"
    {"\003\217","\x83\x8f" },
#line 2690 "trad2simp_x86.in"
    {"\324\233","\xbb\x9c" },
#line 365 "trad2simp_x86.in"
    {"\342[","\xdd\x5b" },
#line 2847 "trad2simp_x86.in"
    {"\274\236","\x48\x4e" },
#line 185 "trad2simp_x86.in"
    {"\262S","\x89\x53" },
#line 1615 "trad2simp_x86.in"
    {"\273\207","\x7c\x87" },
#line 678 "trad2simp_x86.in"
    {"\354f","\x52\x66" },
#line 692 "trad2simp_x86.in"
    {"\224h","\x00\x68" },
#line 671 "trad2simp_x86.in"
    {"\306f","\x86\x53" },
#line 2957 "trad2simp_x86.in"
    {"@b@w","\x40\x62\x57\x84" },
#line 2074 "trad2simp_x86.in"
    {"0\221","\xbb\x90" },
#line 2057 "trad2simp_x86.in"
    {"z\220","\x57\x90" },
#line 1431 "trad2simp_x86.in"
    {"\266\177","\xbb\x81" },
#line 1997 "trad2simp_x86.in"
    {"\007\217","\x81\x8f" },
#line 2572 "trad2simp_x86.in"
    {"C\231","\x8d\x99" },
#line 183 "trad2simp_x86.in"
    {"\231S","\x8d\x53" },
#line 2049 "trad2simp_x86.in"
    {"Y\220","\x65\x90" },
#line 18 "trad2simp_x86.in"
    {"% ","\xa8\x00" },
#line 1237 "trad2simp_x86.in"
    {"n|","\xa9\x7b" },
#line 1142 "trad2simp_x86.in"
    {"\004y","\x5a\x78" },
#line 2940 "trad2simp_x86.in"
    {"r^\005n","\x72\x5e\x05\x6e" },
#line 2848 "trad2simp_x86.in"
    {"\303\236","\xc4\x9e" },
#line 2072 "trad2simp_x86.in"
    {"'\221","\x93\x90" },
#line 2088 "trad2simp_x86.in"
    {"\274\221","\xb4\x5b" },
#line 350 "trad2simp_x86.in"
    {"\031[","\xf1\x5a" },
#line 657 "trad2simp_x86.in"
    {"If","\x4b\x66" },
#line 2963 "trad2simp_x86.in"
    {"-f@w","\x2d\x66\x57\x84" },
#line 2937 "trad2simp_x86.in"
    {"r^\255e","\x7e\x4e\xad\x65" },
#line 2555 "trad2simp_x86.in"
    {"\032\231","\xb4\x80" },
#line 569 "trad2simp_x86.in"
    {"\356c","\x25\x63" },
#line 2442 "trad2simp_x86.in"
    {"H\227","\x75\x70" },
#line 2840 "trad2simp_x86.in"
    {"z\236","\x7e\x9e" },
#line 2832 "trad2simp_x86.in"
    {"\014\236","\x71\x9e" },
#line 1512 "trad2simp_x86.in"
    {"2\203","\x79\x51" },
#line 2941 "trad2simp_x86.in"
    {"r^\005n\256[","\x7e\x4e\x05\x6e\xab\x5b" },
#line 1158 "trad2simp_x86.in"
    {"\225y","\x4e\x79" },
#line 1503 "trad2simp_x86.in"
    {"f\202","\x30\x82" },
#line 2670 "trad2simp_x86.in"
    {"\203\233","\x86\x9c" },
#line 2091 "trad2simp_x86.in"
    {"\303\221","\x7e\x91" },
#line 694 "trad2simp_x86.in"
    {"\235h","\x61\x67" },
#line 2651 "trad2simp_x86.in"
    {"\006\233","\x7e\x67" },
#line 703 "trad2simp_x86.in"
    {"\362h","\x16\x68" },
#line 2845 "trad2simp_x86.in"
    {"\251\236","\xb8\x9e" },
#line 2595 "trad2simp_x86.in"
    {"\324\231","\x75\x9a" },
#line 687 "trad2simp_x86.in"
    {"\365g","\x05\x68" },
#line 2700 "trad2simp_x86.in"
    {"\352\233","\xae\x9c" },
#line 2665 "trad2simp_x86.in"
    {"h\233","\x5a\x8c" },
#line 2086 "trad2simp_x86.in"
    {"\254\221","\x71\x91" },
#line 865 "trad2simp_x86.in"
    {"\377n","\xe1\x6e" },
#line 1583 "trad2simp_x86.in"
    {"\000\206","\x1a\x84" },
#line 1999 "trad2simp_x86.in"
    {"\012\217","\x7e\x8f" },
#line 1162 "trad2simp_x86.in"
    {"\261y","\x77\x79" },
#line 688 "trad2simp_x86.in"
    {"\372g","\xd0\x62" },
#line 1141 "trad2simp_x86.in"
    {"\375x","\x57\x78" },
#line 48 "trad2simp_x86.in"
    {"\236N","\x9a\x4e" },
#line 679 "trad2simp_x86.in"
    {"\370f","\x66\x4e" },
#line 1633 "trad2simp_x86.in"
    {"#\210","\xce\x86" },
#line 2005 "trad2simp_x86.in"
    {"\034\217","\x8e\x8f" },
#line 1148 "trad2simp_x86.in"
    {",y","\xfe\x77" },
#line 1517 "trad2simp_x86.in"
    {"\226\203","\x0e\x83" },
#line 2657 "trad2simp_x86.in"
    {"(\233","\xc4\x54" },
#line 28 "trad2simp_x86.in"
    {"\0150","\x1d\x20" },
#line 1520 "trad2simp_x86.in"
    {"\353\203","\x07\x58" },
#line 407 "trad2simp_x86.in"
    {"\247]","\xc4\x5c" },
#line 1428 "trad2simp_x86.in"
    {"\245\177","\x9f\x7f" },
#line 2009 "trad2simp_x86.in"
    {"%\217","\x8a\x8f" },
#line 1592 "trad2simp_x86.in"
    {"\"\206","\x0f\x83" },
#line 2658 "trad2simp_x86.in"
    {")\233","\x0b\x96" },
#line 1029 "trad2simp_x86.in"
    {"it","\xb9\x83" },
#line 2683 "trad2simp_x86.in"
    {"\256\233","\x9c\x9c" },
#line 1632 "trad2simp_x86.in"
    {"\037\210","\x21\x87" },
#line 2575 "trad2simp_x86.in"
    {"I\231","\x91\x99" },
#line 2968 "trad2simp_x86.in"
    {"@wfN","\x57\x84\x66\x4e" },
#line 1144 "trad2simp_x86.in"
    {"\031y","\x8d\x78" },
#line 2978 "trad2simp_x86.in"
    {"@wM|","\x57\x84\x4d\x7c" },
#line 40 "trad2simp_x86.in"
    {"\237I","\xb7\x49" },
#line 1642 "trad2simp_x86.in"
    {"S\210","\x2f\x67" },
#line 1424 "trad2simp_x86.in"
    {"\205\177","\x57\x7f" },
#line 642 "trad2simp_x86.in"
    {"7e","\x03\x80" },
#line 412 "trad2simp_x86.in"
    {"\275]","\xb3\x5c" },
#line 2954 "trad2simp_x86.in"
    {"5_\325lr^","\x20\x5f\xd5\x6c\x7e\x4e" },
#line 1601 "trad2simp_x86.in"
    {"g\206","\x8f\x4e" },
#line 564 "trad2simp_x86.in"
    {"\233c","\x02\x63" },
#line 631 "trad2simp_x86.in"
    {"\024e","\xe6\x62" },
#line 1028 "trad2simp_x86.in"
    {"dt","\x76\x74" },
#line 2682 "trad2simp_x86.in"
    {"\255\233","\x91\x9c" },
#line 1423 "trad2simp_x86.in"
    {"w\177","\x62\x7f" },
#line 1509 "trad2simp_x86.in"
    {"\347\202","\xce\x82" },
#line 176 "trad2simp_x86.in"
    {"1S","\x2e\x53" },
#line 637 "trad2simp_x86.in"
    {"\"e","\x12\x65" },
#line 411 "trad2simp_x86.in"
    {"\274]","\x7f\x5c" },
#line 188 "trad2simp_x86.in"
    {"\341S","\x7f\x77" },
#line 696 "trad2simp_x86.in"
    {"\261h","\x46\x63" },
#line 1626 "trad2simp_x86.in"
    {"\005\210","\x47\x87" },
#line 1635 "trad2simp_x86.in"
    {"1\210","\xca\x86" },
#line 2925 "trad2simp_x86.in"
    {"\037W@w","\x1f\x57\x57\x84" },
#line 1416 "trad2simp_x86.in"
    {"=\177","\xb5\x94" },
#line 1025 "trad2simp_x86.in"
    {"?t","\xf2\x73" },
#line 1138 "trad2simp_x86.in"
    {"\343x","\x9c\x78" },
#line 2606 "trad2simp_x86.in"
    {"\370\231","\x8e\x9a" },
#line 1653 "trad2simp_x86.in"
    {"\341\210","\xcc\x91" },
#line 563 "trad2simp_x86.in"
    {"\231c","\x23\x63" },
#line 2560 "trad2simp_x86.in"
    {"(\231","\x86\x99" },
#line 1041 "trad2simp_x86.in"
    {"\317t","\xd1\x73" },
#line 2667 "trad2simp_x86.in"
    {"t\233","\x82\x9c" },
#line 854 "trad2simp_x86.in"
    {"\304n","\xa7\x6c" },
#line 29 "trad2simp_x86.in"
    {"\0160","\x18\x20" },
#line 695 "trad2simp_x86.in"
    {"\237h","\xad\x67" },
#line 2439 "trad2simp_x86.in"
    {"B\227","\xf3\x96" },
#line 2587 "trad2simp_x86.in"
    {"\256\231","\xaf\x51" },
#line 1031 "trad2simp_x86.in"
    {"ot","\x05\x74" },
#line 180 "trad2simp_x86.in"
    {"lS","\x02\x66" },
#line 2656 "trad2simp_x86.in"
    {"'\233","\xf9\x95" },
#line 850 "trad2simp_x86.in"
    {"\253n","\x29\x6e" },
#line 1153 "trad2simp_x86.in"
    {"Py","\x51\x4f" },
#line 673 "trad2simp_x86.in"
    {"\311f","\x53\x66" },
#line 1224 "trad2simp_x86.in"
    {">|","\x18\x5e" },
#line 1026 "trad2simp_x86.in"
    {"Kt","\xae\x73" },
#line 2605 "trad2simp_x86.in"
    {"\361\231","\x86\x9a" },
#line 2688 "trad2simp_x86.in"
    {"\311\233","\xa4\x9c" },
#line 1239 "trad2simp_x86.in"
    {"\247|","\x86\x59" },
#line 1226 "trad2simp_x86.in"
    {"L|","\x79\x7b" },
#line 630 "trad2simp_x86.in"
    {"\017e","\xe2\x62" },
#line 1591 "trad2simp_x86.in"
    {"\036\206","\x39\x85" },
#line 2586 "trad2simp_x86.in"
    {"\255\231","\x6d\x9a" },
#line 838 "trad2simp_x86.in"
    {"\"n","\xa8\x6c" },
#line 2570 "trad2simp_x86.in"
    {">\231","\x8f\x99" },
#line 859 "trad2simp_x86.in"
    {"\357n","\xde\x6e" },
#line 47 "trad2simp_x86.in"
    {"\231N","\x98\x4e" },
#line 1035 "trad2simp_x86.in"
    {"\243t","\x91\x73" },
#line 2578 "trad2simp_x86.in"
    {"L\231","\x94\x99" },
#line 2551 "trad2simp_x86.in"
    {"\022\231","\x81\x99" },
#line 1036 "trad2simp_x86.in"
    {"\246t","\x77\x74" },
#line 682 "trad2simp_x86.in"
    {"'g","\xe7\x80" },
#line 1181 "trad2simp_x86.in"
    {"iz","\x33\x7a" },
#line 1140 "trad2simp_x86.in"
    {"\357x","\xf6\x77" },
#line 845 "trad2simp_x86.in"
    {"gn","\x8c\x6d" },
#line 2917 "trad2simp_x86.in"
    {"\023N@w","\x13\x4e\x57\x84" },
#line 807 "trad2simp_x86.in"
    {"#l","\x14\x6c" },
#line 324 "trad2simp_x86.in"
    {"iY","\x41\x59" },
#line 1178 "trad2simp_x86.in"
    {"az","\x51\x7a" },
#line 638 "trad2simp_x86.in"
    {"#e","\x1b\x63" },
#line 1192 "trad2simp_x86.in"
    {"\307z","\xa6\x7a" },
#line 2576 "trad2simp_x86.in"
    {"J\231","\x93\x99" },
#line 2452 "trad2simp_x86.in"
    {"\306\227","\x43\x53" },
#line 2448 "trad2simp_x86.in"
    {"\217\227","\xe9\x5d" },
#line 562 "trad2simp_x86.in"
    {"\227c","\x1c\x63" },
#line 1033 "trad2simp_x86.in"
    {"\211t","\x0f\x74" },
#line 1044 "trad2simp_x86.in"
    {"\332t","\xd2\x74" },
#line 1649 "trad2simp_x86.in"
    {"\312\210","\x85\x88" },
#line 1501 "trad2simp_x86.in"
    {"c\202","\x79\x6a" },
#line 1644 "trad2simp_x86.in"
    {"[\210","\x6b\x53" },
#line 126 "trad2simp_x86.in"
    {"\212Q","\x8c\x51" },
#line 1032 "trad2simp_x86.in"
    {"rt","\xb1\x73" },
#line 2564 "trad2simp_x86.in"
    {"5\231","\x82\x55" },
#line 2443 "trad2simp_x86.in"
    {"I\227","\xc6\x53" },
#line 125 "trad2simp_x86.in"
    {"iQ","\x24\x4e" },
#line 684 "trad2simp_x86.in"
    {"Gg","\x2c\x57" },
#line 181 "trad2simp_x86.in"
    {"yS","\x64\x60" },
#line 1163 "trad2simp_x86.in"
    {"\277y","\xc3\x79" },
#line 855 "trad2simp_x86.in"
    {"\305n","\x6d\x70" },
#line 1228 "trad2simp_x86.in"
    {"Y|","\x93\x7b" },
#line 2002 "trad2simp_x86.in"
    {"\024\217","\x85\x8f" },
#line 1182 "trad2simp_x86.in"
    {"kz","\xb7\x83" },
#line 42 "trad2simp_x86.in"
    {"\037N","\x22\x4e" },
#line 1184 "trad2simp_x86.in"
    {"\252z","\x3c\x6d" },
#line 329 "trad2simp_x86.in"
    {"\346Y","\x78\x59" },
#line 2585 "trad2simp_x86.in"
    {"\254\231","\x6c\x9a" },
#line 1646 "trad2simp_x86.in"
    {"y\210","\xea\x53" },
#line 1167 "trad2simp_x86.in"
    {"\010z","\xc6\x79" },
#line 2447 "trad2simp_x86.in"
    {"h\227","\x65\x97" },
#line 2547 "trad2simp_x86.in"
    {"\014\231","\x75\x99" },
#line 566 "trad2simp_x86.in"
    {"\300c","\xe3\x62" },
#line 1507 "trad2simp_x86.in"
    {"x\202","\x79\x82" },
#line 647 "trad2simp_x86.in"
    {"\202e","\x5b\x65" },
#line 1139 "trad2simp_x86.in"
    {"\347x","\x9b\x78" },
#line 123 "trad2simp_x86.in"
    {"WQ","\x56\x51" },
#line 1171 "trad2simp_x86.in"
    {".z","\xcd\x79" },
#line 561 "trad2simp_x86.in"
    {"\206c","\xcf\x39" },
#line 2035 "trad2simp_x86.in"
    {"\262\217","\x9c\x51" },
#line 2579 "trad2simp_x86.in"
    {"Q\231","\x65\x99" },
#line 1627 "trad2simp_x86.in"
    {"\006\210","\x7f\x86" },
#line 41 "trad2simp_x86.in"
    {"wL","\xa3\x4c" },
#line 2593 "trad2simp_x86.in"
    {"\321\231","\x7d\x9a" },
#line 367 "trad2simp_x86.in"
    {"\347[","\x81\x5b" },
#line 128 "trad2simp_x86.in"
    {"\252Q","\x42\x5e" },
#line 46 "trad2simp_x86.in"
    {"\202N","\x71\x4e" },
#line 847 "trad2simp_x86.in"
    {"\210n","\xa9\x6c" },
#line 130 "trad2simp_x86.in"
    {"\310Q","\xc0\x51" },
#line 106 "trad2simp_x86.in"
    {"\010Q","\xa9\x4f" },
#line 39 "trad2simp_x86.in"
    {"\233I","\xb6\x49" },
#line 1590 "trad2simp_x86.in"
    {"\032\206","\xd3\x85" },
#line 1030 "trad2simp_x86.in"
    {"jt","\x9b\x73" },
#line 1194 "trad2simp_x86.in"
    {"\366z","\xde\x7a" },
#line 3001 "trad2simp_x86.in"
    {"\355\220P[r^","\xed\x90\x50\x5b\x7e\x4e" },
#line 113 "trad2simp_x86.in"
    {"*Q","\x18\x4f" },
#line 1037 "trad2simp_x86.in"
    {"\260t","\xaf\x73" },
#line 1187 "trad2simp_x86.in"
    {"\265z","\x8e\x7a" },
#line 1154 "trad2simp_x86.in"
    {"|y","\xf8\x88" },
#line 107 "trad2simp_x86.in"
    {"\011Q","\xed\x4f" },
#line 1510 "trad2simp_x86.in"
    {"\372\202","\x93\x83" },
#line 1634 "trad2simp_x86.in"
    {"(\210","\xcf\x87" },
#line 813 "trad2simp_x86.in"
    {"Nl","\xdb\x6c" },
#line 1420 "trad2simp_x86.in"
    {"f\177","\x58\x7f" },
#line 697 "trad2simp_x86.in"
    {"\304h","\x03\x5f" },
#line 1598 "trad2simp_x86.in"
    {"[\206","\x5a\x86" },
#line 1188 "trad2simp_x86.in"
    {"\266z","\xad\x7a" },
#line 1176 "trad2simp_x86.in"
    {"Mz","\xef\x79" },
#line 1521 "trad2simp_x86.in"
    {"\357\203","\x4e\x53" },
#line 1629 "trad2simp_x86.in"
    {"\020\210","\xf4\x86" },
#line 184 "trad2simp_x86.in"
    {"\255S","\x8c\x53" },
#line 1179 "trad2simp_x86.in"
    {"bz","\xfd\x79" },
#line 327 "trad2simp_x86.in"
    {"\235Y","\x86\x59" },
#line 2007 "trad2simp_x86.in"
    {"\036\217","\x8b\x8f" },
#line 646 "trad2simp_x86.in"
    {"xe","\x70\x65" },
#line 2920 "trad2simp_x86.in"
    {"\237S@w","\x9f\x53\x57\x84" },
#line 2924 "trad2simp_x86.in"
    {"\020T@w","\x10\x54\x57\x84" },
#line 844 "trad2simp_x86.in"
    {"cn","\xf5\x95" },
#line 119 "trad2simp_x86.in"
    {"<Q","\xe8\x4f" },
#line 2008 "trad2simp_x86.in"
    {"\037\217","\x8d\x8f" },
#line 2456 "trad2simp_x86.in"
    {"\315\227","\xe8\x97" },
#line 2437 "trad2simp_x86.in"
    {"'\227","\xfe\x96" },
#line 1603 "trad2simp_x86.in"
    {"\372\206","\xf1\x86" },
#line 2453 "trad2simp_x86.in"
    {"\311\227","\xaf\x97" },
#line 132 "trad2simp_x86.in"
    {"\334Q","\xdb\x51" },
#line 1189 "trad2simp_x86.in"
    {"\272z","\xa5\x7a" },
#line 2440 "trad2simp_x86.in"
    {"D\227","\x2d\x97" },
#line 1640 "trad2simp_x86.in"
    {"J\210","\x11\x85" },
#line 1585 "trad2simp_x86.in"
    {"\006\206","\xa6\x82" },
#line 1125 "trad2simp_x86.in"
    {"Cx","\x31\x67" },
#line 2451 "trad2simp_x86.in"
    {"\303\227","\x91\x97" },
#line 114 "trad2simp_x86.in"
    {"2Q","\xa8\x50" },
#line 1418 "trad2simp_x86.in"
    {"H\177","\x5b\x57" },
#line 2930 "trad2simp_x86.in"
    {"r^CQ","\x7e\x4e\x43\x51" },
#line 178 "trad2simp_x86.in"
    {"DS","\xff\x5e" },
#line 559 "trad2simp_x86.in"
    {"\203c","\x6b\x62" },
#line 1996 "trad2simp_x86.in"
    {"\005\217","\x82\x8f" },
#line 2961 "trad2simp_x86.in"
    {"\260e@w","\xb0\x65\x57\x84" },
#line 187 "trad2simp_x86.in"
    {"\303S","\xc2\x53" },
#line 2959 "trad2simp_x86.in"
    {"yb@w","\x79\x62\x57\x84" },
#line 565 "trad2simp_x86.in"
    {"\241c","\xc7\x91" },
#line 104 "trad2simp_x86.in"
    {"\004Q","\xbf\x4e" },
#line 358 "trad2simp_x86.in"
    {"C[","\x18\x5a" },
#line 648 "trad2simp_x86.in"
    {"\203e","\xd9\x6b" },
#line 2021 "trad2simp_x86.in"
    {"E\217","\x95\x8f" },
#line 556 "trad2simp_x86.in"
    {"hc","\x0d\x82" },
#line 651 "trad2simp_x86.in"
    {"\267e","\xad\x65" },
#line 2987 "trad2simp_x86.in"
    {"\026\177@w","\x16\x7f\x57\x84" },
#line 629 "trad2simp_x86.in"
    {"\006e","\xb5\x64" },
#line 325 "trad2simp_x86.in"
    {"jY","\x3a\x59" },
#line 1024 "trad2simp_x86.in"
    {":t","\xd0\x73" },
#line 858 "trad2simp_x86.in"
    {"\354n","\xaa\x6c" },
#line 702 "trad2simp_x86.in"
    {"\347h","\x08\x68" },
#line 1149 "trad2simp_x86.in"
    {"1y","\x3b\x78" },
#line 1638 "trad2simp_x86.in"
    {";\210","\xee\x86" },
#line 103 "trad2simp_x86.in"
    {"\002Q","\xac\x4f" },
#line 1426 "trad2simp_x86.in"
    {"\210\177","\x81\x7f" },
#line 361 "trad2simp_x86.in"
    {"x[","\x66\x5b" },
#line 1151 "trad2simp_x86.in"
    {"Ey","\x46\x79" },
#line 2982 "trad2simp_x86.in"
    {"@w\367\217","\x40\x77\xf7\x8f" },
#line 2019 "trad2simp_x86.in"
    {"B\217","\xc2\x6b" },
#line 1168 "trad2simp_x86.in"
    {"\034z","\xf1\x68" },
#line 2025 "trad2simp_x86.in"
    {"N\217","\x7f\x8f" },
#line 370 "trad2simp_x86.in"
    {"\354[","\xbd\x5b" },
#line 2981 "trad2simp_x86.in"
    {"@w\360\217","\x57\x84\xf0\x8f" },
#line 111 "trad2simp_x86.in"
    {"\030Q","\x3d\x5c" },
#line 555 "trad2simp_x86.in"
    {">c","\x1f\x63" },
#line 699 "trad2simp_x86.in"
    {"\327h","\xa3\x67" },
#line 811 "trad2simp_x86.in"
    {">l","\xdb\x6c" },
#line 1513 "trad2simp_x86.in"
    {"E\203","\x54\x7b" },
#line 371 "trad2simp_x86.in"
    {"\365[","\xa0\x5b" },
#line 1150 "trad2simp_x86.in"
    {"By","\xd6\x4e" },
#line 2977 "trad2simp_x86.in"
    {"@w\360y","\x57\x84\xf0\x79" },
#line 1039 "trad2simp_x86.in"
    {"\277t","\x87\x74" },
#line 1425 "trad2simp_x86.in"
    {"\206\177","\x74\x7f" },
#line 1500 "trad2simp_x86.in"
    {"Y\202","\x31\x82" },
#line 857 "trad2simp_x86.in"
    {"\316n","\x65\x83" },
#line 1127 "trad2simp_x86.in"
    {"hx","\x17\x78" },
#line 862 "trad2simp_x86.in"
    {"\370n","\x52\x6d" },
#line 362 "trad2simp_x86.in"
    {"\177[","\x6a\x5b" },
#line 701 "trad2simp_x86.in"
    {"\341h","\x4e\x3b" },
#line 1508 "trad2simp_x86.in"
    {"\273\202","\x0d\x52" },
#line 2036 "trad2simp_x86.in"
    {"\306\217","\xe4\x8f" },
#line 1173 "trad2simp_x86.in"
    {"@z","\x37\x8c" },
#line 851 "trad2simp_x86.in"
    {"\256n","\x49\x6d" },
#line 322 "trad2simp_x86.in"
    {"PY","\x42\x59" },
#line 2927 "trad2simp_x86.in"
    {"\350]@w","\xe8\x5d\x57\x84" },
#line 652 "trad2simp_x86.in"
    {"\274e","\x8e\x4e" },
#line 2038 "trad2simp_x86.in"
    {"\372\217","\x43\x4e" },
#line 2023 "trad2simp_x86.in"
    {"I\217","\x6c\x8f" },
#line 2996 "trad2simp_x86.in"
    {"\321\213@w","\xd1\x8b\x57\x84" },
#line 2034 "trad2simp_x86.in"
    {"\257\217","\xa9\x8f" },
#line 841 "trad2simp_x86.in"
    {">n","\x51\x6d" },
#line 1518 "trad2simp_x86.in"
    {"\242\203","\x5a\x83" },
#line 122 "trad2simp_x86.in"
    {"RQ","\x3f\x51" },
#line 1429 "trad2simp_x86.in"
    {"\250\177","\xa1\x7f" },
#line 2965 "trad2simp_x86.in"
    {">f@w'`","\x3e\x66\x57\x84\x27\x60" },
#line 363 "trad2simp_x86.in"
    {"\256[","\xab\x5b" },
#line 553 "trad2simp_x86.in"
    {"\014c","\x3c\x68" },
#line 1132 "trad2simp_x86.in"
    {"\255x","\x00\x78" },
#line 698 "trad2simp_x86.in"
    {"\326h","\xa8\x67" },
#line 2003 "trad2simp_x86.in"
    {"\025\217","\x7b\x8f" },
#line 815 "trad2simp_x86.in"
    {"zl","\xb3\x51" },
#line 806 "trad2simp_x86.in"
    {"\014l","\x07\x6c" },
#line 650 "trad2simp_x86.in"
    {"\254e","\xa9\x65" },
#line 814 "trad2simp_x86.in"
    {"Yl","\x61\x6c" },
#line 690 "trad2simp_x86.in"
    {"nh","\x6f\x67" },
#line 1433 "trad2simp_x86.in"
    {"\354\177","\xda\x7f" },
#line 117 "trad2simp_x86.in"
    {":Q","\xa9\x50" },
#line 842 "trad2simp_x86.in"
    {"Jn","\xd1\x51" },
#line 1155 "trad2simp_x86.in"
    {"\177y","\x84\x79" },
#line 30 "trad2simp_x86.in"
    {"\0170","\x19\x20" },
#line 357 "trad2simp_x86.in"
    {"8[","\x76\x5a" },
#line 853 "trad2simp_x86.in"
    {"\274n","\x7f\x6e" },
#line 19 "trad2simp_x86.in"
    {"' ","\xb7\x00" },
#line 359 "trad2simp_x86.in"
    {"L[","\x08\x5a" },
#line 2011 "trad2simp_x86.in"
    {")\217","\x88\x8f" },
#line 2033 "trad2simp_x86.in"
    {"\256\217","\xab\x8f" },
#line 20 "trad2simp_x86.in"
    {"5 ","\x40\xff" },
#line 1135 "trad2simp_x86.in"
    {"\274x","\x01\x78" },
#line 356 "trad2simp_x86.in"
    {"0[","\x74\x5a" },
#line 1190 "trad2simp_x86.in"
    {"\304z","\x9c\x7a" },
#line 127 "trad2simp_x86.in"
    {"\221Q","\xc4\x80" },
#line 2032 "trad2simp_x86.in"
    {"\255\217","\x9e\x8f" },
#line 2017 "trad2simp_x86.in"
    {">\217","\x97\x8f" },
#line 2015 "trad2simp_x86.in"
    {"8\217","\x93\x8f" },
#line 1161 "trad2simp_x86.in"
    {"\256y","\x3c\x79" },
#line 2000 "trad2simp_x86.in"
    {"\022\217","\x84\x8f" },
#line 691 "trad2simp_x86.in"
    {"\177h","\x46\x67" },
#line 320 "trad2simp_x86.in"
    {"\"Y","\xa6\x68" },
#line 102 "trad2simp_x86.in"
    {"\000Q","\xea\x4e" },
#line 2918 "trad2simp_x86.in"
    {"\262N@w","\xb2\x4e\x57\x84" },
#line 2919 "trad2simp_x86.in"
    {"SS@w","\x53\x53\x57\x84" },
#line 1130 "trad2simp_x86.in"
    {"\251x","\x55\x78" },
#line 115 "trad2simp_x86.in"
    {"7Q","\xea\x4f" },
#line 349 "trad2simp_x86.in"
    {"\014[","\x07\x5a" },
#line 323 "trad2simp_x86.in"
    {"gY","\x65\x59" },
#line 1136 "trad2simp_x86.in"
    {"\321x","\x59\x78" },
#line 37 "trad2simp_x86.in"
    {"|G","\x8d\x47" },
#line 109 "trad2simp_x86.in"
    {"\024Q","\xe6\x4f" },
#line 1023 "trad2simp_x86.in"
    {"1t","\xd5\x96" },
#line 2020 "trad2simp_x86.in"
    {"D\217","\x96\x8f" },
#line 1417 "trad2simp_x86.in"
    {">\177","\xf6\x74" },
#line 2953 "trad2simp_x86.in"
    {"5_\325l","\x35\x5f\xd5\x6c" },
#line 1419 "trad2simp_x86.in"
    {"L\177","\x42\x7f" },
#line 1519 "trad2simp_x86.in"
    {"\247\203","\xcb\x82" },
#line 2962 "trad2simp_x86.in"
    {"\347e@w","\xe7\x65\x57\x84" },
#line 124 "trad2simp_x86.in"
    {"gQ","\x85\x51" },
#line 2016 "trad2simp_x86.in"
    {";\217","\x90\x8f" },
#line 1191 "trad2simp_x86.in"
    {"\305z","\x8d\x7a" },
#line 1027 "trad2simp_x86.in"
    {"ct","\x10\x74" },
#line 1514 "trad2simp_x86.in"
    {"J\203","\x46\x83" },
#line 689 "trad2simp_x86.in"
    {"\022h","\xec\x65" },
#line 1152 "trad2simp_x86.in"
    {"Gy","\xea\x53" },
#line 1043 "trad2simp_x86.in"
    {"\326t","\x76\x95" },
#line 1169 "trad2simp_x86.in"
    {"\037z","\x80\x79" },
#line 2887 "trad2simp_x86.in"
    {"\014\372","\x40\x51" },
#line 129 "trad2simp_x86.in"
    {"\305Q","\xb8\x6d" },
#line 38 "trad2simp_x86.in"
    {"GI","\x82\x49" },
#line 1040 "trad2simp_x86.in"
    {"\312t","\x3c\x74" },
#line 1042 "trad2simp_x86.in"
    {"\324t","\x8e\x74" },
#line 1166 "trad2simp_x86.in"
    {"\005z","\x0e\x7a" },
#line 112 "trad2simp_x86.in"
    {"\037Q","\x7f\x50" },
#line 1430 "trad2simp_x86.in"
    {"\251\177","\x49\x4e" },
#line 1172 "trad2simp_x86.in"
    {"1z","\xf0\x79" },
#line 2964 "trad2simp_x86.in"
    {">f@w","\x3e\x66\x57\x84" },
#line 105 "trad2simp_x86.in"
    {"\005Q","\x53\x5f" },
#line 1034 "trad2simp_x86.in"
    {"\241t","\x0e\x74" },
#line 1177 "trad2simp_x86.in"
    {"Nz","\x96\x98" },
#line 326 "trad2simp_x86.in"
    {"nY","\x4b\x59" },
#line 319 "trad2simp_x86.in"
    {" Y","\x1f\x59" },
#line 1193 "trad2simp_x86.in"
    {"\312z","\x83\x7a" },
#line 1038 "trad2simp_x86.in"
    {"\275t","\xba\x73" },
#line 1186 "trad2simp_x86.in"
    {"\257z","\x91\x7a" },
#line 3000 "trad2simp_x86.in"
    {"\355\220P[","\xed\x90\x50\x5b" },
#line 1180 "trad2simp_x86.in"
    {"hz","\x93\x98" },
#line 330 "trad2simp_x86.in"
    {"\352Y","\x84\x4f" },
#line 2990 "trad2simp_x86.in"
    {"\344\210\013N","\xe4\x88\x0b\x4e" },
#line 1170 "trad2simp_x86.in"
    {"(z","\x41\x62" },
#line 27 "trad2simp_x86.in"
    {"\0140","\x1c\x20" },
#line 1185 "trad2simp_x86.in"
    {"\256z","\x77\x7a" },
#line 110 "trad2simp_x86.in"
    {"\025Q","\xaa\x4f" },
#line 321 "trad2simp_x86.in"
    {">Y","\x39\x59" },
#line 1175 "trad2simp_x86.in"
    {"Lz","\x23\x7a" },
#line 2991 "trad2simp_x86.in"
    {"\344\210\013NKN\261\217","\xd4\x7e\x0b\x4e\x4b\x4e\xb1\x8f" },
#line 2921 "trad2simp_x86.in"
    {"\321S@w","\xd1\x53\x57\x84" },
#line 108 "trad2simp_x86.in"
    {"\020Q","\xa7\x50" },
#line 133 "trad2simp_x86.in"
    {"\361Q","\xef\x51" },
#line 116 "trad2simp_x86.in"
    {"8Q","\x57\x7f" },
#line 328 "trad2simp_x86.in"
    {"\315Y","\xd7\x59" },
#line 121 "trad2simp_x86.in"
    {"LQ","\x51\x51" },
#line 131 "trad2simp_x86.in"
    {"\315Q","\xbb\x51" },
#line 1174 "trad2simp_x86.in"
    {"Gz","\x5f\x41" },
#line 1183 "trad2simp_x86.in"
    {"\251z","\x9d\x7a" },
#line 118 "trad2simp_x86.in"
    {";Q","\xa5\x50" },
#line 120 "trad2simp_x86.in"
    {"GQ","\xf6\x51" },
#line 2926 "trad2simp_x86.in"
    {"'Y@w","\x27\x59\x57\x84" }
  };

static const short lookup[] =
  {
      -1,   -1,   -1,   -1,   -1,    0,   -1,   -1,
      -1,   -1,    1,    2,    3,   -1,   -1,    4,
      -1,   -1,   -1,    5,   -1,    6,   -1,    7,
      -1,    8,    9,   10,   -1,   -1,   11,   12,
      13,   -1,   -1,   14,   15,   16,   -1,   -1,
      17,   18,   19,   -1,   20,   21,   22,   23,
      -1,   -1,   24,   25,   26,   27,   -1,   28,
      29,   30,   -1,   -1,   31,   -1,   32,   -1,
      -1,   33,   34,   35,   -1,   -1,   36,   37,
      38,   -1,   39,   40,   41,   -1,   -1,   -1,
      -1,   42,   43,   -1,   -1,   44,   45,   46,
      -1,   47,   48,   49,   50,   -1,   51,   52,
      53,   54,   55,   -1,   56,   57,   58,   -1,
      59,   60,   61,   62,   -1,   -1,   63,   64,
      65,   -1,   66,   -1,   67,   68,   -1,   -1,
      -1,   69,   70,   -1,   -1,   71,   72,   73,
      -1,   74,   75,   76,   77,   -1,   78,   -1,
      79,   -1,   -1,   -1,   80,   -1,   81,   -1,
      -1,   82,   83,   84,   -1,   -1,   85,   86,
      87,   -1,   -1,   88,   89,   90,   -1,   -1,
      91,   92,   93,   -1,   -1,   94,   95,   96,
      -1,   -1,   -1,   97,   98,   -1,   -1,   99,
      -1,  100,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,  101,  102,   -1,   -1,   -1,  103,  104,
      -1,   -1,   -1,  105,  106,  107,   -1,   -1,
     108,  109,  110,   -1,   -1,  111,  112,  113,
      -1,   -1,   -1,  114,   -1,   -1,   -1,  115,
     116,  117,   -1,   -1,  118,  119,  120,   -1,
      -1,  121,   -1,   -1,   -1,   -1,  122,  123,
     124,   -1,   -1,  125,  126,  127,   -1,   -1,
     128,  129,  130,   -1,   -1,   -1,  131,  132,
      -1,   -1,  133,   -1,  134,   -1,   -1,  135,
      -1,  136,   -1,   -1,  137,  138,  139,   -1,
      -1,  140,  141,  142,   -1,   -1,  143,  144,
     145,   -1,   -1,  146,  147,  148,   -1,   -1,
     149,   -1,  150,   -1,   -1,  151,  152,   -1,
      -1,   -1,  153,   -1,  154,   -1,   -1,  155,
     156,  157,   -1,   -1,  158,   -1,  159,   -1,
     160,  161,  162,  163,   -1,   -1,  164,  165,
     166,   -1,   -1,   -1,  167,  168,   -1,   -1,
     169,  170,  171,   -1,   -1,  172,  173,  174,
      -1,   -1,  175,  176,   -1,   -1,   -1,  177,
     178,   -1,   -1,   -1,  179,  180,  181,   -1,
     182,  183,  184,  185,   -1,  186,  187,  188,
      -1,   -1,   -1,  189,  190,   -1,  191,   -1,
     192,  193,  194,   -1,   -1,  195,  196,  197,
      -1,   -1,  198,   -1,  199,  200,  201,   -1,
     202,  203,   -1,   -1,  204,  205,  206,   -1,
      -1,   -1,  207,  208,   -1,   -1,  209,  210,
     211,   -1,   -1,  212,  213,   -1,   -1,   -1,
     214,  215,  216,   -1,   -1,  217,  218,  219,
     220,   -1,  221,   -1,  222,   -1,   -1,   -1,
     223,  224,   -1,   -1,  225,  226,  227,   -1,
     228,  229,  230,   -1,   -1,   -1,  231,  232,
     233,   -1,   -1,  234,  235,  236,   -1,   -1,
     237,   -1,   -1,  238,   -1,   -1,  239,  240,
      -1,   -1,  241,  242,   -1,   -1,   -1,  243,
      -1,  244,   -1,   -1,  245,  246,  247,   -1,
     248,  249,  250,  251,   -1,   -1,  252,  253,
      -1,   -1,  254,  255,  256,  257,   -1,   -1,
      -1,  258,   -1,   -1,   -1,  259,   -1,  260,
      -1,   -1,  261,  262,   -1,   -1,  263,  264,
     265,   -1,   -1,  266,  267,   -1,   -1,  268,
      -1,  269,  270,   -1,   -1,   -1,  271,  272,
     273,   -1,   -1,  274,  275,   -1,   -1,   -1,
      -1,  276,  277,   -1,   -1,  278,  279,   -1,
      -1,   -1,  280,  281,  282,   -1,   -1,   -1,
      -1,  283,  284,   -1,  285,  286,   -1,   -1,
      -1,  287,  288,  289,   -1,  290,   -1,  291,
      -1,   -1,   -1,  292,  293,   -1,   -1,  294,
     295,   -1,   -1,   -1,  296,  297,  298,   -1,
      -1,   -1,   -1,   -1,  299,   -1,  300,  301,
     302,   -1,   -1,   -1,   -1,  303,  304,   -1,
      -1,  305,  306,   -1,  307,   -1,  308,  309,
      -1,  310,   -1,  311,   -1,   -1,   -1,   -1,
      -1,   -1,  312,   -1,   -1,  313,   -1,   -1,
      -1,   -1,  314,  315,  316,   -1,   -1,  317,
     318,  319,   -1,  320,   -1,  321,  322,   -1,
     323,   -1,   -1,  324,   -1,   -1,  325,  326,
     327,   -1,   -1,  328,  329,  330,  331,   -1,
     332,   -1,   -1,  333,   -1,   -1,  334,   -1,
      -1,   -1,   -1,  335,  336,   -1,   -1,   -1,
     337,  338,   -1,   -1,  339,  340,  341,   -1,
     342,  343,  344,  345,   -1,   -1,   -1,  346,
     347,   -1,   -1,   -1,  348,   -1,   -1,   -1,
     349,   -1,  350,   -1,   -1,   -1,   -1,  351,
      -1,   -1,  352,   -1,  353,   -1,   -1,  354,
      -1,  355,   -1,   -1,  356,  357,  358,   -1,
     359,   -1,  360,  361,   -1,   -1,   -1,  362,
     363,   -1,   -1,  364,  365,  366,   -1,   -1,
     367,  368,  369,   -1,   -1,  370,  371,  372,
      -1,   -1,  373,   -1,   -1,   -1,   -1,  374,
     375,   -1,   -1,  376,  377,   -1,  378,   -1,
      -1,  379,  380,  381,   -1,   -1,  382,  383,
      -1,   -1,   -1,  384,   -1,  385,   -1,   -1,
     386,  387,   -1,   -1,   -1,   -1,  388,  389,
      -1,   -1,   -1,  390,  391,   -1,   -1,   -1,
     392,  393,   -1,   -1,  394,  395,  396,   -1,
      -1,  397,  398,  399,   -1,   -1,  400,  401,
     402,   -1,  403,  404,  405,  406,   -1,   -1,
     407,  408,  409,   -1,   -1,  410,  411,   -1,
      -1,   -1,  412,  413,   -1,   -1,   -1,  414,
      -1,  415,   -1,   -1,  416,  417,   -1,   -1,
      -1,  418,  419,  420,   -1,   -1,  421,  422,
     423,  424,  425,  426,  427,  428,   -1,   -1,
     429,  430,  431,   -1,   -1,  432,   -1,   -1,
      -1,  433,  434,  435,  436,   -1,   -1,   -1,
     437,  438,   -1,   -1,  439,   -1,   -1,   -1,
      -1,  440,  441,   -1,   -1,   -1,  442,   -1,
     443,   -1,   -1,  444,   -1,  445,   -1,   -1,
     446,  447,  448,   -1,   -1,  449,  450,  451,
      -1,   -1,  452,  453,  454,   -1,   -1,  455,
     456,  457,   -1,   -1,  458,   -1,  459,   -1,
     460,   -1,  461,   -1,   -1,   -1,  462,  463,
      -1,   -1,   -1,   -1,  464,   -1,   -1,   -1,
     465,  466,  467,  468,   -1,  469,  470,  471,
      -1,   -1,  472,   -1,  473,  474,   -1,   -1,
     475,  476,   -1,   -1,  477,  478,  479,   -1,
     480,  481,  482,   -1,   -1,   -1,  483,  484,
     485,   -1,   -1,   -1,  486,  487,   -1,  488,
      -1,  489,   -1,   -1,  490,  491,   -1,   -1,
      -1,   -1,  492,  493,  494,  495,   -1,  496,
     497,  498,   -1,   -1,  499,   -1,  500,   -1,
      -1,  501,  502,  503,   -1,   -1,   -1,  504,
     505,   -1,   -1,  506,  507,   -1,   -1,   -1,
      -1,  508,  509,   -1,   -1,  510,  511,   -1,
      -1,   -1,  512,  513,  514,   -1,   -1,  515,
      -1,  516,   -1,   -1,   -1,  517,  518,   -1,
      -1,  519,  520,  521,  522,   -1,  523,  524,
     525,   -1,   -1,  526,   -1,  527,   -1,   -1,
     528,  529,  530,  531,   -1,  532,  533,  534,
      -1,   -1,   -1,  535,  536,   -1,   -1,  537,
     538,  539,   -1,   -1,   -1,  540,  541,   -1,
     542,  543,   -1,   -1,   -1,   -1,  544,  545,
     546,   -1,  547,  548,  549,  550,   -1,  551,
      -1,   -1,  552,  553,   -1,  554,   -1,  555,
      -1,   -1,  556,   -1,  557,   -1,   -1,  558,
     559,  560,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,  561,  562,  563,   -1,   -1,  564,   -1,
     565,   -1,   -1,  566,  567,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,  568,  569,  570,
      -1,   -1,   -1,  571,  572,   -1,   -1,   -1,
     573,  574,   -1,   -1,  575,  576,   -1,   -1,
      -1,   -1,  577,  578,   -1,   -1,  579,   -1,
     580,   -1,   -1,  581,   -1,  582,   -1,   -1,
     583,  584,  585,   -1,   -1,  586,  587,  588,
      -1,   -1,  589,  590,  591,   -1,   -1,   -1,
     592,  593,   -1,   -1,  594,   -1,  595,   -1,
      -1,  596,  597,  598,  599,   -1,   -1,  600,
      -1,   -1,  601,  602,  603,  604,   -1,   -1,
      -1,  605,  606,   -1,   -1,   -1,  607,  608,
      -1,   -1,   -1,  609,  610,   -1,   -1,  611,
      -1,  612,   -1,   -1,  613,  614,  615,   -1,
      -1,  616,   -1,  617,   -1,   -1,   -1,  618,
     619,   -1,   -1,   -1,   -1,   -1,  620,   -1,
      -1,  621,  622,   -1,   -1,  623,   -1,  624,
      -1,   -1,  625,  626,   -1,   -1,   -1,  627,
      -1,  628,   -1,   -1,  629,  630,   -1,   -1,
      -1,  631,  632,   -1,   -1,   -1,  633,   -1,
     634,   -1,   -1,  635,  636,  637,   -1,   -1,
      -1,  638,   -1,   -1,   -1,  639,  640,  641,
      -1,   -1,   -1,  642,  643,   -1,   -1,  644,
      -1,  645,   -1,   -1,   -1,  646,  647,   -1,
     648,   -1,  649,  650,   -1,   -1,  651,  652,
      -1,   -1,   -1,   -1,  653,  654,   -1,   -1,
     655,  656,   -1,  657,   -1,  658,  659,   -1,
      -1,   -1,   -1,  660,  661,   -1,   -1,   -1,
     662,  663,   -1,   -1,   -1,  664,  665,  666,
      -1,  667,  668,   -1,   -1,   -1,  669,  670,
      -1,   -1,   -1,   -1,  671,  672,   -1,   -1,
     673,  674,  675,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,  676,  677,   -1,  678,   -1,
      -1,   -1,   -1,  679,   -1,  680,  681,   -1,
      -1,   -1,  682,  683,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,  684,   -1,   -1,
      -1,  685,   -1,   -1,   -1,  686,  687,  688,
      -1,   -1,   -1,  689,  690,   -1,   -1,  691,
     692,  693,   -1,   -1,   -1,   -1,  694,   -1,
      -1,  695,   -1,  696,   -1,   -1,  697,  698,
      -1,   -1,  699,   -1,  700,   -1,   -1,   -1,
     701,  702,  703,   -1,   -1,  704,  705,   -1,
      -1,  706,  707,  708,  709,   -1,   -1,   -1,
      -1,  710,   -1,  711,   -1,  712,   -1,   -1,
      -1,   -1,  713,  714,   -1,   -1,  715,   -1,
     716,   -1,   -1,  717,  718,  719,   -1,   -1,
      -1,  720,  721,   -1,   -1,   -1,  722,   -1,
      -1,   -1,   -1,   -1,   -1,  723,   -1,   -1,
     724,  725,   -1,   -1,  726,  727,  728,   -1,
      -1,  729,  730,  731,   -1,   -1,   -1,  732,
     733,   -1,   -1,  734,  735,  736,   -1,   -1,
     737,  738,   -1,   -1,   -1,  739,   -1,  740,
      -1,   -1,  741,  742,   -1,   -1,   -1,  743,
      -1,  744,   -1,   -1,  745,   -1,  746,   -1,
      -1,   -1,  747,   -1,   -1,   -1,   -1,  748,
      -1,   -1,  749,   -1,  750,  751,   -1,   -1,
     752,  753,  754,   -1,   -1,   -1,  755,   -1,
      -1,   -1,  756,   -1,   -1,   -1,   -1,   -1,
     757,   -1,   -1,   -1,   -1,  758,  759,   -1,
      -1,   -1,  760,  761,   -1,   -1,   -1,  762,
     763,   -1,   -1,   -1,  764,  765,   -1,   -1,
      -1,  766,  767,   -1,   -1,   -1,  768,   -1,
      -1,   -1,  769,  770,  771,   -1,   -1,   -1,
      -1,  772,   -1,  773,  774,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,  775,   -1,
     776,   -1,   -1,  777,   -1,   -1,   -1,   -1,
      -1,   -1,  778,   -1,   -1,  779,  780,   -1,
     781,   -1,  782,  783,  784,   -1,   -1,  785,
      -1,  786,   -1,   -1,   -1,  787,   -1,   -1,
      -1,  788,  789,   -1,   -1,   -1,  790,  791,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,  792,   -1,   -1,   -1,   -1,  793,  794,
      -1,   -1,  795,   -1,  796,   -1,   -1,  797,
     798,  799,   -1,   -1,  800,  801,  802,  803,
      -1,   -1,   -1,  804,   -1,   -1,   -1,  805,
     806,   -1,   -1,  807,  808,   -1,   -1,   -1,
      -1,  809,  810,   -1,   -1,   -1,  811,   -1,
      -1,   -1,   -1,   -1,  812,   -1,   -1,   -1,
      -1,  813,   -1,   -1,   -1,  814,  815,   -1,
      -1,   -1,  816,  817,   -1,   -1,   -1,  818,
      -1,   -1,   -1,   -1,  819,   -1,   -1,   -1,
     820,  821,   -1,   -1,  822,   -1,  823,  824,
      -1,   -1,  825,  826,  827,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,  828,  829,   -1,
      -1,  830,  831,  832,   -1,   -1,  833,  834,
     835,   -1,   -1,  836,  837,   -1,   -1,  838,
      -1,  839,   -1,   -1,   -1,  840,   -1,  841,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
     842,   -1,   -1,  843,  844,  845,  846,   -1,
      -1,   -1,   -1,  847,   -1,   -1,  848,  849,
     850,   -1,   -1,  851,  852,  853,   -1,   -1,
     854,  855,  856,   -1,   -1,  857,   -1,  858,
      -1,   -1,   -1,   -1,  859,   -1,   -1,   -1,
     860,  861,   -1,  862,   -1,  863,   -1,   -1,
      -1,   -1,  864,  865,   -1,  866,  867,  868,
     869,   -1,  870,  871,  872,   -1,   -1,   -1,
      -1,   -1,  873,   -1,   -1,   -1,  874,  875,
      -1,   -1,   -1,   -1,  876,   -1,   -1,   -1,
     877,   -1,   -1,   -1,   -1,  878,  879,   -1,
      -1,   -1,   -1,  880,   -1,   -1,  881,  882,
     883,   -1,   -1,   -1,  884,   -1,   -1,  885,
      -1,  886,  887,   -1,  888,  889,  890,   -1,
      -1,   -1,   -1,  891,  892,   -1,  893,  894,
     895,  896,   -1,   -1,  897,  898,   -1,   -1,
      -1,   -1,  899,  900,   -1,   -1,   -1,  901,
      -1,   -1,   -1,   -1,  902,   -1,   -1,   -1,
      -1,   -1,  903,   -1,   -1,   -1,  904,  905,
      -1,   -1,  906,  907,   -1,   -1,   -1,   -1,
     908,  909,   -1,   -1,   -1,  910,  911,   -1,
      -1,   -1,  912,  913,   -1,   -1,   -1,  914,
     915,   -1,   -1,  916,  917,  918,   -1,   -1,
     919,  920,  921,   -1,   -1,  922,  923,  924,
      -1,   -1,  925,  926,  927,   -1,   -1,   -1,
     928,   -1,   -1,   -1,   -1,  929,  930,   -1,
      -1,  931,  932,  933,   -1,   -1,  934,  935,
     936,   -1,   -1,  937,  938,  939,   -1,   -1,
      -1,  940,   -1,   -1,   -1,  941,  942,  943,
      -1,   -1,   -1,   -1,  944,   -1,   -1,  945,
      -1,  946,   -1,   -1,   -1,   -1,  947,   -1,
      -1,  948,  949,   -1,  950,   -1,   -1,  951,
      -1,   -1,   -1,   -1,  952,  953,   -1,   -1,
      -1,  954,   -1,   -1,   -1,  955,  956,   -1,
      -1,   -1,  957,  958,  959,   -1,   -1,  960,
     961,  962,   -1,   -1,   -1,  963,  964,   -1,
      -1,   -1,  965,   -1,   -1,   -1,   -1,  966,
      -1,   -1,   -1,  967,  968,   -1,   -1,   -1,
     969,  970,  971,   -1,   -1,   -1,  972,  973,
      -1,   -1,  974,  975,  976,   -1,  977,   -1,
     978,  979,   -1,   -1,   -1,   -1,  980,   -1,
      -1,   -1,  981,   -1,   -1,   -1,  982,  983,
     984,   -1,   -1,  985,  986,  987,   -1,   -1,
      -1,   -1,  988,   -1,   -1,   -1,  989,  990,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,  991,
     992,   -1,   -1,   -1,   -1,  993,  994,   -1,
      -1,   -1,   -1,  995,   -1,   -1,   -1,  996,
     997,   -1,   -1,   -1,  998,   -1,   -1,   -1,
     999,   -1, 1000,   -1,   -1,   -1, 1001, 1002,
      -1,   -1,   -1, 1003, 1004,   -1,   -1, 1005,
    1006,   -1,   -1,   -1,   -1,   -1, 1007,   -1,
      -1,   -1, 1008, 1009,   -1,   -1,   -1,   -1,
    1010,   -1,   -1, 1011,   -1, 1012,   -1,   -1,
      -1, 1013,   -1,   -1,   -1,   -1, 1014, 1015,
      -1,   -1, 1016,   -1, 1017,   -1,   -1, 1018,
      -1, 1019,   -1,   -1,   -1,   -1, 1020,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 1021,
    1022, 1023,   -1,   -1, 1024,   -1,   -1,   -1,
      -1,   -1, 1025,   -1,   -1,   -1, 1026, 1027,
      -1,   -1, 1028, 1029, 1030,   -1,   -1,   -1,
    1031, 1032,   -1,   -1, 1033,   -1, 1034,   -1,
      -1,   -1, 1035,   -1,   -1,   -1,   -1, 1036,
      -1,   -1,   -1,   -1, 1037, 1038,   -1,   -1,
      -1, 1039,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 1040, 1041, 1042,   -1,   -1,   -1,
    1043,   -1,   -1,   -1,   -1, 1044, 1045,   -1,
      -1,   -1, 1046, 1047,   -1,   -1, 1048, 1049,
      -1,   -1,   -1, 1050,   -1, 1051,   -1,   -1,
      -1, 1052, 1053,   -1,   -1,   -1, 1054, 1055,
      -1,   -1,   -1, 1056,   -1,   -1,   -1, 1057,
    1058,   -1,   -1,   -1, 1059, 1060, 1061, 1062,
    1063,   -1,   -1, 1064,   -1,   -1,   -1, 1065,
    1066,   -1,   -1, 1067,   -1, 1068,   -1,   -1,
      -1, 1069, 1070,   -1,   -1, 1071, 1072,   -1,
      -1,   -1, 1073, 1074,   -1,   -1,   -1,   -1,
    1075, 1076,   -1,   -1,   -1,   -1, 1077,   -1,
      -1,   -1,   -1, 1078,   -1,   -1, 1079,   -1,
    1080,   -1,   -1,   -1, 1081, 1082,   -1,   -1,
      -1, 1083, 1084,   -1,   -1,   -1, 1085, 1086,
      -1,   -1,   -1,   -1,   -1,   -1, 1087, 1088,
    1089, 1090,   -1,   -1, 1091, 1092, 1093,   -1,
      -1, 1094, 1095,   -1,   -1,   -1, 1096,   -1,
    1097,   -1,   -1,   -1, 1098, 1099,   -1,   -1,
    1100, 1101, 1102,   -1,   -1,   -1, 1103,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 1104,   -1,   -1,   -1,   -1, 1105,   -1,
      -1,   -1, 1106, 1107,   -1,   -1, 1108,   -1,
    1109,   -1,   -1,   -1,   -1, 1110,   -1,   -1,
      -1, 1111, 1112,   -1,   -1,   -1, 1113,   -1,
      -1,   -1, 1114, 1115, 1116,   -1,   -1, 1117,
      -1, 1118,   -1,   -1, 1119, 1120, 1121,   -1,
      -1,   -1,   -1, 1122,   -1,   -1, 1123, 1124,
    1125,   -1,   -1, 1126, 1127,   -1,   -1,   -1,
      -1, 1128, 1129,   -1,   -1,   -1,   -1, 1130,
      -1,   -1,   -1, 1131, 1132,   -1,   -1, 1133,
      -1, 1134,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 1135, 1136, 1137,   -1,   -1,   -1, 1138,
    1139,   -1,   -1,   -1, 1140,   -1,   -1,   -1,
      -1, 1141,   -1,   -1,   -1, 1142, 1143, 1144,
      -1,   -1, 1145, 1146,   -1,   -1,   -1,   -1,
    1147, 1148,   -1,   -1, 1149, 1150, 1151,   -1,
      -1, 1152,   -1, 1153,   -1,   -1, 1154, 1155,
    1156,   -1,   -1,   -1,   -1, 1157,   -1,   -1,
    1158, 1159, 1160,   -1,   -1,   -1, 1161,   -1,
      -1,   -1,   -1,   -1, 1162,   -1,   -1, 1163,
    1164, 1165,   -1,   -1, 1166, 1167,   -1,   -1,
      -1,   -1, 1168, 1169, 1170,   -1,   -1, 1171,
    1172,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 1173,   -1,   -1,   -1,   -1,   -1, 1174,
      -1,   -1,   -1, 1175, 1176,   -1,   -1, 1177,
      -1, 1178,   -1,   -1,   -1, 1179, 1180,   -1,
      -1,   -1,   -1, 1181,   -1,   -1, 1182, 1183,
    1184,   -1,   -1,   -1,   -1, 1185,   -1,   -1,
      -1,   -1, 1186,   -1, 1187,   -1, 1188,   -1,
      -1,   -1,   -1, 1189, 1190,   -1,   -1, 1191,
    1192, 1193,   -1,   -1,   -1, 1194, 1195,   -1,
      -1,   -1,   -1, 1196,   -1,   -1, 1197, 1198,
      -1,   -1,   -1,   -1,   -1, 1199,   -1,   -1,
      -1,   -1, 1200,   -1,   -1, 1201, 1202, 1203,
      -1,   -1, 1204, 1205, 1206,   -1, 1207,   -1,
      -1, 1208,   -1,   -1, 1209, 1210, 1211,   -1,
      -1,   -1, 1212, 1213,   -1,   -1,   -1,   -1,
    1214,   -1,   -1,   -1, 1215, 1216,   -1,   -1,
    1217, 1218, 1219,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 1220, 1221, 1222,   -1,   -1, 1223,
    1224,   -1,   -1,   -1, 1225, 1226, 1227,   -1,
      -1, 1228, 1229,   -1,   -1,   -1, 1230, 1231,
    1232,   -1,   -1, 1233, 1234, 1235, 1236,   -1,
    1237, 1238, 1239,   -1,   -1, 1240,   -1, 1241,
      -1,   -1, 1242, 1243,   -1,   -1,   -1,   -1,
      -1, 1244,   -1,   -1, 1245, 1246, 1247,   -1,
    1248, 1249, 1250, 1251,   -1,   -1, 1252, 1253,
    1254,   -1,   -1, 1255, 1256, 1257,   -1,   -1,
      -1, 1258, 1259,   -1,   -1,   -1, 1260, 1261,
      -1,   -1,   -1,   -1, 1262,   -1,   -1, 1263,
    1264, 1265,   -1,   -1, 1266, 1267,   -1,   -1,
    1268,   -1, 1269, 1270,   -1,   -1,   -1, 1271,
      -1,   -1,   -1, 1272, 1273, 1274,   -1,   -1,
    1275, 1276, 1277,   -1,   -1, 1278,   -1, 1279,
      -1,   -1,   -1, 1280, 1281,   -1,   -1, 1282,
      -1,   -1,   -1, 1283, 1284,   -1, 1285,   -1,
      -1, 1286, 1287, 1288,   -1,   -1,   -1, 1289,
    1290,   -1,   -1, 1291, 1292, 1293,   -1,   -1,
      -1, 1294, 1295, 1296,   -1, 1297, 1298, 1299,
      -1,   -1, 1300, 1301, 1302,   -1,   -1, 1303,
    1304, 1305,   -1,   -1, 1306, 1307, 1308,   -1,
      -1, 1309, 1310, 1311,   -1,   -1, 1312, 1313,
    1314,   -1,   -1, 1315, 1316, 1317,   -1,   -1,
      -1, 1318, 1319, 1320,   -1, 1321,   -1, 1322,
      -1,   -1,   -1,   -1, 1323,   -1,   -1,   -1,
    1324, 1325,   -1,   -1,   -1, 1326, 1327,   -1,
      -1, 1328,   -1, 1329,   -1, 1330, 1331, 1332,
    1333,   -1,   -1, 1334,   -1, 1335,   -1,   -1,
      -1, 1336, 1337,   -1,   -1, 1338, 1339, 1340,
      -1,   -1, 1341, 1342,   -1,   -1,   -1,   -1,
    1343, 1344,   -1,   -1,   -1,   -1, 1345,   -1,
      -1, 1346, 1347, 1348,   -1,   -1,   -1,   -1,
    1349,   -1,   -1, 1350, 1351, 1352,   -1,   -1,
      -1, 1353,   -1,   -1,   -1, 1354, 1355, 1356,
      -1, 1357,   -1, 1358, 1359,   -1,   -1, 1360,
    1361, 1362,   -1,   -1,   -1, 1363, 1364,   -1,
      -1, 1365, 1366, 1367,   -1,   -1, 1368, 1369,
    1370,   -1,   -1,   -1, 1371, 1372,   -1,   -1,
    1373, 1374, 1375,   -1,   -1, 1376,   -1, 1377,
      -1,   -1,   -1, 1378, 1379,   -1,   -1, 1380,
    1381, 1382,   -1,   -1, 1383, 1384, 1385,   -1,
      -1, 1386, 1387, 1388,   -1,   -1, 1389, 1390,
    1391,   -1,   -1,   -1,   -1, 1392,   -1,   -1,
    1393,   -1, 1394,   -1,   -1,   -1, 1395, 1396,
      -1,   -1,   -1, 1397, 1398,   -1,   -1,   -1,
      -1, 1399,   -1,   -1,   -1, 1400, 1401,   -1,
      -1, 1402, 1403, 1404,   -1,   -1, 1405, 1406,
    1407,   -1,   -1, 1408, 1409, 1410,   -1,   -1,
      -1,   -1, 1411,   -1,   -1, 1412, 1413,   -1,
      -1,   -1, 1414, 1415, 1416,   -1,   -1, 1417,
    1418, 1419,   -1,   -1,   -1, 1420, 1421,   -1,
      -1, 1422, 1423, 1424,   -1,   -1, 1425, 1426,
    1427,   -1,   -1,   -1, 1428, 1429,   -1,   -1,
      -1, 1430,   -1,   -1,   -1, 1431, 1432, 1433,
      -1,   -1,   -1,   -1, 1434, 1435,   -1, 1436,
    1437, 1438,   -1,   -1,   -1, 1439, 1440,   -1,
      -1,   -1, 1441, 1442,   -1,   -1,   -1,   -1,
    1443,   -1,   -1,   -1, 1444, 1445,   -1,   -1,
      -1, 1446, 1447,   -1,   -1,   -1, 1448, 1449,
      -1,   -1, 1450, 1451, 1452,   -1,   -1, 1453,
    1454, 1455,   -1, 1456,   -1, 1457, 1458,   -1,
      -1,   -1, 1459, 1460,   -1, 1461,   -1, 1462,
    1463,   -1,   -1,   -1, 1464, 1465,   -1,   -1,
      -1, 1466, 1467,   -1,   -1, 1468, 1469, 1470,
      -1, 1471, 1472, 1473, 1474,   -1,   -1, 1475,
    1476,   -1,   -1,   -1, 1477,   -1,   -1,   -1,
      -1,   -1, 1478, 1479,   -1,   -1,   -1,   -1,
    1480,   -1,   -1,   -1, 1481, 1482,   -1,   -1,
      -1, 1483, 1484,   -1,   -1, 1485, 1486,   -1,
      -1,   -1,   -1, 1487,   -1,   -1,   -1,   -1,
    1488, 1489,   -1,   -1, 1490, 1491, 1492,   -1,
      -1, 1493, 1494, 1495,   -1,   -1, 1496, 1497,
    1498,   -1,   -1,   -1,   -1, 1499,   -1,   -1,
    1500, 1501, 1502,   -1,   -1, 1503,   -1, 1504,
      -1,   -1,   -1, 1505,   -1,   -1,   -1,   -1,
    1506, 1507,   -1,   -1,   -1, 1508, 1509,   -1,
      -1, 1510,   -1, 1511,   -1, 1512,   -1, 1513,
    1514,   -1,   -1, 1515,   -1, 1516,   -1,   -1,
      -1, 1517, 1518,   -1,   -1,   -1, 1519,   -1,
      -1,   -1, 1520, 1521,   -1,   -1,   -1, 1522,
    1523, 1524,   -1,   -1,   -1,   -1, 1525,   -1,
      -1,   -1, 1526,   -1,   -1,   -1, 1527, 1528,
    1529,   -1,   -1, 1530, 1531, 1532,   -1,   -1,
      -1,   -1, 1533,   -1,   -1, 1534, 1535,   -1,
      -1,   -1, 1536, 1537, 1538,   -1,   -1, 1539,
    1540, 1541,   -1,   -1, 1542, 1543,   -1,   -1,
      -1,   -1, 1544, 1545,   -1,   -1,   -1, 1546,
    1547,   -1,   -1,   -1, 1548, 1549,   -1,   -1,
      -1, 1550, 1551,   -1,   -1,   -1, 1552, 1553,
      -1,   -1, 1554, 1555, 1556,   -1,   -1,   -1,
    1557,   -1,   -1,   -1, 1558, 1559, 1560,   -1,
      -1,   -1, 1561,   -1,   -1, 1562,   -1, 1563,
      -1,   -1,   -1,   -1, 1564, 1565,   -1,   -1,
      -1, 1566,   -1,   -1,   -1, 1567, 1568, 1569,
      -1,   -1, 1570, 1571, 1572,   -1,   -1,   -1,
    1573, 1574,   -1,   -1,   -1, 1575, 1576,   -1,
      -1,   -1,   -1, 1577,   -1,   -1,   -1, 1578,
    1579,   -1,   -1, 1580, 1581, 1582,   -1,   -1,
      -1,   -1, 1583,   -1, 1584, 1585,   -1,   -1,
      -1,   -1,   -1, 1586, 1587,   -1,   -1, 1588,
    1589, 1590,   -1,   -1, 1591, 1592, 1593,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 1594,
    1595,   -1,   -1,   -1, 1596,   -1,   -1,   -1,
      -1, 1597, 1598,   -1,   -1,   -1, 1599, 1600,
      -1,   -1, 1601, 1602, 1603,   -1,   -1, 1604,
    1605, 1606,   -1,   -1,   -1, 1607,   -1,   -1,
      -1, 1608, 1609, 1610,   -1,   -1,   -1, 1611,
    1612,   -1,   -1, 1613, 1614, 1615,   -1,   -1,
      -1, 1616, 1617,   -1,   -1,   -1,   -1, 1618,
      -1,   -1,   -1,   -1, 1619,   -1,   -1, 1620,
      -1, 1621,   -1,   -1, 1622, 1623, 1624,   -1,
      -1,   -1, 1625,   -1,   -1,   -1, 1626, 1627,
    1628,   -1,   -1,   -1, 1629, 1630,   -1,   -1,
    1631, 1632, 1633,   -1,   -1, 1634, 1635, 1636,
      -1,   -1,   -1, 1637, 1638,   -1,   -1,   -1,
    1639, 1640,   -1,   -1,   -1, 1641, 1642,   -1,
      -1,   -1, 1643, 1644,   -1,   -1, 1645, 1646,
    1647,   -1,   -1,   -1, 1648, 1649,   -1,   -1,
      -1, 1650, 1651,   -1,   -1,   -1, 1652, 1653,
      -1,   -1, 1654, 1655, 1656,   -1,   -1,   -1,
    1657, 1658,   -1,   -1, 1659, 1660, 1661,   -1,
    1662, 1663, 1664, 1665,   -1,   -1, 1666, 1667,
    1668,   -1, 1669,   -1, 1670, 1671,   -1,   -1,
      -1, 1672, 1673,   -1,   -1,   -1, 1674, 1675,
      -1,   -1, 1676, 1677, 1678,   -1,   -1, 1679,
    1680, 1681,   -1,   -1,   -1, 1682, 1683,   -1,
      -1, 1684, 1685, 1686,   -1, 1687,   -1,   -1,
    1688,   -1,   -1,   -1, 1689, 1690,   -1,   -1,
      -1, 1691, 1692,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 1693, 1694, 1695,   -1, 1696,   -1,
    1697, 1698,   -1,   -1,   -1, 1699, 1700,   -1,
      -1,   -1, 1701, 1702,   -1,   -1,   -1, 1703,
    1704,   -1,   -1,   -1, 1705, 1706,   -1,   -1,
      -1, 1707, 1708,   -1,   -1,   -1, 1709, 1710,
      -1,   -1, 1711, 1712, 1713,   -1,   -1,   -1,
    1714, 1715,   -1,   -1,   -1, 1716, 1717,   -1,
      -1,   -1,   -1, 1718,   -1,   -1, 1719, 1720,
      -1,   -1, 1721, 1722,   -1, 1723,   -1, 1724,
      -1, 1725, 1726,   -1,   -1,   -1, 1727, 1728,
    1729,   -1,   -1, 1730,   -1,   -1,   -1, 1731,
    1732, 1733,   -1,   -1,   -1, 1734, 1735,   -1,
    1736,   -1, 1737, 1738,   -1,   -1,   -1, 1739,
    1740,   -1,   -1,   -1, 1741, 1742,   -1,   -1,
    1743, 1744, 1745,   -1,   -1,   -1, 1746, 1747,
    1748,   -1,   -1,   -1, 1749,   -1,   -1,   -1,
    1750, 1751,   -1,   -1,   -1, 1752, 1753,   -1,
      -1,   -1, 1754, 1755,   -1,   -1, 1756,   -1,
    1757,   -1,   -1,   -1, 1758, 1759,   -1, 1760,
    1761, 1762, 1763,   -1,   -1,   -1, 1764, 1765,
      -1, 1766,   -1,   -1, 1767,   -1,   -1,   -1,
    1768, 1769,   -1,   -1,   -1, 1770, 1771,   -1,
      -1,   -1, 1772, 1773,   -1,   -1, 1774, 1775,
      -1,   -1, 1776, 1777, 1778, 1779,   -1,   -1,
      -1, 1780, 1781,   -1,   -1,   -1, 1782, 1783,
      -1,   -1,   -1, 1784, 1785,   -1,   -1,   -1,
    1786, 1787,   -1,   -1,   -1, 1788, 1789,   -1,
    1790,   -1, 1791,   -1,   -1,   -1,   -1, 1792,
    1793,   -1,   -1,   -1, 1794, 1795,   -1,   -1,
      -1, 1796, 1797,   -1,   -1,   -1, 1798, 1799,
      -1,   -1,   -1, 1800, 1801,   -1,   -1,   -1,
      -1, 1802,   -1,   -1,   -1, 1803, 1804,   -1,
      -1,   -1,   -1, 1805,   -1,   -1,   -1, 1806,
    1807,   -1,   -1, 1808, 1809, 1810,   -1,   -1,
      -1, 1811, 1812,   -1,   -1,   -1, 1813,   -1,
      -1,   -1,   -1, 1814, 1815,   -1,   -1,   -1,
    1816, 1817,   -1,   -1, 1818, 1819,   -1,   -1,
      -1,   -1, 1820,   -1,   -1,   -1,   -1, 1821,
      -1,   -1,   -1,   -1, 1822, 1823,   -1,   -1,
      -1, 1824, 1825,   -1,   -1,   -1,   -1, 1826,
      -1,   -1,   -1, 1827,   -1,   -1,   -1,   -1,
    1828, 1829,   -1,   -1,   -1, 1830, 1831,   -1,
      -1,   -1, 1832,   -1,   -1,   -1,   -1,   -1,
    1833,   -1,   -1,   -1, 1834,   -1,   -1,   -1,
      -1,   -1, 1835,   -1, 1836,   -1, 1837,   -1,
      -1,   -1, 1838, 1839, 1840,   -1,   -1,   -1,
      -1, 1841,   -1,   -1,   -1, 1842, 1843,   -1,
      -1, 1844, 1845, 1846,   -1,   -1,   -1, 1847,
    1848,   -1,   -1,   -1, 1849,   -1,   -1,   -1,
      -1, 1850, 1851,   -1,   -1,   -1,   -1, 1852,
      -1,   -1,   -1, 1853,   -1,   -1,   -1, 1854,
      -1, 1855,   -1,   -1,   -1, 1856, 1857,   -1,
      -1, 1858, 1859, 1860,   -1,   -1, 1861,   -1,
    1862,   -1,   -1, 1863, 1864, 1865,   -1,   -1,
      -1, 1866, 1867,   -1,   -1,   -1, 1868, 1869,
    1870,   -1,   -1,   -1, 1871,   -1,   -1, 1872,
    1873, 1874,   -1,   -1,   -1, 1875,   -1,   -1,
      -1,   -1, 1876, 1877,   -1,   -1, 1878,   -1,
    1879,   -1,   -1, 1880,   -1, 1881,   -1,   -1,
      -1, 1882, 1883,   -1,   -1,   -1,   -1, 1884,
      -1,   -1,   -1, 1885, 1886,   -1,   -1, 1887,
    1888, 1889,   -1,   -1,   -1, 1890, 1891,   -1,
      -1,   -1, 1892, 1893,   -1,   -1,   -1, 1894,
    1895,   -1,   -1,   -1, 1896,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 1897, 1898,   -1, 1899,   -1,
      -1, 1900,   -1,   -1,   -1, 1901,   -1,   -1,
      -1,   -1, 1902, 1903,   -1,   -1, 1904, 1905,
    1906,   -1,   -1,   -1, 1907, 1908,   -1,   -1,
      -1,   -1, 1909,   -1,   -1, 1910,   -1, 1911,
      -1,   -1, 1912,   -1, 1913,   -1,   -1, 1914,
    1915,   -1,   -1,   -1,   -1, 1916, 1917,   -1,
      -1, 1918,   -1, 1919,   -1,   -1,   -1, 1920,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 1921,   -1,   -1,   -1,   -1, 1922,
      -1,   -1,   -1,   -1, 1923,   -1,   -1, 1924,
    1925,   -1,   -1,   -1,   -1, 1926, 1927, 1928,
      -1,   -1, 1929, 1930,   -1,   -1,   -1, 1931,
    1932,   -1,   -1,   -1, 1933, 1934,   -1,   -1,
      -1,   -1, 1935,   -1,   -1,   -1, 1936, 1937,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    1938, 1939,   -1,   -1,   -1, 1940, 1941,   -1,
      -1, 1942, 1943,   -1,   -1,   -1,   -1, 1944,
    1945,   -1,   -1,   -1, 1946, 1947,   -1,   -1,
      -1,   -1, 1948,   -1,   -1,   -1,   -1, 1949,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 1950,
      -1,   -1,   -1,   -1,   -1, 1951,   -1,   -1,
    1952,   -1, 1953,   -1,   -1,   -1,   -1, 1954,
    1955,   -1,   -1, 1956, 1957, 1958,   -1,   -1,
    1959, 1960,   -1,   -1,   -1,   -1, 1961, 1962,
      -1,   -1,   -1, 1963, 1964,   -1,   -1,   -1,
      -1, 1965,   -1,   -1,   -1, 1966,   -1,   -1,
      -1,   -1, 1967,   -1,   -1,   -1, 1968,   -1,
    1969,   -1,   -1,   -1, 1970, 1971,   -1,   -1,
    1972, 1973, 1974, 1975,   -1,   -1, 1976, 1977,
      -1,   -1,   -1,   -1, 1978,   -1,   -1, 1979,
    1980, 1981,   -1,   -1, 1982, 1983, 1984,   -1,
      -1,   -1, 1985, 1986,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 1987, 1988,   -1,   -1,
      -1, 1989, 1990,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 1991,   -1,   -1,   -1,   -1,
    1992, 1993,   -1,   -1,   -1, 1994, 1995,   -1,
      -1, 1996, 1997,   -1,   -1,   -1,   -1,   -1,
    1998,   -1,   -1, 1999,   -1, 2000,   -1,   -1,
      -1,   -1, 2001,   -1,   -1,   -1, 2002,   -1,
      -1,   -1,   -1, 2003, 2004,   -1,   -1,   -1,
      -1, 2005,   -1,   -1,   -1, 2006, 2007,   -1,
      -1,   -1,   -1, 2008,   -1,   -1,   -1, 2009,
    2010,   -1, 2011,   -1, 2012, 2013,   -1,   -1,
      -1, 2014, 2015,   -1, 2016,   -1, 2017,   -1,
      -1,   -1,   -1,   -1, 2018,   -1,   -1,   -1,
      -1, 2019,   -1,   -1,   -1, 2020, 2021,   -1,
      -1, 2022, 2023, 2024,   -1,   -1,   -1, 2025,
    2026,   -1,   -1,   -1, 2027, 2028,   -1,   -1,
      -1, 2029,   -1,   -1,   -1,   -1, 2030, 2031,
      -1,   -1,   -1, 2032, 2033,   -1,   -1,   -1,
    2034, 2035,   -1,   -1,   -1, 2036, 2037,   -1,
      -1, 2038,   -1, 2039,   -1,   -1, 2040,   -1,
      -1,   -1,   -1,   -1, 2041, 2042,   -1,   -1,
      -1, 2043,   -1,   -1,   -1,   -1,   -1, 2044,
      -1,   -1,   -1, 2045, 2046,   -1,   -1, 2047,
      -1,   -1,   -1,   -1,   -1, 2048,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2049,
    2050,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2051, 2052,   -1,   -1,   -1,   -1, 2053, 2054,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2055,   -1,   -1, 2056,   -1,   -1,   -1,   -1,
      -1,   -1, 2057, 2058,   -1,   -1,   -1,   -1,
    2059,   -1,   -1, 2060,   -1, 2061,   -1,   -1,
      -1, 2062, 2063,   -1,   -1,   -1,   -1, 2064,
      -1,   -1,   -1, 2065,   -1,   -1,   -1,   -1,
    2066,   -1,   -1,   -1,   -1, 2067, 2068,   -1,
      -1,   -1, 2069,   -1,   -1,   -1, 2070, 2071,
    2072,   -1,   -1,   -1, 2073, 2074,   -1,   -1,
      -1,   -1, 2075,   -1,   -1,   -1, 2076, 2077,
      -1,   -1,   -1, 2078,   -1,   -1, 2079,   -1,
      -1, 2080,   -1,   -1,   -1,   -1, 2081,   -1,
      -1, 2082,   -1,   -1,   -1,   -1,   -1, 2083,
      -1,   -1,   -1,   -1,   -1, 2084,   -1,   -1,
      -1,   -1, 2085,   -1,   -1, 2086, 2087, 2088,
      -1,   -1,   -1, 2089,   -1,   -1,   -1,   -1,
    2090, 2091,   -1,   -1, 2092, 2093, 2094,   -1,
      -1, 2095, 2096,   -1,   -1,   -1,   -1, 2097,
      -1,   -1,   -1,   -1,   -1, 2098,   -1,   -1,
      -1, 2099,   -1,   -1,   -1,   -1, 2100,   -1,
      -1,   -1,   -1,   -1, 2101,   -1,   -1,   -1,
      -1, 2102,   -1,   -1,   -1, 2103, 2104,   -1,
      -1,   -1, 2105,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2106, 2107,   -1,   -1,   -1,
      -1, 2108,   -1,   -1,   -1,   -1,   -1, 2109,
      -1,   -1,   -1, 2110,   -1,   -1,   -1,   -1,
    2111, 2112,   -1,   -1,   -1,   -1, 2113,   -1,
      -1,   -1, 2114,   -1,   -1,   -1,   -1, 2115,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2116, 2117, 2118,   -1,   -1,   -1, 2119, 2120,
      -1,   -1,   -1, 2121, 2122,   -1,   -1,   -1,
    2123, 2124,   -1,   -1, 2125, 2126,   -1,   -1,
      -1, 2127, 2128,   -1,   -1,   -1,   -1,   -1,
    2129,   -1,   -1,   -1, 2130, 2131,   -1,   -1,
      -1, 2132,   -1,   -1,   -1,   -1, 2133,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2134,   -1,   -1,   -1, 2135,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2136, 2137,   -1,   -1,   -1,   -1,   -1, 2138,
      -1,   -1,   -1, 2139, 2140,   -1,   -1,   -1,
      -1, 2141,   -1,   -1,   -1,   -1, 2142,   -1,
      -1,   -1,   -1, 2143,   -1,   -1,   -1, 2144,
    2145,   -1,   -1,   -1,   -1, 2146,   -1,   -1,
      -1, 2147, 2148,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2149,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2150, 2151,   -1,
      -1,   -1, 2152, 2153,   -1,   -1,   -1, 2154,
      -1,   -1,   -1,   -1, 2155, 2156,   -1,   -1,
      -1,   -1, 2157,   -1,   -1,   -1, 2158,   -1,
      -1,   -1,   -1,   -1, 2159,   -1,   -1,   -1,
    2160, 2161,   -1,   -1,   -1, 2162, 2163, 2164,
      -1,   -1, 2165,   -1,   -1,   -1,   -1,   -1,
    2166,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2167, 2168,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2169,   -1,   -1,   -1,
    2170, 2171,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2172,   -1, 2173,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2174, 2175,   -1,   -1,
      -1, 2176, 2177,   -1,   -1, 2178, 2179, 2180,
      -1,   -1,   -1, 2181, 2182,   -1,   -1,   -1,
    2183,   -1,   -1,   -1,   -1, 2184, 2185,   -1,
      -1,   -1, 2186, 2187,   -1,   -1,   -1, 2188,
      -1,   -1,   -1,   -1,   -1, 2189,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2190, 2191,
      -1,   -1,   -1, 2192, 2193,   -1,   -1,   -1,
    2194, 2195,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2196,   -1,   -1,   -1,   -1,   -1,
    2197,   -1,   -1,   -1, 2198, 2199,   -1,   -1,
      -1, 2200,   -1,   -1,   -1,   -1,   -1, 2201,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2202,   -1,   -1,   -1, 2203, 2204,   -1,
      -1,   -1, 2205, 2206,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2207,   -1,   -1,   -1,   -1, 2208, 2209,
      -1,   -1,   -1,   -1, 2210,   -1,   -1,   -1,
      -1, 2211,   -1,   -1,   -1, 2212, 2213,   -1,
      -1,   -1,   -1, 2214,   -1, 2215,   -1,   -1,
      -1,   -1,   -1,   -1, 2216, 2217,   -1,   -1,
      -1, 2218,   -1,   -1,   -1,   -1, 2219,   -1,
      -1,   -1,   -1,   -1, 2220,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2221,   -1,   -1,
      -1,   -1, 2222, 2223,   -1,   -1,   -1, 2224,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2225,   -1,   -1,   -1,   -1, 2226,   -1,
      -1,   -1,   -1,   -1, 2227,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2228, 2229,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2230,   -1,   -1,
    2231,   -1,   -1,   -1,   -1,   -1, 2232,   -1,
      -1,   -1,   -1, 2233,   -1, 2234,   -1,   -1,
    2235,   -1,   -1,   -1,   -1, 2236,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2237,
    2238,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2239, 2240,   -1,   -1,   -1,   -1, 2241, 2242,
      -1,   -1, 2243,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2244, 2245,   -1,
      -1,   -1,   -1, 2246,   -1,   -1, 2247, 2248,
    2249,   -1,   -1,   -1, 2250, 2251,   -1,   -1,
      -1,   -1, 2252,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2253,   -1,   -1,   -1,   -1,   -1,
    2254,   -1,   -1,   -1,   -1,   -1, 2255,   -1,
      -1, 2256,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2257, 2258,   -1,   -1,   -1,   -1, 2259,
      -1,   -1,   -1, 2260,   -1,   -1,   -1,   -1,
      -1, 2261,   -1,   -1,   -1, 2262, 2263,   -1,
      -1, 2264,   -1, 2265,   -1,   -1,   -1, 2266,
    2267,   -1,   -1, 2268,   -1,   -1,   -1,   -1,
      -1,   -1, 2269,   -1,   -1,   -1, 2270, 2271,
      -1,   -1,   -1, 2272, 2273,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2274,   -1,   -1,   -1, 2275,
    2276,   -1,   -1,   -1,   -1, 2277,   -1,   -1,
      -1, 2278,   -1,   -1,   -1, 2279,   -1, 2280,
      -1,   -1,   -1, 2281, 2282,   -1,   -1,   -1,
      -1, 2283,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2284, 2285,   -1,   -1,   -1, 2286,
    2287,   -1,   -1,   -1, 2288, 2289,   -1,   -1,
    2290, 2291, 2292,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2293, 2294,   -1,   -1,   -1,
    2295,   -1,   -1,   -1,   -1,   -1, 2296,   -1,
      -1,   -1, 2297, 2298,   -1,   -1,   -1,   -1,
    2299,   -1,   -1,   -1, 2300, 2301, 2302,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2303,   -1,   -1, 2304,   -1,
    2305,   -1,   -1,   -1,   -1,   -1, 2306,   -1,
      -1, 2307,   -1,   -1,   -1,   -1,   -1, 2308,
    2309,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2310, 2311,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2312, 2313,   -1,   -1,   -1,
    2314,   -1,   -1,   -1,   -1, 2315,   -1,   -1,
      -1,   -1, 2316, 2317,   -1, 2318, 2319,   -1,
    2320,   -1,   -1,   -1, 2321, 2322,   -1,   -1,
    2323,   -1, 2324,   -1,   -1, 2325,   -1,   -1,
      -1,   -1,   -1, 2326,   -1,   -1,   -1,   -1,
    2327, 2328,   -1,   -1,   -1, 2329, 2330,   -1,
      -1,   -1, 2331, 2332,   -1,   -1,   -1, 2333,
    2334,   -1,   -1,   -1,   -1, 2335,   -1,   -1,
      -1,   -1, 2336,   -1,   -1, 2337,   -1, 2338,
      -1,   -1,   -1,   -1, 2339,   -1,   -1,   -1,
    2340, 2341,   -1,   -1,   -1, 2342, 2343,   -1,
      -1,   -1, 2344,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2345, 2346,   -1,   -1,
      -1,   -1,   -1,   -1, 2347,   -1,   -1, 2348,
      -1,   -1,   -1, 2349, 2350,   -1,   -1, 2351,
      -1,   -1,   -1,   -1,   -1, 2352,   -1,   -1,
      -1,   -1,   -1, 2353,   -1, 2354,   -1, 2355,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2356,   -1,   -1,   -1, 2357,   -1,
      -1,   -1,   -1, 2358, 2359, 2360,   -1,   -1,
      -1, 2361,   -1,   -1, 2362,   -1, 2363,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2364,
      -1,   -1,   -1,   -1,   -1, 2365,   -1,   -1,
      -1,   -1, 2366,   -1,   -1,   -1,   -1, 2367,
      -1,   -1,   -1, 2368,   -1,   -1,   -1,   -1,
    2369, 2370,   -1,   -1,   -1,   -1, 2371,   -1,
      -1,   -1,   -1, 2372,   -1,   -1,   -1,   -1,
    2373,   -1,   -1,   -1,   -1, 2374,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2375,   -1,
      -1,   -1,   -1,   -1, 2376,   -1,   -1,   -1,
      -1,   -1, 2377,   -1,   -1,   -1, 2378,   -1,
      -1,   -1,   -1, 2379,   -1,   -1,   -1, 2380,
      -1,   -1,   -1,   -1, 2381, 2382,   -1,   -1,
      -1,   -1, 2383,   -1,   -1,   -1, 2384, 2385,
      -1,   -1,   -1, 2386, 2387,   -1,   -1,   -1,
      -1, 2388,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2389,   -1,   -1, 2390,   -1, 2391,   -1,
    2392,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2393,   -1,   -1,   -1,   -1, 2394,
    2395,   -1,   -1,   -1, 2396,   -1,   -1,   -1,
    2397,   -1,   -1,   -1, 2398,   -1, 2399,   -1,
      -1,   -1, 2400,   -1,   -1,   -1, 2401,   -1,
    2402,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2403,   -1,   -1,   -1, 2404, 2405,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2406,
    2407, 2408,   -1,   -1,   -1, 2409, 2410,   -1,
      -1,   -1, 2411, 2412,   -1,   -1, 2413, 2414,
    2415,   -1,   -1, 2416, 2417,   -1,   -1,   -1,
      -1,   -1, 2418,   -1,   -1,   -1, 2419, 2420,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2421,   -1,   -1, 2422,   -1, 2423,   -1,
      -1,   -1, 2424, 2425,   -1,   -1,   -1,   -1,
    2426,   -1,   -1,   -1,   -1, 2427,   -1,   -1,
      -1,   -1, 2428,   -1,   -1,   -1, 2429,   -1,
      -1,   -1,   -1, 2430,   -1,   -1,   -1,   -1,
    2431,   -1,   -1,   -1,   -1, 2432, 2433,   -1,
      -1,   -1,   -1, 2434,   -1,   -1,   -1, 2435,
    2436,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2437,   -1,   -1,   -1,   -1,   -1,   -1, 2438,
      -1,   -1,   -1, 2439, 2440,   -1,   -1,   -1,
    2441,   -1,   -1,   -1,   -1, 2442,   -1,   -1,
      -1,   -1, 2443,   -1,   -1,   -1,   -1,   -1,
    2444,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2445, 2446,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2447, 2448, 2449,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2450,   -1,
      -1,   -1,   -1, 2451,   -1,   -1,   -1,   -1,
    2452,   -1,   -1,   -1,   -1, 2453,   -1,   -1,
      -1,   -1, 2454,   -1,   -1, 2455, 2456,   -1,
      -1,   -1,   -1, 2457,   -1,   -1,   -1, 2458,
      -1,   -1,   -1,   -1,   -1,   -1, 2459,   -1,
      -1,   -1, 2460, 2461,   -1,   -1,   -1,   -1,
    2462,   -1,   -1, 2463, 2464, 2465,   -1,   -1,
      -1, 2466, 2467,   -1,   -1,   -1,   -1, 2468,
      -1,   -1,   -1, 2469, 2470,   -1,   -1,   -1,
    2471, 2472,   -1,   -1,   -1,   -1, 2473,   -1,
      -1,   -1,   -1, 2474,   -1,   -1,   -1,   -1,
    2475,   -1,   -1, 2476, 2477,   -1,   -1,   -1,
      -1,   -1, 2478,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2479, 2480,   -1,   -1,   -1,
    2481, 2482,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2483,   -1,   -1,   -1,   -1, 2484,
    2485,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2486, 2487, 2488,   -1,   -1,   -1, 2489,   -1,
      -1, 2490,   -1, 2491, 2492,   -1,   -1,   -1,
    2493,   -1,   -1,   -1,   -1, 2494,   -1,   -1,
      -1, 2495,   -1, 2496,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2497,   -1,   -1,   -1,
      -1, 2498,   -1,   -1,   -1,   -1, 2499,   -1,
      -1,   -1,   -1, 2500,   -1,   -1,   -1,   -1,
    2501,   -1,   -1,   -1,   -1, 2502,   -1,   -1,
      -1, 2503, 2504, 2505,   -1,   -1, 2506, 2507,
    2508,   -1,   -1, 2509, 2510,   -1,   -1, 2511,
      -1, 2512,   -1,   -1,   -1,   -1, 2513, 2514,
      -1,   -1,   -1,   -1, 2515,   -1,   -1,   -1,
    2516, 2517,   -1, 2518, 2519,   -1,   -1,   -1,
      -1,   -1, 2520, 2521,   -1,   -1, 2522,   -1,
    2523,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2524,   -1,   -1,   -1,   -1, 2525,
      -1,   -1,   -1,   -1, 2526,   -1,   -1,   -1,
    2527,   -1,   -1,   -1,   -1,   -1, 2528,   -1,
      -1,   -1,   -1, 2529, 2530,   -1,   -1,   -1,
    2531,   -1,   -1,   -1,   -1, 2532,   -1,   -1,
      -1, 2533,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2534, 2535,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2536,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2537,   -1,   -1,   -1,
      -1, 2538, 2539,   -1,   -1,   -1, 2540,   -1,
      -1,   -1,   -1, 2541, 2542,   -1,   -1,   -1,
    2543,   -1, 2544,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2545,   -1,   -1,   -1,   -1, 2546,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2547, 2548,   -1,   -1,   -1, 2549, 2550,
      -1,   -1, 2551,   -1,   -1,   -1,   -1,   -1,
      -1, 2552,   -1,   -1,   -1, 2553, 2554,   -1,
      -1,   -1,   -1, 2555,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2556,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2557,   -1,
      -1,   -1,   -1, 2558, 2559,   -1,   -1,   -1,
      -1, 2560,   -1,   -1,   -1,   -1, 2561,   -1,
      -1,   -1, 2562,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2563, 2564,   -1,   -1,
      -1, 2565, 2566,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2567,   -1,
      -1,   -1,   -1, 2568,   -1,   -1,   -1, 2569,
      -1,   -1,   -1,   -1, 2570, 2571,   -1,   -1,
      -1, 2572, 2573,   -1,   -1,   -1, 2574,   -1,
      -1,   -1,   -1,   -1, 2575,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2576,   -1,   -1,   -1,
      -1, 2577, 2578,   -1,   -1, 2579,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2580,   -1,   -1,   -1,   -1, 2581, 2582,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2583,   -1,   -1,   -1, 2584, 2585,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2586,
      -1,   -1,   -1, 2587,   -1,   -1, 2588,   -1,
    2589,   -1,   -1,   -1, 2590, 2591,   -1,   -1,
      -1,   -1, 2592,   -1,   -1,   -1,   -1,   -1,
    2593,   -1,   -1,   -1, 2594,   -1,   -1,   -1,
      -1, 2595,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2596,   -1,   -1,   -1,   -1,
      -1, 2597,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2598, 2599,   -1,   -1, 2600,
    2601,   -1,   -1, 2602, 2603,   -1,   -1,   -1,
      -1, 2604, 2605,   -1,   -1,   -1,   -1, 2606,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2607,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2608,   -1,   -1,
      -1, 2609,   -1,   -1, 2610,   -1, 2611,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2612,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2613,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2614,   -1,   -1,   -1,   -1,   -1, 2615,
      -1,   -1,   -1,   -1, 2616,   -1, 2617,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2618,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2619, 2620, 2621,   -1,   -1,   -1,   -1, 2622,
      -1,   -1,   -1, 2623,   -1,   -1,   -1,   -1,
    2624,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2625,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2626,   -1,   -1,
      -1,   -1, 2627,   -1,   -1,   -1, 2628,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2629,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2630,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2631, 2632,
      -1,   -1,   -1, 2633, 2634,   -1,   -1,   -1,
      -1, 2635,   -1,   -1,   -1,   -1, 2636,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2637,
    2638,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2639,   -1,   -1,   -1,
    2640,   -1,   -1,   -1,   -1, 2641,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2642,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2643, 2644,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2645, 2646,   -1,
      -1,   -1, 2647,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2648,   -1,
      -1,   -1,   -1,   -1, 2649,   -1,   -1,   -1,
    2650,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2651,   -1, 2652,   -1,   -1,   -1,   -1,   -1,
    2653,   -1,   -1, 2654,   -1,   -1,   -1,   -1,
      -1, 2655, 2656,   -1,   -1,   -1,   -1, 2657,
      -1,   -1,   -1, 2658, 2659,   -1,   -1,   -1,
    2660, 2661, 2662,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2663,
      -1, 2664,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2665,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2666,   -1,   -1,   -1,   -1, 2667,   -1,
      -1,   -1, 2668, 2669,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2670,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2671,   -1,
      -1,   -1,   -1, 2672,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2673, 2674,   -1,   -1,
      -1, 2675, 2676,   -1,   -1,   -1,   -1, 2677,
      -1,   -1,   -1, 2678,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2679,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2680,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2681,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2682,   -1,   -1,
      -1,   -1, 2683,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2684,   -1,   -1,   -1,   -1,   -1, 2685,
      -1,   -1,   -1, 2686,   -1,   -1,   -1, 2687,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2688,   -1,   -1,   -1,   -1, 2689,
      -1,   -1,   -1,   -1,   -1, 2690,   -1,   -1,
      -1,   -1, 2691,   -1,   -1,   -1, 2692,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2693,
      -1, 2694,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2695,   -1, 2696,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2697,   -1,   -1,
      -1, 2698, 2699,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2700,   -1,   -1,   -1,   -1, 2701,   -1,
      -1,   -1, 2702,   -1,   -1,   -1,   -1, 2703,
      -1,   -1,   -1,   -1,   -1, 2704,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2705, 2706,
      -1,   -1, 2707, 2708,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2709,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2710,   -1,   -1,   -1,   -1, 2711,
      -1,   -1,   -1,   -1, 2712,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2713,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2714,
    2715,   -1,   -1,   -1,   -1, 2716,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2717,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2718,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2719,   -1, 2720,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2721,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2722,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2723,   -1,   -1,   -1,
      -1, 2724,   -1,   -1,   -1,   -1, 2725,   -1,
      -1,   -1,   -1,   -1, 2726,   -1,   -1,   -1,
      -1, 2727,   -1,   -1,   -1,   -1, 2728,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2729,
    2730,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2731,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2732,   -1,   -1,   -1,   -1,
    2733,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2734,   -1,   -1,   -1,   -1,
    2735,   -1,   -1,   -1,   -1, 2736,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2737,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2738,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2739, 2740,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2741,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2742,   -1,
      -1,   -1,   -1, 2743,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2744,   -1,   -1,   -1,   -1, 2745,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2746,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2747,   -1,   -1,
      -1,   -1, 2748,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2749, 2750,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2751,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2752,   -1,   -1,   -1,
      -1,   -1, 2753,   -1,   -1,   -1, 2754,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2755,   -1,   -1,   -1, 2756,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2757,
    2758,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2759, 2760,   -1,   -1,   -1,   -1, 2761,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2762, 2763,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2764,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2765,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2766,   -1,   -1,   -1,
    2767,   -1, 2768,   -1,   -1,   -1, 2769,   -1,
      -1,   -1,   -1,   -1, 2770,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2771,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2772,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2773,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2774,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2775, 2776,   -1,   -1,
      -1,   -1, 2777,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2778, 2779,   -1,   -1,
      -1,   -1,   -1, 2780,   -1,   -1,   -1,   -1,
    2781,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2782,
      -1,   -1,   -1, 2783,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2784, 2785,   -1,
      -1, 2786,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2787,   -1, 2788,   -1,   -1,
      -1, 2789, 2790,   -1,   -1,   -1, 2791, 2792,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2793,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2794, 2795,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2796,   -1,   -1,
      -1,   -1, 2797,   -1,   -1,   -1,   -1,   -1,
    2798,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2799,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2800,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2801,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2802,   -1,   -1,
      -1, 2803,   -1,   -1,   -1,   -1,   -1, 2804,
      -1, 2805,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2806,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2807,   -1,   -1,   -1,   -1,
    2808,   -1,   -1,   -1, 2809,   -1,   -1,   -1,
      -1, 2810,   -1,   -1,   -1,   -1, 2811,   -1,
      -1,   -1,   -1,   -1, 2812,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2813,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2814,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2815,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2816,   -1,   -1,   -1,   -1,
    2817,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2818,   -1,   -1,   -1, 2819,
      -1,   -1,   -1,   -1, 2820,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2821,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2822,   -1, 2823,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2824,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2825,   -1,   -1,   -1, 2826,   -1,
      -1,   -1,   -1,   -1, 2827,   -1,   -1,   -1,
    2828,   -1,   -1, 2829,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2830,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2831,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2832, 2833,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2834, 2835,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2836,   -1,   -1,   -1,   -1,   -1, 2837,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2838,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2839,   -1,   -1,   -1, 2840,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2841,   -1,   -1,   -1,   -1,
      -1, 2842,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2843,   -1,   -1,   -1,   -1, 2844,   -1,
      -1,   -1, 2845,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2846,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2847,   -1,   -1,
      -1, 2848,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2849,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2850,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2851, 2852,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2853,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2854,   -1,   -1, 2855,   -1, 2856,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2857,   -1,   -1,   -1,   -1, 2858,   -1,   -1,
      -1, 2859, 2860,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2861,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2862,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2863, 2864,   -1,   -1,   -1,   -1, 2865,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2866,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2867,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2868,   -1,   -1,
      -1,   -1,   -1, 2869,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2870,   -1,   -1,
      -1, 2871,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2872,   -1,   -1,   -1, 2873,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2874,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2875,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2876,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2877,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2878,   -1,   -1,   -1,   -1, 2879,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2880,   -1,   -1, 2881,   -1,
      -1,   -1,   -1, 2882,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2883, 2884,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2885,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2886,   -1, 2887,   -1,   -1,   -1,
      -1, 2888,   -1,   -1,   -1, 2889,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2890,   -1,   -1,   -1, 2891,   -1,   -1,   -1,
      -1,   -1, 2892,   -1,   -1,   -1,   -1, 2893,
      -1,   -1,   -1, 2894,   -1,   -1,   -1,   -1,
      -1, 2895,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2896,   -1,   -1,   -1, 2897,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2898,   -1,   -1,   -1,   -1, 2899,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2900,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2901,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2902, 2903,   -1,
    2904,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2905,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2906,   -1,   -1,   -1,   -1, 2907,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2908,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2909,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2910,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2911,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2912,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2913,   -1,   -1,   -1,   -1,
      -1, 2914,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2915,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2916,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2917,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2918,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2919,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2920,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2921, 2922,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2923,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2924,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2925,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2926,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2927,   -1,   -1,   -1,   -1, 2928,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2929,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2930,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2931,   -1,   -1,   -1,   -1,   -1, 2932,
      -1, 2933,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2934,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2935,   -1, 2936,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2937,   -1,
      -1,   -1, 2938,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2939,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2940,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2941,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2942,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2943,   -1,   -1,   -1,   -1, 2944,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2945,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2946,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2947,   -1,
      -1,   -1,   -1, 2948,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2949,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2950,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2951,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2952, 2953,   -1,   -1,   -1, 2954,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2955,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2956,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2957,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2958,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2959,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2960,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2961,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2962,   -1,   -1,   -1,   -1, 2963,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2964,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2965,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2966,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2967,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2968,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2969,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2970,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2971,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2972,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2973,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2974,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2975,   -1, 2976,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2977,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2978,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2979,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2980,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2981,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2982,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2983,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2984,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2985,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2986
  };

#ifdef __GNUC__
__inline
#endif
const struct char_map_s *
trad2simp_x86_lookup (str, len)
     register const char *str;
     register unsigned int len;
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = trad2simp_x86_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              if (len == lengthtable[index])
                {
                  register const char *s = trad2simp_x86_wordlist[index].src;

                  if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
                    return &trad2simp_x86_wordlist[index];
                }
            }
        }
    }
  return 0;
}

/* C code produced by gperf version 3.0.1 */
/* Command-line: gperf -F trad2simp_init -H trad2simp_hash -N trad2simp_lookup -C -c -G -D -W trad2simp_wordlist trad2simp.in  */
/* Computed positions: -k'1-3,$' */

#line 4 "trad2simp.in"

/*
   This is a part of SafariPowerToy source code
   (C)2006 written by jclin (jiancheng@gmail.com)
*/
#line 11 "trad2simp.in"
struct char_map_s {
  char * src;
  char * dst;
};

#define TOTAL_KEYWORDS 2987
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 8
#define MIN_HASH_VALUE 2
#define MAX_HASH_VALUE 12208
/* maximum key range = 12207, duplicates = 0 */

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
         43,   163,  3469,   894,  3079,  3280,   314,  3735,  3265,  3470,
       1264,   124,  3604,  3690,  3840,  1084,  1504,    28,  3024,  2489,
       1609,  1714,  2965,  1909,  2894,  2409,  3639,  3905,    73,  1134,
       2994,  3035,  2829,   108,   224,  1185,   715,    49,  2779,   585,
       2424,    18,  3460,  2464,  3984,  2484,   939,    13,  2159,  1544,
        764,    89,     3,  3614,   169,  1549,  1664,  2125,   719,  3039,
        374,  3584,  1965,  3894,  2380,  1900,    68,   129,  3884,     8,
         59,  1085,  2655,    84,  3279,  2995,  1469,  3765,  1860,    19,
       1360,  3200,   700,  3580,  3390,   635,   485,  3120,   205,  1830,
          4,  3150,  2365,  1465,   130,   445,  2540,    70,   330,  2060,
        150,  2340,  1700,   459,  2620,  2955,   725,   245,  1920,  4060,
       2535,   345,    75,    74,  1520,   290,    29,   320,    50,   785,
       2410,  3550,  2325,   805,  1760,     5,    45,  3915,   420,  1455,
       2855,    14,  1805,   890,  2195,   865,  3730,   940,     0,   795,
       1330,  3685,   755,  2765,  1705,  1040,    10,    15,   265,  1050,
        750,  3415,    25,  2250,   570,  1620,   985,  1660,  1615,  1165,
         78,  3214,  1954,   354,  1079,  3429,   509,   540,  2434,  3655,
       3885,  1484,  2449,  3414,  2565,  3719,  1385,  3855,   734,  3714,
         34,  3935,  3999,   115,  2720,     0,  4065,  2919,  3065,  3794,
        914,  3995,  2834,  2695,    98,  1584,  2344,  3055,  3364,  3665,
          3,  3164,  3629,   499,  3814,  4054,  2165,  2905,   535,   679,
       1745,  3639,  3389,  4085,  4020,  2505,    58,  2224,   244,   294,
       2234,  4010,   564,  2149,    53,   204,  1289,  1854,  2169,  3964,
       2869,   649,   619,  2234,  3514,  3525,   989,  1950,  4064,  2699,
       2419,  3449,   814,  1910,  3465,   920,   214,  3970,  2819,  3249,
       1800,   114,  3324,  2364,   105,  3264, 12209
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
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
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
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     4,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  4,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
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
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  8,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  6,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  4,
     2,  2,  2,  4,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  6,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     4,  4,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  4,  2,  2,  2,  4,  2,  2,  2,
     2,  2,  4,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  4,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  4,
     2,  4,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  4,  2,  2,  4,  2,  2,  6,  2,  4,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  4,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  4,  4,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     4,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  4,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  4,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,  2,  8,
     2,  2,  2,  2,  2,  4,  2,  2,  2,  2,  2,  6,  2,  4,
     2,  4,  2,  2,  2,  4,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  4,  2,  2,  2,  2,  2,  2,
     2,  2,  8,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  6,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  4,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  4,  2,  2,  2,  2,  4,  2,  2,  2,  2,  2,  2,  2,
     4,  2,  2,  2,  2,  2,  4,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  4,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  4,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  4,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  4,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  4,
     2,  4,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  4,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,  2,
     4,  2,  2,  2,  2,  2,  4,  2,  2,  2,  2,  2,  2,  6,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  8,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  4,  2,  4,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     6,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  4,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  4,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  4,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  8,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,  2,
     2,  2,  6,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,  2,
     2,  4,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  4,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  4,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     4,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  4,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  4,  2,  2,  2,  2,  6,  2,  4,  2,  2,  2,
     2,  2,  2,  4,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  8,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  4,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  4,  2,  2,  2,  2,  2,  4,  2,
     4,  2,  4,  2,  4
  };

static const struct char_map_s trad2simp_wordlist[] =
  {
#line 1776 "trad2simp.in"
    {"\212\271","\x8b\xfd" },
#line 1323 "trad2simp.in"
    {"}\271","\x7e\xfa" },
#line 1717 "trad2simp.in"
    {"\2124","\x8b\xc9" },
#line 2185 "trad2simp.in"
    {"\222\271","\x95\x08" },
#line 1516 "trad2simp.in"
    {"\203\212","\x5e\x84" },
#line 2260 "trad2simp.in"
    {"\223\212","\x95\x51" },
#line 2132 "trad2simp.in"
    {"\2224","\x94\xc3" },
#line 2150 "trad2simp.in"
    {"\222Z","\x94\xc6" },
#line 1759 "trad2simp.in"
    {"\212\222","\x8b\xf6" },
#line 2282 "trad2simp.in"
    {"\223\310","\x94\xfe" },
#line 2245 "trad2simp.in"
    {"\223Z","\x94\x96" },
#line 2141 "trad2simp.in"
    {"\222E","\x94\x9c" },
#line 1513 "trad2simp.in"
    {"\203E","\x7b\x54" },
#line 2526 "trad2simp.in"
    {"\230\310","\x98\xda" },
#line 1303 "trad2simp.in"
    {"}\203","\x7e\xe1" },
#line 1308 "trad2simp.in"
    {"}\223","\x7e\xcf" },
#line 1713 "trad2simp.in"
    {"\212)","\x8b\xbb" },
#line 2164 "trad2simp.in"
    {"\222\203","\x94\xf3" },
#line 2167 "trad2simp.in"
    {"\222\223","\x94\xe8" },
#line 2231 "trad2simp.in"
    {"\223/","\x95\x19" },
#line 1407 "trad2simp.in"
    {"~\212","\x7e\xa9" },
#line 1761 "trad2simp.in"
    {"\212\230","\x8b\xf1" },
#line 1376 "trad2simp.in"
    {"~4","\x7e\xa4" },
#line 1391 "trad2simp.in"
    {"~Z","\x7f\x2d" },
#line 1404 "trad2simp.in"
    {"~}","\x7f\x24" },
#line 2169 "trad2simp.in"
    {"\222\230","\x94\xed" },
#line 1384 "trad2simp.in"
    {"~E","\x7f\x2b" },
#line 2496 "trad2simp.in"
    {"\230O","\x98\x9c" },
#line 2265 "trad2simp.in"
    {"\223\230","\x95\x49" },
#line 2121 "trad2simp.in"
    {"\222\021","\x94\xa3" },
#line 509 "trad2simp.in"
    {"a\212","\x60\xeb" },
#line 1372 "trad2simp.in"
    {"~/","\x6f\x14" },
#line 1320 "trad2simp.in"
    {"}\264","\x7f\x00" },
#line 1411 "trad2simp.in"
    {"~\223","\x7f\x28" },
#line 490 "trad2simp.in"
    {"a4","\x60\x06" },
#line 498 "trad2simp.in"
    {"aZ","\x60\xed" },
#line 961 "trad2simp.in"
    {"q\310","\x70\x6f" },
#line 2475 "trad2simp.in"
    {"\230\021","\x98\x7d" },
#line 2513 "trad2simp.in"
    {"\230t","\x98\xa7" },
#line 940 "trad2simp.in"
    {"p}","\x70\x7e" },
#line 512 "trad2simp.in"
    {"a\222","\x61\x26" },
#line 1249 "trad2simp.in"
    {"}\000","\x7e\xaa" },
#line 955 "trad2simp.in"
    {"q\222","\x83\x67" },
#line 1414 "trad2simp.in"
    {"~\230","\x7f\x35" },
#line 2113 "trad2simp.in"
    {"\222\000","\x94\xaf" },
#line 1712 "trad2simp.in"
    {"\212%","\x8b\xb7" },
#line 1748 "trad2simp.in"
    {"\212v","\x91\x6c" },
#line 1360 "trad2simp.in"
    {"~\021","\x7f\x23" },
#line 2256 "trad2simp.in"
    {"\223~","\x94\x9f" },
#line 1794 "trad2simp.in"
    {"\212\340","\x55\xa7" },
#line 26 "trad2simp.in"
    {"%t","\xff\x3f" },
#line 2126 "trad2simp.in"
    {"\222%","\x94\xac" },
#line 2158 "trad2simp.in"
    {"\222v","\x94\xcf" },
#line 1341 "trad2simp.in"
    {"}\340","\x7f\x14" },
#line 2901 "trad2simp.in"
    {"\376Z","\xff\x09" },
#line 2253 "trad2simp.in"
    {"\223v","\x95\x36" },
#line 1723 "trad2simp.in"
    {"\212F","\x8b\xcb" },
#line 1336 "trad2simp.in"
    {"}\330","\x7f\x04" },
#line 1286 "trad2simp.in"
    {"}F","\x7e\xca" },
#line 62 "trad2simp.in"
    {"O\340","\x4f\xa0" },
#line 2142 "trad2simp.in"
    {"\222F","\x94\xbb" },
#line 2287 "trad2simp.in"
    {"\223\330","\x95\x35" },
#line 2238 "trad2simp.in"
    {"\223F","\x94\x94" },
#line 1405 "trad2simp.in"
    {"~~","\x7f\x31" },
#line 440 "trad2simp.in"
    {"^\310","\x53\xa6" },
#line 1734 "trad2simp.in"
    {"\212a","\x8b\xe9" },
#line 1283 "trad2simp.in"
    {"}B","\x7e\xc8" },
#line 2492 "trad2simp.in"
    {"\230F","\x98\x97" },
#line 1293 "trad2simp.in"
    {"}a","\x7e\xdc" },
#line 1744 "trad2simp.in"
    {"\212q","\x8b\xdd" },
#line 1743 "trad2simp.in"
    {"\212p","\x8b\xd8" },
#line 1269 "trad2simp.in"
    {"}\034","\x7e\xad" },
#line 1298 "trad2simp.in"
    {"}q","\x7e\xdf" },
#line 1297 "trad2simp.in"
    {"}p","\x7e\xd6" },
#line 1764 "trad2simp.in"
    {"\212\240","\x8b\xda" },
#line 507 "trad2simp.in"
    {"a~","\x6b\x32" },
#line 1311 "trad2simp.in"
    {"}\240","\x7e\xff" },
#line 1385 "trad2simp.in"
    {"~F","\x7f\x2a" },
#line 2251 "trad2simp.in"
    {"\223p","\x95\x3e" },
#line 2172 "trad2simp.in"
    {"\222\240","\x94\xd1" },
#line 1077 "trad2simp.in"
    {"vF","\x75\xe8" },
#line 505 "trad2simp.in"
    {"av","\x5e\x86" },
#line 2480 "trad2simp.in"
    {"\230\034","\x98\x8c" },
#line 2511 "trad2simp.in"
    {"\230q","\x98\x85" },
#line 2510 "trad2simp.in"
    {"\230p","\x98\xa6" },
#line 578 "trad2simp.in"
    {"d/","\x63\x8f" },
#line 2144 "trad2simp.in"
    {"\222I","\x94\xc9" },
#line 593 "trad2simp.in"
    {"d\223","\x63\x20" },
#line 1277 "trad2simp.in"
    {"}3","\x7e\xc5" },
#line 1393 "trad2simp.in"
    {"~a","\x7e\xe3" },
#line 1076 "trad2simp.in"
    {"vB","\x75\x97" },
#line 2131 "trad2simp.in"
    {"\2223","\x94\xb6" },
#line 1083 "trad2simp.in"
    {"va","\x75\xf4" },
#line 2232 "trad2simp.in"
    {"\2233","\x95\x30" },
#line 1400 "trad2simp.in"
    {"~p","\x7f\x32" },
#line 1779 "trad2simp.in"
    {"\212\302","\x8c\x04" },
#line 24 "trad2simp.in"
    {"%q","\xff\x0f" },
#line 1093 "trad2simp.in"
    {"vq","\x76\x2b" },
#line 36 "trad2simp.in"
    {"Fa","\x46\x4c" },
#line 1092 "trad2simp.in"
    {"vp","\x75\xc8" },
#line 298 "trad2simp.in"
    {"X\212","\x57\xab" },
#line 1809 "trad2simp.in"
    {"\212\376","\x8b\xfa" },
#line 287 "trad2simp.in"
    {"X4","\x57\x3a" },
#line 293 "trad2simp.in"
    {"XZ","\x51\xa2" },
#line 61 "trad2simp.in"
    {"O\302","\x7c\xfb" },
#line 488 "trad2simp.in"
    {"a\034","\x60\xec" },
#line 1079 "trad2simp.in"
    {"vI","\x76\x05" },
#line 434 "trad2simp.in"
    {"^~","\x51\xe0" },
#line 1271 "trad2simp.in"
    {"}!","\x7e\xba" },
#line 1375 "trad2simp.in"
    {"~3","\x7f\x1a" },
#line 419 "trad2simp.in"
    {"^%","\x5e\x05" },
#line 285 "trad2simp.in"
    {"X/","\x5c\x27" },
#line 345 "trad2simp.in"
    {"Z\373","\x5a\x34" },
#line 1354 "trad2simp.in"
    {"}\373","\x81\xf4" },
#line 2539 "trad2simp.in"
    {"\230\376","\x99\x70" },
#line 445 "trad2simp.in"
    {"^\340","\x53\x82" },
#line 2210 "trad2simp.in"
    {"\222\373","\x92\x74" },
#line 2184 "trad2simp.in"
    {"\222\267","\x95\x00" },
#line 2481 "trad2simp.in"
    {"\230!","\x98\x89" },
#line 947 "trad2simp.in"
    {"qI","\x70\xbc" },
#line 290 "trad2simp.in"
    {"XO","\x57\xb2" },
#line 2908 "trad2simp.in"
    {"\376a","\xff\x0a" },
#line 576 "trad2simp.in"
    {"d%","\x63\x76" },
#line 59 "trad2simp.in"
    {"O\267","\x5c\x40" },
#line 588 "trad2simp.in"
    {"dv","\x62\x9f" },
#line 1257 "trad2simp.in"
    {"}\013","\x7e\xb9" },
#line 614 "trad2simp.in"
    {"d\340","\x63\x24" },
#line 1732 "trad2simp.in"
    {"\212^","\x8b\xcd" },
#line 1284 "trad2simp.in"
    {"}C","\x5f\x26" },
#line 1292 "trad2simp.in"
    {"}^","\x7e\xde" },
#line 1072 "trad2simp.in"
    {"v!","\x75\xae" },
#line 2152 "trad2simp.in"
    {"\222^","\x94\xba" },
#line 2237 "trad2simp.in"
    {"\223C","\x95\x2a" },
#line 2347 "trad2simp.in"
    {"\224}","\x94\xbb" },
#line 534 "trad2simp.in"
    {"a\376","\x61\x51" },
#line 2890 "trad2simp.in"
    {"\3763","\xff\x5c" },
#line 974 "trad2simp.in"
    {"q\376","\x71\x18" },
#line 2503 "trad2simp.in"
    {"\230^","\x7c\x7b" },
#line 946 "trad2simp.in"
    {"q!","\x65\xe0" },
#line 2319 "trad2simp.in"
    {"\224/","\x49\x83" },
#line 1358 "trad2simp.in"
    {"~\013","\x7f\x12" },
#line 788 "trad2simp.in"
    {"k\230","\x6b\x8b" },
#line 1068 "trad2simp.in"
    {"v\013","\x75\xaf" },
#line 972 "trad2simp.in"
    {"q\373","\x71\x8f" },
#line 1383 "trad2simp.in"
    {"~C","\x7e\xf7" },
#line 1392 "trad2simp.in"
    {"~^","\x7e\xd5" },
#line 1002 "trad2simp.in"
    {"sE","\x72\xee" },
#line 421 "trad2simp.in"
    {"^3","\x5e\x10" },
#line 2154 "trad2simp.in"
    {"\222d","\x94\xa9" },
#line 2247 "trad2simp.in"
    {"\223d","\x95\x38" },
#line 1058 "trad2simp.in"
    {"u\212","\x53\xe0" },
#line 309 "trad2simp.in"
    {"X\330","\x57\x92" },
#line 918 "trad2simp.in"
    {"p\013","\x6c\x88" },
#line 438 "trad2simp.in"
    {"^\302","\x53\xa2" },
#line 1028 "trad2simp.in"
    {"td","\x74\x76" },
#line 931 "trad2simp.in"
    {"pC","\x6c\xa3" },
#line 2114 "trad2simp.in"
    {"\222\001","\x94\xab" },
#line 1718 "trad2simp.in"
    {"\2126","\x8b\xc3" },
#line 2212 "trad2simp.in"
    {"\223\001","\x95\x1e" },
#line 1085 "trad2simp.in"
    {"vd","\x75\x96" },
#line 2463 "trad2simp.in"
    {"\230\001","\x98\x75" },
#line 2233 "trad2simp.in"
    {"\2236","\x88\x68" },
#line 2348 "trad2simp.in"
    {"\224~","\x92\xae" },
#line 548 "trad2simp.in"
    {"b\203","\x62\xda" },
#line 627 "trad2simp.in"
    {"d\376","\x62\x70" },
#line 802 "trad2simp.in"
    {"k\330","\x6b\xd7" },
#line 2313 "trad2simp.in"
    {"\224%","\x49\x85" },
#line 2905 "trad2simp.in"
    {"\376^","\xff\x3d" },
#line 540 "trad2simp.in"
    {"b)","\x62\x2c" },
#line 938 "trad2simp.in"
    {"pd","\x6e\xe6" },
#line 625 "trad2simp.in"
    {"d\373","\x64\xde" },
#line 1378 "trad2simp.in"
    {"~6","\x7d\x77" },
#line 782 "trad2simp.in"
    {"ka","\x6b\x22" },
#line 424 "trad2simp.in"
    {"^C","\x5e\x0f" },
#line 550 "trad2simp.in"
    {"b\264","\x66\xf3" },
#line 914 "trad2simp.in"
    {"p\001","\x6f\x3e" },
#line 2911 "trad2simp.in"
    {"\376d","\xff\x1c" },
#line 582 "trad2simp.in"
    {"dC","\x62\x5b" },
#line 1730 "trad2simp.in"
    {"\212X","\x8b\xce" },
#line 1342 "trad2simp.in"
    {"}\341","\x7f\x17" },
#line 2341 "trad2simp.in"
    {"\224p","\x94\xa5" },
#line 535 "trad2simp.in"
    {"b\000","\x60\x4b" },
#line 1056 "trad2simp.in"
    {"uv","\x5f\x53" },
#line 2292 "trad2simp.in"
    {"\223\341","\x95\x5c" },
#line 2244 "trad2simp.in"
    {"\223X","\x94\xe1" },
#line 1061 "trad2simp.in"
    {"u\340","\x91\x78" },
#line 1804 "trad2simp.in"
    {"\212\366","\x8c\x0c" },
#line 1450 "trad2simp.in"
    {"\200}","\x54\x2c" },
#line 1352 "trad2simp.in"
    {"}\366","\x7f\x0f" },
#line 2500 "trad2simp.in"
    {"\230X","\x61\x3f" },
#line 2208 "trad2simp.in"
    {"\222\366","\x95\x0d" },
#line 1008 "trad2simp.in"
    {"sp","\x72\xde" },
#line 2321 "trad2simp.in"
    {"\2243","\x95\x6d" },
#line 474 "trad2simp.in"
    {"_\271","\x5f\x7b" },
#line 1710 "trad2simp.in"
    {"\212\"","\x6b\x23" },
#line 463 "trad2simp.in"
    {"_Z","\x6c\x47" },
#line 1104 "trad2simp.in"
    {"v\341","\x5c\x3d" },
#line 1081 "trad2simp.in"
    {"vX","\x75\xa0" },
#line 902 "trad2simp.in"
    {"o\330","\x6c\xde" },
#line 2226 "trad2simp.in"
    {"\223\"","\x94\xb1" },
#line 422 "trad2simp.in"
    {"^6","\x5e\x26" },
#line 1055 "trad2simp.in"
    {"up","\x5f\x02" },
#line 1435 "trad2simp.in"
    {"\200\021","\x7a\xef" },
#line 546 "trad2simp.in"
    {"bq","\x63\xd2" },
#line 497 "trad2simp.in"
    {"aX","\x60\xe8" },
#line 935 "trad2simp.in"
    {"pX","\x6e\xe9" },
#line 579 "trad2simp.in"
    {"d6","\x62\xa2" },
#line 1739 "trad2simp.in"
    {"\212k","\x8b\xe7" },
#line 262 "trad2simp.in"
    {"V\310","\x54\x53" },
#line 1338 "trad2simp.in"
    {"}\332","\x7e\xbf" },
#line 883 "trad2simp.in"
    {"op","\x6e\x83" },
#line 529 "trad2simp.in"
    {"a\366","\x61\xd2" },
#line 1022 "trad2simp.in"
    {"s\376","\x73\xb0" },
#line 892 "trad2simp.in"
    {"o\240","\x6e\x11" },
#line 295 "trad2simp.in"
    {"Xd","\x57\xd9" },
#line 1451 "trad2simp.in"
    {"\200~","\x80\x4b" },
#line 230 "trad2simp.in"
    {"V/","\x55\x78" },
#line 2304 "trad2simp.in"
    {"\224\013","\x94\xf4" },
#line 2507 "trad2simp.in"
    {"\230k","\x98\xa4" },
#line 1044 "trad2simp.in"
    {"t\332","\x74\xd2" },
#line 1447 "trad2simp.in"
    {"\200v","\x80\x42" },
#line 228 "trad2simp.in"
    {"V)","\x54\xd7" },
#line 2334 "trad2simp.in"
    {"\224^","\x95\x74" },
#line 686 "trad2simp.in"
    {"g\264","\x62\xd0" },
#line 1065 "trad2simp.in"
    {"u\376","\x75\xb4" },
#line 1397 "trad2simp.in"
    {"~k","\x7c\xfb" },
#line 446 "trad2simp.in"
    {"^\341","\x5e\x91" },
#line 426 "trad2simp.in"
    {"^X","\x5e\x3b" },
#line 242 "trad2simp.in"
    {"Vt","\x55\xb7" },
#line 2262 "trad2simp.in"
    {"\223\224","\x95\x55" },
#line 1000 "trad2simp.in"
    {"sC","\x54\x46" },
#line 256 "trad2simp.in"
    {"V\264","\x4e\x25" },
#line 913 "trad2simp.in"
    {"o\376","\x6e\xe4" },
#line 615 "trad2simp.in"
    {"d\341","\x62\xac" },
#line 502 "trad2simp.in"
    {"ak","\x60\x02" },
#line 458 "trad2simp.in"
    {"_F","\x52\x2b" },
#line 2337 "trad2simp.in"
    {"\224d","\x52\x28" },
#line 1443 "trad2simp.in"
    {"\200p","\x80\x6a" },
#line 1412 "trad2simp.in"
    {"~\224","\x62\x4d" },
#line 2636 "trad2simp.in"
    {"\232Z","\x60\xca" },
#line 1746 "trad2simp.in"
    {"\212s","\x8b\xe6" },
#line 31 "trad2simp.in"
    {"4s","\x34\x47" },
#line 1300 "trad2simp.in"
    {"}s","\x7e\xdb" },
#line 2630 "trad2simp.in"
    {"\232E","\x9a\x71" },
#line 1790 "trad2simp.in"
    {"\212\333","\x8c\x00" },
#line 545 "trad2simp.in"
    {"b^","\x63\x4d" },
#line 1515 "trad2simp.in"
    {"\203s","\x8c\x46" },
#line 2916 "trad2simp.in"
    {"\376k","\xff\x20"},
#line 470 "trad2simp.in"
    {"_\240","\x5f\x95" },
#line 2323 "trad2simp.in"
    {"\2246","\x95\x6e" },
#line 2512 "trad2simp.in"
    {"\230s","\x98\x9e" },
#line 685 "trad2simp.in"
    {"gq","\x4e\x1c" },
#line 2633 "trad2simp.in"
    {"\232O","\x9a\xa3" },
#line 2527 "trad2simp.in"
    {"\230\333","\x98\xde" },
#line 442 "trad2simp.in"
    {"^\332","\x53\xa8" },
#line 429 "trad2simp.in"
    {"^k","\x5e\x2e" },
#line 455 "trad2simp.in"
    {"_3","\x5f\x2a" },
#line 1401 "trad2simp.in"
    {"~s","\x7f\x34" },
#line 997 "trad2simp.in"
    {"s6","\x72\xb9" },
#line 227 "trad2simp.in"
    {"V\034","\x55\x1b" },
#line 1253 "trad2simp.in"
    {"}\006","\x7e\xa1" },
#line 1436 "trad2simp.in"
    {"\200!","\x52\xa9" },
#line 613 "trad2simp.in"
    {"d\332","\x63\x6e" },
#line 1747 "trad2simp.in"
    {"\212u","\x8b\xdc" },
#line 2214 "trad2simp.in"
    {"\223\006","\x95\x16" },
#line 881 "trad2simp.in"
    {"od","\x6d\xa6" },
#line 504 "trad2simp.in"
    {"as","\x60\xad" },
#line 2467 "trad2simp.in"
    {"\230\006","\x98\x7a" },
#line 2252 "trad2simp.in"
    {"\223u","\x95\x2e" },
#line 54 "trad2simp.in"
    {"Ou","\x5e\x76" },
#line 1735 "trad2simp.in"
    {"\212b","\x8b\xe2" },
#line 1294 "trad2simp.in"
    {"}b","\x7e\xda" },
#line 543 "trad2simp.in"
    {"b6","\x62\x37" },
#line 2153 "trad2simp.in"
    {"\222b","\x94\xb5" },
#line 866 "trad2simp.in"
    {"o\001","\x6e\x14" },
#line 202 "trad2simp.in"
    {"UO","\x95\xee" },
#line 1441 "trad2simp.in"
    {"\200^","\x95\xfb" },
#line 260 "trad2simp.in"
    {"V\302","\x56\xa3" },
#line 2504 "trad2simp.in"
    {"\230b","\x98\x9f" },
#line 311 "trad2simp.in"
    {"X\332","\x57\x86" },
#line 152 "trad2simp.in"
    {"R\212","\x52\x3d" },
#line 916 "trad2simp.in"
    {"p\006","\x6e\x0e" },
#line 1394 "trad2simp.in"
    {"~b","\x7f\x0b" },
#line 2627 "trad2simp.in"
    {"\232B","\x9a\x96" },
#line 1766 "trad2simp.in"
    {"\212\243","\x8b\xec" },
#line 1084 "trad2simp.in"
    {"vb","\x75\xd2" },
#line 1313 "trad2simp.in"
    {"}\243","\x7e\xfb" },
#line 2509 "trad2simp.in"
    {"\230o","\x66\x3e" },
#line 2173 "trad2simp.in"
    {"\222\243","\x94\xf7" },
#line 1031 "trad2simp.in"
    {"to","\x74\x05" },
#line 2269 "trad2simp.in"
    {"\223\243","\x84\xe5" },
#line 148 "trad2simp.in"
    {"R\203","\x52\x12" },
#line 587 "trad2simp.in"
    {"ds","\x62\xa0" },
#line 951 "trad2simp.in"
    {"qb","\x83\x15" },
#line 1399 "trad2simp.in"
    {"~o","\x7f\x33" },
#line 1035 "trad2simp.in"
    {"t\243","\x73\x91" },
#line 1721 "trad2simp.in"
    {"\212<","\x8b\xc1" },
#line 2415 "trad2simp.in"
    {"\226\212","\x96\x1f" },
#line 1280 "trad2simp.in"
    {"}<","\x7e\xcb" },
#line 1965 "trad2simp.in"
    {"\216\212","\x8e\x0c" },
#line 145 "trad2simp.in"
    {"Rt","\x52\x40" },
#line 2412 "trad2simp.in"
    {"\226}","\x96\x33" },
#line 1955 "trad2simp.in"
    {"\2164","\x8e\x0a" },
#line 2909 "trad2simp.in"
    {"\376b","\xff\x0b" },
#line 1047 "trad2simp.in"
    {"u\"","\x4e\xa7" },
#line 431 "trad2simp.in"
    {"^u","\x5f\x00" },
#line 1969 "trad2simp.in"
    {"\216\222","\x8d\xde" },
#line 2403 "trad2simp.in"
    {"\226/","\x57\x40" },
#line 571 "trad2simp.in"
    {"d\006","\x67\x84" },
#line 1006 "trad2simp.in"
    {"sk","\x73\x03" },
#line 727 "trad2simp.in"
    {"j\021","\x68\x81" },
#line 1970 "trad2simp.in"
    {"\216\223","\x8e\x2c" },
#line 2404 "trad2simp.in"
    {"\226O","\x96\x8b" },
#line 869 "trad2simp.in"
    {"o\"","\x6c\x49" },
#line 1855 "trad2simp.in"
    {"\213\212","\x53\xd8" },
#line 134 "trad2simp.in"
    {"R%","\x52\x2b" },
#line 1842 "trad2simp.in"
    {"\213Z","\x8c\x2d" },
#line 1851 "trad2simp.in"
    {"\213}","\x8a\x89" },
#line 1053 "trad2simp.in"
    {"uk","\x75\x3b" },
#line 1858 "trad2simp.in"
    {"\213\222","\x8c\x17" },
#line 2423 "trad2simp.in"
    {"\226\264","\x96\x47" },
#line 1111 "trad2simp.in"
    {"wO","\x56\xf0" },
#line 1859 "trad2simp.in"
    {"\213\223","\x8b\xa9" },
#line 2628 "trad2simp.in"
    {"\232C","\x9a\xa0" },
#line 1837 "trad2simp.in"
    {"\213O","\x8b\xa5" },
#line 1116 "trad2simp.in"
    {"w\230","\x77\x0d" },
#line 586 "trad2simp.in"
    {"do","\x63\x1a" },
#line 296 "trad2simp.in"
    {"Xu","\x5c\x18" },
#line 2163 "trad2simp.in"
    {"\222\200","\x94\xf6" },
#line 1849 "trad2simp.in"
    {"\213t","\x8c\x34" },
#line 597 "trad2simp.in"
    {"d\243","\x63\xb8" },
#line 549 "trad2simp.in"
    {"b\224","\x62\xb1" },
#line 1199 "trad2simp.in"
    {"{t","\x7b\x56" },
#line 294 "trad2simp.in"
    {"Xb","\x57\x5e" },
#line 138 "trad2simp.in"
    {"RI","\x95\x09" },
#line 2640 "trad2simp.in"
    {"\232d","\x9a\xa7" },
#line 1617 "trad2simp.in"
    {"\207\310","\x87\x48" },
#line 890 "trad2simp.in"
    {"o\224","\x6d\x69" },
#line 1810 "trad2simp.in"
    {"\213\000","\x8c\x0b" },
#line 1109 "trad2simp.in"
    {"w%","\x77\x26" },
#line 1852 "trad2simp.in"
    {"\213~","\x8c\x2b" },
#line 1564 "trad2simp.in"
    {"\205\212","\x84\xdf" },
#line 205 "trad2simp.in"
    {"U^","\x54\xd1" },
#line 2608 "trad2simp.in"
    {"\232\001","\x9a\x8b" },
#line 2409 "trad2simp.in"
    {"\226p","\x96\x34" },
#line 2343 "trad2simp.in"
    {"\224u","\x7f\x50" },
#line 681 "trad2simp.in"
    {"g\"","\x67\x1b" },
#line 2621 "trad2simp.in"
    {"\2326","\x9a\x7a" },
#line 1210 "trad2simp.in"
    {"{\340","\x7b\x71" },
#line 1834 "trad2simp.in"
    {"\213F","\x56\x3b" },
#line 752 "trad2simp.in"
    {"j\302","\x68\xf9" },
#line 1196 "trad2simp.in"
    {"{F","\x7b\x14" },
#line 172 "trad2simp.in"
    {"R\373","\x53\x00" },
#line 1010 "trad2simp.in"
    {"su","\x73\x0e" },
#line 903 "trad2simp.in"
    {"o\333","\x84\x99" },
#line 465 "trad2simp.in"
    {"_k","\x96\xd5" },
#line 1082 "trad2simp.in"
    {"v_","\x76\x2a" },
#line 2506 "trad2simp.in"
    {"\230g","\x98\x7e" },
#line 1848 "trad2simp.in"
    {"\213p","\x8b\xae" },
#line 770 "trad2simp.in"
    {"j\373","\x6a\x31" },
#line 499 "trad2simp.in"
    {"a_","\x60\x78" },
#line 1204 "trad2simp.in"
    {"{\240","\x68\xf0" },
#line 1835 "trad2simp.in"
    {"\213I","\x8b\xc1" },
#line 1994 "trad2simp.in"
    {"\216\376","\x8f\x7c" },
#line 1087 "trad2simp.in"
    {"vg","\x75\xac" },
#line 1675 "trad2simp.in"
    {"\211\223","\x89\xc5" },
#line 1952 "trad2simp.in"
    {"\216!","\x87\x37" },
#line 1829 "trad2simp.in"
    {"\2133","\x8b\xb4" },
#line 2435 "trad2simp.in"
    {"\226\373","\x75\x35" },
#line 1052 "trad2simp.in"
    {"ub","\x6b\xd5" },
#line 1992 "trad2simp.in"
    {"\216\373","\x8f\x72" },
#line 1549 "trad2simp.in"
    {"\205%","\x84\x71" },
#line 1677 "trad2simp.in"
    {"\211\230","\x89\xc7" },
#line 2906 "trad2simp.in"
    {"\376_","\xff\x03" },
#line 1783 "trad2simp.in"
    {"\212\313","\x8b\xf7" },
#line 1445 "trad2simp.in"
    {"\200s","\x80\x38" },
#line 2732 "trad2simp.in"
    {"\234E","\x9c\xd9" },
#line 342 "trad2simp.in"
    {"Z\313","\x88\x85" },
#line 1332 "trad2simp.in"
    {"}\313","\x7e\xef" },
#line 1553 "trad2simp.in"
    {"\205F","\x84\x87" },
#line 2407 "trad2simp.in"
    {"\226^","\x53\x47" },
#line 1769 "trad2simp.in"
    {"\212\246","\x8b\xf5" },
#line 427 "trad2simp.in"
    {"^_","\x5e\x1c" },
#line 2721 "trad2simp.in"
    {"\234)","\x9c\xd0" },
#line 2175 "trad2simp.in"
    {"\222\246","\x94\xdf" },
#line 1670 "trad2simp.in"
    {"\211~","\x89\x7f" },
#line 2270 "trad2simp.in"
    {"\223\246","\x95\x4f" },
#line 882 "trad2simp.in"
    {"oo","\x6d\x54" },
#line 585 "trad2simp.in"
    {"d_","\x64\x02" },
#line 949 "trad2simp.in"
    {"qV","\x66\x96" },
#line 1113 "trad2simp.in"
    {"w^","\x77\x50" },
#line 2076 "trad2simp.in"
    {"\2214","\x90\xba" },
#line 1036 "trad2simp.in"
    {"t\246","\x74\x77" },
#line 2378 "trad2simp.in"
    {"\225\271","\x96\x09" },
#line 724 "trad2simp.in"
    {"j\001","\x68\x69" },
#line 1961 "trad2simp.in"
    {"\216d","\x8e\x2a" },
#line 2387 "trad2simp.in"
    {"\225\310","\x95\xf1" },
#line 1446 "trad2simp.in"
    {"\200u","\x80\x69" },
#line 221 "trad2simp.in"
    {"U\366","\x54\xd4" },
#line 2081 "trad2simp.in"
    {"\221\203","\x81\x4c" },
#line 2363 "trad2simp.in"
    {"\225\222","\x95\xf2" },
#line 2898 "trad2simp.in"
    {"\376V","\xff\x1f" },
#line 2355 "trad2simp.in"
    {"\225\203","\x95\xea" },
#line 2364 "trad2simp.in"
    {"\225\223","\x95\xf4" },
#line 2718 "trad2simp.in"
    {"\234%","\x9c\xcf" },
#line 336 "trad2simp.in"
    {"Z\247","\x5a\x32" },
#line 787 "trad2simp.in"
    {"k\200","\x59\x2d" },
#line 1625 "trad2simp.in"
    {"\207\373","\x86\x81" },
#line 1519 "trad2simp.in"
    {"\203\247","\x82\xcb" },
#line 2271 "trad2simp.in"
    {"\223\247","\x94\xe0" },
#line 2366 "trad2simp.in"
    {"\225\230","\x95\xf8" },
#line 1661 "trad2simp.in"
    {"\211I","\x88\xe5" },
#line 1442 "trad2simp.in"
    {"\200o","\x80\x54" },
#line 222 "trad2simp.in"
    {"V\006","\x53\xf9" },
#line 1658 "trad2simp.in"
    {"\2113","\x88\xe2" },
#line 1811 "trad2simp.in"
    {"\213\001","\x8c\x12" },
#line 219 "trad2simp.in"
    {"U\332","\x54\x5c" },
#line 1793 "trad2simp.in"
    {"\212\336","\x8c\x1d" },
#line 1016 "trad2simp.in"
    {"s\200","\x73\x21" },
#line 2714 "trad2simp.in"
    {"\234\034","\x9c\xd2" },
#line 1340 "trad2simp.in"
    {"}\336","\x7f\x0e" },
#line 781 "trad2simp.in"
    {"k_","\x6b\x24" },
#line 1762 "trad2simp.in"
    {"\212\232","\x8b\xee" },
#line 23 "trad2simp.in"
    {"\"g","\x22\x65" },
#line 2290 "trad2simp.in"
    {"\223\336","\x95\x5b" },
#line 963 "trad2simp.in"
    {"q\320","\x78\xf7" },
#line 610 "trad2simp.in"
    {"d\313","\x63\x21" },
#line 2170 "trad2simp.in"
    {"\222\232","\x94\xeb" },
#line 2734 "trad2simp.in"
    {"\234I","\x9c\xd6" },
#line 2266 "trad2simp.in"
    {"\223\232","\x95\x24" },
#line 2100 "trad2simp.in"
    {"\221\330","\x94\x89" },
#line 57 "trad2simp.in"
    {"O\232","\x5f\x87" },
#line 2405 "trad2simp.in"
    {"\226X","\x96\x49" },
#line 2725 "trad2simp.in"
    {"\2343","\x9c\xd3" },
#line 599 "trad2simp.in"
    {"d\246","\x62\x6f" },
#line 1685 "trad2simp.in"
    {"\211\267","\x89\xd1" },
#line 2861 "trad2simp.in"
    {"\2374","\x9f\x39" },
#line 240 "trad2simp.in"
    {"Vo","\x55\xf3" },
#line 1103 "trad2simp.in"
    {"v\336","\x76\xcf" },
#line 2128 "trad2simp.in"
    {"\222'","\x94\xaa" },
#line 886 "trad2simp.in"
    {"o\200","\x6d\xa9" },
#line 1097 "trad2simp.in"
    {"v\232","\x76\x91" },
#line 2756 "trad2simp.in"
    {"\234\376","\x4d\x13" },
#line 524 "trad2simp.in"
    {"a\336","\x84\x99" },
#line 2865 "trad2simp.in"
    {"\237O","\x9f\x51" },
#line 1840 "trad2simp.in"
    {"\213X","\x8b\xc6" },
#line 513 "trad2simp.in"
    {"a\232","\x60\xee" },
#line 756 "trad2simp.in"
    {"j\332","\x69\x88" },
#line 740 "trad2simp.in"
    {"jk","\x6a\x2a" },
#line 1073 "trad2simp.in"
    {"v'","\x75\x9f" },
#line 2639 "trad2simp.in"
    {"\232b","\x9a\x74" },
#line 880 "trad2simp.in"
    {"o_","\x82\x04" },
#line 1665 "trad2simp.in"
    {"\211d","\x89\x34" },
#line 1345 "trad2simp.in"
    {"}\350","\x7f\x16" },
#line 926 "trad2simp.in"
    {"p'","\x6c\xf7" },
#line 2201 "trad2simp.in"
    {"\222\350","\x95\x07" },
#line 2112 "trad2simp.in"
    {"\221\376","\x49\x7a" },
#line 2295 "trad2simp.in"
    {"\223\350","\x93\x3e" },
#line 743 "trad2simp.in"
    {"j\224","\x68\x63" },
#line 2879 "trad2simp.in"
    {"\237v","\x81\x6d" },
#line 1728 "trad2simp.in"
    {"\212U","\x8b\xc4" },
#line 1122 "trad2simp.in"
    {"w\332","\x77\xa9" },
#line 1289 "trad2simp.in"
    {"}U","\x7e\xdd" },
#line 2148 "trad2simp.in"
    {"\222U","\x94\xb7" },
#line 1845 "trad2simp.in"
    {"\213k","\x8c\x35" },
#line 161 "trad2simp.in"
    {"R\333","\x52\xcb" },
#line 594 "trad2simp.in"
    {"d\232","\x62\xc8" },
#line 1623 "trad2simp.in"
    {"\207\366","\x86\xcf" },
#line 207 "trad2simp.in"
    {"Ub","\x55\x21" },
#line 1798 "trad2simp.in"
    {"\212\347","\x8c\x10" },
#line 34 "trad2simp.in"
    {":s","\x39\xd0" },
#line 1557 "trad2simp.in"
    {"\205X","\x83\x5b" },
#line 2872 "trad2simp.in"
    {"\237a","\x9f\x84" },
#line 527 "trad2simp.in"
    {"a\350","\x60\x79" },
#line 757 "trad2simp.in"
    {"j\333","\x68\x09" },
#line 1389 "trad2simp.in"
    {"~U","\x7f\x2e" },
#line 1579 "trad2simp.in"
    {"\205\366","\x82\xc8" },
#line 245 "trad2simp.in"
    {"V\200","\x54\x9b" },
#line 551 "trad2simp.in"
    {"b\313","\x62\x9b" },
#line 2410 "trad2simp.in"
    {"\226s","\x96\x48" },
#line 312 "trad2simp.in"
    {"X\336","\x57\x4f" },
#line 1906 "trad2simp.in"
    {"\214\310","\x8d\x3e" },
#line 2429 "trad2simp.in"
    {"\226\333","\x96\xcf" },
#line 146 "trad2simp.in"
    {"Ru","\x52\x1b" },
#line 1984 "trad2simp.in"
    {"\216\333","\x8f\x6d" },
#line 934 "trad2simp.in"
    {"pU","\x6f\x13" },
#line 1107 "trad2simp.in"
    {"v\347","\x53\x62" },
#line 1786 "trad2simp.in"
    {"\212\321","\x8b\xfc" },
#line 1874 "trad2simp.in"
    {"\214\223","\x73\x2b" },
#line 894 "trad2simp.in"
    {"o\246","\x6e\xea" },
#line 1693 "trad2simp.in"
    {"\211\366","\x89\xef" },
#line 76 "trad2simp.in"
    {"P}","\x4f\x2a" },
#line 2285 "trad2simp.in"
    {"\223\321","\x95\x5d" },
#line 2897 "trad2simp.in"
    {"\376U","\xff\x1a" },
#line 2077 "trad2simp.in"
    {"\2216","\x90\xd0" },
#line 738 "trad2simp.in"
    {"jb","\x69\x2d" },
#line 1440 "trad2simp.in"
    {"\200V","\x57\x23" },
#line 1209 "trad2simp.in"
    {"{\333","\x7b\xac" },
#line 2739 "trad2simp.in"
    {"\234X","\x9c\x9f" },
#line 1890 "trad2simp.in"
    {"\214\264","\x8d\x35" },
#line 1726 "trad2simp.in"
    {"\212R","\x8b\xd2" },
#line 79 "trad2simp.in"
    {"P\230","\x4f\x1e" },
#line 2755 "trad2simp.in"
    {"\234\366","\x9e\x22" },
#line 67 "trad2simp.in"
    {"P\021","\x4e\xec" },
#line 73 "trad2simp.in"
    {"Pt","\x4f\xa7" },
#line 1567 "trad2simp.in"
    {"\205\224","\x85\x37" },
#line 2497 "trad2simp.in"
    {"\230R","\x98\x99" },
#line 86 "trad2simp.in"
    {"P\264","\x4f\x1b" },
#line 1872 "trad2simp.in"
    {"\214v","\x8c\x6e" },
#line 747 "trad2simp.in"
    {"j\243","\x6a\x2f" },
#line 2315 "trad2simp.in"
    {"\224'","\x95\x0f" },
#line 1916 "trad2simp.in"
    {"\214\340","\x8d\x54" },
#line 1719 "trad2simp.in"
    {"\212:","\x8b\xca" },
#line 1279 "trad2simp.in"
    {"}:","\x7e\xc0" },
#line 1387 "trad2simp.in"
    {"~R","\x7f\x2f" },
#line 63 "trad2simp.in"
    {"P\000","\x4f\x25" },
#line 2136 "trad2simp.in"
    {"\222:","\x94\xb0" },
#line 1080 "trad2simp.in"
    {"vR","\x61\x08" },
#line 2482 "trad2simp.in"
    {"\230$","\x98\x90" },
#line 2398 "trad2simp.in"
    {"\225\341","\x96\x10" },
#line 2638 "trad2simp.in"
    {"\232_","\x9a\xa4" },
#line 1024 "trad2simp.in"
    {"t:","\x73\xd0" },
#line 1774 "trad2simp.in"
    {"\212\262","\x8b\xfe" },
#line 53 "trad2simp.in"
    {"Oj","\x5f\x8a" },
#line 1319 "trad2simp.in"
    {"}\262","\x7f\x51" },
#line 948 "trad2simp.in"
    {"qR","\x70\x9c" },
#line 2182 "trad2simp.in"
    {"\222\262","\x71\x0a" },
#line 1030 "trad2simp.in"
    {"tj","\x73\x9b" },
#line 1471 "trad2simp.in"
    {"\201\203","\x81\x7d" },
#line 1847 "trad2simp.in"
    {"\213o","\x8b\xd1" },
#line 1877 "trad2simp.in"
    {"\214\240","\x8d\x1f" },
#line 1074 "trad2simp.in"
    {"v:","\x76\x18" },
#line 1461 "trad2simp.in"
    {"\201)","\x4f\xee" },
#line 1605 "trad2simp.in"
    {"\207\006","\x86\xac" },
#line 1396 "trad2simp.in"
    {"~j","\x7e\xd8" },
#line 539 "trad2simp.in"
    {"b'","\x62\x17" },
#line 252 "trad2simp.in"
    {"V\246","\x54\x56" },
#line 2895 "trad2simp.in"
    {"\376R","\xff\x0e" },
#line 2168 "trad2simp.in"
    {"\222\226","\x94\xe2" },
#line 1517 "trad2simp.in"
    {"\203\226","\x83\x0e" },
#line 2263 "trad2simp.in"
    {"\223\226","\x95\x01" },
#line 1545 "trad2simp.in"
    {"\205\006","\x83\xf1" },
#line 56 "trad2simp.in"
    {"O\226","\x4e\xd1" },
#line 501 "trad2simp.in"
    {"aj","\x60\x04" },
#line 392 "trad2simp.in"
    {"]\021","\x66\x06" },
#line 206 "trad2simp.in"
    {"U_","\x54\x2f" },
#line 1901 "trad2simp.in"
    {"\214\302","\x8d\x42" },
#line 71 "trad2simp.in"
    {"PI","\x4f\x1f" },
#line 987 "trad2simp.in"
    {"r}","\x72\x75" },
#line 1276 "trad2simp.in"
    {"}2","\x7e\xc1" },
#line 2333 "trad2simp.in"
    {"\224U","\x95\x27" },
#line 517 "trad2simp.in"
    {"a\262","\x5b\xaa" },
#line 1933 "trad2simp.in"
    {"\214\376","\x8d\x5c" },
#line 1512 "trad2simp.in"
    {"\2032","\x51\x79" },
#line 1831 "trad2simp.in"
    {"\213<","\x54\x7c" },
#line 1413 "trad2simp.in"
    {"~\226","\x7e\xa4" },
#line 1558 "trad2simp.in"
    {"\205b","\x84\x89" },
#line 2487 "trad2simp.in"
    {"\2302","\x98\x8b" },
#line 2915 "trad2simp.in"
    {"\376j","\xff\x05" },
#line 90 "trad2simp.in"
    {"P\302","\x50\x7b" },
#line 1930 "trad2simp.in"
    {"\214\373","\x8d\x59" },
#line 1892 "trad2simp.in"
    {"\214\267","\x4e\x70" },
#line 1489 "trad2simp.in"
    {"\201\340","\x81\x14" },
#line 1485 "trad2simp.in"
    {"\201\330","\x81\x4a" },
#line 1374 "trad2simp.in"
    {"~2","\x7f\x27" },
#line 986 "trad2simp.in"
    {"rt","\x62\xb5" },
#line 2365 "trad2simp.in"
    {"\225\224","\x95\xf5" },
#line 88 "trad2simp.in"
    {"P\267","\x4f\x24" },
#line 1466 "trad2simp.in"
    {"\201a","\x81\x36" },
#line 929 "trad2simp.in"
    {"p2","\x6f\x4b" },
#line 291 "trad2simp.in"
    {"XR","\x57\xd8" },
#line 66 "trad2simp.in"
    {"P\013","\x4e\x2a" },
#line 1749 "trad2simp.in"
    {"\212{","\x54\xaf" },
#line 1476 "trad2simp.in"
    {"\201\240","\x80\xf6" },
#line 737 "trad2simp.in"
    {"j_","\x67\x3a" },
#line 601 "trad2simp.in"
    {"d\262","\x62\x51" },
#line 2161 "trad2simp.in"
    {"\222{","\x94\xec" },
#line 405 "trad2simp.in"
    {"]\240","\x5c\xe4" },
#line 21 "trad2simp.in"
    {"\"R","\x22\x48" },
#line 2842 "trad2simp.in"
    {"\236}","\x76\xd0" },
#line 2663 "trad2simp.in"
    {"\233Z","\x9c\x7c" },
#line 682 "trad2simp.in"
    {"g'","\x80\xe7" },
#line 1668 "trad2simp.in"
    {"\211o","\x88\x6c" },
#line 1350 "trad2simp.in"
    {"}\362","\x7f\x08" },
#line 1853 "trad2simp.in"
    {"\213\200","\x8b\xfb" },
#line 983 "trad2simp.in"
    {"rF","\x58\x99" },
#line 2674 "trad2simp.in"
    {"\233\222","\x9c\x8b" },
#line 397 "trad2simp.in"
    {"]3","\x5d\x5b" },
#line 1958 "trad2simp.in"
    {"\216_","\x8f\xf9" },
#line 2670 "trad2simp.in"
    {"\233\203","\x9c\x86" },
#line 2675 "trad2simp.in"
    {"\233\223","\x9c\x8a" },
#line 2535 "trad2simp.in"
    {"\230\362","\x99\x6e" },
#line 2658 "trad2simp.in"
    {"\233)","\x96\x0b" },
#line 2795 "trad2simp.in"
    {"\235\212","\x9e\x52" },
#line 2331 "trad2simp.in"
    {"\224R","\x92\x74" },
#line 2772 "trad2simp.in"
    {"\2354","\x9e\x3b" },
#line 2067 "trad2simp.in"
    {"\221\006","\x90\xd3" },
#line 1962 "trad2simp.in"
    {"\216g","\x7c\xdf" },
#line 2667 "trad2simp.in"
    {"\233t","\x9c\x82" },
#line 1844 "trad2simp.in"
    {"\213_","\x56\x6a" },
#line 2770 "trad2simp.in"
    {"\235/","\x9e\x38" },
#line 552 "trad2simp.in"
    {"b\321","\x94\xb3" },
#line 2797 "trad2simp.in"
    {"\235\223","\x9e\x4b" },
#line 2884 "trad2simp.in"
    {"\237\224","\x9f\x9a" },
#line 528 "trad2simp.in"
    {"a\362","\x60\xe9" },
#line 432 "trad2simp.in"
    {"^w","\x5e\x76" },
#line 2325 "trad2simp.in"
    {"\224:","\x94\xdb" },
#line 2062 "trad2simp.in"
    {"\220\212","\x8f\xb9" },
#line 2799 "trad2simp.in"
    {"\235\230","\x9e\x55" },
#line 795 "trad2simp.in"
    {"k\262","\x6b\x7c" },
#line 2339 "trad2simp.in"
    {"\224j","\x70\x89" },
#line 2929 "trad2simp.in"
    {"^rN~","\x5e\xb7\x4e\x7e" },
#line 2655 "trad2simp.in"
    {"\233%","\x65\x97" },
#line 1198 "trad2simp.in"
    {"{g","\x7b\x15" },
#line 2808 "trad2simp.in"
    {"\235\264","\x9e\x64" },
#line 1755 "trad2simp.in"
    {"\212\207","\x59\x38" },
#line 2730 "trad2simp.in"
    {"\234<","\x9c\xdb" },
#line 1917 "trad2simp.in"
    {"\214\341","\x8d\x53" },
#line 1005 "trad2simp.in"
    {"sj","\x72\xef" },
#line 2259 "trad2simp.in"
    {"\223\207","\x95\x45" },
#line 2426 "trad2simp.in"
    {"\226\313","\x96\xbd" },
#line 665 "trad2simp.in"
    {"f\230","\x96\x33" },
#line 1979 "trad2simp.in"
    {"\216\313","\x8f\x67" },
#line 1608 "trad2simp.in"
    {"\207_","\x73\x2c" },
#line 2368 "trad2simp.in"
    {"\225\243","\x96\x01" },
#line 589 "trad2simp.in"
    {"d{","\x63\xba" },
#line 1839 "trad2simp.in"
    {"\213V","\x8c\x2e" },
#line 1975 "trad2simp.in"
    {"\216\246","\x8e\x9c" },
#line 210 "trad2simp.in"
    {"U\232","\x55\x24" },
#line 621 "trad2simp.in"
    {"d\362","\x63\xb7" },
#line 1753 "trad2simp.in"
    {"\212\205","\x8b\xdb" },
#line 1696 "trad2simp.in"
    {"\212\003","\x8b\xa3" },
#line 2165 "trad2simp.in"
    {"\222\205","\x94\xdc" },
#line 2320 "trad2simp.in"
    {"\2242","\x95\x6f" },
#line 754 "trad2simp.in"
    {"j\320","\x7d\x2f" },
#line 2777 "trad2simp.in"
    {"\235B","\x9e\x3a" },
#line 2115 "trad2simp.in"
    {"\222\003","\x94\x98" },
#line 2785 "trad2simp.in"
    {"\235a","\x9e\x49" },
#line 1208 "trad2simp.in"
    {"{\313","\x7b\xa7" },
#line 676 "trad2simp.in"
    {"f\340","\x65\xf7" },
#line 2790 "trad2simp.in"
    {"\235p","\x96\xd5" },
#line 2465 "trad2simp.in"
    {"\230\003","\x98\x77" },
#line 784 "trad2simp.in"
    {"kw","\x53\x86" },
#line 1217 "trad2simp.in"
    {"|\021","\x84\xd1" },
#line 1913 "trad2simp.in"
    {"\214\332","\x8d\x49" },
#line 163 "trad2simp.in"
    {"R\336","\x52\xb3" },
#line 1327 "trad2simp.in"
    {"}\276","\x7e\xeb" },
#line 2344 "trad2simp.in"
    {"\224w","\x95\x4a" },
#line 656 "trad2simp.in"
    {"fB","\x65\xf6" },
#line 2634 "trad2simp.in"
    {"\232U","\x9a\x84" },
#line 265 "trad2simp.in"
    {"V\321","\x56\x31" },
#line 344 "trad2simp.in"
    {"Z\365","\x59\xa9" },
#line 1215 "trad2simp.in"
    {"|\000","\x7b\xa6" },
#line 1437 "trad2simp.in"
    {"\200$","\x85\xc9" },
#line 759 "trad2simp.in"
    {"j\336","\x6a\x7c" },
#line 2297 "trad2simp.in"
    {"\223\365","\x94\xe7" },
#line 2813 "trad2simp.in"
    {"\235\302","\x9e\x5e" },
#line 542 "trad2simp.in"
    {"b2","\x62\x0f" },
#line 1011 "trad2simp.in"
    {"sw","\x72\xb7" },
#line 657 "trad2simp.in"
    {"fI","\x66\x4b" },
#line 872 "trad2simp.in"
    {"o2","\x6d\xa8" },
#line 2741 "trad2simp.in"
    {"\234_","\x9c\x8e" },
#line 2431 "trad2simp.in"
    {"\226\336","\x9e\x21" },
#line 1273 "trad2simp.in"
    {"}.","\x62\x4e" },
#line 2129 "trad2simp.in"
    {"\222.","\x94\xcc" },
#line 2353 "trad2simp.in"
    {"\225\200","\x95\xe8" },
#line 2230 "trad2simp.in"
    {"\223.","\x95\x22" },
#line 1972 "trad2simp.in"
    {"\216\232","\x8d\xf9" },
#line 1014 "trad2simp.in"
    {"s{","\x73\x2e" },
#line 958 "trad2simp.in"
    {"q\276","\x70\xbd" },
#line 2744 "trad2simp.in"
    {"\234g","\x9c\xe2" },
#line 1570 "trad2simp.in"
    {"\205\246","\x83\x50" },
#line 1033 "trad2simp.in"
    {"t\211","\x74\x0f" },
#line 1662 "trad2simp.in"
    {"\211V","\x88\x84" },
#line 396 "trad2simp.in"
    {"]\"","\x5c\xe5" },
#line 884 "trad2simp.in"
    {"ow","\x6e\xd7" },
#line 2778 "trad2simp.in"
    {"\235C","\x9e\x3c" },
#line 1371 "trad2simp.in"
    {"~.","\x7f\x29" },
#line 984 "trad2simp.in"
    {"rX","\x72\x4d" },
#line 1862 "trad2simp.in"
    {"\213\232","\x8d\x5e" },
#line 817 "trad2simp.in"
    {"l\222","\x6c\xa1" },
#line 1487 "trad2simp.in"
    {"\201\332","\x80\xea" },
#line 1468 "trad2simp.in"
    {"\201k","\x80\xbf" },
#line 1062 "trad2simp.in"
    {"u\362","\x9e\xbb" },
#line 45 "trad2simp.in"
    {"N~","\x5e\x72" },
#line 2737 "trad2simp.in"
    {"\234V","\x9c\xdc" },
#line 1680 "trad2simp.in"
    {"\211\246","\x89\xce" },
#line 659 "trad2simp.in"
    {"f^","\x66\xe6" },
#line 763 "trad2simp.in"
    {"j\350","\x68\x0c" },
#line 2051 "trad2simp.in"
    {"\220^","\x90\x12" },
#line 1248 "trad2simp.in"
    {"|\376","\x7e\xa0" },
#line 1527 "trad2simp.in"
    {"\204I","\x53\xf6" },
#line 1309 "trad2simp.in"
    {"}\234","\x7e\xfc" },
#line 1219 "trad2simp.in"
    {"|!","\x7b\x80" },
#line 604 "trad2simp.in"
    {"d\276","\x63\x1d" },
#line 2171 "trad2simp.in"
    {"\222\234","\x88\x54" },
#line 1347 "trad2simp.in"
    {"}\354","\x7f\x05" },
#line 64 "trad2simp.in"
    {"P\006","\x4f\xe9" },
#line 1448 "trad2simp.in"
    {"\200w","\x80\x4c" },
#line 403 "trad2simp.in"
    {"]\224","\x5d\x5a" },
#line 74 "trad2simp.in"
    {"Pu","\x4f\xa6" },
#line 2935 "trad2simp.in"
    {"^rWd","\x4e\x7e\x57\x64" },
#line 993 "trad2simp.in"
    {"r\332","\x65\xe6" },
#line 2080 "trad2simp.in"
    {"\221V","\x9e\x29" },
#line 1415 "trad2simp.in"
    {"~\234","\x7f\x06" },
#line 1225 "trad2simp.in"
    {"|C","\x7b\xee" },
#line 2642 "trad2simp.in"
    {"\232j","\x9a\x8a" },
#line 762 "trad2simp.in"
    {"j\347","\x69\xe0" },
#line 1957 "trad2simp.in"
    {"\216U","\x8d\xf8" },
#line 2695 "trad2simp.in"
    {"\233\341","\x9c\xb1" },
#line 2662 "trad2simp.in"
    {"\233X","\x9b\x47" },
#line 305 "trad2simp.in"
    {"X\276","\x57\xa6" },
#line 1469 "trad2simp.in"
    {"\201s","\x81\x1a" },
#line 2094 "trad2simp.in"
    {"\221\313","\x91\xca" },
#line 2854 "trad2simp.in"
    {"\236\366","\x9e\xe1" },
#line 2389 "trad2simp.in"
    {"\225\313","\x96\x15" },
#line 1057 "trad2simp.in"
    {"u\207","\x75\x74" },
#line 969 "trad2simp.in"
    {"q\354","\x6b\xc1" },
#line 2302 "trad2simp.in"
    {"\224\003","\x94\xd9" },
#line 2870 "trad2simp.in"
    {"\237_","\x9f\x83" },
#line 1232 "trad2simp.in"
    {"|d","\x7b\x7e" },
#line 2654 "trad2simp.in"
    {"\233\"","\x9b\x13" },
#line 1017 "trad2simp.in"
    {"s\205","\x59\x99" },
#line 889 "trad2simp.in"
    {"o\207","\x6d\x9d" },
#line 1758 "trad2simp.in"
    {"\212\221","\x8b\xf3" },
#line 2875 "trad2simp.in"
    {"\237g","\x55\x6e" },
#line 1307 "trad2simp.in"
    {"}\221","\x63\x46" },
#line 559 "trad2simp.in"
    {"c\203","\x62\x6b" },
#line 2166 "trad2simp.in"
    {"\222\221","\x94\xe3" },
#line 810 "trad2simp.in"
    {"l3","\x6c\x32" },
#line 1760 "trad2simp.in"
    {"\212\225","\x8b\xde" },
#line 215 "trad2simp.in"
    {"U\262","\x54\xdf" },
#line 1530 "trad2simp.in"
    {"\204d","\x83\x6e" },
#line 450 "trad2simp.in"
    {"^\354","\x5e\x90" },
#line 2095 "trad2simp.in"
    {"\221\320","\x53\x98" },
#line 2391 "trad2simp.in"
    {"\225\320","\x96\x17" },
#line 617 "trad2simp.in"
    {"d\354","\x62\xdf" },
#line 1607 "trad2simp.in"
    {"\207U","\x86\x80" },
#line 2318 "trad2simp.in"
    {"\224.","\x95\x70" },
#line 209 "trad2simp.in"
    {"U\216","\x35\x9e" },
#line 2819 "trad2simp.in"
    {"\235\332","\x9e\x68" },
#line 511 "trad2simp.in"
    {"a\221","\x51\xed" },
#line 2719 "trad2simp.in"
    {"\234'","\x4c\xa2" },
#line 1767 "trad2simp.in"
    {"\212\244","\x8b\xef" },
#line 1556 "trad2simp.in"
    {"\205U","\x83\xb8" },
#line 734 "trad2simp.in"
    {"j:","\x68\x66" },
#line 898 "trad2simp.in"
    {"o\276","\x3c\xe0" },
#line 300 "trad2simp.in"
    {"X\234","\x57\x60" },
#line 2397 "trad2simp.in"
    {"\225\336","\x96\x1a" },
#line 2239 "trad2simp.in"
    {"\223G","\x95\x34" },
#line 1247 "trad2simp.in"
    {"|\366","\x7c\x9c" },
#line 50 "trad2simp.in"
    {"OG","\x4f\x2b" },
#line 2473 "trad2simp.in"
    {"\230\017","\x98\x83" },
#line 1452 "trad2simp.in"
    {"\200\205","\x80\x83" },
#line 2693 "trad2simp.in"
    {"\233\333","\x9c\xb7" },
#line 2072 "trad2simp.in"
    {"\221'","\x90\x93" },
#line 246 "trad2simp.in"
    {"V\207","\x54\x13" },
#line 1078 "trad2simp.in"
    {"vG","\x75\xeb" },
#line 803 "trad2simp.in"
    {"k\354","\x74\x03" },
#line 514 "trad2simp.in"
    {"a\244","\x61\x24" },
#line 941 "trad2simp.in"
    {"p\244","\x71\x67" },
#line 1114 "trad2simp.in"
    {"wj","\x77\x7e" },
#line 494 "trad2simp.in"
    {"aG","\x6b\xb7" },
#line 919 "trad2simp.in"
    {"p\017","\x6d\x4f" },
#line 680 "trad2simp.in"
    {"g\003","\x4f\x1a" },
#line 2651 "trad2simp.in"
    {"\233\006","\x67\x7e" },
#line 38 "trad2simp.in"
    {"IG","\x49\x82" },
#line 2838 "trad2simp.in"
    {"\236u","\x53\x64" },
#line 2416 "trad2simp.in"
    {"\226\216","\x96\x36" },
#line 2573 "trad2simp.in"
    {"\231E","\x99\x92" },
#line 1708 "trad2simp.in"
    {"\212\035","\x8b\xb6" },
#line 147 "trad2simp.in"
    {"Rw","\x94\xf2" },
#line 1270 "trad2simp.in"
    {"}\035","\x7e\xb4" },
#line 320 "trad2simp.in"
    {"Y\"","\x68\xa6" },
#line 661 "trad2simp.in"
    {"fs","\x66\x70" },
#line 1583 "trad2simp.in"
    {"\206\000","\x84\x1a" },
#line 2751 "trad2simp.in"
    {"\234\347","\x51\xeb" },
#line 299 "trad2simp.in"
    {"X\221","\x58\x92" },
#line 2757 "trad2simp.in"
    {"\235\006","\x9e\x29" },
#line 1555 "trad2simp.in"
    {"\205R","\x83\x6c" },
#line 1861 "trad2simp.in"
    {"\213\226","\x8c\x36" },
#line 1439 "trad2simp.in"
    {"\200.","\x80\x22" },
#line 687 "trad2simp.in"
    {"g\365","\x68\x05" },
#line 1870 "trad2simp.in"
    {"\214V","\x4e\x8d" },
#line 1606 "trad2simp.in"
    {"\207:","\x97\x13" },
#line 1857 "trad2simp.in"
    {"\213\216","\x96\xe0" },
#line 2550 "trad2simp.in"
    {"\231\021","\x99\x7d" },
#line 2666 "trad2simp.in"
    {"\233o","\x9c\x81" },
#line 1365 "trad2simp.in"
    {"~\035","\x7f\x1c" },
#line 2590 "trad2simp.in"
    {"\231\264","\x9a\x6f" },
#line 908 "trad2simp.in"
    {"o\354","\x6d\x5a" },
#line 2678 "trad2simp.in"
    {"\233\243","\x4c\x9f" },
#line 1535 "trad2simp.in"
    {"\204\224","\x83\xb3" },
#line 683 "trad2simp.in"
    {"g.","\x67\x2f" },
#line 2106 "trad2simp.in"
    {"\221\347","\x94\x8f" },
#line 1560 "trad2simp.in"
    {"\205j","\x82\x9c" },
#line 922 "trad2simp.in"
    {"p\035","\x6c\xa5" },
#line 1966 "trad2simp.in"
    {"\216\213","\x8d\xfb" },
#line 2789 "trad2simp.in"
    {"\235o","\x9e\x4e" },
#line 2609 "trad2simp.in"
    {"\232\003","\x54\x46" },
#line 660 "trad2simp.in"
    {"fb","\x66\x70" },
#line 229 "trad2simp.in"
    {"V.","\x55\x20" },
#line 1850 "trad2simp.in"
    {"\213w","\x62\xa4" },
#line 2597 "trad2simp.in"
    {"\231\330","\x9a\x80" },
#line 648 "trad2simp.in"
    {"e\203","\x6b\xd9" },
#line 1711 "trad2simp.in"
    {"\212#","\x8b\xc0" },
#line 2434 "trad2simp.in"
    {"\226\362","\x4e\x91" },
#line 2125 "trad2simp.in"
    {"\222#","\x94\x99" },
#line 1988 "trad2simp.in"
    {"\216\362","\x8f\x71" },
#line 2735 "trad2simp.in"
    {"\234R","\x9c\xdf" },
#line 1666 "trad2simp.in"
    {"\211j","\x88\x9c" },
#line 1202 "trad2simp.in"
    {"{\213","\x7b\x3a" },
#line 2557 "trad2simp.in"
    {"\231\034","\x99\x83" },
#line 554 "trad2simp.in"
    {"c6","\x5c\x40" },
#line 790 "trad2simp.in"
    {"k\244","\x6b\x87" },
#line 1684 "trad2simp.in"
    {"\211\262","\x89\xd0" },
#line 1880 "trad2simp.in"
    {"\214\247","\x8d\x2b" },
#line 773 "trad2simp.in"
    {"k\017","\x69\x24" },
#line 40 "trad2simp.in"
    {"I\237","\x49\xb7" },
#line 1368 "trad2simp.in"
    {"~#","\x53\xbf" },
#line 2575 "trad2simp.in"
    {"\231I","\x99\x91" },
#line 1604 "trad2simp.in"
    {"\206\373","\x87\x15" },
#line 1465 "trad2simp.in"
    {"\201V","\x80\xe8" },
#line 2563 "trad2simp.in"
    {"\2313","\x99\x67" },
#line 150 "trad2simp.in"
    {"R\207","\x52\x67" },
#line 1213 "trad2simp.in"
    {"{\362","\x5f\x57" },
#line 1676 "trad2simp.in"
    {"\211\226","\x89\xc6" },
#line 1588 "trad2simp.in"
    {"\206\013","\x82\xf9" },
#line 2619 "trad2simp.in"
    {"\232.","\x9a\x9d" },
#line 1673 "trad2simp.in"
    {"\211\216","\x89\xc3" },
#line 1915 "trad2simp.in"
    {"\214\336","\x8d\x4f" },
#line 1562 "trad2simp.in"
    {"\205w","\x84\xe3" },
#line 413 "trad2simp.in"
    {"]\313","\x5c\xbf" },
#line 1178 "trad2simp.in"
    {"za","\x7a\x51" },
#line 2559 "trad2simp.in"
    {"\231!","\x99\x85" },
#line 1657 "trad2simp.in"
    {"\2112","\x88\xe4" },
#line 1168 "trad2simp.in"
    {"z\034","\x68\xf1" },
#line 284 "trad2simp.in"
    {"X\035","\x57\xda" },
#line 2078 "trad2simp.in"
    {"\221:","\x90\x9d" },
#line 595 "trad2simp.in"
    {"d\237","\x63\x22" },
#line 2930 "trad2simp.in"
    {"^rQC","\x4e\x7e\x51\x43" },
#line 379 "trad2simp.in"
    {"\\F","\x5c\x4a" },
#line 635 "trad2simp.in"
    {"e\034","\x64\x3a" },
#line 96 "trad2simp.in"
    {"P\336","\x4f\x2a" },
#line 1622 "trad2simp.in"
    {"\207\362","\x86\x6b" },
#line 1532 "trad2simp.in"
    {"\204o","\x83\x6f" },
#line 81 "trad2simp.in"
    {"P\232","\x65\x48" },
#line 893 "trad2simp.in"
    {"o\244","\x6c\xfd" },
#line 2572 "trad2simp.in"
    {"\231C","\x99\x8d" },
#line 2583 "trad2simp.in"
    {"\231^","\x99\x8b" },
#line 2724 "trad2simp.in"
    {"\2342","\x9c\xcc" },
#line 1115 "trad2simp.in"
    {"w\207","\x77\x2f" },
#line 468 "trad2simp.in"
    {"_\221","\x5f\x84" },
#line 1698 "trad2simp.in"
    {"\212\012","\x8b\xaf" },
#line 1672 "trad2simp.in"
    {"\211\213","\x89\xc1" },
#line 2311 "trad2simp.in"
    {"\224\035","\x95\x62" },
#line 1201 "trad2simp.in"
    {"{\207","\x4e\x2a" },
#line 653 "trad2simp.in"
    {"e\302","\x65\xd7" },
#line 170 "trad2simp.in"
    {"R\365","\x52\xb1" },
#line 407 "trad2simp.in"
    {"]\247","\x5c\xc4" },
#line 567 "trad2simp.in"
    {"c\332","\x62\x6c" },
#line 557 "trad2simp.in"
    {"ck","\x62\x6a" },
#line 2470 "trad2simp.in"
    {"\230\012","\x98\x7c" },
#line 2747 "trad2simp.in"
    {"\234w","\x9c\xc4" },
#line 2360 "trad2simp.in"
    {"\225\216","\x95\xf3" },
#line 2866 "trad2simp.in"
    {"\237R","\x9f\x7f" },
#line 2075 "trad2simp.in"
    {"\2212","\x90\xf8" },
#line 651 "trad2simp.in"
    {"e\267","\x65\xad" },
#line 1357 "trad2simp.in"
    {"~\012","\x7f\x22" },
#line 1854 "trad2simp.in"
    {"\213\205","\x8c\x09" },
#line 1795 "trad2simp.in"
    {"\212\342","\x8b\xe8" },
#line 151 "trad2simp.in"
    {"R\211","\x52\x18" },
#line 249 "trad2simp.in"
    {"V\225","\x56\x5c" },
#line 2565 "trad2simp.in"
    {"\2316","\x99\x89" },
#line 2293 "trad2simp.in"
    {"\223\342","\x95\x56" },
#line 1474 "trad2simp.in"
    {"\201\232","\x80\xa4" },
#line 99 "trad2simp.in"
    {"P\350","\x50\x7e" },
#line 991 "trad2simp.in"
    {"r\247","\x72\x7a" },
#line 2528 "trad2simp.in"
    {"\230\342","\x99\x65" },
#line 742 "trad2simp.in"
    {"j\211","\x67\xfd" },
#line 44 "trad2simp.in"
    {"N<","\x4e\x95" },
#line 375 "trad2simp.in"
    {"\\\013","\x5b\xfb" },
#line 2876 "trad2simp.in"
    {"\237j","\x9f\x8a" },
#line 2352 "trad2simp.in"
    {"\225w","\x95\x7f" },
#line 1922 "trad2simp.in"
    {"\214\347","\x8d\x55" },
#line 684 "trad2simp.in"
    {"gG","\x57\x2c" },
#line 2414 "trad2simp.in"
    {"\226\211","\x96\x67" },
#line 1964 "trad2simp.in"
    {"\216\211","\x8d\xb8" },
#line 2679 "trad2simp.in"
    {"\233\246","\x9c\x96" },
#line 2358 "trad2simp.in"
    {"\225\213","\x5f\x00" },
#line 1592 "trad2simp.in"
    {"\206\"","\x83\x0f" },
#line 568 "trad2simp.in"
    {"c\333","\x63\x62" },
#line 1230 "trad2simp.in"
    {"|_","\x7c\x41" },
#line 475 "trad2simp.in"
    {"`F","\x60\x52" },
#line 1756 "trad2simp.in"
    {"\212\214","\x5f\xd7" },
#line 384 "trad2simp.in"
    {"\\d","\x5c\x42" },
#line 1125 "trad2simp.in"
    {"xC","\x67\x31" },
#line 693 "trad2simp.in"
    {"h\230","\x67\xa7" },
#line 2261 "trad2simp.in"
    {"\223\214","\x95\x70" },
#line 1908 "trad2simp.in"
    {"\214\321","\x8d\x48" },
#line 1048 "trad2simp.in"
    {"u#","\x4e\xa7" },
#line 1492 "trad2simp.in"
    {"\201\350","\x4e\x34" },
#line 744 "trad2simp.in"
    {"j\234","\x68\x67" },
#line 766 "trad2simp.in"
    {"j\354","\x69\x87" },
#line 1408 "trad2simp.in"
    {"~\214","\x7e\xed" },
#line 447 "trad2simp.in"
    {"^\342","\x5e\x9f" },
#line 1126 "trad2simp.in"
    {"xd","\x78\x56" },
#line 870 "trad2simp.in"
    {"o#","\x6d\x9f" },
#line 94 "trad2simp.in"
    {"P\321","\x4f\xa8" },
#line 1725 "trad2simp.in"
    {"\212P","\x8b\xc8" },
#line 1288 "trad2simp.in"
    {"}P","\x7e\xd3" },
#line 2942 "trad2simp.in"
    {"^rv\333","\x5e\x72\x76\xdb" },
#line 282 "trad2simp.in"
    {"X\012","\x57\xa9" },
#line 2880 "trad2simp.in"
    {"\237w","\x9f\x8c" },
#line 2613 "trad2simp.in"
    {"\232\017","\x9a\x90" },
#line 2850 "trad2simp.in"
    {"\236\336","\x70\xb9" },
#line 864 "trad2simp.in"
    {"n\376","\x6e\xda" },
#line 323 "trad2simp.in"
    {"Yg","\x59\x65" },
#line 644 "trad2simp.in"
    {"eX","\x53\xd9" },
#line 1194 "trad2simp.in"
    {"z\366","\x7a\xde" },
#line 1117 "trad2simp.in"
    {"w\234","\x40\x56" },
#line 2676 "trad2simp.in"
    {"\233\232","\x9c\x92" },
#line 863 "trad2simp.in"
    {"n\373","\x6d\x50" },
#line 1863 "trad2simp.in"
    {"\213\234","\x8c\x20" },
#line 486 "trad2simp.in"
    {"`\373","\x60\x7b" },
#line 1773 "trad2simp.in"
    {"\212\260","\x8c\x01" },
#line 772 "trad2simp.in"
    {"k\012","\x67\x43" },
#line 1317 "trad2simp.in"
    {"}\260","\x7e\xfe" },
#line 155 "trad2simp.in"
    {"R\221","\x52\x42" },
#line 2021 "trad2simp.in"
    {"\217E","\x8f\x95" },
#line 314 "trad2simp.in"
    {"X\342","\x57\x5c" },
#line 2276 "trad2simp.in"
    {"\223\260","\x95\x52" },
#line 637 "trad2simp.in"
    {"e\"","\x65\x12" },
#line 2656 "trad2simp.in"
    {"\233'","\x95\xf9" },
#line 2013 "trad2simp.in"
    {"\217/","\x8f\x91" },
#line 389 "trad2simp.in"
    {"\\\366","\x5c\x9b" },
#line 843 "trad2simp.in"
    {"n^","\x6d\x48" },
#line 1888 "trad2simp.in"
    {"\214\262","\x8d\x40" },
#line 1037 "trad2simp.in"
    {"t\260","\x73\xaf" },
#line 2800 "trad2simp.in"
    {"\235\232","\x9e\x57" },
#line 2011 "trad2simp.in"
    {"\217)","\x8f\x88" },
#line 1540 "trad2simp.in"
    {"\204\313","\x76\xd6" },
#line 2928 "trad2simp.in"
    {"^rN\035","\x4e\x7e\x4e\x1d" },
#line 72 "trad2simp.in"
    {"Pj","\x90\x3c" },
#line 1182 "trad2simp.in"
    {"zk","\x83\xb7" },
#line 1098 "trad2simp.in"
    {"v\260","\x75\xb1" },
#line 1585 "trad2simp.in"
    {"\206\006","\x82\xa6" },
#line 2893 "trad2simp.in"
    {"\376P","\xff\x0c" },
#line 1968 "trad2simp.in"
    {"\216\221","\x8e\x2f" },
#line 2599 "trad2simp.in"
    {"\231\333","\x9a\x76" },
#line 1239 "trad2simp.in"
    {"|\247","\x59\x86" },
#line 1620 "trad2simp.in"
    {"\207\354","\x87\x49" },
#line 942 "trad2simp.in"
    {"p\260","\x70\xae" },
#line 2417 "trad2simp.in"
    {"\226\225","\x96\x68" },
#line 2851 "trad2simp.in"
    {"\236\350","\x51\x5a" },
#line 1971 "trad2simp.in"
    {"\216\225","\x8e\x70" },
#line 2699 "trad2simp.in"
    {"\233\350","\x9c\xb8" },
#line 78 "trad2simp.in"
    {"P\226","\x4f\x27" },
#line 2009 "trad2simp.in"
    {"\217%","\x8f\x8a" },
#line 399 "trad2simp.in"
    {"]R","\x5c\xa9" },
#line 137 "trad2simp.in"
    {"RG","\x52\x19" },
#line 867 "trad2simp.in"
    {"o\012","\x6e\x87" },
#line 2382 "trad2simp.in"
    {"\225\276","\x96\x08" },
#line 2108 "trad2simp.in"
    {"\221\365","\x94\x97" },
#line 2022 "trad2simp.in"
    {"\217F","\x8f\x98" },
#line 1602 "trad2simp.in"
    {"\206o","\x86\x6c" },
#line 1242 "trad2simp.in"
    {"|\336","\x7c\xaa" },
#line 1860 "trad2simp.in"
    {"\213\225","\x8c\x30" },
#line 1137 "trad2simp.in"
    {"x\332","\x78\x16" },
#line 2019 "trad2simp.in"
    {"\217B","\x6b\xc2" },
#line 200 "trad2simp.in"
    {"U\035","\x55\xca" },
#line 2028 "trad2simp.in"
    {"\217a","\x8f\x94" },
#line 2419 "trad2simp.in"
    {"\226\244","\x98\x93" },
#line 1678 "trad2simp.in"
    {"\211\234","\x77\x3a" },
#line 2005 "trad2simp.in"
    {"\217\034","\x8f\x8e" },
#line 1302 "trad2simp.in"
    {"}\201","\x7e\xd1" },
#line 2698 "trad2simp.in"
    {"\233\347","\x9c\xb3" },
#line 18 "trad2simp.in"
    {" %","\x00\xa8" },
#line 654 "trad2simp.in"
    {"e\333","\x5e\x61" },
#line 2357 "trad2simp.in"
    {"\225\211","\x95\xed" },
#line 2023 "trad2simp.in"
    {"\217I","\x8f\x6c" },
#line 1291 "trad2simp.in"
    {"}]","\x7e\xd4" },
#line 677 "trad2simp.in"
    {"f\350","\x66\x3d" },
#line 2616 "trad2simp.in"
    {"\232#","\x9b\x03" },
#line 2014 "trad2simp.in"
    {"\2173","\x8f\x8f" },
#line 482 "trad2simp.in"
    {"`\341","\x60\x76" },
#line 981 "trad2simp.in"
    {"r:","\x72\x37" },
#line 1096 "trad2simp.in"
    {"v\201","\x76\x82" },
#line 2493 "trad2simp.in"
    {"\230L","\x98\x98" },
#line 780 "trad2simp.in"
    {"kP","\x6b\x27" },
#line 629 "trad2simp.in"
    {"e\006","\x64\xb5" },
#line 1566 "trad2simp.in"
    {"\205\221","\x59\xdc" },
#line 1314 "trad2simp.in"
    {"}\253","\x7e\xbf" },
#line 2048 "trad2simp.in"
    {"\220U","\x8f\xdd" },
#line 2179 "trad2simp.in"
    {"\222\253","\x94\xef" },
#line 645 "trad2simp.in"
    {"eu","\x65\x4c" },
#line 838 "trad2simp.in"
    {"n\"","\x6c\xa8" },
#line 1179 "trad2simp.in"
    {"zb","\x79\xfd" },
#line 2568 "trad2simp.in"
    {"\231<","\x99\x69" },
#line 1505 "trad2simp.in"
    {"\202q","\x82\x70" },
#line 936 "trad2simp.in"
    {"p]","\x70\x4f" },
#line 1701 "trad2simp.in"
    {"\212\020","\x8b\xa6" },
#line 2083 "trad2simp.in"
    {"\221\234","\x4e\x11" },
#line 1259 "trad2simp.in"
    {"}\020","\x7e\xbd" },
#line 2120 "trad2simp.in"
    {"\222\020","\x94\xa4" },
#line 988 "trad2simp.in"
    {"r\226","\x83\x66" },
#line 2217 "trad2simp.in"
    {"\223\020","\x95\x25" },
#line 383 "trad2simp.in"
    {"\\b","\x5c\x61" },
#line 701 "trad2simp.in"
    {"h\341","\x3b\x4e" },
#line 2474 "trad2simp.in"
    {"\230\020","\x98\x84" },
#line 2904 "trad2simp.in"
    {"\376]","\xff\x3b" },
#line 515 "trad2simp.in"
    {"a\253","\x60\xaf" },
#line 41 "trad2simp.in"
    {"Lw","\x4c\xa3" },
#line 1745 "trad2simp.in"
    {"\212r","\x8b\xe5" },
#line 1299 "trad2simp.in"
    {"}r","\x4e\x1d" },
#line 980 "trad2simp.in"
    {"r2","\x4e\x3a" },
#line 544 "trad2simp.in"
    {"bP","\x4e\xc2" },
#line 1359 "trad2simp.in"
    {"~\020","\x7e\xc9" },
#line 745 "trad2simp.in"
    {"j\237","\x69\xda" },
#line 1243 "trad2simp.in"
    {"|\347","\x7c\xae" },
#line 2780 "trad2simp.in"
    {"\235R","\x9e\x46" },
#line 1824 "trad2simp.in"
    {"\213\035","\x8c\x22" },
#line 2030 "trad2simp.in"
    {"\217d","\x8f\x73" },
#line 1032 "trad2simp.in"
    {"tr","\x73\xb1" },
#line 1600 "trad2simp.in"
    {"\206_","\x53\xf7" },
#line 1716 "trad2simp.in"
    {"\2121","\x8b\xb8" },
#line 25 "trad2simp.in"
    {"%r","\xff\x3c" },
#line 1094 "trad2simp.in"
    {"vr","\x76\x6b" },
#line 1275 "trad2simp.in"
    {"}1","\x7e\xc2" },
#line 731 "trad2simp.in"
    {"j#","\x68\x37" },
#line 436 "trad2simp.in"
    {"^\253","\x5e\x93" },
#line 1128 "trad2simp.in"
    {"xo","\x78\x1a" },
#line 1498 "trad2simp.in"
    {"\202\013","\x88\x45" },
#line 467 "trad2simp.in"
    {"_\214","\x54\x0e" },
#line 2133 "trad2simp.in"
    {"\2227","\x94\xb4" },
#line 2786 "trad2simp.in"
    {"\235j","\x9e\x4c" },
#line 1601 "trad2simp.in"
    {"\206g","\x4e\x8f" },
#line 1023 "trad2simp.in"
    {"t1","\x96\xd5" },
#line 600 "trad2simp.in"
    {"d\253","\x62\x9a" },
#line 2488 "trad2simp.in"
    {"\2307","\x98\x94" },
#line 2362 "trad2simp.in"
    {"\225\221","\x95\xf2" },
#line 1373 "trad2simp.in"
    {"~1","\x7e\xb5" },
#line 2886 "trad2simp.in"
    {"\237\234","\x9f\x9f" },
#line 2584 "trad2simp.in"
    {"\231_","\x99\x95" },
#line 1379 "trad2simp.in"
    {"~7","\x7f\x15" },
#line 247 "trad2simp.in"
    {"V\214","\x54\xdc" },
#line 692 "trad2simp.in"
    {"h\224","\x68\x00" },
#line 1502 "trad2simp.in"
    {"\202d","\x82\x23" },
#line 2798 "trad2simp.in"
    {"\235\226","\x9e\x59" },
#line 1597 "trad2simp.in"
    {"\206V","\x54\x7c" },
#line 491 "trad2simp.in"
    {"a7","\x60\x7a" },
#line 1927 "trad2simp.in"
    {"\214\365","\x8d\x57" },
#line 301 "trad2simp.in"
    {"X\253","\x6a\x3d" },
#line 2350 "trad2simp.in"
    {"\224\201","\x49\x86" },
#line 2189 "trad2simp.in"
    {"\222\303","\x95\x12" },
#line 2280 "trad2simp.in"
    {"\223\303","\x95\x5e" },
#line 89 "trad2simp.in"
    {"P\276","\x50\x3e" },
#line 2668 "trad2simp.in"
    {"\233w","\x9c\x7f" },
#line 2889 "trad2simp.in"
    {"\3761","\xff\x5c" },
#line 402 "trad2simp.in"
    {"]\207","\x5c\x96" },
#line 126 "trad2simp.in"
    {"Q\212","\x51\x8c" },
#line 2329 "trad2simp.in"
    {"\224L","\x95\x54" },
#line 1528 "trad2simp.in"
    {"\204R","\x83\x6d" },
#line 130 "trad2simp.in"
    {"Q\310","\x51\xc0" },
#line 2369 "trad2simp.in"
    {"\225\244","\x54\x08" },
#line 1235 "trad2simp.in"
    {"|j","\x7c\x16" },
#line 791 "trad2simp.in"
    {"k\253","\x6b\x9a" },
#line 1101 "trad2simp.in"
    {"v\303","\x67\x6f" },
#line 1569 "trad2simp.in"
    {"\205\237","\x83\xb6" },
#line 1261 "trad2simp.in"
    {"}\024","\x7e\xaf" },
#line 846 "trad2simp.in"
    {"no","\x6c\x64" },
#line 2122 "trad2simp.in"
    {"\222\024","\x94\x9e" },
#line 1763 "trad2simp.in"
    {"\212\236","\x8b\xed" },
#line 2043 "trad2simp.in"
    {"\2202","\x8f\xdb" },
#line 1310 "trad2simp.in"
    {"}\236","\x7f\x0d" },
#line 519 "trad2simp.in"
    {"a\303","\x52\xe4" },
#line 2852 "trad2simp.in"
    {"\236\362","\x9e\xea" },
#line 2883 "trad2simp.in"
    {"\237\221","\x4d\xae" },
#line 1051 "trad2simp.in"
    {"u]","\x4e\xa9" },
#line 1548 "trad2simp.in"
    {"\205#","\x84\x8b" },
#line 2885 "trad2simp.in"
    {"\237\225","\x9f\x9b" },
#line 364 "trad2simp.in"
    {"[\330","\x7f\x6e" },
#line 2305 "trad2simp.in"
    {"\224\020","\x95\x63" },
#line 2055 "trad2simp.in"
    {"\220w","\x8f\xc1" },
#line 164 "trad2simp.in"
    {"R\342","\x52\xbf" },
#line 325 "trad2simp.in"
    {"Yj","\x59\x3a" },
#line 1479 "trad2simp.in"
    {"\201\276","\x81\x0d" },
#line 783 "trad2simp.in"
    {"kr","\x5c\x81" },
#line 102 "trad2simp.in"
    {"Q\000","\x4e\xea" },
#line 2824 "trad2simp.in"
    {"\235\362","\x9e\x6b" },
#line 286 "trad2simp.in"
    {"X1","\x62\xa5" },
#line 2342 "trad2simp.in"
    {"\224r","\x95\x76" },
#line 1924 "trad2simp.in"
    {"\214\354","\x8d\x26" },
#line 662 "trad2simp.in"
    {"f{","\x66\x97" },
#line 2592 "trad2simp.in"
    {"\231\320","\x9a\x7b" },
#line 1815 "trad2simp.in"
    {"\213\012","\x8c\x0e" },
#line 39 "trad2simp.in"
    {"I\233","\x49\xb6" },
#line 2432 "trad2simp.in"
    {"\226\342","\x79\xbb" },
#line 1009 "trad2simp.in"
    {"sr","\x83\xb7" },
#line 2134 "trad2simp.in"
    {"\2228","\x94\xb9" },
#line 2234 "trad2simp.in"
    {"\2238","\x94\xfc" },
#line 1504 "trad2simp.in"
    {"\202k","\x82\x3b" },
#line 2489 "trad2simp.in"
    {"\2308","\x98\x88" },
#line 2717 "trad2simp.in"
    {"\234#","\x9c\xa5" },
#line 153 "trad2simp.in"
    {"R\214","\x52\x3f" },
#line 2956 "trad2simp.in"
    {"_pf\016\217\203w@","\x5f\x70\x66\x0e\x8f\x83\x84\x57" },
#line 352 "trad2simp.in"
    {"[!","\x5a\xd2" },
#line 269 "trad2simp.in"
    {"W\013","\x56\xfd" },
#line 1533 "trad2simp.in"
    {"\204w","\x83\x64" },
#line 460 "trad2simp.in"
    {"_L","\x5f\x25" },
#line 1245 "trad2simp.in"
    {"|\362","\x7c\x9d" },
#line 2793 "trad2simp.in"
    {"\235\207","\x9e\x2b" },
#line 348 "trad2simp.in"
    {"[\013","\x5a\x75" },
#line 1737 "trad2simp.in"
    {"\212f","\x8b\xd5" },
#line 333 "trad2simp.in"
    {"Zf","\x59\x87" },
#line 1295 "trad2simp.in"
    {"}f","\x7e\xd9" },
#line 358 "trad2simp.in"
    {"[C","\x5a\x18" },
#line 2155 "trad2simp.in"
    {"\222f","\x94\xb2" },
#line 236 "trad2simp.in"
    {"V]","\x54\x9d" },
#line 818 "trad2simp.in"
    {"l\226","\x51\xb2" },
#line 2444 "trad2simp.in"
    {"\227Z","\x97\x53" },
#line 2029 "trad2simp.in"
    {"\217b","\x8f\x79" },
#line 1703 "trad2simp.in"
    {"\212\025","\x8b\xaa" },
#line 1262 "trad2simp.in"
    {"}\025","\x7e\xb0" },
#line 2061 "trad2simp.in"
    {"\220\207","\x8f\xe9" },
#line 2123 "trad2simp.in"
    {"\222\025","\x94\xae" },
#line 77 "trad2simp.in"
    {"P\221","\x67\x70" },
#line 2219 "trad2simp.in"
    {"\223\025","\x95\x1f" },
#line 49 "trad2simp.in"
    {"O\025","\x59\x2b" },
#line 845 "trad2simp.in"
    {"ng","\x6d\x8c" },
#line 1856 "trad2simp.in"
    {"\213\214","\x5b\xb4" },
#line 1444 "trad2simp.in"
    {"\200r","\x58\xf0" },
#line 1596 "trad2simp.in"
    {"\206U","\x59\x04" },
#line 1361 "trad2simp.in"
    {"~\025","\x7f\x0a" },
#line 789 "trad2simp.in"
    {"k\236","\x6b\x92" },
#line 510 "trad2simp.in"
    {"a\220","\x60\x1c" },
#line 2308 "trad2simp.in"
    {"\224\024","\x95\x61" },
#line 1787 "trad2simp.in"
    {"\212\322","\x8c\x05" },
#line 1333 "trad2simp.in"
    {"}\322","\x7e\xea" },
#line 2659 "trad2simp.in"
    {"\233.","\x96\x04" },
#line 2194 "trad2simp.in"
    {"\222\322","\x95\x0b" },
#line 920 "trad2simp.in"
    {"p\025","\x6f\xd2" },
#line 2913 "trad2simp.in"
    {"\376f","\xff\x1d" },
#line 900 "trad2simp.in"
    {"o\303","\x6d\x53" },
#line 1750 "trad2simp.in"
    {"\212|","\x8b\xd9" },
#line 241 "trad2simp.in"
    {"Vr","\x54\xd9" },
#line 194 "trad2simp.in"
    {"TB","\x54\x15" },
#line 278 "trad2simp.in"
    {"W\341","\x57\xad" },
#line 2441 "trad2simp.in"
    {"\227F","\x53\xc7" },
#line 2255 "trad2simp.in"
    {"\223|","\x94\x88" },
#line 2794 "trad2simp.in"
    {"\235\211","\x9e\x51" },
#line 457 "trad2simp.in"
    {"_7","\x5f\x3a" },
#line 2066 "trad2simp.in"
    {"\220\365","\x90\xae" },
#line 538 "trad2simp.in"
    {"b\024","\x62\x0b" },
#line 1565 "trad2simp.in"
    {"\205\214","\x82\x97" },
#line 2439 "trad2simp.in"
    {"\227B","\x96\xf3" },
#line 1473 "trad2simp.in"
    {"\201\225","\x81\x58" },
#line 1164 "trad2simp.in"
    {"y\310","\x7c\x7c" },
#line 592 "trad2simp.in"
    {"d\220","\x64\x91" },
#line 964 "trad2simp.in"
    {"q\322","\x70\xe7" },
#line 1403 "trad2simp.in"
    {"~|","\x7e\xe7" },
#line 1151 "trad2simp.in"
    {"yE","\x79\x46" },
#line 192 "trad2simp.in"
    {"T3","\x54\x34" },
#line 1095 "trad2simp.in"
    {"v|","\x53\xd1" },
#line 777 "trad2simp.in"
    {"k8","\x55\x09" },
#line 372 "trad2simp.in"
    {"[\366","\x5b\x9d" },
#line 664 "trad2simp.in"
    {"f\211","\x66\x56" },
#line 2443 "trad2simp.in"
    {"\227I","\x53\xc6" },
#line 506 "trad2simp.in"
    {"a|","\x62\x1a" },
#line 2324 "trad2simp.in"
    {"\2248","\x94\xce" },
#line 712 "trad2simp.in"
    {"iu","\x67\x81" },
#line 1807 "trad2simp.in"
    {"\212\372","\x8c\x1a" },
#line 212 "trad2simp.in"
    {"U\253","\x54\x03" },
#line 175 "trad2simp.in"
    {"S/","\x6c\x47" },
#line 2593 "trad2simp.in"
    {"\231\321","\x9a\x7d" },
#line 1752 "trad2simp.in"
    {"\212\204","\x8b\xd4" },
#line 2300 "trad2simp.in"
    {"\223\372","\x49\x7d" },
#line 196 "trad2simp.in"
    {"T\267","\x55\x55" },
#line 22 "trad2simp.in"
    {"\"f","\x22\x64" },
#line 2258 "trad2simp.in"
    {"\223\204","\x95\x3f" },
#line 2399 "trad2simp.in"
    {"\225\342","\x8f\x9f" },
#line 143 "trad2simp.in"
    {"R]","\x52\x65" },
#line 1594 "trad2simp.in"
    {"\206:","\x84\xe0" },
#line 741 "trad2simp.in"
    {"j\201","\x6a\xa9" },
#line 190 "trad2simp.in"
    {"T\013","\x5b\xf8" },
#line 360 "trad2simp.in"
    {"[k","\x5b\x59" },
#line 2461 "trad2simp.in"
    {"\227\373","\x97\xf5" },
#line 186 "trad2simp.in"
    {"S\264","\x53\xa3" },
#line 2580 "trad2simp.in"
    {"\231R","\x99\x76" },
#line 2027 "trad2simp.in"
    {"\217_","\x8f\x70" },
#line 454 "trad2simp.in"
    {"_\024","\x54\x0a" },
#line 2622 "trad2simp.in"
    {"\2327","\x9a\x9a" },
#line 532 "trad2simp.in"
    {"a\372","\x5f\xcf" },
#line 874 "trad2simp.in"
    {"o8","\x6e\x10" },
#line 469 "trad2simp.in"
    {"_\236","\x4e\xce" },
#line 678 "trad2simp.in"
    {"f\354","\x66\x52" },
#line 2406 "trad2simp.in"
    {"\226]","\x96\x55" },
#line 2501 "trad2simp.in"
    {"\230Y","\x98\xa1" },
#line 1150 "trad2simp.in"
    {"yB","\x4e\xd6" },
#line 2567 "trad2simp.in"
    {"\231:","\x99\x8e" },
#line 1956 "trad2simp.in"
    {"\216L","\x8d\xc4" },
#line 2673 "trad2simp.in"
    {"\233\221","\x9c\x8d" },
#line 224 "trad2simp.in"
    {"V\024","\x54\x55" },
#line 1390 "trad2simp.in"
    {"~Y","\x7f\xfb" },
#line 1139 "trad2simp.in"
    {"x\347","\x78\x9b" },
#line 2359 "trad2simp.in"
    {"\225\214","\x95\xf6" },
#line 1343 "trad2simp.in"
    {"}\343","\x7f\x18" },
#line 2197 "trad2simp.in"
    {"\222\343","\x94\xd8" },
#line 1724 "trad2simp.in"
    {"\212N","\x8b\xb5" },
#line 1287 "trad2simp.in"
    {"}N","\x7e\xd7" },
#line 193 "trad2simp.in"
    {"T6","\x54\x50" },
#line 69 "trad2simp.in"
    {"P#","\x4e\xff" },
#line 950 "trad2simp.in"
    {"qY","\x70\xdf" },
#line 1643 "trad2simp.in"
    {"\210Z","\x80\xe1" },
#line 2495 "trad2simp.in"
    {"\230N","\x81\x6d" },
#line 1046 "trad2simp.in"
    {"u\025","\x74\xee" },
#line 624 "trad2simp.in"
    {"d\372","\x64\x46" },
#line 1105 "trad2simp.in"
    {"v\343","\x76\xd1" },
#line 276 "trad2simp.in"
    {"Wu","\x4e\x18" },
#line 1951 "trad2simp.in"
    {"\216\020","\x8d\xf5" },
#line 2900 "trad2simp.in"
    {"\376Y","\xff\x08" },
#line 1136 "trad2simp.in"
    {"x\321","\x78\x59" },
#line 639 "trad2simp.in"
    {"e$","\x64\x4a" },
#line 526 "trad2simp.in"
    {"a\343","\x61\xd1" },
#line 2031 "trad2simp.in"
    {"\217\246","\x52\x9e" },
#line 2346 "trad2simp.in"
    {"\224|","\x95\x23" },
#line 1630 "trad2simp.in"
    {"\210\021","\x87\x7e" },
#line 198 "trad2simp.in"
    {"T\341","\x54\x58" },
#line 1722 "trad2simp.in"
    {"\212A","\x8b\xc2" },
#line 1817 "trad2simp.in"
    {"\213\020","\x8c\x27" },
#line 332 "trad2simp.in"
    {"ZA","\x5a\x04" },
#line 317 "trad2simp.in"
    {"X\372","\x58\xf6" },
#line 1015 "trad2simp.in"
    {"s|","\x73\x15" },
#line 233 "trad2simp.in"
    {"V8","\x54\x52" },
#line 2236 "trad2simp.in"
    {"\223A","\x95\x28" },
#line 1705 "trad2simp.in"
    {"\212\027","\x62\x58" },
#line 1803 "trad2simp.in"
    {"\212\363","\x8c\x19" },
#line 1264 "trad2simp.in"
    {"}\027","\x7e\xb1" },
#line 1460 "trad2simp.in"
    {"\201#","\x55\x07" },
#line 173 "trad2simp.in"
    {"S\013","\x96\x76" },
#line 1454 "trad2simp.in"
    {"\200\220","\x80\xf3" },
#line 448 "trad2simp.in"
    {"^\343","\x5e\x7f" },
#line 1740 "trad2simp.in"
    {"\212l","\x8b\xdf" },
#line 2478 "trad2simp.in"
    {"\230\027","\x98\x87" },
#line 334 "trad2simp.in"
    {"Zl","\x6d\xeb" },
#line 1639 "trad2simp.in"
    {"\210F","\x4f\x17" },
#line 2156 "trad2simp.in"
    {"\222l","\x94\xbc" },
#line 2250 "trad2simp.in"
    {"\223l","\x95\x39" },
#line 616 "trad2simp.in"
    {"d\343","\x63\x63" },
#line 1362 "trad2simp.in"
    {"~\027","\x7f\x1e" },
#line 2508 "trad2simp.in"
    {"\230l","\x98\xa5" },
#line 1663 "trad2simp.in"
    {"\211]","\x88\xe3" },
#line 2836 "trad2simp.in"
    {"\236\035","\x9e\x42" },
#line 239 "trad2simp.in"
    {"Vf","\x54\xd5" },
#line 1089 "trad2simp.in"
    {"vl","\x76\x63" },
#line 753 "trad2simp.in"
    {"j\303","\x67\xdc" },
#line 248 "trad2simp.in"
    {"V\220","\x5c\x1d" },
#line 2623 "trad2simp.in"
    {"\2328","\x9a\x9f" },
#line 1800 "trad2simp.in"
    {"\212\355","\x8c\x15" },
#line 1918 "trad2simp.in"
    {"\214\342","\x8d\x24" },
#line 1312 "trad2simp.in"
    {"}\242","\x7e\xf8" },
#line 954 "trad2simp.in"
    {"ql","\x70\x80" },
#line 2740 "trad2simp.in"
    {"\234]","\x9c\xbc" },
#line 702 "trad2simp.in"
    {"h\347","\x68\x08" },
#line 1064 "trad2simp.in"
    {"u\372","\x75\xf9" },
#line 1518 "trad2simp.in"
    {"\203\242","\x83\x5a" },
#line 2268 "trad2simp.in"
    {"\223\242","\x94\xa8" },
#line 2533 "trad2simp.in"
    {"\230\355","\x99\x6c" },
#line 2764 "trad2simp.in"
    {"\235\035","\x9e\x32" },
#line 1938 "trad2simp.in"
    {"\215\013","\x8d\x5d" },
#line 1124 "trad2simp.in"
    {"x2","\x70\xae" },
#line 2138 "trad2simp.in"
    {"\222>","\x94\xc0" },
#line 911 "trad2simp.in"
    {"o\372","\x6e\x85" },
#line 119 "trad2simp.in"
    {"Q<","\x4f\xe8" },
#line 452 "trad2simp.in"
    {"^\363","\x53\x85" },
#line 718 "trad2simp.in"
    {"i\313","\x67\x84" },
#line 201 "trad2simp.in"
    {"U8","\x5f\xf5" },
#line 779 "trad2simp.in"
    {"kN","\x53\xf9" },
#line 574 "trad2simp.in"
    {"d\027","\x63\x63" },
#line 430 "trad2simp.in"
    {"^l","\x5e\x31" },
#line 713 "trad2simp.in"
    {"i\246","\x5e\x72" },
#line 970 "trad2simp.in"
    {"q\355","\x70\xdb" },
#line 1382 "trad2simp.in"
    {"~>","\x7e\xe9" },
#line 1669 "trad2simp.in"
    {"\211r","\x88\xad" },
#line 188 "trad2simp.in"
    {"S\341","\x77\x7f" },
#line 2418 "trad2simp.in"
    {"\226\233","\x96\x45" },
#line 19 "trad2simp.in"
    {" '","\x00\xb7" },
#line 492 "trad2simp.in"
    {"a>","\x5f\xfe" },
#line 930 "trad2simp.in"
    {"p>","\x6f\x9c" },
#line 2085 "trad2simp.in"
    {"\221\253","\x53\x3b" },
#line 1003 "trad2simp.in"
    {"sN","\x59\x56" },
#line 1818 "trad2simp.in"
    {"\213\024","\x8c\x11" },
#line 1118 "trad2simp.in"
    {"w\236","\x77\x92" },
#line 2373 "trad2simp.in"
    {"\225\253","\x96\x03" },
#line 1864 "trad2simp.in"
    {"\213\236","\x8c\x33" },
#line 2767 "trad2simp.in"
    {"\235#","\x9e\x2a" },
#line 1490 "trad2simp.in"
    {"\201\342","\x81\xdc" },
#line 848 "trad2simp.in"
    {"n\226","\x51\xc6" },
#line 2541 "trad2simp.in"
    {"\231\003","\x99\x7a" },
#line 1868 "trad2simp.in"
    {"\214P","\x4e\x30" },
#line 732 "trad2simp.in"
    {"j8","\x67\x34" },
#line 596 "trad2simp.in"
    {"d\242","\x63\xb8" },
#line 688 "trad2simp.in"
    {"g\372","\x62\xd0" },
#line 2645 "trad2simp.in"
    {"\232\322","\x81\x0f" },
#line 1421 "trad2simp.in"
    {"\177p","\x7f\x5a" },
#line 1636 "trad2simp.in"
    {"\2106","\x86\x95" },
#line 2723 "trad2simp.in"
    {"\2341","\x9c\xa2" },
#line 2041 "trad2simp.in"
    {"\220#","\x8f\xde" },
#line 580 "trad2simp.in"
    {"d>","\x69\xa8" },
#line 2727 "trad2simp.in"
    {"\2347","\x9c\xa6" },
#line 999 "trad2simp.in"
    {"sA","\x72\xb8" },
#line 1949 "trad2simp.in"
    {"\215\341","\x8f\xf9" },
#line 1613 "trad2simp.in"
    {"\207\236","\x86\x82" },
#line 822 "trad2simp.in"
    {"m)","\x6c\xc4" },
#line 1887 "trad2simp.in"
    {"\214\260","\x8d\x33" },
#line 462 "trad2simp.in"
    {"_Y","\x6c\x47" },
#line 1546 "trad2simp.in"
    {"\205\024","\x53\x5c" },
#line 2945 "trad2simp.in"
    {"^rw@`%","\x4e\x7e\x77\x40\x60\x25" },
#line 124 "trad2simp.in"
    {"Qg","\x51\x85" },
#line 1736 "trad2simp.in"
    {"\212c","\x8b\xe3" },
#line 739 "trad2simp.in"
    {"jf","\x5e\x62" },
#line 1220 "trad2simp.in"
    {"|#","\x7b\xd1" },
#line 1653 "trad2simp.in"
    {"\210\341","\x91\xcc" },
#line 1063 "trad2simp.in"
    {"u\363","\x9e\xbb" },
#line 2831 "trad2simp.in"
    {"\236\012","\x4d\x19" },
#line 876 "trad2simp.in"
    {"oA","\x98\x8d" },
#line 1027 "trad2simp.in"
    {"tc","\x74\x10" },
#line 1509 "trad2simp.in"
    {"\202\347","\x82\xce" },
#line 1054 "trad2simp.in"
    {"ul","\x75\x72" },
#line 860 "trad2simp.in"
    {"n\362","\x6e\x17" },
#line 461 "trad2simp.in"
    {"_N","\x5f\x2f" },
#line 484 "trad2simp.in"
    {"`\362","\x60\x7d" },
#line 398 "trad2simp.in"
    {"]P","\x5c\x9a" },
#line 500 "trad2simp.in"
    {"ac","\x60\xef" },
#line 722 "trad2simp.in"
    {"i\350","\x69\x01" },
#line 937 "trad2simp.in"
    {"pc","\x6e\x7e" },
#line 2696 "trad2simp.in"
    {"\233\342","\x9c\xb5" },
#line 1171 "trad2simp.in"
    {"z.","\x79\xcd" },
#line 2878 "trad2simp.in"
    {"\237r","\x9f\x8b" },
#line 2091 "trad2simp.in"
    {"\221\303","\x91\x7e" },
#line 2384 "trad2simp.in"
    {"\225\303","\x96\x12" },
#line 2910 "trad2simp.in"
    {"\376c","\xff\x0d" },
#line 2035 "trad2simp.in"
    {"\217\262","\x51\x9c" },
#line 1982 "trad2simp.in"
    {"\216\322","\x8f\x69" },
#line 703 "trad2simp.in"
    {"h\362","\x68\x16" },
#line 428 "trad2simp.in"
    {"^c","\x5e\x01" },
#line 721 "trad2simp.in"
    {"i\347","\x69\x20" },
#line 1278 "trad2simp.in"
    {"}9","\x7e\xcd" },
#line 2070 "trad2simp.in"
    {"\221\024","\x90\xac" },
#line 2135 "trad2simp.in"
    {"\2229","\x94\xcd" },
#line 1609 "trad2simp.in"
    {"\207f","\x86\x7e" },
#line 1659 "trad2simp.in"
    {"\2118","\x89\x1b" },
#line 2084 "trad2simp.in"
    {"\221\236","\x91\x5d" },
#line 2490 "trad2simp.in"
    {"\2309","\x98\x93" },
#line 2649 "trad2simp.in"
    {"\232\343","\x4e\xff" },
#line 234 "trad2simp.in"
    {"VA","\x60\x76" },
#line 807 "trad2simp.in"
    {"l#","\x6c\x14" },
#line 1380 "trad2simp.in"
    {"~9","\x7f\x25" },
#line 1884 "trad2simp.in"
    {"\214\253","\x8d\x2f" },
#line 226 "trad2simp.in"
    {"V\027","\x5c\x1d" },
#line 2196 "trad2simp.in"
    {"\222\337","\x95\x13" },
#line 149 "trad2simp.in"
    {"R\204","\x67\x2d" },
#line 2291 "trad2simp.in"
    {"\223\337","\x94\xf2" },
#line 477 "trad2simp.in"
    {"`\205","\x60\xa6" },
#line 1274 "trad2simp.in"
    {"}0","\x7e\xc6" },
#line 769 "trad2simp.in"
    {"j\372","\x68\xc2" },
#line 30 "trad2simp.in"
    {"0\017","\x20\x19" },
#line 2130 "trad2simp.in"
    {"\2220","\x94\xc8" },
#line 1524 "trad2simp.in"
    {"\204\012","\x83\xb1" },
#line 1796 "trad2simp.in"
    {"\212\344","\x8c\x14" },
#line 2486 "trad2simp.in"
    {"\2300","\x98\x8a" },
#line 2939 "trad2simp.in"
    {"^rf\334","\x4e\x7e\x66\xdc" },
#line 2198 "trad2simp.in"
    {"\222\344","\x95\x04" },
#line 2294 "trad2simp.in"
    {"\223\344","\x95\x42" },
#line 1991 "trad2simp.in"
    {"\216\372","\x8f\x7a" },
#line 2988 "trad2simp.in"
    {"\204'^r","\x84\x27\x4e\x7e" },
#line 1627 "trad2simp.in"
    {"\210\006","\x86\x7f" },
#line 2413 "trad2simp.in"
    {"\226\204","\x58\x24" },
#line 525 "trad2simp.in"
    {"a\337","\x60\x3c" },
#line 2626 "trad2simp.in"
    {"\232A","\x9a\x9c" },
#line 967 "trad2simp.in"
    {"q\337","\x84\x25" },
#line 400 "trad2simp.in"
    {"]\201","\x5d\x5d" },
#line 2336 "trad2simp.in"
    {"\224c","\x95\x73" },
#line 1106 "trad2simp.in"
    {"v\344","\x76\xd8" },
#line 1754 "trad2simp.in"
    {"\212\206","\x8b\xd3" },
#line 928 "trad2simp.in"
    {"p0","\x5f\x25" },
#line 1304 "trad2simp.in"
    {"}\206","\x7e\xe0" },
#line 823 "trad2simp.in"
    {"m6","\x6c\x79" },
#line 165 "trad2simp.in"
    {"R\343","\x7e\xe9" },
#line 55 "trad2simp.in"
    {"O\206","\x67\x65" },
#line 2454 "trad2simp.in"
    {"\227\313","\x97\xe6" },
#line 1200 "trad2simp.in"
    {"{\204","\x7b\x85" },
#line 2549 "trad2simp.in"
    {"\231\017","\x99\x7b" },
#line 140 "trad2simp.in"
    {"RN","\x52\x39" },
#line 2888 "trad2simp.in"
    {"\3760","\x22\x36" },
#line 1506 "trad2simp.in"
    {"\202w","\x82\x73" },
#line 444 "trad2simp.in"
    {"^\337","\x5e\x99" },
#line 2449 "trad2simp.in"
    {"\227\246","\x79\xcb" },
#line 649 "trad2simp.in"
    {"e\225","\x65\x93" },
#line 367 "trad2simp.in"
    {"[\347","\x5b\x81" },
#line 1337 "trad2simp.in"
    {"}\331","\x7f\x02" },
#line 1841 "trad2simp.in"
    {"\213Y","\x8c\x2f" },
#line 2433 "trad2simp.in"
    {"\226\343","\x96\xbe" },
#line 441 "trad2simp.in"
    {"^\316","\x5e\xbc" },
#line 1624 "trad2simp.in"
    {"\207\372","\x87\xee" },
#line 1791 "trad2simp.in"
    {"\212\334","\x8c\x0d" },
#line 1346 "trad2simp.in"
    {"}\351","\x7f\x13" },
#line 1612 "trad2simp.in"
    {"\207\204","\x86\xf3" },
#line 2202 "trad2simp.in"
    {"\222\351","\x94\xd3" },
#line 1227 "trad2simp.in"
    {"|P","\x85\xe4" },
#line 2288 "trad2simp.in"
    {"\223\334","\x95\x57" },
#line 834 "trad2simp.in"
    {"m\366","\x6d\x9e" },
#line 1582 "trad2simp.in"
    {"\205\372","\x85\x3a" },
#line 2530 "trad2simp.in"
    {"\230\351","\x99\x68" },
#line 1174 "trad2simp.in"
    {"zG","\x41\x5f" },
#line 1902 "trad2simp.in"
    {"\214\303","\x8d\x41" },
#line 2624 "trad2simp.in"
    {"\232>","\x9a\xa1" },
#line 313 "trad2simp.in"
    {"X\337","\x57\x84" },
#line 630 "trad2simp.in"
    {"e\017","\x62\xe2" },
#line 1129 "trad2simp.in"
    {"x\225","\x5d\x0e" },
#line 858 "trad2simp.in"
    {"n\354","\x6c\xaa" },
#line 1836 "trad2simp.in"
    {"\213N","\x8c\x32" },
#line 1102 "trad2simp.in"
    {"v\334","\x76\xd7" },
#line 169 "trad2simp.in"
    {"R\363","\x52\xcb" },
#line 965 "trad2simp.in"
    {"q\331","\x70\xeb" },
#line 977 "trad2simp.in"
    {"r\020","\x70\x89" },
#line 2669 "trad2simp.in"
    {"\233\201","\x9c\x85" },
#line 307 "trad2simp.in"
    {"X\316","\x57\xd9" },
#line 966 "trad2simp.in"
    {"q\334","\x71\x16" },
#line 2460 "trad2simp.in"
    {"\227\336","\x97\xeb" },
#line 767 "trad2simp.in"
    {"j\363","\x68\x0a" },
#line 829 "trad2simp.in"
    {"m\332","\x6c\xea" },
#line 322 "trad2simp.in"
    {"YP","\x59\x42" },
#line 1995 "trad2simp.in"
    {"\217\003","\x8f\x83" },
#line 1422 "trad2simp.in"
    {"\177u","\x9a\x82" },
#line 1876 "trad2simp.in"
    {"\214\236","\x8d\x1e" },
#line 2941 "trad2simp.in"
    {"^rn\005[\256","\x4e\x7e\x6e\x05\x5b\xab" },
#line 2874 "trad2simp.in"
    {"\237f","\x9f\x88" },
#line 1159 "trad2simp.in"
    {"y\246","\x5f\xa1" },
#line 1619 "trad2simp.in"
    {"\207\343","\x86\x6e" },
#line 2882 "trad2simp.in"
    {"\237\220","\x5e\x9e" },
#line 353 "trad2simp.in"
    {"[$","\x5b\x37" },
#line 2437 "trad2simp.in"
    {"\227'","\x96\xfe" },
#line 2681 "trad2simp.in"
    {"\233\253","\x9c\x9b" },
#line 2783 "trad2simp.in"
    {"\235]","\x9e\x45" },
#line 2860 "trad2simp.in"
    {"\237\025","\x51\xac" },
#line 1833 "trad2simp.in"
    {"\213A","\x54\xd7" },
#line 449 "trad2simp.in"
    {"^\351","\x5e\xea" },
#line 122 "trad2simp.in"
    {"QR","\x51\x3f" },
#line 37 "trad2simp.in"
    {"G|","\x47\x8d" },
#line 636 "trad2simp.in"
    {"e\035","\x64\x44" },
#line 1554 "trad2simp.in"
    {"\205N","\x83\x5e" },
#line 1820 "trad2simp.in"
    {"\213\027","\x8c\x24" },
#line 2059 "trad2simp.in"
    {"\220\201","\x8f\xc8" },
#line 1214 "trad2simp.in"
    {"{\363","\x7b\x5a" },
#line 658 "trad2simp.in"
    {"f]","\x66\x3c" },
#line 746 "trad2simp.in"
    {"j\242","\x68\xc0" },
#line 117 "trad2simp.in"
    {"Q:","\x50\xa9" },
#line 2111 "trad2simp.in"
    {"\221\372","\x94\x8e" },
#line 905 "trad2simp.in"
    {"o\337","\x6d\x4e" },
#line 541 "trad2simp.in"
    {"b0","\x62\x18" },
#line 1875 "trad2simp.in"
    {"\214\235","\x8d\x1d" },
#line 310 "trad2simp.in"
    {"X\331","\x57\x39" },
#line 2160 "trad2simp.in"
    {"\222z","\x94\xd2" },
#line 2254 "trad2simp.in"
    {"\223z","\x95\x17" },
#line 667 "trad2simp.in"
    {"f\253","\x66\x82" },
#line 315 "trad2simp.in"
    {"X\351","\x57\x5d" },
#line 1018 "trad2simp.in"
    {"s\206","\x51\x79" },
#line 906 "trad2simp.in"
    {"o\344","\x6d\x9b" },
#line 1475 "trad2simp.in"
    {"\201\236","\x43\xdd" },
#line 1780 "trad2simp.in"
    {"\212\304","\x8c\x06" },
#line 1552 "trad2simp.in"
    {"\205A","\x83\x68" },
#line 1329 "trad2simp.in"
    {"}\304","\x7e\xf2" },
#line 2248 "trad2simp.in"
    {"\223e","\x95\x32" },
#line 1226 "trad2simp.in"
    {"|L","\x7b\x79" },
#line 2791 "trad2simp.in"
    {"\235r","\x9e\x4a" },
#line 2505 "trad2simp.in"
    {"\230e","\x98\xa2" },
#line 2660 "trad2simp.in"
    {"\2331","\x90\xc1" },
#line 638 "trad2simp.in"
    {"e#","\x63\x1b" },
#line 2524 "trad2simp.in"
    {"\230\304","\x98\xd8" },
#line 1110 "trad2simp.in"
    {"w>","\x4f\x17" },
#line 1587 "trad2simp.in"
    {"\206\012","\x85\x74" },
#line 1832 "trad2simp.in"
    {"\213>","\x8c\x29" },
#line 114 "trad2simp.in"
    {"Q2","\x50\xa8" },
#line 1086 "trad2simp.in"
    {"ve","\x75\xc7" },
#line 888 "trad2simp.in"
    {"o\206","\x6d\x47" },
#line 2301 "trad2simp.in"
    {"\223\375","\x95\x08" },
#line 2054 "trad2simp.in"
    {"\220r","\x8f\xdf" },
#line 2103 "trad2simp.in"
    {"\221\343","\x94\x93" },
#line 2538 "trad2simp.in"
    {"\230\375","\x99\x71" },
#line 952 "trad2simp.in"
    {"qe","\x71\x15" },
#line 208 "trad2simp.in"
    {"Uc","\x88\x54" },
#line 2773 "trad2simp.in"
    {"\2357","\x4d\x15" },
#line 989 "trad2simp.in"
    {"r\233","\x72\x66" },
#line 960 "trad2simp.in"
    {"q\304","\x71\x30" },
#line 1282 "trad2simp.in"
    {"}@","\x7e\xcc" },
#line 1060 "trad2simp.in"
    {"u\331","\x75\xc9" },
#line 2140 "trad2simp.in"
    {"\222@","\x94\xbe" },
#line 1614 "trad2simp.in"
    {"\207\242","\x84\x24" },
#line 2235 "trad2simp.in"
    {"\223@","\x95\x1d" },
#line 2546 "trad2simp.in"
    {"\231\012","\x51\x7b" },
#line 1667 "trad2simp.in"
    {"\211l","\x64\x46" },
#line 2848 "trad2simp.in"
    {"\236\303","\x9e\xc4" },
#line 2912 "trad2simp.in"
    {"\376e","\xff\x1e" },
#line 1578 "trad2simp.in"
    {"\205\355","\x44\xd6" },
#line 2042 "trad2simp.in"
    {"\2201","\x54\x68" },
#line 1238 "trad2simp.in"
    {"|r","\x54\x01" },
#line 231 "trad2simp.in"
    {"V0","\x53\xfd" },
#line 2753 "trad2simp.in"
    {"\234\363","\x51\xe4" },
#line 904 "trad2simp.in"
    {"o\334","\x6d\x55" },
#line 439 "trad2simp.in"
    {"^\304","\x53\xa9" },
#line 1909 "trad2simp.in"
    {"\214\322","\x8d\x4a" },
#line 2955 "trad2simp.in"
    {"_pf\016","\x5f\x70\x66\x0e" },
#line 2934 "trad2simp.in"
    {"^rW\026","\x4e\x7e\x56\xfe" },
#line 1266 "trad2simp.in"
    {"}\031","\x7e\xb8" },
#line 2868 "trad2simp.in"
    {"\237Y","\x9f\x85" },
#line 2602 "trad2simp.in"
    {"\231\342","\x9a\x88" },
#line 2159 "trad2simp.in"
    {"\222x","\x94\xf0" },
#line 2221 "trad2simp.in"
    {"\223\031","\x95\x31" },
#line 2903 "trad2simp.in"
    {"\376\\","\xff\x5d" },
#line 607 "trad2simp.in"
    {"d\304","\x63\xb3" },
#line 2436 "trad2simp.in"
    {"\227$","\x6e\x9c" },
#line 2206 "trad2simp.in"
    {"\222\360","\x95\x02" },
#line 2677 "trad2simp.in"
    {"\233\236","\x9c\x95" },
#line 2296 "trad2simp.in"
    {"\223\360","\x95\x5a" },
#line 1467 "trad2simp.in"
    {"\201f","\x81\x11" },
#line 1222 "trad2simp.in"
    {"|7","\x6a\x90" },
#line 2228 "trad2simp.in"
    {"\223(","\x95\x1a" },
#line 2892 "trad2simp.in"
    {"\376@","\x22\x28" },
#line 1770 "trad2simp.in"
    {"\212\250","\x8b\xf2" },
#line 2408 "trad2simp.in"
    {"\226c","\x96\x35" },
#line 1960 "trad2simp.in"
    {"\216c","\x8e\x52" },
#line 2933 "trad2simp.in"
    {"^rV\376","\x4e\x7e\x56\xfe" },
#line 2176 "trad2simp.in"
    {"\222\250","\x94\xf5" },
#line 584 "trad2simp.in"
    {"d\\","\x63\xbc" },
#line 2864 "trad2simp.in"
    {"\237N","\x8d\x4d" },
#line 2968 "trad2simp.in"
    {"w@Nf","\x84\x57\x4e\x66" },
#line 2620 "trad2simp.in"
    {"\2320","\x81\x7e" },
#line 423 "trad2simp.in"
    {"^@","\x5e\x27" },
#line 2514 "trad2simp.in"
    {"\230\250","\x98\xce" },
#line 1772 "trad2simp.in"
    {"\212\254","\x8b\xf4" },
#line 1315 "trad2simp.in"
    {"}\254","\x7e\xf6" },
#line 2936 "trad2simp.in"
    {"^r[\205","\x4e\x7e\x5b\x85" },
#line 2180 "trad2simp.in"
    {"\222\254","\x94\xd0" },
#line 581 "trad2simp.in"
    {"d@","\x63\x42" },
#line 2274 "trad2simp.in"
    {"\223\254","\x95\x50" },
#line 2731 "trad2simp.in"
    {"\234>","\x9c\xd4" },
#line 489 "trad2simp.in"
    {"a(","\x60\xab" },
#line 927 "trad2simp.in"
    {"p(","\x6f\xd1" },
#line 1929 "trad2simp.in"
    {"\214\372","\x8d\x5a" },
#line 318 "trad2simp.in"
    {"X\375","\x5b\xff" },
#line 1013 "trad2simp.in"
    {"sz","\x73\x6d" },
#line 2229 "trad2simp.in"
    {"\223+","\x95\x21" },
#line 2338 "trad2simp.in"
    {"\224e","\x95\x65" },
#line 695 "trad2simp.in"
    {"h\237","\x67\xad" },
#line 2484 "trad2simp.in"
    {"\230+","\x4f\xef" },
#line 414 "trad2simp.in"
    {"]\322","\x5c\xe6" },
#line 218 "trad2simp.in"
    {"U\316","\x54\x17" },
#line 1715 "trad2simp.in"
    {"\212-","\x8b\xbe" },
#line 1369 "trad2simp.in"
    {"~+","\x7f\x1d" },
#line 733 "trad2simp.in"
    {"j9","\x68\x11" },
#line 2946 "trad2simp.in"
    {"^r}\005","\x4e\x7e\x7e\xa2" },
#line 1702 "trad2simp.in"
    {"\212\023","\x8b\xad" },
#line 547 "trad2simp.in"
    {"bz","\x62\xb5" },
#line 1260 "trad2simp.in"
    {"}\023","\x7e\xbe" },
#line 250 "trad2simp.in"
    {"V\231","\x55\x6e" },
#line 619 "trad2simp.in"
    {"d\360","\x62\xe7" },
#line 371 "trad2simp.in"
    {"[\365","\x5b\xa0" },
#line 2485 "trad2simp.in"
    {"\230-","\x59\x34" },
#line 577 "trad2simp.in"
    {"d(","\x62\x53" },
#line 2477 "trad2simp.in"
    {"\230\023","\x98\x7f" },
#line 2877 "trad2simp.in"
    {"\237l","\x9f\x89" },
#line 1789 "trad2simp.in"
    {"\212\327","\x8c\x02" },
#line 1370 "trad2simp.in"
    {"~-","\x7f\x21" },
#line 343 "trad2simp.in"
    {"Z\327","\x59\xaa" },
#line 1335 "trad2simp.in"
    {"}\327","\x7f\x03" },
#line 760 "trad2simp.in"
    {"j\337","\x68\x0e" },
#line 2286 "trad2simp.in"
    {"\223\327","\x94\xff" },
#line 1070 "trad2simp.in"
    {"v\023","\x75\xea" },
#line 2672 "trad2simp.in"
    {"\233\220","\x9c\x90" },
#line 2006 "trad2simp.in"
    {"\217\035","\x8f\x89" },
#line 1536 "trad2simp.in"
    {"\204\236","\x83\x85" },
#line 1919 "trad2simp.in"
    {"\214\343","\x53\x56" },
#line 2833 "trad2simp.in"
    {"\236\025","\x9e\x2c" },
#line 1830 "trad2simp.in"
    {"\2139","\x8c\x28" },
#line 185 "trad2simp.in"
    {"S\262","\x53\x89" },
#line 1867 "trad2simp.in"
    {"\214N","\x7a\xd6" },
#line 1985 "trad2simp.in"
    {"\216\337","\x8f\x6f" },
#line 1493 "trad2simp.in"
    {"\201\372","\x53\xf0" },
#line 420 "trad2simp.in"
    {"^+","\x5e\x08" },
#line 1157 "trad2simp.in"
    {"y\216","\x79\x6f" },
#line 785 "trad2simp.in"
    {"kx","\x5f\x52" },
#line 97 "trad2simp.in"
    {"P\343","\x50\xed" },
#line 1742 "trad2simp.in"
    {"\212n","\x8b\xe0" },
#line 1954 "trad2simp.in"
    {"\2160","\x90\x3e" },
#line 401 "trad2simp.in"
    {"]\204","\x5d\x2d" },
#line 1733 "trad2simp.in"
    {"\212`","\x54\x8f" },
#line 2310 "trad2simp.in"
    {"\224\031","\x95\x6b" },
#line 2762 "trad2simp.in"
    {"\235\025","\x9e\x35" },
#line 48 "trad2simp.in"
    {"N\236","\x4e\x9a" },
#line 1986 "trad2simp.in"
    {"\216\344","\x8f\x77" },
#line 558 "trad2simp.in"
    {"cr","\x53\x77" },
#line 220 "trad2simp.in"
    {"U\351","\x55\x22" },
#line 2743 "trad2simp.in"
    {"\234c","\x9c\xe3" },
#line 996 "trad2simp.in"
    {"s\031","\x72\xf0" },
#line 1012 "trad2simp.in"
    {"sx","\x51\x7d" },
#line 2316 "trad2simp.in"
    {"\224(","\x95\x44" },
#line 2064 "trad2simp.in"
    {"\220\220","\x90\x26" },
#line 1091 "trad2simp.in"
    {"vn","\x76\x3e" },
#line 704 "trad2simp.in"
    {"i\017","\x68\x60" },
#line 464 "trad2simp.in"
    {"_e","\x5f\x66" },
#line 370 "trad2simp.in"
    {"[\354","\x5b\xbd" },
#line 1641 "trad2simp.in"
    {"\210R","\x70\xab" },
#line 2039 "trad2simp.in"
    {"\220\025","\x8f\xf3" },
#line 337 "trad2simp.in"
    {"Z\256","\x50\x77" },
#line 2841 "trad2simp.in"
    {"\236|","\x78\x77" },
#line 503 "trad2simp.in"
    {"an","\x86\x51" },
#line 1211 "trad2simp.in"
    {"{\344","\x7b\x03" },
#line 2275 "trad2simp.in"
    {"\223\256","\x95\x47" },
#line 160 "trad2simp.in"
    {"R\331","\x52\xa1" },
#line 327 "trad2simp.in"
    {"Y\235","\x59\x86" },
#line 1948 "trad2simp.in"
    {"\215\262","\x8d\xb1" },
#line 2515 "trad2simp.in"
    {"\230\256","\x98\xd1" },
#line 1019 "trad2simp.in"
    {"s\250","\x73\xcf" },
#line 238 "trad2simp.in"
    {"Ve","\x54\xdd" },
#line 167 "trad2simp.in"
    {"R\351","\x52\xda" },
#line 1871 "trad2simp.in"
    {"\214l","\x73\x2a" },
#line 1464 "trad2simp.in"
    {"\201N","\x80\xbe" },
#line 909 "trad2simp.in"
    {"o\360","\x6f\x4d" },
#line 2907 "trad2simp.in"
    {"\376`","\xff\x06" },
#line 2578 "trad2simp.in"
    {"\231L","\x99\x94" },
#line 182 "trad2simp.in"
    {"S{","\x53\x74" },
#line 2317 "trad2simp.in"
    {"\224+","\x95\x4c" },
#line 1618 "trad2simp.in"
    {"\207\316","\x87\xa8" },
#line 2428 "trad2simp.in"
    {"\226\331","\x53\xcc" },
#line 516 "trad2simp.in"
    {"a\256","\x60\x03" },
#line 1531 "trad2simp.in"
    {"\204f","\x82\xc7" },
#line 1534 "trad2simp.in"
    {"\204\220","\x64\x1c" },
#line 2430 "trad2simp.in"
    {"\226\334","\x67\x42" },
#line 1574 "trad2simp.in"
    {"\205\316","\x83\x69" },
#line 2058 "trad2simp.in"
    {"\220|","\x8f\xbd" },
#line 1925 "trad2simp.in"
    {"\214\355","\x8d\x4c" },
#line 2728 "trad2simp.in"
    {"\2349","\x9c\xa3" },
#line 1879 "trad2simp.in"
    {"\214\242","\x8d\x21" },
#line 2307 "trad2simp.in"
    {"\224\023","\x95\x66" },
#line 1296 "trad2simp.in"
    {"}h","\x7e\xd2" },
#line 2641 "trad2simp.in"
    {"\232e","\x9a\xa5" },
#line 2829 "trad2simp.in"
    {"\235\372","\x9e\x6d" },
#line 1175 "trad2simp.in"
    {"zL","\x7a\x23" },
#line 82 "trad2simp.in"
    {"P\242","\x5b\xb6" },
#line 2792 "trad2simp.in"
    {"\235\204","\x4d\x16" },
#line 3003 "trad2simp.in"
    {"\234\207\234|","\x9c\xb6\x9c\x7c"},
#line 1212 "trad2simp.in"
    {"{\351","\x7b\x5b" },
#line 2940 "trad2simp.in"
    {"^rn\005","\x5e\x72\x6e\x05" },
#line 127 "trad2simp.in"
    {"Q\221","\x80\xc4" },
#line 393 "trad2simp.in"
    {"]\027","\x5c\x97" },
#line 2873 "trad2simp.in"
    {"\237c","\x51\xfa" },
#line 271 "trad2simp.in"
    {"W\017","\x57\x08" },
#line 1999 "trad2simp.in"
    {"\217\012","\x8f\x7e" },
#line 382 "trad2simp.in"
    {"\\]","\x62\x49" },
#line 831 "trad2simp.in"
    {"m\350","\x51\xc0" },
#line 564 "trad2simp.in"
    {"c\233","\x63\x02" },
#line 243 "trad2simp.in"
    {"Vx","\x54\x28" },
#line 2060 "trad2simp.in"
    {"\220\204","\x8f\xd8" },
#line 2143 "trad2simp.in"
    {"\222H","\x94\xca" },
#line 51 "trad2simp.in"
    {"OH","\x5e\x03" },
#line 2625 "trad2simp.in"
    {"\232@","\x84\xe6" },
#line 302 "trad2simp.in"
    {"X\256","\x58\x15" },
#line 2562 "trad2simp.in"
    {"\2311","\x7c\xc7" },
#line 2661 "trad2simp.in"
    {"\233N","\x9b\x49" },
#line 472 "trad2simp.in"
    {"_\254","\x65\xc1" },
#line 2335 "trad2simp.in"
    {"\224`","\x94\xc4" },
#line 2566 "trad2simp.in"
    {"\2317","\x99\x87" },
#line 253 "trad2simp.in"
    {"V\250","\x54\x99" },
#line 1386 "trad2simp.in"
    {"~H","\x89\x41" },
#line 2074 "trad2simp.in"
    {"\2210","\x90\xbb" },
#line 1007 "trad2simp.in"
    {"sn","\x72\xdd" },
#line 2049 "trad2simp.in"
    {"\220Y","\x90\x65" },
#line 120 "trad2simp.in"
    {"QG","\x51\xf6" },
#line 406 "trad2simp.in"
    {"]\242","\x5c\xe3" },
#line 793 "trad2simp.in"
    {"k\256","\x6b\x93" },
#line 2104 "trad2simp.in"
    {"\221\344","\x94\x90" },
#line 1497 "trad2simp.in"
    {"\202\012","\x65\xe7" },
#line 2951 "trad2simp.in"
    {"^r\226u","\x4e\x7e\x96\x75" },
#line 2615 "trad2simp.in"
    {"\232\031","\x9a\x97" },
#line 1568 "trad2simp.in"
    {"\205\231","\x52\x43" },
#line 2997 "trad2simp.in"
    {"\214a_\201","\x8c\x61\x5f\x81" },
#line 2188 "trad2simp.in"
    {"\222\301","\x94\xdd" },
#line 1348 "trad2simp.in"
    {"}\357","\x7e\xac" },
#line 2943 "trad2simp.in"
    {"^rv\333N\026","\x4e\x7e\x76\xdb\x4e\x16" },
#line 1963 "trad2simp.in"
    {"\216z","\x8d\xf7" },
#line 2950 "trad2simp.in"
    {"^r\214a","\x4e\x7e\x8c\x61" },
#line 2205 "trad2simp.in"
    {"\222\357","\x95\x06" },
#line 60 "trad2simp.in"
    {"O\301","\x4f\xe3" },
#line 1521 "trad2simp.in"
    {"\203\357","\x53\x4e" },
#line 1172 "trad2simp.in"
    {"z1","\x79\xf0" },
#line 351 "trad2simp.in"
    {"[\035","\x88\x85" },
#line 1228 "trad2simp.in"
    {"|Y","\x7b\x93" },
#line 2534 "trad2simp.in"
    {"\230\357","\x99\x6d" },
#line 2046 "trad2simp.in"
    {"\220N","\x8f\xc7" },
#line 990 "trad2simp.in"
    {"r\242","\x72\x8a" },
#line 2082 "trad2simp.in"
    {"\221\206","\x76\xcf" },
#line 642 "trad2simp.in"
    {"e7","\x80\x03" },
#line 2356 "trad2simp.in"
    {"\225\206","\x95\xeb" },
#line 1322 "trad2simp.in"
    {"}\270","\x7e\xb6" },
#line 982 "trad2simp.in"
    {"r>","\x5c\x14" },
#line 2752 "trad2simp.in"
    {"\234\351","\x9e\x20" },
#line 2776 "trad2simp.in"
    {"\235A","\x4d\x14" },
#line 378 "trad2simp.in"
    {"\\7","\x5c\x34" },
#line 959 "trad2simp.in"
    {"q\301","\x70\xe8" },
#line 2520 "trad2simp.in"
    {"\230\270","\x98\xd4" },
#line 2553 "trad2simp.in"
    {"\231\024","\x54\xfa" },
#line 896 "trad2simp.in"
    {"o\256","\x6d\x4d" },
#line 2825 "trad2simp.in"
    {"\235\363","\x9e\x47" },
#line 1423 "trad2simp.in"
    {"\177w","\x7f\x62" },
#line 2101 "trad2simp.in"
    {"\221\331","\x94\x8b" },
#line 1099 "trad2simp.in"
    {"v\270","\x76\xb2" },
#line 1206 "trad2simp.in"
    {"{\304","\x83\x03" },
#line 2617 "trad2simp.in"
    {"\232+","\x9a\x9e" },
#line 2787 "trad2simp.in"
    {"\235l","\x9e\x4f" },
#line 850 "trad2simp.in"
    {"n\253","\x6e\x29" },
#line 1427 "trad2simp.in"
    {"\177\213","\x82\x88" },
#line 2107 "trad2simp.in"
    {"\221\351","\x94\x92" },
#line 1112 "trad2simp.in"
    {"w\\","\x77\x41" },
#line 2396 "trad2simp.in"
    {"\225\334","\x51\x73" },
#line 437 "trad2simp.in"
    {"^\301","\x53\x95" },
#line 1843 "trad2simp.in"
    {"\213\\","\x8c\x31" },
#line 1004 "trad2simp.in"
    {"sh","\x72\xec" },
#line 213 "trad2simp.in"
    {"U\254","\x4e\x54" },
#line 1306 "trad2simp.in"
    {"}\217","\x7e\xe5" },
#line 2618 "trad2simp.in"
    {"\232-","\x9a\x98" },
#line 606 "trad2simp.in"
    {"d\301","\x62\xe5" },
#line 729 "trad2simp.in"
    {"j\031","\x68\x07" },
#line 618 "trad2simp.in"
    {"d\357","\x64\x48" },
#line 2947 "trad2simp.in"
    {"^r}\261","\x4e\x7e\x7e\xb2" },
#line 1616 "trad2simp.in"
    {"\207\304","\x86\xf0" },
#line 631 "trad2simp.in"
    {"e\024","\x62\xe6" },
#line 237 "trad2simp.in"
    {"V`","\x54\xd2" },
#line 2127 "trad2simp.in"
    {"\222&","\x94\x9b" },
#line 2411 "trad2simp.in"
    {"\226x","\x96\x46" },
#line 2227 "trad2simp.in"
    {"\223&","\x95\x26" },
#line 1410 "trad2simp.in"
    {"~\217","\x7f\x20" },
#line 814 "trad2simp.in"
    {"lY","\x6c\x61" },
#line 2483 "trad2simp.in"
    {"\230&","\x98\x8f" },
#line 2975 "trad2simp.in"
    {"w@k\313","\x77\x40\x6b\xcb" },
#line 2983 "trad2simp.in"
    {"~\250\210\344","\x7e\xa8\x7e\xd4" },
#line 2401 "trad2simp.in"
    {"\226(","\x53\x84" },
#line 1236 "trad2simp.in"
    {"|l","\x7b\xf1" },
#line 316 "trad2simp.in"
    {"X\357","\x58\xee" },
#line 666 "trad2simp.in"
    {"f\242","\x75\x45" },
#line 1821 "trad2simp.in"
    {"\213\031","\x8c\x26" },
#line 254 "trad2simp.in"
    {"V\256","\x54\x11" },
#line 2420 "trad2simp.in"
    {"\226\250","\x96\x8f" },
#line 925 "trad2simp.in"
    {"p&","\x6f\x74" },
#line 2749 "trad2simp.in"
    {"\234z","\x9c\xa1" },
#line 1806 "trad2simp.in"
    {"\212\370","\x8b\xf8" },
#line 813 "trad2simp.in"
    {"lN","\x6c\xdb" },
#line 1826 "trad2simp.in"
    {"\213(","\x8c\x1f" },
#line 2209 "trad2simp.in"
    {"\222\370","\x95\x2f" },
#line 1158 "trad2simp.in"
    {"y\225","\x79\x4e" },
#line 1920 "trad2simp.in"
    {"\214\344","\x8d\x31" },
#line 560 "trad2simp.in"
    {"c\204","\x62\xa1" },
#line 2225 "trad2simp.in"
    {"\223 ","\x95\x2d" },
#line 591 "trad2simp.in"
    {"d\217","\x63\x26" },
#line 3002 "trad2simp.in"
    {"\230\207w@","\x98\x87\x84\x57" },
#line 1953 "trad2simp.in"
    {"\216+","\x78\xb0" },
#line 1611 "trad2simp.in"
    {"\207x","\x87\x17" },
#line 1224 "trad2simp.in"
    {"|>","\x5e\x18" },
#line 2523 "trad2simp.in"
    {"\230\300","\x98\xd7" },
#line 1424 "trad2simp.in"
    {"\177\205","\x7f\x57" },
#line 728 "trad2simp.in"
    {"j\023","\x69\x7c" },
#line 1463 "trad2simp.in"
    {"\2019","\x80\xc0" },
#line 531 "trad2simp.in"
    {"a\370","\x60\xac" },
#line 159 "trad2simp.in"
    {"R\327","\x52\xd6" },
#line 1152 "trad2simp.in"
    {"yG","\x53\xea" },
#line 1827 "trad2simp.in"
    {"\213+","\x8c\x2a" },
#line 2257 "trad2simp.in"
    {"\223\202","\x95\x41" },
#line 365 "trad2simp.in"
    {"[\342","\x5b\xdd" },
#line 924 "trad2simp.in"
    {"p ","\x6f\x46" },
#line 899 "trad2simp.in"
    {"o\301","\x6d\x4a" },
#line 1797 "trad2simp.in"
    {"\212\346","\x8c\x1b" },
#line 2594 "trad2simp.in"
    {"\231\322","\x9a\x79" },
#line 1344 "trad2simp.in"
    {"}\346","\x7f\x0c" },
#line 2200 "trad2simp.in"
    {"\222\346","\x95\x14" },
#line 1488 "trad2simp.in"
    {"\201\337","\x81\x0f" },
#line 459 "trad2simp.in"
    {"_H","\x5f\x39" },
#line 321 "trad2simp.in"
    {"Y>","\x59\x39" },
#line 214 "trad2simp.in"
    {"U\256","\x53\x55" },
#line 144 "trad2simp.in"
    {"Rn","\x52\x50" },
#line 1912 "trad2simp.in"
    {"\214\331","\x8d\x52" },
#line 508 "trad2simp.in"
    {"a\202","\x5f\xe7" },
#line 1945 "trad2simp.in"
    {"\215\225","\x8d\x76" },
#line 1706 "trad2simp.in"
    {"\212\030","\x8b\xb0" },
#line 826 "trad2simp.in"
    {"m\207","\x6c\xfe" },
#line 1265 "trad2simp.in"
    {"}\030","\x7e\xae" },
#line 1603 "trad2simp.in"
    {"\206\372","\x86\xf1" },
#line 1914 "trad2simp.in"
    {"\214\334","\x8d\x50" },
#line 2220 "trad2simp.in"
    {"\223\030","\x95\x24" },
#line 2748 "trad2simp.in"
    {"\234x","\x9c\x88" },
#line 1785 "trad2simp.in"
    {"\212\317","\x8b\xf9" },
#line 2985 "trad2simp.in"
    {"~\356\211f","\x7e\xee\x89\x66" },
#line 968 "trad2simp.in"
    {"q\346","\x70\x7f" },
#line 2479 "trad2simp.in"
    {"\230\030","\x98\x86" },
#line 2193 "trad2simp.in"
    {"\222\317","\x94\xd7" },
#line 2314 "trad2simp.in"
    {"\224&","\x95\x0e" },
#line 2720 "trad2simp.in"
    {"\234(","\x9c\xce" },
#line 1959 "trad2simp.in"
    {"\216`","\x8d\xd6" },
#line 1682 "trad2simp.in"
    {"\211\254","\x89\xca" },
#line 1041 "trad2simp.in"
    {"t\317","\x73\xd1" },
#line 435 "trad2simp.in"
    {"^\202","\x4e\xc4" },
#line 1325 "trad2simp.in"
    {"}\273","\x7e\xfd" },
#line 1472 "trad2simp.in"
    {"\201\206","\x55\xc9" },
#line 2186 "trad2simp.in"
    {"\222\273","\x95\x11" },
#line 811 "trad2simp.in"
    {"l>","\x6c\xdb" },
#line 1940 "trad2simp.in"
    {"\215\017","\x8d\x62" },
#line 849 "trad2simp.in"
    {"n\235","\x6c\x9f" },
#line 1551 "trad2simp.in"
    {"\205-","\x83\x6b" },
#line 80 "trad2simp.in"
    {"P\231","\x59\x07" },
#line 921 "trad2simp.in"
    {"p\030","\x6c\xf8" },
#line 259 "trad2simp.in"
    {"V\301","\x55\xeb" },
#line 1049 "trad2simp.in"
    {"u&","\x82\xcf" },
#line 944 "trad2simp.in"
    {"p\317","\x4e\x4c" },
#line 1433 "trad2simp.in"
    {"\177\354","\x7f\xda" },
#line 2869 "trad2simp.in"
    {"\237\\","\x9f\x87" },
#line 833 "trad2simp.in"
    {"m\365","\x6e\x0a" },
#line 1486 "trad2simp.in"
    {"\201\331","\x80\xed" },
#line 1738 "trad2simp.in"
    {"\212i","\x8b\xd7" },
#line 799 "trad2simp.in"
    {"k\300","\x6b\xc1" },
#line 2371 "trad2simp.in"
    {"\225\250","\x95\xfa" },
#line 2312 "trad2simp.in"
    {"\224 ","\x95\x68" },
#line 2249 "trad2simp.in"
    {"\223i","\x95\x18" },
#line 1704 "trad2simp.in"
    {"\212\026","\x8b\xab" },
#line 1263 "trad2simp.in"
    {"}\026","\x7e\xbc" },
#line 2086 "trad2simp.in"
    {"\221\254","\x91\x71" },
#line 1029 "trad2simp.in"
    {"ti","\x83\xb9" },
#line 694 "trad2simp.in"
    {"h\235","\x67\x61" },
#line 2374 "trad2simp.in"
    {"\225\254","\x96\x06" },
#line 1453 "trad2simp.in"
    {"\200\217","\x64\xcd" },
#line 2722 "trad2simp.in"
    {"\234-","\x9c\xcd" },
#line 1395 "trad2simp.in"
    {"~i","\x7e\xf3" },
#line 2697 "trad2simp.in"
    {"\233\344","\x9c\xb2" },
#line 1088 "trad2simp.in"
    {"vi","\x76\x5e" },
#line 2712 "trad2simp.in"
    {"\234\023","\x9c\xc3" },
#line 2351 "trad2simp.in"
    {"\224\202","\x95\x4b" },
#line 2771 "trad2simp.in"
    {"\2350","\x9e\x39" },
#line 2002 "trad2simp.in"
    {"\217\024","\x8f\x85" },
#line 953 "trad2simp.in"
    {"qi","\x70\xe6" },
#line 939 "trad2simp.in"
    {"pi","\x6e\xdf" },
#line 603 "trad2simp.in"
    {"d\273","\x63\x1e" },
#line 555 "trad2simp.in"
    {"c>","\x63\x1f" },
#line 2124 "trad2simp.in"
    {"\222\036","\x94\xa7" },
#line 2145 "trad2simp.in"
    {"\222K","\x52\x28" },
#line 2065 "trad2simp.in"
    {"\220\337","\x90\xcf" },
#line 2241 "trad2simp.in"
    {"\223K","\x95\x05" },
#line 2073 "trad2simp.in"
    {"\221-","\x90\xd1" },
#line 75 "trad2simp.in"
    {"Pz","\x54\xb1" },
#line 1589 "trad2simp.in"
    {"\206\027","\x86\x16" },
#line 2914 "trad2simp.in"
    {"\376i","\xff\x04" },
#line 1903 "trad2simp.in"
    {"\214\304","\x8d\x3f" },
#line 1026 "trad2simp.in"
    {"tK","\x73\xae" },
#line 1664 "trad2simp.in"
    {"\211`","\x88\xc6" },
#line 1366 "trad2simp.in"
    {"~\036","\x7f\x1f" },
#line 735 "trad2simp.in"
    {"jH","\x68\x61" },
#line 1071 "trad2simp.in"
    {"v\036","\x76\x17" },
#line 304 "trad2simp.in"
    {"X\273","\x58\x99" },
#line 2990 "trad2simp.in"
    {"\210\344N\013","\x88\xe4\x4e\x0b" },
#line 1177 "trad2simp.in"
    {"zN","\x98\x96" },
#line 2099 "trad2simp.in"
    {"\221\327","\x94\x8a" },
#line 2309 "trad2simp.in"
    {"\224\030","\x94\x9f" },
#line 887 "trad2simp.in"
    {"o\202","\x6f\x84" },
#line 1932 "trad2simp.in"
    {"\214\375","\x8d\x5b" },
#line 495 "trad2simp.in"
    {"aK","\x60\x01" },
#line 2218 "trad2simp.in"
    {"\223\022","\x95\x15" },
#line 2742 "trad2simp.in"
    {"\234`","\x9c\x99" },
#line 1709 "trad2simp.in"
    {"\212\037","\x8b\xbc" },
#line 2476 "trad2simp.in"
    {"\230\022","\x98\x81" },
#line 1720 "trad2simp.in"
    {"\212;","\x6c\xe8" },
#line 573 "trad2simp.in"
    {"d\026","\x64\x47" },
#line 2224 "trad2simp.in"
    {"\223\037","\x95\x2c" },
#line 359 "trad2simp.in"
    {"[L","\x5a\x08" },
#line 157 "trad2simp.in"
    {"R\301","\x52\xb2" },
#line 2015 "trad2simp.in"
    {"\2178","\x8f\x93" },
#line 1633 "trad2simp.in"
    {"\210#","\x86\xce" },
#line 2491 "trad2simp.in"
    {"\230;","\x98\x91" },
#line 1610 "trad2simp.in"
    {"\207h","\x86\x71" },
#line 2818 "trad2simp.in"
    {"\235\331","\x9e\x37" },
#line 1367 "trad2simp.in"
    {"~\037","\x7f\x1b" },
#line 1138 "trad2simp.in"
    {"x\343","\x78\x9c" },
#line 2190 "trad2simp.in"
    {"\222\305","\x95\x0c" },
#line 717 "trad2simp.in"
    {"i\303","\x76\xd8" },
#line 1075 "trad2simp.in"
    {"v;","\x76\x18" },
#line 1777 "trad2simp.in"
    {"\212\274","\x8c\x0a" },
#line 339 "trad2simp.in"
    {"Z\274","\x5a\xaa" },
#line 283 "trad2simp.in"
    {"X\026","\x57\xb4" },
#line 121 "trad2simp.in"
    {"QL","\x51\x51" },
#line 2187 "trad2simp.in"
    {"\222\274","\x95\x09" },
#line 923 "trad2simp.in"
    {"p\037","\x6f\x47" },
#line 2603 "trad2simp.in"
    {"\231\355","\x9a\x87" },
#line 258 "trad2simp.in"
    {"V\300","\x55\x6d" },
#line 2522 "trad2simp.in"
    {"\230\274","\x98\xd5" },
#line 189 "trad2simp.in"
    {"S\342","\x4e\x1b" },
#line 1251 "trad2simp.in"
    {"}\004","\x7e\xa6" },
#line 750 "trad2simp.in"
    {"j\270","\x67\xe0" },
#line 2116 "trad2simp.in"
    {"\222\004","\x94\xad" },
#line 2213 "trad2simp.in"
    {"\223\004","\x5f\x55" },
#line 775 "trad2simp.in"
    {"k\026","\x69\x84" },
#line 2570 "trad2simp.in"
    {"\231>","\x99\x8f" },
#line 1123 "trad2simp.in"
    {"w\357","\x77\xeb" },
#line 2424 "trad2simp.in"
    {"\226\270","\x96\xb6" },
#line 2003 "trad2simp.in"
    {"\217\025","\x8f\x7b" },
#line 289 "trad2simp.in"
    {"XK","\x83\x14" },
#line 1881 "trad2simp.in"
    {"\214\250","\x8d\x27" },
#line 386 "trad2simp.in"
    {"\\l","\x5c\x5e" },
#line 108 "trad2simp.in"
    {"Q\020","\x50\xa7" },
#line 1937 "trad2simp.in"
    {"\215\012","\x8d\x5e" },
#line 575 "trad2simp.in"
    {"d\037","\x64\xc0" },
#line 2938 "trad2simp.in"
    {"^re\346","\x4e\x7e\x65\xe6" },
#line 2745 "trad2simp.in"
    {"\234h","\x9c\xbf" },
#line 1885 "trad2simp.in"
    {"\214\254","\x8d\x23" },
#line 776 "trad2simp.in"
    {"k\036","\x68\xc2" },
#line 1729 "trad2simp.in"
    {"\212W","\x8b\xc7" },
#line 2871 "trad2simp.in"
    {"\237`","\x9f\x86" },
#line 995 "trad2simp.in"
    {"r\375","\x72\xc8" },
#line 2149 "trad2simp.in"
    {"\222W","\x94\xb3" },
#line 1503 "trad2simp.in"
    {"\202f","\x82\x30" },
#line 1621 "trad2simp.in"
    {"\207\357","\x86\xf2" },
#line 2840 "trad2simp.in"
    {"\236z","\x9e\x7e" },
#line 2996 "trad2simp.in"
    {"\213\321w@","\x8b\xd1\x84\x57" },
#line 1153 "trad2simp.in"
    {"yP","\x4f\x51" },
#line 1470 "trad2simp.in"
    {"\201x","\x80\xa0" },
#line 394 "trad2simp.in"
    {"]\031","\x4e\xd1" },
#line 2986 "trad2simp.in"
    {"~\356\211f~\250\210\344","\x7e\xee\x89\x66\x7e\xa8\x7e\xd4" },
#line 70 "trad2simp.in"
    {"P+","\x4f\x26" },
#line 774 "trad2simp.in"
    {"k\022","\x68\x3e" },
#line 2733 "trad2simp.in"
    {"\234H","\x9c\xd5" },
#line 115 "trad2simp.in"
    {"Q7","\x4f\xea" },
#line 1731 "trad2simp.in"
    {"\212[","\x8b\xc5" },
#line 2949 "trad2simp.in"
    {"^r~\262","\x4e\x7e\x7e\xb2" },
#line 417 "trad2simp.in"
    {"]\360","\x5d\xef" },
#line 1290 "trad2simp.in"
    {"}[","\x7e\xe6" },
#line 2151 "trad2simp.in"
    {"\222[","\x94\xc5" },
#line 2306 "trad2simp.in"
    {"\224\022","\x94\xf9" },
#line 2246 "trad2simp.in"
    {"\223[","\x95\x3b" },
#line 2998 "trad2simp.in"
    {"\214a_\201w@","\x8c\x61\x5f\xb5\x77\x40" },
#line 2502 "trad2simp.in"
    {"\230[","\x98\xa0" },
#line 2960 "trad2simp.in"
    {"d\260w@","\x64\xb0\x84\x57" },
#line 1782 "trad2simp.in"
    {"\212\311","\x8b\xff" },
#line 2971 "trad2simp.in"
    {"w@^\270","\x84\x57\x5e\xb8" },
#line 408 "trad2simp.in"
    {"]\250","\x5c\xc3" },
#line 1203 "trad2simp.in"
    {"{\217","\x7b\x5d" },
#line 171 "trad2simp.in"
    {"R\370","\x52\x9d" },
#line 2972 "trad2simp.in"
    {"w@_U","\x84\x57\x5f\x55" },
#line 2856 "trad2simp.in"
    {"\236\375","\x9e\xfe" },
#line 2899 "trad2simp.in"
    {"\376W","\xff\x01" },
#line 2704 "trad2simp.in"
    {"\233\375","\x9c\xab" },
#line 2079 "trad2simp.in"
    {"\221H","\x90\xe6" },
#line 2057 "trad2simp.in"
    {"\220z","\x90\x57" },
#line 47 "trad2simp.in"
    {"N\231","\x4e\x98" },
#line 768 "trad2simp.in"
    {"j\370","\x69\x89" },
#line 2038 "trad2simp.in"
    {"\217\372","\x4e\x43" },
#line 998 "trad2simp.in"
    {"s;","\x72\xf2" },
#line 425 "trad2simp.in"
    {"^W","\x5e\x3c" },
#line 797 "trad2simp.in"
    {"k\274","\x58\xf3" },
#line 2644 "trad2simp.in"
    {"\232\317","\x9a\xc5" },
#line 1462 "trad2simp.in"
    {"\201+","\x81\x31" },
#line 670 "trad2simp.in"
    {"f\304","\x66\x54" },
#line 2782 "trad2simp.in"
    {"\235\\","\x9e\x48" },
#line 1989 "trad2simp.in"
    {"\216\370","\x8f\x74" },
#line 521 "trad2simp.in"
    {"a\311","\x5e\x94" },
#line 962 "trad2simp.in"
    {"q\311","\x70\x96" },
#line 771 "trad2simp.in"
    {"k\004","\x68\x0f" },
#line 2902 "trad2simp.in"
    {"\376[","\xff\x5b" },
#line 2147 "trad2simp.in"
    {"\222Q","\x94\xc2" },
#line 225 "trad2simp.in"
    {"V\026","\x55\x67" },
#line 109 "trad2simp.in"
    {"Q\024","\x4f\xe6" },
#line 1977 "trad2simp.in"
    {"\216\300","\x8e\xaf" },
#line 1765 "trad2simp.in"
    {"\212\241","\x8b\xeb" },
#line 2090 "trad2simp.in"
    {"\221\301","\x88\x45" },
#line 2050 "trad2simp.in"
    {"\220\\","\x90\x0a" },
#line 166 "trad2simp.in"
    {"R\346","\x52\x7f" },
#line 1233 "trad2simp.in"
    {"|e","\x9f\xa0" },
#line 2944 "trad2simp.in"
    {"^rw@","\x5e\x72\x77\x40" },
#line 2267 "trad2simp.in"
    {"\223\241","\x95\x43" },
#line 292 "trad2simp.in"
    {"XW","\x6d\x82" },
#line 1550 "trad2simp.in"
    {"\205&","\x83\x11" },
#line 561 "trad2simp.in"
    {"c\206","\x39\xcf" },
#line 1825 "trad2simp.in"
    {"\213 ","\x8c\x23" },
#line 1510 "trad2simp.in"
    {"\202\372","\x83\x93" },
#line 1034 "trad2simp.in"
    {"t\241","\x74\x0e" },
#line 2702 "trad2simp.in"
    {"\233\360","\x9c\x87" },
#line 2984 "trad2simp.in"
    {"~\250\210\344[P_\037","\x7e\xa8\x7e\xd4\x5b\x50\x5f\x1f" },
#line 841 "trad2simp.in"
    {"n>","\x6d\x51" },
#line 2657 "trad2simp.in"
    {"\233(","\x54\xc4" },
#line 1674 "trad2simp.in"
    {"\211\217","\x89\xc4" },
#line 1205 "trad2simp.in"
    {"{\300","\x82\x82" },
#line 933 "trad2simp.in"
    {"pQ","\x6d\x12" },
#line 357 "trad2simp.in"
    {"[8","\x5a\x76" },
#line 2025 "trad2simp.in"
    {"\217N","\x8f\x7f" },
#line 979 "trad2simp.in"
    {"r-","\x4e\x89" },
#line 1229 "trad2simp.in"
    {"|\\","\x7b\xa8" },
#line 453 "trad2simp.in"
    {"_\022","\x5f\x11" },
#line 2823 "trad2simp.in"
    {"\235\360","\x71\xd5" },
#line 2614 "trad2simp.in"
    {"\232\026","\x9a\x9b" },
#line 1353 "trad2simp.in"
    {"}\371","\x7f\x07" },
#line 2894 "trad2simp.in"
    {"\376Q","\x30\x01" },
#line 2769 "trad2simp.in"
    {"\235(","\x9e\x2d" },
#line 2299 "trad2simp.in"
    {"\223\371","\x95\x6a" },
#line 1500 "trad2simp.in"
    {"\202Y","\x82\x31" },
#line 2040 "trad2simp.in"
    {"\220\031","\x8f\xd9" },
#line 2056 "trad2simp.in"
    {"\220x","\x90\x09" },
#line 116 "trad2simp.in"
    {"Q8","\x7f\x57" },
#line 1697 "trad2simp.in"
    {"\212\010","\x8b\xa1" },
#line 346 "trad2simp.in"
    {"Z\377","\x5a\x73" },
#line 1544 "trad2simp.in"
    {"\204\375","\x83\x5c" },
#line 1255 "trad2simp.in"
    {"}\010","\x7e\xa8" },
#line 156 "trad2simp.in"
    {"R\273","\x53\x21" },
#line 2117 "trad2simp.in"
    {"\222\010","\x94\x9a" },
#line 2216 "trad2simp.in"
    {"\223\010","\x95\x29" },
#line 2601 "trad2simp.in"
    {"\231\337","\x9a\x77" },
#line 583 "trad2simp.in"
    {"dQ","\x63\xb4" },
#line 2540 "trad2simp.in"
    {"\230\377","\x99\x73" },
#line 2469 "trad2simp.in"
    {"\230\010","\x98\x7b" },
#line 2805 "trad2simp.in"
    {"\235\254","\x9e\x27" },
#line 563 "trad2simp.in"
    {"c\231","\x63\x23" },
#line 751 "trad2simp.in"
    {"j\273","\x69\xdb" },
#line 1252 "trad2simp.in"
    {"}\005","\x7e\xa2" },
#line 815 "trad2simp.in"
    {"lz","\x51\xb3" },
#line 1514 "trad2simp.in"
    {"\203J","\x83\x46" },
#line 2240 "trad2simp.in"
    {"\223J","\x70\xbc" },
#line 1355 "trad2simp.in"
    {"~\010","\x84\x26" },
#line 1694 "trad2simp.in"
    {"\211\370","\x89\xe6" },
#line 2361 "trad2simp.in"
    {"\225\217","\x95\xf0" },
#line 2451 "trad2simp.in"
    {"\227\303","\x97\x91" },
#line 2466 "trad2simp.in"
    {"\230\005","\x98\x79" },
#line 2425 "trad2simp.in"
    {"\226\273","\x53\xea" },
#line 261 "trad2simp.in"
    {"V\305","\x51\x81" },
#line 1244 "trad2simp.in"
    {"|\360","\x56\xe2" },
#line 985 "trad2simp.in"
    {"r`","\x5b\x83" },
#line 975 "trad2simp.in"
    {"q\377","\x80\x00" },
#line 1689 "trad2simp.in"
    {"\211\300","\x89\xc2" },
#line 708 "trad2simp.in"
    {"iY","\x83\x02" },
#line 110 "trad2simp.in"
    {"Q\025","\x4f\xaa" },
#line 2692 "trad2simp.in"
    {"\233\327","\x9c\x9e" },
#line 915 "trad2simp.in"
    {"p\005","\x6e\xe2" },
#line 1149 "trad2simp.in"
    {"y1","\x78\x3b" },
#line 1866 "trad2simp.in"
    {"\214H","\x5c\x82" },
#line 2716 "trad2simp.in"
    {"\234 ","\x9c\xcb" },
#line 879 "trad2simp.in"
    {"o[","\x6f\x5c" },
#line 1808 "trad2simp.in"
    {"\212\374","\x8c\x16" },
#line 844 "trad2simp.in"
    {"nc","\x95\xf5" },
#line 2211 "trad2simp.in"
    {"\222\374","\x94\xa2" },
#line 1645 "trad2simp.in"
    {"\210]","\x51\xb2" },
#line 2965 "trad2simp.in"
    {"f>w@`'","\x66\x3e\x84\x57\x60\x27" },
#line 2330 "trad2simp.in"
    {"\224Q","\x92\x74" },
#line 176 "trad2simp.in"
    {"S1","\x53\x2e" },
#line 2817 "trad2simp.in"
    {"\235\327","\x9e\x25" },
#line 2537 "trad2simp.in"
    {"\230\374","\x99\x72" },
#line 1221 "trad2simp.in"
    {"|+","\x7b\xab" },
#line 139 "trad2simp.in"
    {"RK","\x51\x4b" },
#line 1941 "trad2simp.in"
    {"\215\020","\x8d\x46" },
#line 2017 "trad2simp.in"
    {"\217>","\x8f\x97" },
#line 2598 "trad2simp.in"
    {"\231\331","\x9a\x78" },
#line 1615 "trad2simp.in"
    {"\207\273","\x87\x7c" },
#line 2089 "trad2simp.in"
    {"\221\300","\x91\x7f" },
#line 730 "trad2simp.in"
    {"j\036","\x67\xa2" },
#line 736 "trad2simp.in"
    {"jK","\x68\x65" },
#line 533 "trad2simp.in"
    {"a\374","\x60\xe7" },
#line 1900 "trad2simp.in"
    {"\214\301","\x8d\x32" },
#line 973 "trad2simp.in"
    {"q\374","\x70\xec" },
#line 1819 "trad2simp.in"
    {"\213\026","\x8c\x21" },
#line 2788 "trad2simp.in"
    {"\235n","\x9e\x50" },
#line 1629 "trad2simp.in"
    {"\210\020","\x86\xf4" },
#line 2784 "trad2simp.in"
    {"\235`","\x9e\x44" },
#line 2931 "trad2simp.in"
    {"^rSf","\x4e\x7e\x53\x66" },
#line 877 "trad2simp.in"
    {"oQ","\x6c\xfc" },
#line 187 "trad2simp.in"
    {"S\303","\x53\xc2" },
#line 2683 "trad2simp.in"
    {"\233\256","\x9c\x9c" },
#line 2525 "trad2simp.in"
    {"\230\306","\x98\xd9" },
#line 2354 "trad2simp.in"
    {"\225\202","\x95\xe9" },
#line 288 "trad2simp.in"
    {"XJ","\x57\x57" },
#line 281 "trad2simp.in"
    {"X\005","\x57\x5a" },
#line 2937 "trad2simp.in"
    {"^re\255","\x4e\x7e\x65\xad" },
#line 1893 "trad2simp.in"
    {"\214\270","\x8d\x37" },
#line 804 "trad2simp.in"
    {"k\377","\x6b\xf5" },
#line 723 "trad2simp.in"
    {"i\363","\x68\x68" },
#line 2105 "trad2simp.in"
    {"\221\346","\x62\x63" },
#line 1727 "trad2simp.in"
    {"\212T","\x8b\xcf" },
#line 1334 "trad2simp.in"
    {"}\324","\x7e\xf1" },
#line 2052 "trad2simp.in"
    {"\220`","\x8f\xdc" },
#line 199 "trad2simp.in"
    {"U\004","\x54\x57" },
#line 2243 "trad2simp.in"
    {"\223T","\x95\x37" },
#line 626 "trad2simp.in"
    {"d\374","\x64\xb8" },
#line 52 "trad2simp.in"
    {"OT","\x53\x60" },
#line 1559 "trad2simp.in"
    {"\205i","\x83\x61" },
#line 2499 "trad2simp.in"
    {"\230T","\x98\x9c" },
#line 1042 "trad2simp.in"
    {"t\324","\x74\x8e" },
#line 2635 "trad2simp.in"
    {"\232W","\x9a\x8c" },
#line 263 "trad2simp.in"
    {"V\311","\x55\x70" },
#line 2446 "trad2simp.in"
    {"\227f","\x81\x7c" },
#line 1635 "trad2simp.in"
    {"\2101","\x86\xca" },
#line 2328 "trad2simp.in"
    {"\224J","\x95\x6c" },
#line 1388 "trad2simp.in"
    {"~T","\x7e\xc7" },
#line 1637 "trad2simp.in"
    {"\2107","\x88\x3c" },
#line 1237 "trad2simp.in"
    {"|n","\x7b\xa9" },
#line 1316 "trad2simp.in"
    {"}\255","\x7e\xf4" },
#line 1231 "trad2simp.in"
    {"|`","\x7b\x3c" },
#line 2264 "trad2simp.in"
    {"\223\227","\x67\xaa" },
#line 808 "trad2simp.in"
    {"l+","\x6c\x22" },
#line 1419 "trad2simp.in"
    {"\177L","\x7f\x42" },
#line 1768 "trad2simp.in"
    {"\212\245","\x8b\xf0" },
#line 2665 "trad2simp.in"
    {"\233h","\x8c\x5a" },
#line 857 "trad2simp.in"
    {"n\316","\x83\x65" },
#line 2174 "trad2simp.in"
    {"\222\245","\x94\xf1" },
#line 2637 "trad2simp.in"
    {"\232[","\x9a\x7f" },
#line 204 "trad2simp.in"
    {"UW","\x55\x56" },
#line 2927 "trad2simp.in"
    {"]\350w@","\x5d\xe8\x84\x57" },
#line 1547 "trad2simp.in"
    {"\205\036","\x84\x8c" },
#line 1195 "trad2simp.in"
    {"{;","\x7b\x47" },
#line 2896 "trad2simp.in"
    {"\376T","\xff\x1b" },
#line 2379 "trad2simp.in"
    {"\225\273","\x96\x0e" },
#line 2969 "trad2simp.in"
    {"w@O\\","\x84\x57\x4f\x5c" },
#line 1802 "trad2simp.in"
    {"\212\361","\x8b\xb3" },
#line 326 "trad2simp.in"
    {"Yn","\x59\x4b" },
#line 1349 "trad2simp.in"
    {"}\361","\x7f\x11" },
#line 956 "trad2simp.in"
    {"q\227","\x70\x9d" },
#line 409 "trad2simp.in"
    {"]\270","\x5d\x58" },
#line 2207 "trad2simp.in"
    {"\222\361","\x94\xfd" },
#line 1119 "trad2simp.in"
    {"w\274","\x77\x51" },
#line 2989 "trad2simp.in"
    {"\205m^r","\x84\x27\x4e\x7e" },
#line 700 "trad2simp.in"
    {"h\337","\x68\x0b" },
#line 1714 "trad2simp.in"
    {"\212*","\x8b\xbf" },
#line 1599 "trad2simp.in"
    {"\206\\","\x86\x4f" },
#line 612 "trad2simp.in"
    {"d\324","\x62\xc5" },
#line 1351 "trad2simp.in"
    {"}\364","\x7e\xc3" },
#line 2978 "trad2simp.in"
    {"w@|M","\x84\x57\x7c\x4d" },
#line 1695 "trad2simp.in"
    {"\212\002","\x8b\xa2" },
#line 141 "trad2simp.in"
    {"RW","\x52\x2c" },
#line 1250 "trad2simp.in"
    {"}\002","\x7e\xa3" },
#line 1522 "trad2simp.in"
    {"\203\364","\x5e\xb5" },
#line 1256 "trad2simp.in"
    {"}\011","\x7e\xab" },
#line 1631 "trad2simp.in"
    {"\210\024","\x86\x9d" },
#line 2118 "trad2simp.in"
    {"\222\011","\x94\xa0" },
#line 1813 "trad2simp.in"
    {"\213\004","\x8a\x8a" },
#line 2536 "trad2simp.in"
    {"\230\364","\x99\x74" },
#line 1647 "trad2simp.in"
    {"\210\236","\x88\x6e" },
#line 2464 "trad2simp.in"
    {"\230\002","\x98\x76" },
#line 1928 "trad2simp.in"
    {"\214\370","\x52\x69" },
#line 2071 "trad2simp.in"
    {"\221\026","\x90\xe7" },
#line 800 "trad2simp.in"
    {"k\306","\x6b\xb4" },
#line 1501 "trad2simp.in"
    {"\202c","\x6a\x79" },
#line 2582 "trad2simp.in"
    {"\231\\","\x99\x0d" },
#line 1356 "trad2simp.in"
    {"~\011","\x7f\x19" },
#line 1066 "trad2simp.in"
    {"v\002","\x75\xd6" },
#line 1067 "trad2simp.in"
    {"v\011","\x61\x08" },
#line 912 "trad2simp.in"
    {"o\374","\x6c\xfa" },
#line 1899 "trad2simp.in"
    {"\214\300","\x8d\x3a" },
#line 142 "trad2simp.in"
    {"R[","\x52\x1a" },
#line 971 "trad2simp.in"
    {"q\364","\x70\xe9" },
#line 945 "trad2simp.in"
    {"p\364","\x70\xc3" },
#line 598 "trad2simp.in"
    {"d\245","\x62\xe8" },
#line 2686 "trad2simp.in"
    {"\233\301","\x9c\xa0" },
#line 1190 "trad2simp.in"
    {"z\304","\x7a\x9c" },
#line 917 "trad2simp.in"
    {"p\011","\x6c\xfb" },
#line 1660 "trad2simp.in"
    {"\211;","\x4e\xb5" },
#line 451 "trad2simp.in"
    {"^\361","\x75\xc8" },
#line 2711 "trad2simp.in"
    {"\234\022","\x9c\xc6" },
#line 2203 "trad2simp.in"
    {"\222\352","\x94\xfa" },
#line 2332 "trad2simp.in"
    {"\224T","\x95\x72" },
#line 620 "trad2simp.in"
    {"d\361","\x64\x01" },
#line 1799 "trad2simp.in"
    {"\212\353","\x8c\x0f" },
#line 2531 "trad2simp.in"
    {"\230\352","\x99\x6a" },
#line 2715 "trad2simp.in"
    {"\234\037","\x9c\xd1" },
#line 2822 "trad2simp.in"
    {"\235\357","\x9e\x69" },
#line 2729 "trad2simp.in"
    {"\234;","\x9c\xd7" },
#line 1520 "trad2simp.in"
    {"\203\353","\x58\x07" },
#line 1921 "trad2simp.in"
    {"\214\346","\x8d\x4b" },
#line 1154 "trad2simp.in"
    {"y|","\x88\xf8" },
#line 792 "trad2simp.in"
    {"k\255","\x50\xf5" },
#line 2532 "trad2simp.in"
    {"\230\353","\x99\x6b" },
#line 1108 "trad2simp.in"
    {"v\352","\x83\x61" },
#line 622 "trad2simp.in"
    {"d\364","\x62\x69" },
#line 1173 "trad2simp.in"
    {"z@","\x8c\x37" },
#line 2069 "trad2simp.in"
    {"\221\022","\x90\xb9" },
#line 390 "trad2simp.in"
    {"\\\375","\x5c\xe1" },
#line 381 "trad2simp.in"
    {"\\\\","\x5c\x49" },
#line 2560 "trad2simp.in"
    {"\231(","\x99\x86" },
#line 2994 "trad2simp.in"
    {"\213\241u;","\x8b\xa1\x52\x12" },
#line 1301 "trad2simp.in"
    {"}y","\x7e\xe2" },
#line 195 "trad2simp.in"
    {"TN","\x5c\x3a" },
#line 395 "trad2simp.in"
    {"] ","\x5c\xbd" },
#line 878 "trad2simp.in"
    {"oT","\x6d\x01" },
#line 2631 "trad2simp.in"
    {"\232J","\x9a\x85" },
#line 2610 "trad2simp.in"
    {"\232\005","\x9a\x93" },
#line 1207 "trad2simp.in"
    {"{\311","\x7b\x51" },
#line 1141 "trad2simp.in"
    {"x\375","\x78\x57" },
#line 669 "trad2simp.in"
    {"f\270","\x4e\x86" },
#line 1402 "trad2simp.in"
    {"~y","\x7e\xce" },
#line 2585 "trad2simp.in"
    {"\231\254","\x9a\x6c" },
#line 2092 "trad2simp.in"
    {"\221\305","\x91\x7d" },
#line 2863 "trad2simp.in"
    {"\237K","\x65\x8b" },
#line 633 "trad2simp.in"
    {"e\031","\x64\x00" },
#line 646 "trad2simp.in"
    {"ex","\x65\x70" },
#line 1593 "trad2simp.in"
    {"\206-","\x51\x70" },
#line 1895 "trad2simp.in"
    {"\214\273","\x8d\x39" },
#line 2088 "trad2simp.in"
    {"\221\274","\x5b\xb4" },
#line 1170 "trad2simp.in"
    {"z(","\x62\x41" },
#line 891 "trad2simp.in"
    {"o\227","\x6d\xa7" },
#line 2137 "trad2simp.in"
    {"\222=","\x94\xb8" },
#line 2380 "trad2simp.in"
    {"\225\274","\x96\x0f" },
#line 1973 "trad2simp.in"
    {"\216\241","\x8e\x51" },
#line 2498 "trad2simp.in"
    {"\230S","\x98\x9b" },
#line 992 "trad2simp.in"
    {"r\300","\x72\xb6" },
#line 2796 "trad2simp.in"
    {"\235\217","\x9e\x21" },
#line 33 "trad2simp.in"
    {"9n","\x39\x18" },
#line 1542 "trad2simp.in"
    {"\204\357","\x82\xc1" },
#line 2303 "trad2simp.in"
    {"\224\011","\x94\xe3" },
#line 2926 "trad2simp.in"
    {"Y'w@","\x59\x27\x84\x57" },
#line 1699 "trad2simp.in"
    {"\212\014","\x8b\xa7" },
#line 1381 "trad2simp.in"
    {"~=","\x60\x3b" },
#line 2768 "trad2simp.in"
    {"\235&","\x9e\x2f" },
#line 476 "trad2simp.in"
    {"`e","\x80\x3b" },
#line 854 "trad2simp.in"
    {"n\304","\x6c\xa7" },
#line 2738 "trad2simp.in"
    {"\234W","\x9c\xde" },
#line 2552 "trad2simp.in"
    {"\231\023","\x99\x7f" },
#line 433 "trad2simp.in"
    {"^y","\x5e\x72" },
#line 2471 "trad2simp.in"
    {"\230\014","\x98\x82" },
#line 2063 "trad2simp.in"
    {"\220\217","\x90\x3b" },
#line 650 "trad2simp.in"
    {"e\254","\x65\xa9" },
#line 1050 "trad2simp.in"
    {"u*","\x89\xd2" },
#line 910 "trad2simp.in"
    {"o\361","\x6e\xe8" },
#line 1990 "trad2simp.in"
    {"\216\371","\x8f\x75" },
#line 2952 "trad2simp.in"
    {"^r\226\206","\x4e\x7e\x96\x86" },
#line 1331 "trad2simp.in"
    {"}\312","\x7d\x27" },
#line 1483 "trad2simp.in"
    {"\201\317","\x81\x91" },
#line 537 "trad2simp.in"
    {"b\011","\x94\xba" },
#line 1377 "trad2simp.in"
    {"~5","\x7f\x26" },
#line 1267 "trad2simp.in"
    {"}\032","\x7e\xa7" },
#line 726 "trad2simp.in"
    {"j\005","\x67\x9e" },
#line 1040 "trad2simp.in"
    {"t\312","\x74\x3c" },
#line 2685 "trad2simp.in"
    {"\233\300","\x9c\xa7" },
#line 68 "trad2simp.in"
    {"P\026","\x5e\x78" },
#line 2981 "trad2simp.in"
    {"w@\217\360","\x84\x57\x8f\xf0" },
#line 2222 "trad2simp.in"
    {"\223\032","\x94\xee" },
#line 2827 "trad2simp.in"
    {"\235\370","\x9e\x6c" },
#line 556 "trad2simp.in"
    {"ch","\x82\x0d" },
#line 297 "trad2simp.in"
    {"Xy","\x58\x11" },
#line 697 "trad2simp.in"
    {"h\304","\x5f\x03" },
#line 819 "trad2simp.in"
    {"l\301","\x51\xb5" },
#line 1420 "trad2simp.in"
    {"\177f","\x7f\x58" },
#line 1020 "trad2simp.in"
    {"s\352","\x57\x2d" },
#line 2177 "trad2simp.in"
    {"\222\251","\x94\xe5" },
#line 1363 "trad2simp.in"
    {"~\032","\x7e\xe6" },
#line 2272 "trad2simp.in"
    {"\223\251","\x94\xe9" },
#line 1781 "trad2simp.in"
    {"\212\307","\x8c\x08" },
#line 1330 "trad2simp.in"
    {"}\307","\x7f\x01" },
#line 679 "trad2simp.in"
    {"f\370","\x4e\x66" },
#line 2191 "trad2simp.in"
    {"\222\307","\x94\xa1" },
#line 251 "trad2simp.in"
    {"V\245","\x54\xbd" },
#line 2281 "trad2simp.in"
    {"\223\307","\x95\x5f" },
#line 2646 "trad2simp.in"
    {"\232\324","\x4f\x53" },
#line 836 "trad2simp.in"
    {"n\031","\x6d\xa3" },
#line 1814 "trad2simp.in"
    {"\213\005","\x8b\xcc" },
#line 216 "trad2simp.in"
    {"U\306","\x54\x5b" },
#line 2345 "trad2simp.in"
    {"\224y","\x95\x69" },
#line 1679 "trad2simp.in"
    {"\211\241","\x89\xcb" },
#line 1757 "trad2simp.in"
    {"\212\215","\x8b\xa4" },
#line 2587 "trad2simp.in"
    {"\231\256","\x51\xaf" },
#line 3000 "trad2simp.in"
    {"\220\355[P","\x90\xed\x5b\x50" },
#line 1258 "trad2simp.in"
    {"}\015","\x7e\xb3" },
#line 2918 "trad2simp.in"
    {"N\262w@","\x4e\xb2\x84\x57" },
#line 1581 "trad2simp.in"
    {"\205\371","\x85\x3c" },
#line 2119 "trad2simp.in"
    {"\222\015","\x94\x9d" },
#line 1511 "trad2simp.in"
    {"\203\015","\x82\xdf" },
#line 907 "trad2simp.in"
    {"o\353","\x6e\xe5" },
#line 2821 "trad2simp.in"
    {"\235\346","\x9e\x6a" },
#line 520 "trad2simp.in"
    {"a\307","\x60\x73" },
#line 1993 "trad2simp.in"
    {"\216\374","\x8f\x76" },
#line 1432 "trad2simp.in"
    {"\177\322","\x4e\x60" },
#line 609 "trad2simp.in"
    {"d\312","\x51\xfb" },
#line 778 "trad2simp.in"
    {"k=","\x94\xa6" },
#line 1409 "trad2simp.in"
    {"~\215","\x7d\x2f" },
#line 43 "trad2simp.in"
    {"N&","\x5e\x76" },
#line 180 "trad2simp.in"
    {"Sl","\x66\x02" },
#line 611 "trad2simp.in"
    {"d\323","\x39\xdf" },
#line 1069 "trad2simp.in"
    {"v\015","\x75\xa1" },
#line 2183 "trad2simp.in"
    {"\222\263","\x95\x10" },
#line 1904 "trad2simp.in"
    {"\214\305","\x8d\x45" },
#line 338 "trad2simp.in"
    {"Z\257","\x59\xab" },
#line 2277 "trad2simp.in"
    {"\223\263","\x95\x4d" },
#line 32 "trad2simp.in"
    {"6\032","\x36\x0e" },
#line 2518 "trad2simp.in"
    {"\230\263","\x52\x2e" },
#line 1185 "trad2simp.in"
    {"z\256","\x7a\x77" },
#line 1896 "trad2simp.in"
    {"\214\274","\x8d\x34" },
#line 2516 "trad2simp.in"
    {"\230\257","\x98\xd2" },
#line 1305 "trad2simp.in"
    {"}\210","\x7e\xe8" },
#line 2973 "trad2simp.in"
    {"w@f\016","\x84\x57\x66\x0e" },
#line 356 "trad2simp.in"
    {"[0","\x5a\x74" },
#line 91 "trad2simp.in"
    {"P\305","\x4e\xc5" },
#line 1538 "trad2simp.in"
    {"\204\300","\x83\x6a" },
#line 1254 "trad2simp.in"
    {"}\007","\x7e\xa5" },
#line 2367 "trad2simp.in"
    {"\225\241","\x96\x02" },
#line 608 "trad2simp.in"
    {"d\307","\x62\xe9" },
#line 17 "trad2simp.in"
    {"\000\257","\x02\xc9" },
#line 308 "trad2simp.in"
    {"X\323","\x53\x8b" },
#line 2215 "trad2simp.in"
    {"\223\007","\x95\x2b" },
#line 319 "trad2simp.in"
    {"Y ","\x59\x1f" },
#line 2970 "trad2simp.in"
    {"w@T\015","\x84\x57\x54\x0d" },
#line 2322 "trad2simp.in"
    {"\2245","\x94\xc1" },
#line 2468 "trad2simp.in"
    {"\230\007","\x98\x78" },
#line 2810 "trad2simp.in"
    {"\235\273","\x9e\x58" },
#line 2957 "trad2simp.in"
    {"b@w@","\x62\x40\x84\x57" },
#line 1406 "trad2simp.in"
    {"~\210","\x7f\x2c" },
#line 674 "trad2simp.in"
    {"f\317","\x54\x11" },
#line 267 "trad2simp.in"
    {"V\352","\x56\xf1" },
#line 2707 "trad2simp.in"
    {"\234\010","\x9c\xbd" },
#line 1449 "trad2simp.in"
    {"\200y","\x80\x4d" },
#line 2948 "trad2simp.in"
    {"^r~\242","\x4e\x7e\x7d\x05" },
#line 1045 "trad2simp.in"
    {"u\014","\x74\xef" },
#line 572 "trad2simp.in"
    {"d\015","\x63\x5f" },
#line 1983 "trad2simp.in"
    {"\216\324","\x8f\x6b" },
#line 306 "trad2simp.in"
    {"X\307","\x57\x5b" },
#line 2110 "trad2simp.in"
    {"\221\371","\x94\x95" },
#line 2146 "trad2simp.in"
    {"\222M","\x94\xcb" },
#line 3001 "trad2simp.in"
    {"\220\355[P^r","\x90\xed\x5b\x50\x4e\x7e" },
#line 2242 "trad2simp.in"
    {"\223M","\x95\x40" },
#line 828 "trad2simp.in"
    {"m\322","\x51\xc4" },
#line 2494 "trad2simp.in"
    {"\230M","\x98\x9d" },
#line 2574 "trad2simp.in"
    {"\231H","\x99\x90" },
#line 1180 "trad2simp.in"
    {"zh","\x98\x93" },
#line 329 "trad2simp.in"
    {"Y\346","\x59\x78" },
#line 46 "trad2simp.in"
    {"N\202","\x4e\x71" },
#line 873 "trad2simp.in"
    {"o5","\x6e\x86" },
#line 1838 "trad2simp.in"
    {"\213T","\x64\xb0" },
#line 602 "trad2simp.in"
    {"d\263","\x63\xff" },
#line 244 "trad2simp.in"
    {"Vy","\x5f\x53" },
#line 277 "trad2simp.in"
    {"W\334","\x91\xce" },
#line 340 "trad2simp.in"
    {"Z\275","\x59\x88" },
#line 1326 "trad2simp.in"
    {"}\275","\x7e\xf0" },
#line 411 "trad2simp.in"
    {"]\274","\x5c\x7f" },
#line 168 "trad2simp.in"
    {"R\361","\x52\xa2" },
#line 496 "trad2simp.in"
    {"aM","\x61\x20" },
#line 2837 "trad2simp.in"
    {"\236\036","\x9e\x3e" },
#line 385 "trad2simp.in"
    {"\\h","\x5c\x66" },
#line 590 "trad2simp.in"
    {"d\210","\x63\x5e" },
#line 1974 "trad2simp.in"
    {"\216\245","\x8e\x7f" },
#line 2053 "trad2simp.in"
    {"\220i","\x90\x02" },
#line 1038 "trad2simp.in"
    {"t\275","\x73\xba" },
#line 368 "trad2simp.in"
    {"[\351","\x5b\xa1" },
#line 135 "trad2simp.in"
    {"R*","\x52\x20" },
#line 868 "trad2simp.in"
    {"o\032","\x6c\xa4" },
#line 699 "trad2simp.in"
    {"h\327","\x67\xa3" },
#line 303 "trad2simp.in"
    {"X\263","\x57\x5f" },
#line 2192 "trad2simp.in"
    {"\222\314","\x94\xe4" },
#line 2591 "trad2simp.in"
    {"\231\301","\x9a\x73" },
#line 2283 "trad2simp.in"
    {"\223\314","\x95\x46" },
#line 235 "trad2simp.in"
    {"VS","\x56\x18" },
#line 2765 "trad2simp.in"
    {"\235\036","\x9e\x2e" },
#line 1127 "trad2simp.in"
    {"xh","\x78\x17" },
#line 895 "trad2simp.in"
    {"o\251","\x6c\xf6" },
#line 2976 "trad2simp.in"
    {"w@k\313^\270\213\256","\x84\x57\x6b\xcb\x5e\xb8\x8b\xae" },
#line 835 "trad2simp.in"
    {"m\372","\x6d\x45" },
#line 725 "trad2simp.in"
    {"j\002","\x4e\x50" },
#line 851 "trad2simp.in"
    {"n\256","\x6d\x49" },
#line 132 "trad2simp.in"
    {"Q\334","\x51\xdb" },
#line 1234 "trad2simp.in"
    {"|i","\x7b\x3e" },
#line 456 "trad2simp.in"
    {"_5","\x5f\x20" },
#line 1507 "trad2simp.in"
    {"\202x","\x82\x79" },
#line 1456 "trad2simp.in"
    {"\200\312","\x67\x10" },
#line 1700 "trad2simp.in"
    {"\212\016","\x8b\xa8" },
#line 794 "trad2simp.in"
    {"k\257","\x6b\xa1" },
#line 709 "trad2simp.in"
    {"i\\","\x80\xe1" },
#line 92 "trad2simp.in"
    {"P\311","\x4f\x65" },
#line 690 "trad2simp.in"
    {"hn","\x67\x6f" },
#line 2045 "trad2simp.in"
    {"\220K","\x8f\xd0" },
#line 522 "trad2simp.in"
    {"a\314","\x60\x3f" },
#line 2472 "trad2simp.in"
    {"\230\016","\x98\x80" },
#line 2761 "trad2simp.in"
    {"\235\022","\x9e\x30" },
#line 232 "trad2simp.in"
    {"V5","\x54\xd3" },
#line 1318 "trad2simp.in"
    {"}\261","\x7e\xb2" },
#line 1690 "trad2simp.in"
    {"\211\324","\x7b\x4b" },
#line 2181 "trad2simp.in"
    {"\222\261","\x94\xde" },
#line 2862 "trad2simp.in"
    {"\237J","\x9f\x50" },
#line 566 "trad2simp.in"
    {"c\300","\x62\xe3" },
#line 2766 "trad2simp.in"
    {"\235\037","\x9e\x31" },
#line 1812 "trad2simp.in"
    {"\213\002","\x8c\x13" },
#line 2517 "trad2simp.in"
    {"\230\261","\x53\xf0" },
#line 2774 "trad2simp.in"
    {"\235;","\x9e\x3f" },
#line 324 "trad2simp.in"
    {"Yi","\x59\x41" },
#line 2001 "trad2simp.in"
    {"\217\023","\x63\x3d" },
#line 2847 "trad2simp.in"
    {"\236\274","\x4e\x48" },
#line 1218 "trad2simp.in"
    {"|\036","\x7b\xaa" },
#line 1455 "trad2simp.in"
    {"\200\307","\x80\xba" },
#line 764 "trad2simp.in"
    {"j\352","\x67\xa5" },
#line 471 "trad2simp.in"
    {"_\251","\x59\x0d" },
#line 1878 "trad2simp.in"
    {"\214\241","\x8d\x22" },
#line 266 "trad2simp.in"
    {"V\323","\x55\x6e" },
#line 2736 "trad2simp.in"
    {"\234T","\x9c\xdd" },
#line 2093 "trad2simp.in"
    {"\221\306","\x91\xc7" },
#line 1771 "trad2simp.in"
    {"\212\252","\x8b\xf4" },
#line 1285 "trad2simp.in"
    {"}D","\x7e\xc4" },
#line 765 "trad2simp.in"
    {"j\353","\x6a\x65" },
#line 2385 "trad2simp.in"
    {"\225\306","\x67\x7f" },
#line 2178 "trad2simp.in"
    {"\222\252","\x94\xd5" },
#line 2962 "trad2simp.in"
    {"e\347w@","\x65\xe7\x84\x57" },
#line 1481 "trad2simp.in"
    {"\201\311","\x81\x38" },
#line 957 "trad2simp.in"
    {"q\261","\x70\xed" },
#line 2273 "trad2simp.in"
    {"\223\252","\x95\x3c" },
#line 2811 "trad2simp.in"
    {"\235\274","\x9e\x63" },
#line 1281 "trad2simp.in"
    {"}?","\x7e\xd0" },
#line 203 "trad2simp.in"
    {"US","\x54\x2f" },
#line 2139 "trad2simp.in"
    {"\222?","\x94\xbf" },
#line 536 "trad2simp.in"
    {"b\007","\x62\x06" },
#line 1987 "trad2simp.in"
    {"\216\353","\x8f\x78" },
#line 1140 "trad2simp.in"
    {"x\357","\x77\xf6" },
#line 1707 "trad2simp.in"
    {"\212\033","\x8b\xb9" },
#line 331 "trad2simp.in"
    {"Z\033","\x5a\x31" },
#line 1268 "trad2simp.in"
    {"}\033","\x7e\xb7" },
#line 1025 "trad2simp.in"
    {"t?","\x73\xf2" },
#line 2097 "trad2simp.in"
    {"\221\324","\x94\x87" },
#line 2223 "trad2simp.in"
    {"\223\033","\x95\x1b" },
#line 2393 "trad2simp.in"
    {"\225\324","\x96\x16" },
#line 1751 "trad2simp.in"
    {"\212\177","\x8b\xd6" },
#line 798 "trad2simp.in"
    {"k\275","\x80\xb4" },
#line 493 "trad2simp.in"
    {"aD","\x68\x17" },
#line 35 "trad2simp.in"
    {"C\261","\x43\xac" },
#line 2162 "trad2simp.in"
    {"\222\177","\x94\xea" },
#line 932 "trad2simp.in"
    {"pD","\x6e\xe0" },
#line 1417 "trad2simp.in"
    {"\177>","\x74\xf6" },
#line 1133 "trad2simp.in"
    {"x\270","\x78\x1c" },
#line 1364 "trad2simp.in"
    {"~\033","\x7f\x1a" },
#line 101 "trad2simp.in"
    {"P\371","\x4e\xf7" },
#line 2458 "trad2simp.in"
    {"\227\331","\x97\xea" },
#line 223 "trad2simp.in"
    {"V\015","\x55\xbd" },
#line 1692 "trad2simp.in"
    {"\211\364","\x89\xde" },
#line 801 "trad2simp.in"
    {"k\314","\x6b\xcb" },
#line 1321 "trad2simp.in"
    {"}\265","\x5f\x69" },
#line 2375 "trad2simp.in"
    {"\225\255","\x95\xfe" },
#line 487 "trad2simp.in"
    {"a\033","\x72\x31" },
#line 2459 "trad2simp.in"
    {"\227\334","\x97\xec" },
#line 2278 "trad2simp.in"
    {"\223\265","\x95\x53" },
#line 2606 "trad2simp.in"
    {"\231\370","\x9a\x8e" },
#line 2891 "trad2simp.in"
    {"\376?","\x22\x27" },
#line 2033 "trad2simp.in"
    {"\217\256","\x8f\xab" },
#line 824 "trad2simp.in"
    {"ml","\x91\xcc" },
#line 2980 "trad2simp.in"
    {"w@\200\005","\x84\x57\x80\x05" },
#line 2370 "trad2simp.in"
    {"\225\245","\x96\x00" },
#line 2977 "trad2simp.in"
    {"w@y\360","\x84\x57\x79\xf0" },
#line 255 "trad2simp.in"
    {"V\263","\x55\xbe" },
#line 2754 "trad2simp.in"
    {"\234\364","\x9e\x23" },
#line 1577 "trad2simp.in"
    {"\205\352","\x85\xae" },
#line 2664 "trad2simp.in"
    {"\233[","\x9c\x7d" },
#line 2706 "trad2simp.in"
    {"\234\002","\x9c\x97" },
#line 2708 "trad2simp.in"
    {"\234\011","\x9c\xc7" },
#line 42 "trad2simp.in"
    {"N\037","\x4e\x22" },
#line 859 "trad2simp.in"
    {"n\357","\x6e\xde" },
#line 1537 "trad2simp.in"
    {"\204\274","\x82\xcd" },
#line 2199 "trad2simp.in"
    {"\222\345","\x95\x03" },
#line 1805 "trad2simp.in"
    {"\212\367","\x8b\xbd" },
#line 2867 "trad2simp.in"
    {"\237T","\x9f\x80" },
#line 2688 "trad2simp.in"
    {"\233\311","\x9c\xa4" },
#line 2611 "trad2simp.in"
    {"\232\015","\x9a\x92" },
#line 2529 "trad2simp.in"
    {"\230\345","\x99\x66" },
#line 2298 "trad2simp.in"
    {"\223\367","\x95\x64" },
#line 418 "trad2simp.in"
    {"]\371","\x53\x7a" },
#line 217 "trad2simp.in"
    {"U\307","\x55\x6c" },
#line 350 "trad2simp.in"
    {"[\031","\x5a\xf1" },
#line 361 "trad2simp.in"
    {"[x","\x5b\x66" },
#line 1272 "trad2simp.in"
    {"},","\x43\x37" },
#line 1931 "trad2simp.in"
    {"\214\374","\x8d\x2d" },
#line 2068 "trad2simp.in"
    {"\221\011","\x4e\x61" },
#line 1458 "trad2simp.in"
    {"\201\010","\x81\x09" },
#line 2814 "trad2simp.in"
    {"\235\311","\x4d\x18" },
#line 1778 "trad2simp.in"
    {"\212\277","\x8c\x03" },
#line 341 "trad2simp.in"
    {"Z\277","\x61\x27" },
#line 1328 "trad2simp.in"
    {"}\277","\x7e\xf5" },
#line 1775 "trad2simp.in"
    {"\212\266","\x8c\x07" },
#line 755 "trad2simp.in"
    {"j\323","\x6a\x79" },
#line 2279 "trad2simp.in"
    {"\223\277","\x95\x4e" },
#line 2643 "trad2simp.in"
    {"\232\257","\x80\xae" },
#line 530 "trad2simp.in"
    {"a\367","\x60\x00" },
#line 1978 "trad2simp.in"
    {"\216\312","\x8f\x66" },
#line 1457 "trad2simp.in"
    {"\201\005","\x80\xc1" },
#line 58 "trad2simp.in"
    {"O\266","\x4f\xa3" },
#line 994 "trad2simp.in"
    {"r\371","\x72\xed" },
#line 1039 "trad2simp.in"
    {"t\277","\x74\x87" },
#line 1792 "trad2simp.in"
    {"\212\335","\x8c\x1e" },
#line 2519 "trad2simp.in"
    {"\230\266","\x98\xd3" },
#line 1339 "trad2simp.in"
    {"}\335","\x7f\x09" },
#line 673 "trad2simp.in"
    {"f\311","\x66\x53" },
#line 2195 "trad2simp.in"
    {"\222\335","\x95\x0a" },
#line 2327 "trad2simp.in"
    {"\224D","\x94\xf8" },
#line 2289 "trad2simp.in"
    {"\223\335","\x95\x58" },
#line 2554 "trad2simp.in"
    {"\231\030","\x4f\x59" },
#line 1788 "trad2simp.in"
    {"\212\326","\x8b\xba" },
#line 1529 "trad2simp.in"
    {"\204W","\x77\x40" },
#line 647 "trad2simp.in"
    {"e\202","\x65\x5b" },
#line 2326 "trad2simp.in"
    {"\224?","\x95\x71" },
#line 897 "trad2simp.in"
    {"o\261","\x6d\xc0" },
#line 1001 "trad2simp.in"
    {"sD","\x72\xf1" },
#line 2779 "trad2simp.in"
    {"\235Q","\x9e\x43" },
#line 1121 "trad2simp.in"
    {"w\323","\x77\x2c" },
#line 518 "trad2simp.in"
    {"a\266","\x5f\xc6" },
#line 1043 "trad2simp.in"
    {"t\326","\x95\x76" },
#line 154 "trad2simp.in"
    {"R\215","\x52\x51" },
#line 1822 "trad2simp.in"
    {"\213\032","\x8c\x25" },
#line 786 "trad2simp.in"
    {"k\177","\x6b\x81" },
#line 183 "trad2simp.in"
    {"S\231","\x53\x8d" },
#line 715 "trad2simp.in"
    {"i\256","\x83\x63" },
#line 2801 "trad2simp.in"
    {"\235\241","\x9e\x56" },
#line 623 "trad2simp.in"
    {"d\367","\x64\xb7" },
#line 839 "trad2simp.in"
    {"n&","\x6d\xa1" },
#line 2349 "trad2simp.in"
    {"\224\177","\x51\xff" },
#line 273 "trad2simp.in"
    {"W\023","\x57\x06" },
#line 2632 "trad2simp.in"
    {"\232M","\x9a\x81" },
#line 2859 "trad2simp.in"
    {"\237\011","\x9f\x0d" },
#line 1784 "trad2simp.in"
    {"\212\315","\x8b\xe4" },
#line 1869 "trad2simp.in"
    {"\214T","\x82\x73" },
#line 264 "trad2simp.in"
    {"V\314","\x82\xcf" },
#line 1120 "trad2simp.in"
    {"w\307","\x84\x99" },
#line 355 "trad2simp.in"
    {"[-","\x59\x76" },
#line 2958 "trad2simp.in"
    {"b@w@bK","\x62\x40\x77\x40\x62\x4b" },
#line 1741 "trad2simp.in"
    {"\212m","\x8b\xe1" },
#line 2284 "trad2simp.in"
    {"\223\315","\x95\x59" },
#line 335 "trad2simp.in"
    {"Zm","\x5a\x05" },
#line 1967 "trad2simp.in"
    {"\216\215","\x8d\xc3" },
#line 1801 "trad2simp.in"
    {"\212\356","\x8c\x18" },
#line 2157 "trad2simp.in"
    {"\222m","\x94\xbd" },
#line 875 "trad2simp.in"
    {"o?","\x6d\x46" },
#line 1324 "trad2simp.in"
    {"}\272","\x7e\xee" },
#line 2204 "trad2simp.in"
    {"\222\356","\x94\xd6" },
#line 605 "trad2simp.in"
    {"d\277","\x63\x61" },
#line 2857 "trad2simp.in"
    {"\236\377","\x9f\x0b" },
#line 2445 "trad2simp.in"
    {"\227\\","\x97\x59" },
#line 2705 "trad2simp.in"
    {"\233\377","\x9c\xca" },
#line 443 "trad2simp.in"
    {"^\335","\x53\xae" },
#line 749 "trad2simp.in"
    {"j\263","\x69\xdf" },
#line 2521 "trad2simp.in"
    {"\230\272","\x62\x6c" },
#line 2828 "trad2simp.in"
    {"\235\371","\x9e\x70" },
#line 748 "trad2simp.in"
    {"j\257","\x53\xf0" },
#line 1398 "trad2simp.in"
    {"~m","\x83\x27" },
#line 1090 "trad2simp.in"
    {"vm","\x76\x3f" },
#line 862 "trad2simp.in"
    {"n\370","\x6d\x52" },
#line 885 "trad2simp.in"
    {"o\177","\x6d\xa0" },
#line 523 "trad2simp.in"
    {"a\315","\x61\xd4" },
#line 1100 "trad2simp.in"
    {"v\272","\x76\xb1" },
#line 1591 "trad2simp.in"
    {"\206\036","\x85\x39" },
#line 1946 "trad2simp.in"
    {"\215\231","\x8d\x75" },
#line 83 "trad2simp.in"
    {"P\255","\x4f\x63" },
#line 2759 "trad2simp.in"
    {"\235\010","\x96\xc1" },
#line 2709 "trad2simp.in"
    {"\234\014","\x4c\xa1" },
#line 710 "trad2simp.in"
    {"ih","\x68\x62" },
#line 1651 "trad2simp.in"
    {"\210\334","\x88\x65" },
#line 1571 "trad2simp.in"
    {"\205\251","\x84\x28" },
#line 943 "trad2simp.in"
    {"p\272","\x4e\x3a" },
#line 2726 "trad2simp.in"
    {"\2345","\x9c\xd8" },
#line 1181 "trad2simp.in"
    {"zi","\x7a\x33" },
#line 2558 "trad2simp.in"
    {"\231\036","\x99\x6f" },
#line 2577 "trad2simp.in"
    {"\231K","\x99\x88" },
#line 415 "trad2simp.in"
    {"]\324","\x5d\xc5" },
#line 2612 "trad2simp.in"
    {"\232\016","\x9a\x91" },
#line 100 "trad2simp.in"
    {"P\361","\x96\xc7" },
#line 1926 "trad2simp.in"
    {"\214\364","\x8d\x56" },
#line 2044 "trad2simp.in"
    {"\220J","\x6e\x38" },
#line 632 "trad2simp.in"
    {"e\026","\x64\x84" },
#line 466 "trad2simp.in"
    {"_\177","\x4f\x5b" },
#line 363 "trad2simp.in"
    {"[\256","\x5b\xab" },
#line 404 "trad2simp.in"
    {"]\227","\x5d\x02" },
#line 2551 "trad2simp.in"
    {"\231\022","\x99\x81" },
#line 65 "trad2simp.in"
    {"P\011","\x4e\xd3" },
#line 1425 "trad2simp.in"
    {"\177\206","\x7f\x74" },
#line 2388 "trad2simp.in"
    {"\225\312","\x96\x14" },
#line 1059 "trad2simp.in"
    {"u\277","\x75\xf1" },
#line 871 "trad2simp.in"
    {"o,","\x6e\x0d" },
#line 473 "trad2simp.in"
    {"_\265","\x5f\x81" },
#line 2096 "trad2simp.in"
    {"\221\323","\x94\x86" },
#line 2010 "trad2simp.in"
    {"\217&","\x8f\x87" },
#line 2392 "trad2simp.in"
    {"\225\323","\x95\xff" },
#line 1197 "trad2simp.in"
    {"{M","\x7b\x0b" },
#line 2629 "trad2simp.in"
    {"\232D","\x9a\xa2" },
#line 177 "trad2simp.in"
    {"S@","\x53\x3a" },
#line 1563 "trad2simp.in"
    {"\205\210","\x83\x5f" },
#line 2966 "trad2simp.in"
    {"m\013l\376","\x6d\x0b\x6c\xfe" },
#line 1584 "trad2simp.in"
    {"\206\004","\x85\x72" },
#line 1923 "trad2simp.in"
    {"\214\352","\x8d\x28" },
#line 2372 "trad2simp.in"
    {"\225\251","\x95\xfd" },
#line 2710 "trad2simp.in"
    {"\234\015","\x9c\xc5" },
#line 1144 "trad2simp.in"
    {"y\031","\x78\x8d" },
#line 796 "trad2simp.in"
    {"k\272","\x67\x40" },
#line 1683 "trad2simp.in"
    {"\211\257","\x89\xcf" },
#line 2386 "trad2simp.in"
    {"\225\307","\x66\x97" },
#line 1980 "trad2simp.in"
    {"\216\314","\x8f\x68" },
#line 2340 "trad2simp.in"
    {"\224m","\x95\x67" },
#line 1438 "trad2simp.in"
    {"\200,","\x80\x27" },
#line 1169 "trad2simp.in"
    {"z\037","\x79\x80" },
#line 2690 "trad2simp.in"
    {"\233\324","\x9c\xbb" },
#line 1671 "trad2simp.in"
    {"\211\210","\x68\x38" },
#line 211 "trad2simp.in"
    {"U\252","\x4e\x27" },
#line 2542 "trad2simp.in"
    {"\231\004","\x99\x78" },
#line 1655 "trad2simp.in"
    {"\211\007","\x59\x0d" },
#line 1021 "trad2simp.in"
    {"s\356","\x4f\x69" },
#line 671 "trad2simp.in"
    {"f\306","\x53\x86" },
#line 1191 "trad2simp.in"
    {"z\305","\x7a\x8d" },
#line 2843 "trad2simp.in"
    {"\236\227","\x4e\x3d" },
#line 2682 "trad2simp.in"
    {"\233\255","\x9c\x91" },
#line 805 "trad2simp.in"
    {"l\010","\x6b\xe1" },
#line 2964 "trad2simp.in"
    {"f>w@","\x66\x3e\x84\x57" },
#line 1654 "trad2simp.in"
    {"\210\375","\x52\x36" },
#line 2422 "trad2simp.in"
    {"\226\261","\x96\x90" },
#line 136 "trad2simp.in"
    {"RD","\x52\x2d" },
#line 652 "trad2simp.in"
    {"e\274","\x4e\x8e" },
#line 2844 "trad2simp.in"
    {"\236\245","\x9e\xa6" },
#line 1816 "trad2simp.in"
    {"\213\016","\x8c\x1c" },
#line 1147 "trad2simp.in"
    {"y+","\x78\x3e" },
#line 257 "trad2simp.in"
    {"V\266","\x56\x24" },
#line 2047 "trad2simp.in"
    {"\220T","\x8f\xbe" },
#line 565 "trad2simp.in"
    {"c\241","\x91\xc7" },
#line 2581 "trad2simp.in"
    {"\231W","\x98\xe8" },
#line 1598 "trad2simp.in"
    {"\206[","\x86\x5a" },
#line 628 "trad2simp.in"
    {"e\004","\x64\x45" },
#line 901 "trad2simp.in"
    {"o\325","\x6e\x7f" },
#line 2961 "trad2simp.in"
    {"e\260w@","\x65\xb0\x84\x57" },
#line 2802 "trad2simp.in"
    {"\235\245","\x9e\x5b" },
#line 2421 "trad2simp.in"
    {"\226\252","\x96\x69" },
#line 1976 "trad2simp.in"
    {"\216\252","\x8e\x8f" },
#line 1687 "trad2simp.in"
    {"\211\275","\x89\xc8" },
#line 1539 "trad2simp.in"
    {"\204\306","\x5e\x2d" },
#line 2881 "trad2simp.in"
    {"\237\215","\x9f\x99" },
#line 1135 "trad2simp.in"
    {"x\274","\x78\x01" },
#line 2853 "trad2simp.in"
    {"\236\364","\x97\x09" },
#line 174 "trad2simp.in"
    {"S-","\x53\x26" },
#line 2703 "trad2simp.in"
    {"\233\364","\x9c\xba" },
#line 1947 "trad2simp.in"
    {"\215\250","\x8d\x8b" },
#line 570 "trad2simp.in"
    {"c\371","\x80\xcc" },
#line 2993 "trad2simp.in"
    {"\211\301_\256w\345w@","\x89\xc1\x5f\xae\x77\xe5\x84\x57" },
#line 1634 "trad2simp.in"
    {"\210(","\x87\xcf" },
#line 643 "trad2simp.in"
    {"eW","\x8d\x25" },
#line 1907 "trad2simp.in"
    {"\214\312","\x8d\x3c" },
#line 2826 "trad2simp.in"
    {"\235\364","\x9e\x47" },
#line 2760 "trad2simp.in"
    {"\235\011","\x9e\x26" },
#line 1823 "trad2simp.in"
    {"\213\033","\x8b\xb2" },
#line 1910 "trad2simp.in"
    {"\214\323","\x5b\xbe" },
#line 2648 "trad2simp.in"
    {"\232\326","\x9a\xcb" },
#line 93 "trad2simp.in"
    {"P\312","\x4e\xd9" },
#line 1656 "trad2simp.in"
    {"\211\016","\x88\x96" },
#line 2858 "trad2simp.in"
    {"\237\007","\x9c\xcc" },
#line 2381 "trad2simp.in"
    {"\225\275","\x96\x0d" },
#line 1882 "trad2simp.in"
    {"\214\251","\x8d\x29" },
#line 855 "trad2simp.in"
    {"n\305","\x70\x6d" },
#line 2700 "trad2simp.in"
    {"\233\352","\x9c\xae" },
#line 2579 "trad2simp.in"
    {"\231Q","\x99\x65" },
#line 761 "trad2simp.in"
    {"j\345","\x6a\x71" },
#line 2447 "trad2simp.in"
    {"\227h","\x97\x65" },
#line 1905 "trad2simp.in"
    {"\214\307","\x8d\x44" },
#line 1942 "trad2simp.in"
    {"\215\023","\x8d\x43" },
#line 853 "trad2simp.in"
    {"n\274","\x6e\x7f" },
#line 689 "trad2simp.in"
    {"h\022","\x65\xec" },
#line 2701 "trad2simp.in"
    {"\233\353","\x9c\xb0" },
#line 2959 "trad2simp.in"
    {"byw@","\x62\x79\x84\x57" },
#line 2390 "trad2simp.in"
    {"\225\314","\x96\x11" },
#line 1161 "trad2simp.in"
    {"y\256","\x79\x3c" },
#line 1246 "trad2simp.in"
    {"|\364","\x7c\x74" },
#line 1508 "trad2simp.in"
    {"\202\273","\x52\x0d" },
#line 2650 "trad2simp.in"
    {"\232\356","\x53\xd1" },
#line 1873 "trad2simp.in"
    {"\214\215","\x72\xf8" },
#line 1681 "trad2simp.in"
    {"\211\252","\x4e\xb2" },
#line 2839 "trad2simp.in"
    {"\236y","\x54\xb8" },
#line 2402 "trad2simp.in"
    {"\226,","\x57\x51" },
#line 162 "trad2simp.in"
    {"R\335","\x80\xdc" },
#line 2442 "trad2simp.in"
    {"\227H","\x70\x75" },
#line 1543 "trad2simp.in"
    {"\204\364","\x83\xbc" },
#line 2647 "trad2simp.in"
    {"\232\325","\x9a\xcc" },
#line 2992 "trad2simp.in"
    {"\211\301_\256","\x89\xc1\x5f\xae" },
#line 758 "trad2simp.in"
    {"j\335","\x69\x1f" },
#line 2087 "trad2simp.in"
    {"\221\261","\x53\xd1" },
#line 2007 "trad2simp.in"
    {"\217\036","\x8f\x8b" },
#line 1889 "trad2simp.in"
    {"\214\263","\x8d\x30" },
#line 2376 "trad2simp.in"
    {"\225\261","\x96\x05" },
#line 1828 "trad2simp.in"
    {"\213,","\x8c\x2c" },
#line 1477 "trad2simp.in"
    {"\201\251","\x81\x7b" },
#line 1886 "trad2simp.in"
    {"\214\257","\x8d\x2e" },
#line 2607 "trad2simp.in"
    {"\231\377","\x9a\x8f" },
#line 2544 "trad2simp.in"
    {"\231\010","\x7c\xcd" },
#line 1429 "trad2simp.in"
    {"\177\250","\x7f\xa1" },
#line 1499 "trad2simp.in"
    {"\202\026","\x94\xfa" },
#line 85 "trad2simp.in"
    {"P\263","\x4f\x20" },
#line 2427 "trad2simp.in"
    {"\226\326","\x86\x7d" },
#line 387 "trad2simp.in"
    {"\\\241","\x51\x88" },
#line 2713 "trad2simp.in"
    {"\234\033","\x9c\xc1" },
#line 84 "trad2simp.in"
    {"P\257","\x50\x6c" },
#line 2450 "trad2simp.in"
    {"\227\301","\x7f\x30" },
#line 2576 "trad2simp.in"
    {"\231J","\x99\x93" },
#line 2543 "trad2simp.in"
    {"\231\005","\x99\x7c" },
#line 2000 "trad2simp.in"
    {"\217\022","\x8f\x84" },
#line 1576 "trad2simp.in"
    {"\205\345","\x83\x6f" },
#line 2781 "trad2simp.in"
    {"\235S","\x9e\x41" },
#line 2832 "trad2simp.in"
    {"\236\014","\x9e\x71" },
#line 1580 "trad2simp.in"
    {"\205\367","\x85\xaf" },
#line 2008 "trad2simp.in"
    {"\217\037","\x8f\x8d" },
#line 2982 "trad2simp.in"
    {"w@\217\367","\x77\x40\x8f\xf7" },
#line 2016 "trad2simp.in"
    {"\217;","\x8f\x90" },
#line 391 "trad2simp.in"
    {"]\015","\x5d\x03" },
#line 1167 "trad2simp.in"
    {"z\010","\x79\xc6" },
#line 330 "trad2simp.in"
    {"Y\352","\x4f\x84" },
#line 1981 "trad2simp.in"
    {"\216\315","\x51\x9b" },
#line 2967 "trad2simp.in"
    {"m\013l\376n\350","\x6d\x0b\x6c\xfe\x6d\x5c" },
#line 158 "trad2simp.in"
    {"R\325","\x52\xa8" },
#line 2689 "trad2simp.in"
    {"\233\312","\x9c\xa8" },
#line 1166 "trad2simp.in"
    {"z\005","\x7a\x0e" },
#line 366 "trad2simp.in"
    {"[\346","\x5b\x9e" },
#line 562 "trad2simp.in"
    {"c\227","\x63\x1c" },
#line 2834 "trad2simp.in"
    {"\236\032","\x9e\x66" },
#line 374 "trad2simp.in"
    {"\\\010","\x4e\x13" },
#line 2653 "trad2simp.in"
    {"\233\032","\x98\x7b" },
#line 976 "trad2simp.in"
    {"r\015","\x70\xc1" },
#line 275 "trad2simp.in"
    {"W\030","\x56\xe2" },
#line 1575 "trad2simp.in"
    {"\205\335","\x82\x7a" },
#line 2750 "trad2simp.in"
    {"\234\345","\x9e\x1f" },
#line 1846 "trad2simp.in"
    {"\213m","\x6b\xc1" },
#line 1897 "trad2simp.in"
    {"\214\275","\x8d\x3b" },
#line 2845 "trad2simp.in"
    {"\236\251","\x9e\xb8" },
#line 1223 "trad2simp.in"
    {"|=","\x7b\x7e" },
#line 1688 "trad2simp.in"
    {"\211\277","\x89\xcc" },
#line 2815 "trad2simp.in"
    {"\235\323","\x9e\x67" },
#line 2448 "trad2simp.in"
    {"\227\217","\x5d\xe9" },
#line 2687 "trad2simp.in"
    {"\233\307","\x9c\xa9" },
#line 1691 "trad2simp.in"
    {"\211\335","\x62\xb5" },
#line 2803 "trad2simp.in"
    {"\235\251","\x9e\x5c" },
#line 2963 "trad2simp.in"
    {"f-w@","\x66\x2d\x84\x57" },
#line 2400 "trad2simp.in"
    {"\225\345","\x95\xfc" },
#line 2109 "trad2simp.in"
    {"\221\367","\x94\x8d" },
#line 111 "trad2simp.in"
    {"Q\030","\x5c\x3d" },
#line 2671 "trad2simp.in"
    {"\233\215","\x9c\x8f" },
#line 1573 "trad2simp.in"
    {"\205\315","\x84\xdd" },
#line 2652 "trad2simp.in"
    {"\233\015","\x80\xe1" },
#line 2887 "trad2simp.in"
    {"\372\014","\x51\x40" },
#line 1561 "trad2simp.in"
    {"\205m","\x84\x27" },
#line 1572 "trad2simp.in"
    {"\205\272","\x83\x60" },
#line 2595 "trad2simp.in"
    {"\231\324","\x9a\x75" },
#line 672 "trad2simp.in"
    {"f\307","\x66\x19" },
#line 1526 "trad2simp.in"
    {"\2045","\x83\xb4" },
#line 2932 "trad2simp.in"
    {"^rS\277","\x4e\x7e\x53\xbf" },
#line 2383 "trad2simp.in"
    {"\225\277","\x96\x0c" },
#line 1478 "trad2simp.in"
    {"\201\275","\x80\xc6" },
#line 2377 "trad2simp.in"
    {"\225\266","\x96\x0a" },
#line 274 "trad2simp.in"
    {"W\026","\x56\xfe" },
#line 2921 "trad2simp.in"
    {"S\321w@","\x53\xd1\x84\x57" },
#line 412 "trad2simp.in"
    {"]\275","\x5c\xb3" },
#line 2102 "trad2simp.in"
    {"\221\335","\x94\x88" },
#line 865 "trad2simp.in"
    {"n\377","\x6e\xe1" },
#line 1686 "trad2simp.in"
    {"\211\272","\x89\xc9" },
#line 2586 "trad2simp.in"
    {"\231\255","\x9a\x6d" },
#line 2830 "trad2simp.in"
    {"\236\007","\x9e\x6f" },
#line 2395 "trad2simp.in"
    {"\225\326","\x95\xef" },
#line 842 "trad2simp.in"
    {"nJ","\x51\xd1" },
#line 2806 "trad2simp.in"
    {"\235\257","\x83\xba" },
#line 1883 "trad2simp.in"
    {"\214\252","\x8d\x2a" },
#line 2746 "trad2simp.in"
    {"\234m","\x9c\x9a" },
#line 1145 "trad2simp.in"
    {"y&","\x77\xff" },
#line 125 "trad2simp.in"
    {"Qi","\x4e\x24" },
#line 1865 "trad2simp.in"
    {"\214?","\x6e\xaa" },
#line 806 "trad2simp.in"
    {"l\014","\x6c\x07" },
#line 2758 "trad2simp.in"
    {"\235\007","\x9e\x28" },
#line 1216 "trad2simp.in"
    {"|\015","\x7b\xd3" },
#line 2917 "trad2simp.in"
    {"N\023w@","\x4e\x13\x84\x57" },
#line 2605 "trad2simp.in"
    {"\231\361","\x9a\x86" },
#line 663 "trad2simp.in"
    {"f\210","\x66\x55" },
#line 272 "trad2simp.in"
    {"W\022","\x56\xed" },
#line 655 "trad2simp.in"
    {"f\007","\x53\x47" },
#line 2545 "trad2simp.in"
    {"\231\011","\x99\x77" },
#line 2098 "trad2simp.in"
    {"\221\325","\x94\x8c" },
#line 2394 "trad2simp.in"
    {"\225\325","\x96\x19" },
#line 1418 "trad2simp.in"
    {"\177H","\x57\x5b" },
#line 87 "trad2simp.in"
    {"P\265","\x50\x3a" },
#line 1132 "trad2simp.in"
    {"x\255","\x78\x00" },
#line 2849 "trad2simp.in"
    {"\236\314","\x9e\xc9" },
#line 2974 "trad2simp.in"
    {"w@g\011","\x84\x57\x67\x09" },
#line 640 "trad2simp.in"
    {"e*","\x64\x05" },
#line 1459 "trad2simp.in"
    {"\201\033","\x80\xeb" },
#line 553 "trad2simp.in"
    {"c\014","\x68\x3c" },
#line 112 "trad2simp.in"
    {"Q\037","\x50\x7f" },
#line 1523 "trad2simp.in"
    {"\204\007","\x82\xcc" },
#line 118 "trad2simp.in"
    {"Q;","\x50\xa5" },
#line 98 "trad2simp.in"
    {"P\345","\x4f\xa5" },
#line 816 "trad2simp.in"
    {"l\215","\x51\xb1" },
#line 388 "trad2simp.in"
    {"\\\364","\x5c\x98" },
#line 129 "trad2simp.in"
    {"Q\305","\x6d\xb8" },
#line 2979 "trad2simp.in"
    {"w@~\351","\x84\x57\x7e\xe9" },
#line 1898 "trad2simp.in"
    {"\214\277","\x8d\x38" },
#line 1996 "trad2simp.in"
    {"\217\005","\x8f\x82" },
#line 1891 "trad2simp.in"
    {"\214\266","\x8d\x2c" },
#line 978 "trad2simp.in"
    {"r\033","\x70\xc2" },
#line 104 "trad2simp.in"
    {"Q\004","\x4e\xbf" },
#line 1165 "trad2simp.in"
    {"y\317","\x80\x17" },
#line 27 "trad2simp.in"
    {"0\014","\x20\x1c" },
#line 2807 "trad2simp.in"
    {"\235\261","\x9a\x9e" },
#line 1491 "trad2simp.in"
    {"\201\345","\x53\x67" },
#line 1495 "trad2simp.in"
    {"\202\010","\x51\x74" },
#line 2680 "trad2simp.in"
    {"\233\252","\x9c\x94" },
#line 668 "trad2simp.in"
    {"f\261","\x66\x35" },
#line 2569 "trad2simp.in"
    {"\231=","\x99\x88" },
#line 2835 "trad2simp.in"
    {"\236\033","\x9e\x73" },
#line 2804 "trad2simp.in"
    {"\235\252","\x4d\x17" },
#line 483 "trad2simp.in"
    {"`\361","\x60\x7c" },
#line 123 "trad2simp.in"
    {"QW","\x51\x56" },
#line 1480 "trad2simp.in"
    {"\201\277","\x81\x13" },
#line 2775 "trad2simp.in"
    {"\235?","\x9e\x3d" },
#line 812 "trad2simp.in"
    {"lM","\x4e\x38" },
#line 2547 "trad2simp.in"
    {"\231\014","\x99\x75" },
#line 1894 "trad2simp.in"
    {"\214\272","\x8d\x36" },
#line 2763 "trad2simp.in"
    {"\235\033","\x9e\x33" },
#line 1590 "trad2simp.in"
    {"\206\032","\x85\xd3" },
#line 2564 "trad2simp.in"
    {"\2315","\x55\x82" },
#line 2846 "trad2simp.in"
    {"\236\265","\x97\x62" },
#line 2036 "trad2simp.in"
    {"\217\306","\x8f\xe4" },
#line 1911 "trad2simp.in"
    {"\214\325","\x8d\x47" },
#line 416 "trad2simp.in"
    {"]\326","\x5c\xa9" },
#line 706 "trad2simp.in"
    {"iJ","\x67\x68" },
#line 197 "trad2simp.in"
    {"T\274","\x54\x59" },
#line 2555 "trad2simp.in"
    {"\231\032","\x80\xb4" },
#line 95 "trad2simp.in"
    {"P\325","\x4e\xc6" },
#line 2920 "trad2simp.in"
    {"S\237w@","\x53\x9f\x84\x57" },
#line 28 "trad2simp.in"
    {"0\015","\x20\x1d" },
#line 1650 "trad2simp.in"
    {"\210\317","\x91\xcc" },
#line 2026 "trad2simp.in"
    {"\217T","\x8f\x9a" },
#line 2855 "trad2simp.in"
    {"\236\367","\x9e\xe9" },
#line 1482 "trad2simp.in"
    {"\201\315","\x81\x10" },
#line 1193 "trad2simp.in"
    {"z\312","\x7a\x83" },
#line 2820 "trad2simp.in"
    {"\235\345","\x9e\x36" },
#line 2032 "trad2simp.in"
    {"\217\255","\x8f\x9e" },
#line 410 "trad2simp.in"
    {"]\272","\x5c\xad" },
#line 1943 "trad2simp.in"
    {"\215\026","\x8d\x4e" },
#line 2999 "trad2simp.in"
    {"\220Ww@","\x90\x57\x84\x57" },
#line 1484 "trad2simp.in"
    {"\201\325","\x81\x98" },
#line 1240 "trad2simp.in"
    {"|\265","\x7c\xa4" },
#line 1183 "trad2simp.in"
    {"z\251","\x7a\x9d" },
#line 2694 "trad2simp.in"
    {"\233\335","\x9c\xb4" },
#line 2954 "trad2simp.in"
    {"_5l\325^r","\x5f\x20\x6c\xd5\x4e\x7e" },
#line 2812 "trad2simp.in"
    {"\235\277","\x9e\x5a" },
#line 2995 "trad2simp.in"
    {"\213\272w@","\x8b\xba\x84\x57" },
#line 1192 "trad2simp.in"
    {"z\307","\x7a\xa6" },
#line 2691 "trad2simp.in"
    {"\233\326","\x9c\xad" },
#line 1586 "trad2simp.in"
    {"\206\007","\x82\xcf" },
#line 2589 "trad2simp.in"
    {"\231\263","\x9a\x70" },
#line 347 "trad2simp.in"
    {"[\010","\x5a\x06" },
#line 2012 "trad2simp.in"
    {"\217*","\x8f\x6e" },
#line 2924 "trad2simp.in"
    {"T\020w@","\x54\x10\x84\x57" },
#line 2037 "trad2simp.in"
    {"\217\364","\x56\xde" },
#line 2816 "trad2simp.in"
    {"\235\326","\x9e\x65" },
#line 1998 "trad2simp.in"
    {"\217\011","\x8f\x7d" },
#line 1142 "trad2simp.in"
    {"y\004","\x78\x5a" },
#line 1130 "trad2simp.in"
    {"x\251","\x78\x55" },
#line 106 "trad2simp.in"
    {"Q\010","\x4f\xa9" },
#line 675 "trad2simp.in"
    {"f\326","\x66\xa7" },
#line 2453 "trad2simp.in"
    {"\227\311","\x97\xaf" },
#line 376 "trad2simp.in"
    {"\\\015","\x5b\xf9" },
#line 2684 "trad2simp.in"
    {"\233\272","\x9c\x9d" },
#line 105 "trad2simp.in"
    {"Q\005","\x5f\x53" },
#line 1186 "trad2simp.in"
    {"z\257","\x7a\x91" },
#line 280 "trad2simp.in"
    {"W\374","\x5d\x0e" },
#line 1525 "trad2simp.in"
    {"\204,","\x4e\x07" },
#line 2991 "trad2simp.in"
    {"\210\344N\013NK\217\261","\x7e\xd4\x4e\x0b\x4e\x4b\x8f\xb1" },
#line 1241 "trad2simp.in"
    {"|\335","\x7c\xc1" },
#line 2809 "trad2simp.in"
    {"\235\272","\x9e\x61" },
#line 1496 "trad2simp.in"
    {"\202\011","\x4e\x3e" },
#line 1632 "trad2simp.in"
    {"\210\037","\x87\x21" },
#line 1638 "trad2simp.in"
    {"\210;","\x86\xee" },
#line 373 "trad2simp.in"
    {"\\\007","\x5c\x06" },
#line 29 "trad2simp.in"
    {"0\016","\x20\x18" },
#line 1934 "trad2simp.in"
    {"\215\004","\x8d\x3d" },
#line 1176 "trad2simp.in"
    {"zM","\x79\xef" },
#line 481 "trad2simp.in"
    {"`\307","\x65\x66" },
#line 809 "trad2simp.in"
    {"l,","\x6c\x29" },
#line 380 "trad2simp.in"
    {"\\M","\x5c\x38" },
#line 2548 "trad2simp.in"
    {"\231\016","\x99\x79" },
#line 1541 "trad2simp.in"
    {"\204\356","\x83\xb2" },
#line 328 "trad2simp.in"
    {"Y\315","\x59\xd7" },
#line 820 "trad2simp.in"
    {"l\335","\x6e\xaf" },
#line 2462 "trad2simp.in"
    {"\227\377","\x54\xcd" },
#line 2588 "trad2simp.in"
    {"\231\261","\x9a\x6e" },
#line 852 "trad2simp.in"
    {"n\263","\x6d\xa2" },
#line 1595 "trad2simp.in"
    {"\206?","\x84\x1d" },
#line 847 "trad2simp.in"
    {"n\210","\x6c\xa9" },
#line 1644 "trad2simp.in"
    {"\210[","\x53\x6b" },
#line 2571 "trad2simp.in"
    {"\231?","\x99\x8a" },
#line 377 "trad2simp.in"
    {"\\\016","\x5b\xfc" },
#line 20 "trad2simp.in"
    {" 5","\xff\x40" },
#line 2556 "trad2simp.in"
    {"\231\033","\x99\x84" },
#line 354 "trad2simp.in"
    {"[*","\x5a\xd4" },
#line 1184 "trad2simp.in"
    {"z\252","\x6d\x3c" },
#line 133 "trad2simp.in"
    {"Q\361","\x51\xef" },
#line 707 "trad2simp.in"
    {"iS","\x67\xab" },
#line 113 "trad2simp.in"
    {"Q*","\x4f\x18" },
#line 480 "trad2simp.in"
    {"`\275","\x51\xc4" },
#line 821 "trad2simp.in"
    {"m\037","\x6d\x95" },
#line 103 "trad2simp.in"
    {"Q\002","\x4f\xac" },
#line 107 "trad2simp.in"
    {"Q\011","\x4f\xed" },
#line 2452 "trad2simp.in"
    {"\227\306","\x53\x43" },
#line 634 "trad2simp.in"
    {"e\033","\x64\xba" },
#line 856 "trad2simp.in"
    {"n\314","\x6d\xa4" },
#line 1131 "trad2simp.in"
    {"x\252","\x78\x27" },
#line 569 "trad2simp.in"
    {"c\356","\x63\x25" },
#line 827 "trad2simp.in"
    {"m\274","\x51\xc9" },
#line 1187 "trad2simp.in"
    {"z\265","\x7a\x8e" },
#line 369 "trad2simp.in"
    {"[\353","\x51\x99" },
#line 2034 "trad2simp.in"
    {"\217\257","\x8f\xa9" },
#line 1936 "trad2simp.in"
    {"\215\010","\x8d\x60" },
#line 2561 "trad2simp.in"
    {"\231,","\x7c\xca" },
#line 720 "trad2simp.in"
    {"i\323","\x67\x60" },
#line 1997 "trad2simp.in"
    {"\217\007","\x8f\x81" },
#line 1935 "trad2simp.in"
    {"\215\005","\x8d\x58" },
#line 2600 "trad2simp.in"
    {"\231\335","\x9a\x7c" },
#line 1640 "trad2simp.in"
    {"\210J","\x85\x11" },
#line 1626 "trad2simp.in"
    {"\210\005","\x87\x47" },
#line 2024 "trad2simp.in"
    {"\217M","\x8f\x99" },
#line 641 "trad2simp.in"
    {"e,","\x63\xfd" },
#line 1188 "trad2simp.in"
    {"z\266","\x7a\xad" },
#line 1494 "trad2simp.in"
    {"\202\007","\x4e\x0e" },
#line 696 "trad2simp.in"
    {"h\261","\x63\x46" },
#line 1950 "trad2simp.in"
    {"\215\374","\x5c\x40" },
#line 837 "trad2simp.in"
    {"n\033","\x51\xcf" },
#line 349 "trad2simp.in"
    {"[\014","\x5a\x07" },
#line 179 "trad2simp.in"
    {"ST","\x53\x4f" },
#line 2604 "trad2simp.in"
    {"\231\356","\x9a\x73" },
#line 184 "trad2simp.in"
    {"S\255","\x53\x8c" },
#line 478 "trad2simp.in"
    {"`\265","\x60\x05" },
#line 1434 "trad2simp.in"
    {"\177\371","\x7f\xd8" },
#line 2596 "trad2simp.in"
    {"\231\325","\x9a\x7e" },
#line 691 "trad2simp.in"
    {"h\177","\x67\x46" },
#line 1189 "trad2simp.in"
    {"z\272","\x7a\xa5" },
#line 1146 "trad2simp.in"
    {"y*","\x78\x3a" },
#line 861 "trad2simp.in"
    {"n\367","\x53\x64" },
#line 485 "trad2simp.in"
    {"`\367","\x88\x22" },
#line 270 "trad2simp.in"
    {"W\015","\x56\xf4" },
#line 840 "trad2simp.in"
    {"n,","\x6d\x4b" },
#line 2020 "trad2simp.in"
    {"\217D","\x8f\x96" },
#line 479 "trad2simp.in"
    {"`\266","\x95\xf7" },
#line 1134 "trad2simp.in"
    {"x\272","\x78\x6e" },
#line 2018 "trad2simp.in"
    {"\217?","\x82\x06" },
#line 2004 "trad2simp.in"
    {"\217\033","\x8f\x86" },
#line 2438 "trad2simp.in"
    {"\227=","\x97\x01" },
#line 268 "trad2simp.in"
    {"W\007","\x56\xf5" },
#line 698 "trad2simp.in"
    {"h\326","\x67\xa8" },
#line 181 "trad2simp.in"
    {"Sy","\x60\x64" },
#line 2457 "trad2simp.in"
    {"\227\323","\x97\xe9" },
#line 705 "trad2simp.in"
    {"iD","\x53\x3e" },
#line 714 "trad2simp.in"
    {"i\252","\x67\x69" },
#line 1428 "trad2simp.in"
    {"\177\245","\x7f\x9f" },
#line 1646 "trad2simp.in"
    {"\210y","\x53\xea" },
#line 1642 "trad2simp.in"
    {"\210S","\x67\x2f" },
#line 1156 "trad2simp.in"
    {"y\215","\x79\x78" },
#line 716 "trad2simp.in"
    {"i\277","\x68\x64" },
#line 2925 "trad2simp.in"
    {"W\037w@","\x57\x1f\x84\x57" },
#line 128 "trad2simp.in"
    {"Q\252","\x5e\x42" },
#line 362 "trad2simp.in"
    {"[\177","\x5b\x6a" },
#line 1649 "trad2simp.in"
    {"\210\312","\x88\x85" },
#line 2455 "trad2simp.in"
    {"\227\314","\x97\xe7" },
#line 279 "trad2simp.in"
    {"W\367","\x62\x67" },
#line 719 "trad2simp.in"
    {"i\315","\x67\xaa" },
#line 1939 "trad2simp.in"
    {"\215\015","\x8d\x61" },
#line 191 "trad2simp.in"
    {"T\016","\x54\x0e" },
#line 711 "trad2simp.in"
    {"im","\x4e\x1a" },
#line 1416 "trad2simp.in"
    {"\177=","\x94\xb5" },
#line 832 "trad2simp.in"
    {"m\352","\x6c\xa6" },
#line 1628 "trad2simp.in"
    {"\210\015","\x87\x4e" },
#line 825 "trad2simp.in"
    {"my","\x6d\x43" },
#line 2440 "trad2simp.in"
    {"\227D","\x97\x2d" },
#line 1430 "trad2simp.in"
    {"\177\251","\x4e\x49" },
#line 1143 "trad2simp.in"
    {"y\016","\x78\x40" },
#line 1162 "trad2simp.in"
    {"y\261","\x79\x77" },
#line 131 "trad2simp.in"
    {"Q\315","\x51\xbb" },
#line 1160 "trad2simp.in"
    {"y\252","\x79\x85" },
#line 178 "trad2simp.in"
    {"SD","\x5e\xff" },
#line 1426 "trad2simp.in"
    {"\177\210","\x7f\x81" },
#line 1155 "trad2simp.in"
    {"y\177","\x79\x84" },
#line 2922 "trad2simp.in"
    {"T\010w@","\x54\x08\x84\x57" },
#line 1944 "trad2simp.in"
    {"\215\033","\x8d\x63" },
#line 1648 "trad2simp.in"
    {"\210\252","\x79\x5b" },
#line 1148 "trad2simp.in"
    {"y,","\x77\xfe" },
#line 2456 "trad2simp.in"
    {"\227\315","\x97\xe8" },
#line 1163 "trad2simp.in"
    {"y\277","\x79\xc3" },
#line 2987 "trad2simp.in"
    {"\177\026w@","\x7f\x16\x84\x57" },
#line 1652 "trad2simp.in"
    {"\210\335","\x88\xc5" },
#line 2923 "trad2simp.in"
    {"T\015w@","\x54\x0d\x84\x57" },
#line 1431 "trad2simp.in"
    {"\177\266","\x81\xbb" },
#line 2919 "trad2simp.in"
    {"SSw@","\x53\x53\x84\x57" },
#line 830 "trad2simp.in"
    {"m\345","\x6e\x0c" },
#line 2953 "trad2simp.in"
    {"_5l\325","\x5f\x35\x6c\xd5" }
  };

static const short lookup[] =
  {
      -1,   -1,    0,   -1,   -1,   -1,   -1,    1,
       2,   -1,   -1,   -1,    3,   -1,   -1,   -1,
       4,    5,    6,   -1,    7,   -1,    8,    9,
      -1,   10,   -1,   -1,   11,   -1,   -1,   -1,
      12,   13,   -1,   14,   -1,   15,   16,   -1,
      17,   -1,   18,   19,   -1,   -1,   -1,   20,
      -1,   -1,   -1,   -1,   21,   22,   -1,   23,
      -1,   24,   -1,   -1,   -1,   -1,   25,   26,
      -1,   27,   -1,   28,   29,   -1,   -1,   -1,
      30,   31,   -1,   32,   -1,   33,   34,   -1,
      35,   -1,   36,   37,   -1,   38,   -1,   39,
      -1,   -1,   -1,   -1,   40,   41,   -1,   -1,
      42,   43,   44,   -1,   45,   -1,   46,   47,
      -1,   -1,   -1,   48,   49,   50,   51,   -1,
      52,   53,   -1,   54,   -1,   55,   -1,   -1,
      56,   -1,   -1,   57,   -1,   58,   -1,   59,
      -1,   -1,   60,   -1,   -1,   61,   -1,   62,
      -1,   63,   64,   -1,   -1,   -1,   65,   66,
      -1,   67,   -1,   68,   -1,   -1,   69,   -1,
      70,   71,   -1,   72,   -1,   73,   74,   -1,
      -1,   -1,   75,   76,   -1,   77,   -1,   78,
      79,   -1,   80,   -1,   81,   82,   -1,   83,
      -1,   84,   85,   -1,   86,   -1,   87,   -1,
      -1,   88,   -1,   89,   90,   -1,   91,   -1,
      92,   -1,   -1,   93,   -1,   94,   95,   96,
      97,   98,   99,   -1,   -1,   -1,   -1,  100,
      -1,   -1,   -1,   -1,  101,  102,   -1,  103,
      -1,  104,  105,   -1,  106,   -1,  107,  108,
      -1,  109,   -1,   -1,   -1,   -1,  110,   -1,
      -1,  111,  112,  113,   -1,  114,  115,   -1,
     116,   -1,  117,  118,  119,  120,   -1,  121,
      -1,   -1,  122,  123,  124,   -1,   -1,  125,
      -1,   -1,  126,   -1,   -1,   -1,  127,   -1,
      -1,  128,   -1,  129,  130,   -1,   -1,   -1,
     131,   -1,   -1,  132,   -1,  133,   -1,   -1,
      -1,   -1,  134,   -1,   -1,  135,  136,  137,
      -1,   -1,   -1,   -1,  138,  139,   -1,  140,
      -1,  141,   -1,   -1,  142,   -1,   -1,   -1,
     143,  144,   -1,  145,  146,   -1,  147,   -1,
     148,   -1,   -1,   -1,   -1,  149,   -1,   -1,
      -1,   -1,  150,  151,   -1,  152,   -1,   -1,
     153,   -1,   -1,  154,   -1,   -1,   -1,  155,
      -1,   -1,  156,   -1,  157,   -1,   -1,  158,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
     159,  160,   -1,  161,   -1,  162,   -1,   -1,
     163,   -1,  164,  165,   -1,  166,   -1,  167,
     168,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,  169,   -1,   -1,  170,   -1,   -1,   -1,
      -1,  171,   -1,  172,   -1,   -1,  173,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
     174,   -1,   -1,  175,   -1,   -1,   -1,  176,
      -1,   -1,  177,   -1,  178,   -1,   -1,  179,
      -1,  180,  181,   -1,   -1,   -1,  182,   -1,
      -1,  183,   -1,  184,  185,   -1,  186,   -1,
     187,   -1,   -1,  188,   -1,  189,   -1,   -1,
     190,   -1,  191,   -1,   -1,  192,   -1,  193,
      -1,   -1,  194,   -1,   -1,   -1,   -1,  195,
      -1,   -1,   -1,   -1,  196,   -1,  197,  198,
      -1,  199,   -1,   -1,   -1,   -1,  200,   -1,
     201,   -1,   -1,   -1,   -1,   -1,  202,   -1,
     203,   -1,  204,   -1,   -1,   -1,   -1,  205,
      -1,   -1,  206,   -1,  207,  208,   -1,  209,
      -1,  210,   -1,   -1,  211,   -1,  212,  213,
      -1,   -1,   -1,  214,   -1,   -1,   -1,   -1,
     215,  216,   -1,  217,   -1,  218,   -1,  219,
      -1,   -1,  220,  221,   -1,   -1,   -1,  222,
      -1,  223,   -1,   -1,  224,   -1,   -1,   -1,
      -1,  225,   -1,   -1,  226,   -1,  227,   -1,
      -1,  228,   -1,  229,   -1,   -1,  230,   -1,
      -1,   -1,   -1,  231,   -1,  232,   -1,   -1,
     233,   -1,  234,   -1,   -1,  235,   -1,  236,
      -1,   -1,   -1,   -1,  237,   -1,   -1,   -1,
      -1,  238,   -1,   -1,  239,   -1,  240,   -1,
      -1,  241,   -1,  242,  243,   -1,  244,   -1,
     245,   -1,   -1,   -1,  246,  247,   -1,   -1,
      -1,   -1,   -1,  248,   -1,  249,   -1,  250,
      -1,  251,  252,   -1,   -1,   -1,   -1,  253,
      -1,   -1,   -1,   -1,  254,   -1,  255,   -1,
      -1,  256,   -1,  257,   -1,   -1,  258,   -1,
      -1,  259,   -1,  260,   -1,   -1,  261,   -1,
     262,   -1,  263,   -1,   -1,  264,   -1,  265,
      -1,   -1,   -1,   -1,  266,   -1,   -1,  267,
      -1,  268,   -1,   -1,   -1,  269,  270,   -1,
      -1,   -1,   -1,  271,   -1,   -1,  272,   -1,
     273,  274,   -1,  275,   -1,   -1,   -1,   -1,
      -1,   -1,  276,  277,   -1,   -1,   -1,  278,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,  279,
      -1,   -1,   -1,   -1,   -1,   -1,  280,   -1,
      -1,  281,   -1,  282,  283,   -1,  284,   -1,
     285,   -1,   -1,  286,   -1,  287,   -1,   -1,
     288,  289,   -1,   -1,   -1,  290,   -1,   -1,
      -1,   -1,  291,   -1,  292,   -1,   -1,   -1,
     293,  294,   -1,  295,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,  296,   -1,
     297,   -1,   -1,  298,   -1,  299,   -1,   -1,
     300,   -1,  301,  302,   -1,   -1,   -1,  303,
      -1,   -1,  304,   -1,  305,   -1,   -1,   -1,
      -1,  306,  307,   -1,  308,   -1,  309,  310,
      -1,   -1,   -1,  311,   -1,   -1,  312,   -1,
      -1,   -1,   -1,  313,   -1,  314,   -1,   -1,
     315,   -1,   -1,   -1,   -1,  316,   -1,  317,
      -1,   -1,   -1,   -1,  318,   -1,   -1,   -1,
      -1,  319,   -1,   -1,  320,   -1,   -1,   -1,
      -1,  321,   -1,  322,   -1,   -1,  323,   -1,
      -1,   -1,   -1,  324,   -1,  325,   -1,   -1,
      -1,   -1,  326,   -1,   -1,   -1,   -1,  327,
      -1,   -1,   -1,   -1,  328,   -1,   -1,  329,
      -1,   -1,   -1,   -1,  330,   -1,  331,   -1,
      -1,  332,   -1,  333,   -1,   -1,  334,   -1,
     335,  336,   -1,   -1,   -1,  337,   -1,   -1,
      -1,   -1,   -1,  338,   -1,  339,   -1,  340,
      -1,   -1,   -1,   -1,  341,   -1,   -1,   -1,
      -1,  342,  343,   -1,   -1,   -1,  344,   -1,
      -1,   -1,   -1,  345,   -1,  346,  347,   -1,
      -1,  348,   -1,  349,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,  350,   -1,  351,   -1,   -1,
      -1,   -1,  352,   -1,  353,   -1,   -1,  354,
      -1,  355,   -1,   -1,   -1,   -1,  356,   -1,
      -1,  357,   -1,  358,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,  359,   -1,   -1,   -1,   -1,
      -1,   -1,  360,  361,   -1,  362,   -1,  363,
      -1,   -1,  364,   -1,  365,  366,   -1,  367,
      -1,   -1,   -1,   -1,  368,   -1,  369,   -1,
      -1,  370,   -1,   -1,   -1,   -1,  371,   -1,
     372,   -1,   -1,   -1,   -1,  373,   -1,   -1,
     374,   -1,  375,  376,  377,  378,   -1,   -1,
      -1,   -1,  379,   -1,  380,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,  381,   -1,  382,  383,
      -1,   -1,   -1,   -1,   -1,   -1,  384,   -1,
     385,   -1,   -1,  386,   -1,  387,   -1,   -1,
      -1,   -1,  388,   -1,   -1,   -1,  389,  390,
     391,  392,   -1,   -1,  393,  394,   -1,   -1,
      -1,  395,  396,   -1,   -1,   -1,  397,   -1,
      -1,  398,   -1,   -1,   -1,   -1,  399,   -1,
     400,   -1,   -1,   -1,   -1,  401,   -1,   -1,
     402,   -1,  403,   -1,   -1,  404,  405,  406,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,  407,
     408,  409,   -1,   -1,   -1,   -1,  410,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,  411,   -1,
     412,   -1,   -1,  413,   -1,   -1,   -1,   -1,
     414,   -1,   -1,  415,   -1,  416,   -1,   -1,
      -1,   -1,  417,   -1,  418,  419,   -1,  420,
      -1,  421,   -1,   -1,   -1,   -1,  422,   -1,
     423,  424,  425,   -1,   -1,   -1,  426,   -1,
     427,   -1,   -1,  428,   -1,  429,  430,   -1,
      -1,  431,  432,   -1,   -1,  433,   -1,   -1,
      -1,   -1,  434,   -1,  435,  436,   -1,   -1,
      -1,  437,   -1,   -1,  438,   -1,  439,   -1,
      -1,   -1,   -1,  440,   -1,   -1,   -1,   -1,
     441,   -1,   -1,   -1,   -1,  442,   -1,   -1,
     443,   -1,   -1,   -1,   -1,  444,   -1,  445,
      -1,   -1,   -1,   -1,  446,   -1,   -1,  447,
      -1,  448,   -1,   -1,   -1,   -1,  449,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
     450,   -1,   -1,   -1,   -1,  451,   -1,   -1,
      -1,   -1,  452,   -1,   -1,  453,   -1,  454,
      -1,   -1,  455,   -1,  456,   -1,   -1,  457,
      -1,  458,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,  459,   -1,   -1,   -1,   -1,
     460,   -1,   -1,  461,   -1,  462,   -1,   -1,
      -1,   -1,  463,   -1,   -1,   -1,   -1,  464,
      -1,   -1,  465,   -1,  466,   -1,   -1,  467,
      -1,  468,   -1,   -1,  469,  470,  471,   -1,
      -1,   -1,   -1,  472,   -1,   -1,  473,   -1,
      -1,   -1,   -1,  474,   -1,  475,   -1,   -1,
     476,   -1,   -1,   -1,   -1,   -1,   -1,  477,
      -1,   -1,  478,   -1,  479,   -1,   -1,  480,
      -1,   -1,  481,   -1,  482,   -1,  483,   -1,
      -1,  484,   -1,  485,   -1,   -1,  486,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
     487,   -1,  488,   -1,   -1,  489,   -1,   -1,
      -1,   -1,  490,   -1,  491,   -1,   -1,  492,
      -1,  493,   -1,   -1,  494,   -1,   -1,   -1,
      -1,   -1,   -1,  495,   -1,   -1,   -1,   -1,
     496,   -1,   -1,  497,   -1,  498,   -1,   -1,
     499,   -1,  500,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,  501,   -1,   -1,  502,
      -1,   -1,  503,   -1,  504,   -1,  505,   -1,
      -1,   -1,   -1,  506,   -1,   -1,  507,   -1,
     508,   -1,   -1,  509,   -1,  510,  511,   -1,
     512,   -1,   -1,   -1,   -1,  513,   -1,  514,
     515,   -1,  516,   -1,  517,   -1,   -1,   -1,
      -1,  518,   -1,   -1,  519,   -1,  520,   -1,
      -1,   -1,   -1,   -1,   -1,  521,  522,  523,
      -1,   -1,   -1,  524,  525,   -1,   -1,   -1,
     526,  527,   -1,   -1,   -1,  528,   -1,  529,
     530,   -1,  531,   -1,   -1,  532,   -1,  533,
      -1,  534,   -1,   -1,   -1,   -1,  535,   -1,
      -1,  536,   -1,  537,   -1,   -1,   -1,   -1,
     538,   -1,   -1,   -1,  539,  540,   -1,   -1,
     541,  542,  543,  544,   -1,   -1,   -1,  545,
     546,   -1,  547,   -1,  548,   -1,   -1,  549,
      -1,  550,   -1,   -1,  551,   -1,  552,   -1,
     553,  554,   -1,  555,   -1,   -1,   -1,   -1,
     556,   -1,   -1,  557,   -1,  558,  559,   -1,
     560,   -1,  561,  562,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,  563,   -1,  564,
      -1,   -1,   -1,   -1,  565,   -1,  566,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
     567,   -1,   -1,   -1,   -1,  568,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,  569,   -1,  570,
      -1,   -1,  571,   -1,  572,  573,   -1,   -1,
      -1,  574,   -1,   -1,  575,   -1,  576,  577,
      -1,   -1,  578,  579,   -1,   -1,  580,  581,
     582,   -1,   -1,  583,   -1,  584,   -1,   -1,
     585,   -1,  586,   -1,   -1,  587,   -1,  588,
      -1,   -1,  589,   -1,  590,   -1,   -1,  591,
      -1,   -1,  592,   -1,   -1,   -1,  593,   -1,
      -1,   -1,   -1,  594,  595,   -1,  596,   -1,
      -1,   -1,   -1,  597,   -1,   -1,   -1,   -1,
     598,   -1,   -1,   -1,   -1,   -1,   -1,  599,
     600,   -1,  601,   -1,  602,   -1,   -1,   -1,
      -1,  603,   -1,   -1,  604,   -1,  605,   -1,
      -1,  606,   -1,  607,   -1,   -1,   -1,   -1,
     608,   -1,   -1,  609,   -1,  610,  611,   -1,
     612,   -1,   -1,   -1,   -1,  613,   -1,   -1,
      -1,   -1,  614,   -1,  615,   -1,   -1,  616,
      -1,   -1,   -1,   -1,  617,   -1,  618,   -1,
      -1,   -1,   -1,  619,   -1,   -1,  620,   -1,
     621,   -1,   -1,  622,   -1,  623,   -1,   -1,
     624,   -1,  625,   -1,   -1,   -1,   -1,  626,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,  627,
      -1,  628,   -1,   -1,  629,   -1,  630,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,  631,   -1,
     632,   -1,   -1,  633,   -1,  634,  635,   -1,
     636,   -1,  637,   -1,   -1,  638,   -1,   -1,
     639,   -1,   -1,   -1,  640,   -1,   -1,  641,
      -1,  642,  643,   -1,  644,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,  645,   -1,
      -1,   -1,   -1,  646,   -1,  647,  648,   -1,
      -1,   -1,  649,   -1,   -1,  650,  651,   -1,
     652,   -1,   -1,   -1,  653,   -1,   -1,  654,
      -1,  655,  656,   -1,  657,   -1,  658,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,  659,   -1,
      -1,   -1,   -1,  660,   -1,  661,   -1,   -1,
     662,   -1,   -1,   -1,   -1,  663,   -1,   -1,
      -1,   -1,  664,   -1,  665,   -1,   -1,  666,
      -1,  667,   -1,   -1,   -1,   -1,  668,   -1,
     669,  670,   -1,   -1,   -1,   -1,  671,  672,
     673,   -1,   -1,  674,   -1,  675,   -1,   -1,
     676,   -1,   -1,   -1,   -1,  677,   -1,   -1,
      -1,   -1,   -1,   -1,  678,   -1,   -1,   -1,
      -1,  679,   -1,   -1,   -1,   -1,  680,   -1,
      -1,  681,   -1,  682,   -1,   -1,  683,   -1,
     684,   -1,   -1,   -1,   -1,  685,   -1,   -1,
     686,   -1,  687,   -1,   -1,  688,   -1,  689,
      -1,   -1,   -1,   -1,  690,   -1,   -1,  691,
      -1,  692,  693,   -1,  694,   -1,  695,   -1,
      -1,  696,   -1,   -1,   -1,   -1,  697,   -1,
     698,   -1,   -1,   -1,   -1,  699,   -1,   -1,
      -1,   -1,  700,   -1,   -1,   -1,   -1,   -1,
      -1,  701,  702,   -1,  703,   -1,   -1,   -1,
      -1,  704,   -1,   -1,  705,   -1,  706,   -1,
      -1,  707,   -1,  708,   -1,   -1,  709,   -1,
     710,   -1,   -1,  711,   -1,  712,   -1,   -1,
     713,   -1,   -1,   -1,   -1,  714,   -1,   -1,
      -1,   -1,  715,   -1,  716,   -1,  717,  718,
      -1,  719,   -1,   -1,   -1,   -1,  720,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,  721,   -1,
     722,   -1,   -1,   -1,   -1,  723,   -1,   -1,
      -1,   -1,  724,   -1,   -1,  725,   -1,  726,
      -1,   -1,  727,   -1,  728,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,  729,   -1,  730,   -1,
      -1,  731,   -1,  732,   -1,   -1,  733,   -1,
     734,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,  735,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,  736,   -1,   -1,   -1,   -1,   -1,
      -1,  737,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,  738,   -1,  739,   -1,   -1,  740,   -1,
     741,   -1,   -1,   -1,   -1,  742,   -1,   -1,
     743,   -1,  744,   -1,   -1,  745,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,  746,
      -1,  747,   -1,   -1,  748,   -1,   -1,   -1,
      -1,   -1,   -1,  749,   -1,   -1,  750,  751,
      -1,   -1,   -1,  752,   -1,   -1,   -1,   -1,
      -1,   -1,  753,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,  754,   -1,  755,   -1,   -1,   -1,
      -1,  756,   -1,   -1,   -1,   -1,  757,   -1,
      -1,  758,   -1,   -1,   -1,   -1,  759,   -1,
      -1,   -1,   -1,  760,   -1,  761,   -1,   -1,
      -1,   -1,  762,   -1,   -1,  763,   -1,   -1,
      -1,  764,  765,   -1,   -1,   -1,   -1,   -1,
     766,  767,   -1,   -1,   -1,   -1,  768,   -1,
      -1,   -1,   -1,   -1,  769,   -1,  770,   -1,
     771,   -1,   -1,  772,   -1,   -1,   -1,   -1,
     773,   -1,  774,  775,   -1,  776,   -1,  777,
      -1,   -1,  778,   -1,  779,   -1,   -1,   -1,
      -1,  780,   -1,   -1,  781,  782,  783,   -1,
      -1,  784,   -1,  785,  786,   -1,   -1,   -1,
     787,   -1,   -1,  788,   -1,   -1,   -1,   -1,
     789,   -1,   -1,   -1,   -1,  790,   -1,   -1,
      -1,   -1,  791,   -1,   -1,   -1,   -1,   -1,
      -1,  792,   -1,  793,  794,   -1,  795,   -1,
      -1,  796,   -1,  797,   -1,   -1,   -1,   -1,
     798,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
     799,   -1,  800,   -1,   -1,  801,   -1,  802,
     803,   -1,  804,   -1,  805,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,  806,   -1,  807,   -1,
      -1,  808,   -1,  809,   -1,   -1,   -1,   -1,
     810,   -1,   -1,   -1,   -1,  811,  812,   -1,
     813,   -1,   -1,   -1,   -1,  814,   -1,   -1,
      -1,   -1,  815,   -1,  816,   -1,   -1,  817,
     818,  819,   -1,   -1,  820,   -1,   -1,   -1,
      -1,  821,   -1,  822,   -1,   -1,  823,   -1,
     824,   -1,   -1,  825,   -1,   -1,   -1,   -1,
      -1,   -1,  826,   -1,   -1,  827,   -1,   -1,
      -1,   -1,  828,   -1,  829,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,  830,   -1,  831,   -1,
      -1,  832,   -1,  833,  834,   -1,  835,   -1,
      -1,  836,   -1,  837,   -1,   -1,   -1,   -1,
     838,   -1,  839,  840,   -1,  841,   -1,   -1,
     842,   -1,  843,   -1,   -1,   -1,   -1,  844,
      -1,  845,   -1,   -1,   -1,   -1,  846,   -1,
      -1,  847,   -1,   -1,   -1,   -1,  848,   -1,
     849,   -1,   -1,  850,   -1,  851,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,  852,
      -1,   -1,  853,   -1,  854,   -1,   -1,  855,
      -1,  856,  857,   -1,   -1,   -1,  858,   -1,
      -1,   -1,   -1,  859,   -1,   -1,  860,   -1,
     861,   -1,   -1,  862,   -1,  863,   -1,   -1,
      -1,   -1,  864,   -1,   -1,   -1,   -1,  865,
      -1,   -1,  866,   -1,  867,   -1,   -1,  868,
      -1,  869,   -1,   -1,  870,   -1,  871,   -1,
      -1,   -1,   -1,  872,   -1,   -1,  873,   -1,
      -1,   -1,   -1,  874,   -1,  875,   -1,   -1,
     876,   -1,  877,   -1,   -1,  878,   -1,  879,
      -1,   -1,  880,   -1,   -1,   -1,   -1,  881,
      -1,  882,   -1,   -1,   -1,   -1,  883,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,  884,  885,
     886,   -1,   -1,   -1,   -1,  887,   -1,   -1,
     888,   -1,  889,   -1,   -1,  890,   -1,   -1,
      -1,   -1,  891,   -1,  892,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,  893,   -1,  894,   -1,
      -1,   -1,   -1,  895,   -1,   -1,  896,   -1,
     897,   -1,   -1,   -1,   -1,  898,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,  899,   -1,  900,   -1,   -1,  901,
      -1,  902,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,  903,   -1,  904,   -1,   -1,  905,   -1,
     906,   -1,   -1,   -1,   -1,  907,   -1,   -1,
     908,   -1,  909,   -1,   -1,   -1,   -1,  910,
      -1,   -1,   -1,   -1,   -1,  911,   -1,  912,
      -1,  913,   -1,   -1,  914,   -1,   -1,   -1,
      -1,  915,   -1,  916,   -1,   -1,  917,   -1,
     918,   -1,   -1,  919,   -1,  920,   -1,   -1,
      -1,   -1,  921,   -1,   -1,  922,   -1,  923,
      -1,   -1,  924,   -1,  925,   -1,   -1,  926,
      -1,  927,   -1,   -1,   -1,   -1,  928,  929,
      -1,  930,   -1,  931,   -1,   -1,  932,   -1,
     933,  934,   -1,  935,   -1,  936,   -1,   -1,
     937,  938,  939,  940,   -1,  941,   -1,  942,
      -1,   -1,   -1,   -1,  943,   -1,   -1,   -1,
      -1,  944,   -1,   -1,   -1,   -1,  945,   -1,
      -1,  946,   -1,  947,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,  948,   -1,   -1,
     949,   -1,  950,   -1,   -1,  951,   -1,  952,
      -1,   -1,   -1,   -1,  953,   -1,   -1,  954,
      -1,  955,   -1,   -1,  956,   -1,  957,   -1,
      -1,  958,   -1,  959,   -1,   -1,   -1,   -1,
     960,   -1,   -1,  961,   -1,   -1,   -1,   -1,
     962,   -1,  963,   -1,   -1,  964,   -1,  965,
      -1,   -1,  966,   -1,   -1,   -1,   -1,   -1,
      -1,  967,   -1,   -1,  968,   -1,   -1,  969,
      -1,  970,   -1,  971,   -1,   -1,  972,   -1,
     973,  974,   -1,   -1,   -1,  975,   -1,   -1,
     976,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,  977,  978,   -1,  979,   -1,   -1,  980,
      -1,  981,   -1,   -1,  982,   -1,  983,   -1,
      -1,  984,   -1,   -1,   -1,   -1,  985,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
     986,   -1,  987,   -1,   -1,  988,   -1,  989,
      -1,   -1,  990,   -1,  991,   -1,   -1,  992,
      -1,  993,   -1,   -1,  994,   -1,  995,   -1,
      -1,  996,   -1,  997,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
     998,   -1,   -1,   -1,   -1,  999,   -1, 1000,
      -1,   -1, 1001,   -1, 1002,   -1,   -1, 1003,
      -1,   -1,   -1,   -1, 1004,   -1, 1005,   -1,
      -1, 1006,   -1, 1007,   -1,   -1, 1008,   -1,
      -1,   -1,   -1, 1009,   -1, 1010,   -1,   -1,
    1011, 1012, 1013,   -1,   -1,   -1,   -1, 1014,
      -1,   -1, 1015,   -1, 1016,   -1,   -1, 1017,
      -1, 1018,   -1,   -1, 1019,   -1, 1020,   -1,
      -1, 1021,   -1, 1022,   -1,   -1,   -1, 1023,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 1024,
      -1,   -1, 1025, 1026, 1027,   -1,   -1, 1028,
      -1, 1029,   -1,   -1, 1030,   -1, 1031,   -1,
      -1, 1032,   -1, 1033,   -1,   -1, 1034,   -1,
    1035,   -1,   -1, 1036,   -1,   -1,   -1, 1037,
    1038,   -1,   -1,   -1,   -1, 1039,   -1,   -1,
      -1,   -1,   -1,   -1, 1040,   -1,   -1, 1041,
      -1, 1042,   -1,   -1,   -1,   -1, 1043,   -1,
      -1, 1044,   -1, 1045,   -1,   -1,   -1,   -1,
    1046,   -1,   -1,   -1,   -1, 1047,   -1,   -1,
      -1,   -1, 1048,   -1,   -1,   -1,   -1, 1049,
      -1,   -1, 1050,   -1, 1051,   -1,   -1, 1052,
      -1, 1053,   -1,   -1, 1054,   -1,   -1,   -1,
      -1, 1055,   -1,   -1,   -1,   -1, 1056,   -1,
    1057,   -1,   -1, 1058,   -1, 1059,   -1,   -1,
      -1,   -1, 1060,   -1,   -1, 1061,   -1, 1062,
    1063,   -1, 1064,   -1, 1065,   -1,   -1, 1066,
      -1,   -1,   -1,   -1, 1067,   -1, 1068,   -1,
      -1, 1069,   -1, 1070,   -1,   -1, 1071,   -1,
    1072,   -1,   -1, 1073,   -1, 1074,   -1,   -1,
    1075,   -1,   -1,   -1,   -1, 1076,   -1, 1077,
      -1,   -1,   -1,   -1, 1078,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 1079,   -1,
      -1,   -1,   -1, 1080, 1081,   -1,   -1,   -1,
      -1,   -1,   -1, 1082,   -1, 1083,   -1,   -1,
    1084,   -1, 1085,   -1,   -1, 1086,   -1, 1087,
    1088,   -1, 1089,   -1,   -1,   -1,   -1, 1090,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 1091,   -1,   -1, 1092,   -1,
    1093,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 1094,   -1,   -1, 1095, 1096,   -1,
      -1,   -1, 1097,   -1, 1098,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 1099,   -1,   -1,   -1,
      -1, 1100,   -1, 1101,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 1102,   -1, 1103,   -1,   -1,
      -1,   -1, 1104,   -1,   -1,   -1,   -1, 1105,
    1106,   -1, 1107,   -1,   -1,   -1,   -1,   -1,
      -1, 1108,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 1109,   -1,   -1,   -1,   -1, 1110,   -1,
    1111,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    1112,   -1, 1113,   -1,   -1,   -1, 1114, 1115,
      -1,   -1, 1116,   -1, 1117,   -1,   -1,   -1,
      -1, 1118,   -1,   -1,   -1,   -1, 1119,   -1,
      -1, 1120,   -1, 1121,   -1,   -1, 1122,   -1,
      -1,   -1,   -1, 1123,   -1, 1124,   -1,   -1,
    1125,   -1, 1126,   -1,   -1, 1127,   -1,   -1,
      -1, 1128,   -1,   -1,   -1,   -1,   -1, 1129,
      -1, 1130,   -1,   -1,   -1,   -1, 1131,   -1,
      -1,   -1,   -1, 1132,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 1133,   -1, 1134,   -1,   -1,
      -1,   -1, 1135,   -1,   -1, 1136,   -1,   -1,
      -1,   -1,   -1,   -1, 1137,   -1,   -1,   -1,
      -1, 1138,   -1,   -1, 1139,   -1, 1140,   -1,
      -1, 1141,   -1, 1142,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 1143,   -1,   -1,   -1,   -1,
      -1,   -1, 1144,   -1,   -1,   -1,   -1, 1145,
    1146,   -1, 1147,   -1,   -1,   -1,   -1, 1148,
      -1, 1149,   -1,   -1,   -1,   -1, 1150,   -1,
      -1, 1151,   -1, 1152,   -1,   -1, 1153,   -1,
    1154, 1155,   -1,   -1,   -1, 1156, 1157,   -1,
      -1,   -1, 1158,   -1,   -1,   -1, 1159, 1160,
    1161,   -1, 1162,   -1, 1163,   -1,   -1, 1164,
      -1,   -1,   -1,   -1, 1165,   -1, 1166,   -1,
      -1, 1167,   -1,   -1,   -1,   -1,   -1,   -1,
    1168,   -1,   -1, 1169,   -1, 1170,   -1,   -1,
      -1,   -1, 1171,   -1,   -1, 1172,   -1,   -1,
    1173,   -1, 1174,   -1, 1175,   -1,   -1,   -1,
      -1, 1176,   -1,   -1,   -1,   -1, 1177,   -1,
      -1,   -1, 1178, 1179,   -1,   -1, 1180,   -1,
    1181,   -1,   -1, 1182,   -1, 1183,   -1,   -1,
    1184,   -1, 1185,   -1,   -1, 1186,   -1,   -1,
      -1,   -1, 1187,   -1, 1188,   -1,   -1,   -1,
      -1, 1189,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 1190,   -1,   -1,   -1,   -1, 1191,   -1,
    1192,   -1,   -1, 1193,   -1, 1194,   -1,   -1,
    1195,   -1, 1196,   -1,   -1,   -1,   -1, 1197,
    1198,   -1, 1199,   -1,   -1,   -1,   -1, 1200,
      -1,   -1,   -1,   -1,   -1,   -1, 1201,   -1,
      -1, 1202,   -1, 1203,   -1,   -1, 1204,   -1,
    1205,   -1,   -1, 1206,   -1,   -1,   -1,   -1,
    1207,   -1, 1208,   -1,   -1,   -1,   -1, 1209,
      -1,   -1, 1210,   -1, 1211,   -1,   -1,   -1,
    1212,   -1,   -1,   -1, 1213,   -1,   -1,   -1,
      -1,   -1,   -1, 1214,   -1,   -1, 1215,   -1,
    1216,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    1217,   -1, 1218,   -1,   -1, 1219,   -1, 1220,
      -1,   -1, 1221,   -1, 1222,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 1223,   -1,   -1,   -1,
      -1, 1224,   -1, 1225, 1226,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    1227,   -1, 1228,   -1,   -1, 1229, 1230, 1231,
      -1,   -1,   -1,   -1, 1232,   -1,   -1, 1233,
      -1, 1234,   -1,   -1, 1235,   -1, 1236,   -1,
      -1, 1237,   -1, 1238,   -1,   -1, 1239,   -1,
    1240,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    1241,   -1, 1242,   -1,   -1, 1243, 1244,   -1,
      -1,   -1, 1245,   -1, 1246,   -1,   -1,   -1,
      -1, 1247,   -1,   -1, 1248,   -1,   -1,   -1,
      -1, 1249,   -1, 1250,   -1,   -1,   -1,   -1,
    1251,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 1252,   -1, 1253,
      -1,   -1,   -1,   -1, 1254,   -1,   -1, 1255,
      -1, 1256,   -1,   -1, 1257,   -1, 1258,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 1259,   -1,
      -1,   -1,   -1, 1260, 1261, 1262,   -1,   -1,
    1263,   -1, 1264,   -1, 1265, 1266,   -1, 1267,
      -1,   -1, 1268,   -1,   -1,   -1,   -1, 1269,
      -1,   -1,   -1,   -1, 1270,   -1, 1271,   -1,
      -1,   -1,   -1, 1272,   -1,   -1, 1273,   -1,
    1274,   -1,   -1, 1275,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 1276,   -1, 1277,
      -1,   -1, 1278,   -1, 1279,   -1,   -1, 1280,
    1281, 1282,   -1,   -1,   -1,   -1, 1283,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 1284,   -1,
    1285,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 1286, 1287,   -1,   -1,   -1,   -1, 1288,
      -1,   -1, 1289,   -1, 1290,   -1,   -1, 1291,
      -1, 1292,   -1,   -1, 1293,   -1,   -1,   -1,
      -1,   -1,   -1, 1294,   -1,   -1,   -1,   -1,
    1295,   -1,   -1, 1296,   -1, 1297,   -1,   -1,
    1298,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 1299,   -1,   -1, 1300,
      -1,   -1,   -1,   -1, 1301, 1302, 1303,   -1,
      -1,   -1,   -1, 1304,   -1,   -1, 1305,   -1,
      -1,   -1,   -1, 1306,   -1, 1307,   -1,   -1,
      -1,   -1, 1308,   -1,   -1, 1309,   -1,   -1,
      -1,   -1,   -1,   -1, 1310,   -1,   -1, 1311,
      -1, 1312, 1313,   -1,   -1,   -1, 1314,   -1,
      -1,   -1,   -1, 1315,   -1,   -1, 1316,   -1,
      -1,   -1,   -1, 1317,   -1,   -1,   -1,   -1,
    1318,   -1, 1319,   -1,   -1,   -1,   -1, 1320,
      -1,   -1,   -1,   -1, 1321,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 1322,   -1, 1323,   -1,
      -1, 1324,   -1, 1325,   -1,   -1,   -1, 1326,
      -1,   -1,   -1, 1327,   -1,   -1,   -1,   -1,
      -1,   -1, 1328,   -1,   -1, 1329,   -1, 1330,
      -1,   -1, 1331,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 1332,   -1,   -1,   -1,   -1,
    1333,   -1,   -1, 1334,   -1, 1335,   -1,   -1,
    1336,   -1,   -1,   -1,   -1, 1337,   -1, 1338,
      -1,   -1, 1339,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 1340,   -1,   -1,   -1,
      -1,   -1,   -1, 1341,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 1342,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 1343,
      -1,   -1, 1344,   -1, 1345,   -1,   -1, 1346,
      -1, 1347,   -1,   -1, 1348,   -1, 1349,   -1,
      -1,   -1,   -1, 1350,   -1,   -1, 1351,   -1,
    1352,   -1,   -1,   -1,   -1, 1353,   -1,   -1,
    1354,   -1,   -1,   -1,   -1,   -1,   -1, 1355,
      -1,   -1,   -1,   -1, 1356,   -1,   -1,   -1,
      -1, 1357,   -1,   -1, 1358,   -1,   -1,   -1,
      -1, 1359,   -1,   -1,   -1,   -1, 1360,   -1,
    1361,   -1,   -1, 1362,   -1,   -1,   -1,   -1,
      -1,   -1, 1363,   -1,   -1, 1364,   -1, 1365,
      -1, 1366, 1367,   -1,   -1,   -1,   -1, 1368,
      -1,   -1,   -1,   -1, 1369,   -1,   -1,   -1,
      -1, 1370,   -1, 1371,   -1,   -1, 1372,   -1,
      -1,   -1,   -1, 1373,   -1, 1374,   -1, 1375,
    1376,   -1, 1377,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 1378,   -1, 1379,   -1, 1380,   -1,
      -1, 1381,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 1382,   -1,   -1, 1383,   -1,
    1384,   -1,   -1, 1385,   -1, 1386,   -1,   -1,
    1387,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 1388, 1389,   -1,   -1,   -1, 1390,
      -1, 1391,   -1,   -1, 1392,   -1, 1393,   -1,
      -1, 1394,   -1, 1395,   -1,   -1, 1396,   -1,
      -1,   -1,   -1, 1397,   -1,   -1,   -1,   -1,
      -1,   -1, 1398,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 1399,   -1,   -1,   -1,   -1, 1400,
      -1, 1401,   -1,   -1, 1402,   -1, 1403,   -1,
      -1,   -1,   -1, 1404,   -1,   -1, 1405,   -1,
      -1,   -1,   -1, 1406,   -1, 1407,   -1,   -1,
    1408,   -1, 1409,   -1,   -1, 1410,   -1,   -1,
      -1,   -1, 1411,   -1, 1412,   -1,   -1, 1413,
      -1, 1414,   -1,   -1, 1415,   -1, 1416,   -1,
      -1, 1417,   -1,   -1,   -1,   -1, 1418,   -1,
    1419,   -1,   -1, 1420,   -1, 1421,   -1,   -1,
    1422,   -1, 1423,   -1, 1424,   -1,   -1,   -1,
      -1,   -1, 1425,   -1, 1426,   -1,   -1,   -1,
      -1, 1427,   -1,   -1,   -1,   -1,   -1,   -1,
    1428, 1429,   -1, 1430,   -1,   -1, 1431,   -1,
    1432,   -1,   -1, 1433,   -1, 1434,   -1,   -1,
      -1,   -1, 1435,   -1,   -1,   -1, 1436, 1437,
      -1,   -1, 1438,   -1,   -1,   -1,   -1, 1439,
      -1, 1440,   -1,   -1,   -1,   -1, 1441,   -1,
      -1,   -1,   -1, 1442,   -1,   -1, 1443,   -1,
    1444,   -1,   -1, 1445,   -1, 1446,   -1,   -1,
    1447,   -1, 1448,   -1,   -1,   -1,   -1, 1449,
      -1,   -1, 1450,   -1, 1451,   -1,   -1, 1452,
      -1, 1453,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 1454,   -1,   -1,   -1,   -1,
    1455,   -1,   -1, 1456,   -1,   -1,   -1,   -1,
    1457,   -1, 1458,   -1,   -1, 1459,   -1,   -1,
      -1,   -1, 1460,   -1, 1461,   -1,   -1, 1462,
      -1,   -1,   -1,   -1,   -1,   -1, 1463,   -1,
      -1,   -1,   -1, 1464,   -1,   -1, 1465,   -1,
      -1,   -1,   -1, 1466,   -1,   -1,   -1,   -1,
      -1,   -1, 1467,   -1,   -1, 1468,   -1, 1469,
      -1,   -1, 1470,   -1, 1471,   -1,   -1, 1472,
      -1, 1473,   -1,   -1, 1474,   -1, 1475,   -1,
      -1,   -1,   -1, 1476,   -1,   -1, 1477,   -1,
    1478,   -1,   -1, 1479,   -1, 1480,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 1481,   -1, 1482,
      -1,   -1, 1483,   -1, 1484,   -1,   -1,   -1,
      -1, 1485,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 1486,   -1, 1487,   -1,   -1, 1488,   -1,
      -1,   -1,   -1, 1489, 1490, 1491,   -1,   -1,
    1492,   -1, 1493,   -1, 1494,   -1,   -1, 1495,
      -1,   -1, 1496,   -1, 1497,   -1,   -1, 1498,
      -1, 1499,   -1,   -1, 1500,   -1, 1501,   -1,
      -1, 1502,   -1, 1503,   -1,   -1,   -1,   -1,
    1504,   -1,   -1, 1505,   -1,   -1,   -1,   -1,
      -1,   -1, 1506,   -1,   -1, 1507,   -1, 1508,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 1509,
      -1,   -1,   -1,   -1, 1510,   -1, 1511, 1512,
    1513, 1514,   -1, 1515,   -1,   -1, 1516,   -1,
    1517,   -1,   -1, 1518,   -1, 1519,   -1,   -1,
    1520,   -1,   -1,   -1,   -1,   -1,   -1, 1521,
      -1,   -1, 1522,   -1, 1523,   -1,   -1, 1524,
      -1, 1525,   -1,   -1, 1526,   -1,   -1,   -1,
      -1, 1527,   -1, 1528,   -1,   -1, 1529,   -1,
    1530,   -1,   -1,   -1,   -1, 1531,   -1, 1532,
    1533,   -1, 1534,   -1,   -1,   -1,   -1, 1535,
    1536,   -1, 1537,   -1, 1538,   -1,   -1, 1539,
      -1,   -1,   -1,   -1, 1540,   -1,   -1,   -1,
      -1, 1541,   -1,   -1,   -1, 1542, 1543,   -1,
    1544,   -1,   -1, 1545,   -1, 1546,   -1,   -1,
    1547,   -1,   -1,   -1,   -1, 1548,   -1,   -1,
      -1,   -1,   -1,   -1, 1549,   -1,   -1, 1550,
      -1,   -1,   -1,   -1,   -1,   -1, 1551,   -1,
      -1, 1552,   -1, 1553,   -1,   -1,   -1,   -1,
    1554,   -1,   -1, 1555,   -1, 1556,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 1557,
      -1,   -1, 1558,   -1,   -1,   -1,   -1, 1559,
      -1, 1560,   -1, 1561, 1562,   -1, 1563,   -1,
      -1, 1564,   -1, 1565,   -1,   -1, 1566,   -1,
    1567,   -1,   -1, 1568,   -1,   -1,   -1,   -1,
    1569,   -1,   -1,   -1,   -1, 1570,   -1, 1571,
      -1,   -1,   -1,   -1, 1572,   -1,   -1, 1573,
    1574, 1575,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 1576,   -1, 1577,   -1,   -1, 1578,   -1,
    1579,   -1,   -1, 1580,   -1, 1581,   -1,   -1,
    1582,   -1,   -1,   -1,   -1, 1583,   -1, 1584,
      -1,   -1, 1585,   -1, 1586,   -1,   -1, 1587,
      -1, 1588,   -1,   -1, 1589,   -1, 1590,   -1,
      -1,   -1,   -1, 1591,   -1,   -1, 1592,   -1,
    1593,   -1,   -1, 1594,   -1, 1595,   -1,   -1,
      -1,   -1, 1596,   -1,   -1, 1597,   -1,   -1,
      -1,   -1, 1598,   -1, 1599,   -1,   -1, 1600,
      -1,   -1,   -1,   -1,   -1,   -1, 1601,   -1,
      -1, 1602,   -1, 1603,   -1,   -1, 1604,   -1,
    1605,   -1,   -1, 1606,   -1, 1607,   -1,   -1,
      -1,   -1, 1608,   -1,   -1, 1609,   -1, 1610,
      -1,   -1, 1611,   -1, 1612,   -1,   -1, 1613,
    1614, 1615,   -1,   -1,   -1,   -1, 1616,   -1,
      -1, 1617,   -1, 1618,   -1,   -1, 1619,   -1,
    1620,   -1,   -1, 1621,   -1, 1622,   -1,   -1,
    1623,   -1,   -1,   -1,   -1,   -1,   -1, 1624,
      -1,   -1, 1625,   -1, 1626,   -1,   -1,   -1,
      -1, 1627,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 1628,   -1, 1629,   -1,   -1, 1630,   -1,
    1631,   -1,   -1, 1632,   -1, 1633,   -1,   -1,
    1634,   -1, 1635,   -1,   -1,   -1,   -1, 1636,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 1637,   -1,   -1, 1638,   -1, 1639,   -1,
      -1,   -1,   -1, 1640,   -1,   -1,   -1,   -1,
    1641,   -1,   -1,   -1,   -1, 1642,   -1,   -1,
    1643,   -1,   -1,   -1,   -1, 1644,   -1, 1645,
      -1,   -1,   -1,   -1, 1646,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 1647,   -1,
      -1, 1648,   -1,   -1,   -1,   -1, 1649,   -1,
    1650,   -1, 1651, 1652,   -1,   -1,   -1, 1653,
      -1,   -1, 1654,   -1,   -1, 1655,   -1, 1656,
      -1,   -1, 1657,   -1,   -1,   -1,   -1, 1658,
      -1, 1659,   -1,   -1, 1660,   -1, 1661,   -1,
      -1,   -1,   -1, 1662,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 1663,   -1,   -1,
      -1,   -1, 1664,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 1665, 1666,   -1,   -1,   -1,
      -1, 1667,   -1,   -1, 1668,   -1, 1669,   -1,
      -1, 1670,   -1, 1671,   -1,   -1, 1672,   -1,
      -1,   -1,   -1, 1673,   -1, 1674,   -1,   -1,
    1675,   -1, 1676,   -1,   -1,   -1,   -1, 1677,
      -1,   -1,   -1,   -1, 1678,   -1,   -1, 1679,
      -1, 1680,   -1,   -1, 1681,   -1,   -1,   -1,
      -1, 1682,   -1,   -1,   -1, 1683, 1684,   -1,
    1685,   -1,   -1,   -1,   -1,   -1,   -1, 1686,
      -1,   -1, 1687,   -1,   -1, 1688, 1689, 1690,
      -1, 1691, 1692, 1693,   -1,   -1, 1694, 1695,
      -1,   -1,   -1,   -1, 1696,   -1, 1697,   -1,
      -1, 1698,   -1, 1699,   -1,   -1, 1700,   -1,
    1701,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    1702,   -1, 1703,   -1,   -1,   -1,   -1, 1704,
      -1,   -1,   -1,   -1, 1705,   -1,   -1, 1706,
      -1,   -1,   -1,   -1,   -1,   -1, 1707,   -1,
      -1, 1708, 1709, 1710,   -1,   -1, 1711,   -1,
      -1,   -1,   -1,   -1,   -1, 1712,   -1,   -1,
      -1,   -1, 1713,   -1,   -1,   -1,   -1, 1714,
      -1,   -1, 1715,   -1, 1716,   -1,   -1, 1717,
      -1,   -1,   -1,   -1, 1718,   -1, 1719,   -1,
      -1, 1720,   -1, 1721,   -1,   -1, 1722,   -1,
      -1,   -1,   -1,   -1,   -1, 1723,   -1,   -1,
    1724,   -1, 1725,   -1,   -1,   -1,   -1, 1726,
      -1,   -1,   -1,   -1, 1727,   -1,   -1, 1728,
      -1, 1729,   -1,   -1, 1730,   -1, 1731,   -1,
      -1, 1732,   -1,   -1,   -1,   -1, 1733,   -1,
      -1,   -1, 1734, 1735,   -1,   -1,   -1,   -1,
    1736,   -1,   -1,   -1,   -1,   -1,   -1, 1737,
      -1,   -1, 1738,   -1, 1739,   -1,   -1, 1740,
      -1, 1741,   -1,   -1,   -1,   -1, 1742,   -1,
      -1, 1743,   -1,   -1, 1744,   -1,   -1,   -1,
    1745,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    1746,   -1, 1747,   -1,   -1, 1748,   -1,   -1,
      -1,   -1, 1749,   -1,   -1,   -1,   -1, 1750,
      -1, 1751,   -1,   -1, 1752,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 1753,   -1, 1754,   -1,   -1,
    1755,   -1, 1756,   -1,   -1, 1757,   -1,   -1,
      -1,   -1, 1758,   -1, 1759,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 1760,   -1,
    1761,   -1,   -1, 1762,   -1,   -1,   -1,   -1,
      -1,   -1, 1763,   -1, 1764, 1765,   -1, 1766,
      -1,   -1,   -1,   -1, 1767,   -1,   -1, 1768,
      -1, 1769,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 1770,   -1, 1771,   -1,   -1, 1772,   -1,
    1773,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 1774,   -1,   -1, 1775,   -1, 1776,
      -1,   -1, 1777,   -1,   -1,   -1,   -1, 1778,
      -1, 1779,   -1,   -1, 1780,   -1, 1781,   -1,
      -1, 1782,   -1,   -1,   -1,   -1, 1783,   -1,
      -1,   -1,   -1, 1784,   -1, 1785,   -1,   -1,
      -1,   -1, 1786,   -1,   -1,   -1,   -1, 1787,
      -1,   -1,   -1,   -1, 1788,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 1789,   -1, 1790,   -1,
      -1,   -1,   -1, 1791,   -1,   -1, 1792,   -1,
    1793,   -1,   -1, 1794,   -1, 1795,   -1,   -1,
    1796,   -1,   -1,   -1,   -1, 1797,   -1, 1798,
      -1,   -1,   -1,   -1, 1799, 1800, 1801, 1802,
      -1,   -1,   -1,   -1,   -1,   -1, 1803,   -1,
      -1, 1804,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 1805,   -1, 1806,   -1,   -1,
    1807, 1808, 1809,   -1,   -1, 1810,   -1, 1811,
      -1,   -1, 1812,   -1, 1813,   -1,   -1, 1814,
      -1, 1815,   -1,   -1, 1816,   -1, 1817,   -1,
      -1, 1818,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 1819,   -1,   -1,
    1820,   -1,   -1,   -1,   -1,   -1,   -1, 1821,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 1822,
      -1, 1823,   -1,   -1,   -1,   -1, 1824,   -1,
      -1, 1825,   -1,   -1,   -1,   -1,   -1,   -1,
    1826,   -1,   -1, 1827,   -1,   -1,   -1,   -1,
    1828,   -1,   -1,   -1,   -1, 1829,   -1, 1830,
      -1,   -1,   -1,   -1, 1831,   -1,   -1,   -1,
      -1, 1832,   -1,   -1, 1833, 1834, 1835,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 1836,   -1,
    1837,   -1,   -1, 1838,   -1, 1839,   -1,   -1,
    1840,   -1, 1841,   -1,   -1, 1842,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 1843,   -1,   -1, 1844,   -1,   -1,   -1,
      -1, 1845, 1846, 1847,   -1,   -1, 1848,   -1,
    1849,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    1850,   -1, 1851,   -1,   -1, 1852,   -1, 1853,
      -1,   -1, 1854,   -1, 1855,   -1,   -1, 1856,
      -1, 1857,   -1,   -1, 1858, 1859, 1860,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 1861,   -1, 1862,   -1,   -1,
    1863,   -1,   -1,   -1,   -1, 1864, 1865, 1866,
      -1,   -1,   -1,   -1, 1867,   -1,   -1, 1868,
      -1, 1869,   -1,   -1, 1870,   -1, 1871,   -1,
      -1, 1872,   -1, 1873,   -1,   -1,   -1,   -1,
    1874,   -1,   -1, 1875,   -1,   -1,   -1,   -1,
    1876,   -1, 1877,   -1,   -1,   -1,   -1, 1878,
      -1,   -1, 1879,   -1, 1880,   -1,   -1, 1881,
      -1,   -1,   -1,   -1,   -1,   -1, 1882,   -1,
      -1, 1883,   -1, 1884,   -1,   -1, 1885,   -1,
      -1,   -1,   -1,   -1,   -1, 1886,   -1,   -1,
    1887,   -1, 1888,   -1,   -1, 1889,   -1,   -1,
      -1,   -1, 1890,   -1, 1891,   -1,   -1,   -1,
    1892, 1893,   -1,   -1, 1894,   -1, 1895,   -1,
      -1,   -1,   -1, 1896,   -1,   -1,   -1,   -1,
    1897,   -1,   -1, 1898,   -1, 1899,   -1,   -1,
    1900,   -1,   -1,   -1,   -1, 1901,   -1, 1902,
      -1,   -1, 1903,   -1,   -1,   -1,   -1, 1904,
      -1, 1905,   -1,   -1,   -1,   -1, 1906,   -1,
      -1, 1907,   -1,   -1,   -1,   -1,   -1,   -1,
    1908,   -1,   -1, 1909,   -1, 1910,   -1,   -1,
    1911,   -1,   -1,   -1,   -1,   -1,   -1, 1912,
      -1,   -1, 1913,   -1,   -1,   -1,   -1, 1914,
      -1,   -1,   -1,   -1,   -1,   -1, 1915, 1916,
      -1,   -1,   -1, 1917,   -1,   -1, 1918,   -1,
      -1,   -1,   -1, 1919,   -1,   -1,   -1,   -1,
      -1,   -1, 1920,   -1,   -1,   -1,   -1, 1921,
      -1,   -1, 1922,   -1, 1923,   -1,   -1,   -1,
      -1, 1924,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 1925,   -1, 1926, 1927,   -1,   -1,   -1,
    1928,   -1,   -1,   -1,   -1, 1929,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 1930, 1931,   -1,
      -1,   -1, 1932,   -1,   -1,   -1,   -1, 1933,
      -1, 1934,   -1,   -1, 1935,   -1, 1936, 1937,
      -1, 1938,   -1, 1939,   -1,   -1,   -1,   -1,
    1940,   -1,   -1, 1941,   -1, 1942,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 1943, 1944,
      -1, 1945, 1946,   -1,   -1,   -1, 1947, 1948,
      -1, 1949,   -1,   -1, 1950,   -1,   -1,   -1,
    1951, 1952,   -1, 1953,   -1,   -1, 1954,   -1,
    1955,   -1,   -1,   -1,   -1, 1956,   -1,   -1,
      -1,   -1, 1957,   -1,   -1, 1958,   -1, 1959,
      -1,   -1, 1960,   -1, 1961,   -1,   -1,   -1,
      -1, 1962,   -1,   -1,   -1,   -1, 1963,   -1,
      -1, 1964,   -1,   -1,   -1,   -1, 1965,   -1,
    1966,   -1,   -1, 1967,   -1,   -1,   -1,   -1,
    1968,   -1,   -1,   -1, 1969, 1970,   -1, 1971,
      -1,   -1,   -1,   -1, 1972,   -1,   -1,   -1,
      -1, 1973,   -1,   -1, 1974,   -1,   -1,   -1,
      -1, 1975,   -1,   -1,   -1,   -1, 1976,   -1,
    1977,   -1,   -1,   -1,   -1, 1978,   -1,   -1,
    1979,   -1, 1980,   -1, 1981, 1982,   -1, 1983,
      -1,   -1, 1984,   -1, 1985,   -1,   -1, 1986,
      -1, 1987,   -1, 1988, 1989,   -1, 1990,   -1,
      -1,   -1,   -1, 1991,   -1,   -1, 1992,   -1,
    1993,   -1,   -1, 1994,   -1, 1995,   -1,   -1,
    1996,   -1,   -1,   -1,   -1,   -1,   -1, 1997,
      -1,   -1, 1998,   -1, 1999,   -1,   -1, 2000,
      -1,   -1,   -1,   -1, 2001,   -1, 2002,   -1,
      -1, 2003,   -1, 2004,   -1,   -1, 2005,   -1,
      -1,   -1,   -1, 2006,   -1, 2007,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2008,   -1, 2009,
      -1,   -1, 2010,   -1, 2011,   -1, 2012, 2013,
      -1, 2014,   -1,   -1, 2015,   -1, 2016,   -1,
      -1,   -1,   -1, 2017,   -1,   -1, 2018,   -1,
    2019,   -1,   -1, 2020,   -1, 2021,   -1,   -1,
    2022,   -1, 2023,   -1,   -1, 2024,   -1, 2025,
      -1,   -1,   -1,   -1, 2026,   -1, 2027, 2028,
      -1, 2029,   -1,   -1, 2030,   -1, 2031,   -1,
      -1, 2032,   -1, 2033,   -1,   -1, 2034,   -1,
      -1,   -1,   -1,   -1,   -1, 2035,   -1,   -1,
    2036,   -1, 2037,   -1, 2038,   -1,   -1,   -1,
      -1,   -1, 2039,   -1,   -1,   -1,   -1,   -1,
      -1, 2040,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2041,   -1,
    2042,   -1,   -1,   -1,   -1, 2043,   -1,   -1,
    2044,   -1, 2045,   -1,   -1, 2046,   -1, 2047,
      -1,   -1, 2048,   -1,   -1,   -1,   -1,   -1,
      -1, 2049,   -1,   -1, 2050,   -1, 2051,   -1,
      -1,   -1, 2052, 2053,   -1,   -1, 2054,   -1,
    2055,   -1,   -1, 2056,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2057,   -1, 2058,   -1,   -1, 2059,
      -1, 2060,   -1,   -1, 2061,   -1,   -1,   -1,
      -1, 2062,   -1,   -1,   -1,   -1, 2063,   -1,
      -1,   -1,   -1, 2064,   -1, 2065,   -1,   -1,
    2066,   -1, 2067,   -1, 2068,   -1,   -1, 2069,
      -1,   -1,   -1,   -1, 2070,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2071,   -1, 2072,   -1,
    2073,   -1,   -1, 2074,   -1,   -1, 2075,   -1,
    2076,   -1,   -1, 2077,   -1,   -1,   -1,   -1,
      -1,   -1, 2078,   -1,   -1, 2079,   -1, 2080,
    2081,   -1,   -1,   -1, 2082,   -1,   -1, 2083,
      -1, 2084,   -1,   -1, 2085,   -1, 2086,   -1,
      -1, 2087,   -1, 2088,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2089,   -1, 2090,   -1,   -1,
    2091, 2092, 2093,   -1,   -1,   -1,   -1, 2094,
      -1, 2095,   -1,   -1, 2096,   -1,   -1, 2097,
      -1, 2098,   -1,   -1, 2099,   -1,   -1,   -1,
      -1, 2100,   -1, 2101,   -1,   -1, 2102,   -1,
    2103,   -1,   -1, 2104,   -1,   -1,   -1,   -1,
      -1,   -1, 2105,   -1,   -1,   -1,   -1, 2106,
      -1,   -1, 2107,   -1,   -1,   -1,   -1, 2108,
      -1,   -1,   -1,   -1, 2109,   -1, 2110,   -1,
      -1,   -1,   -1, 2111,   -1,   -1, 2112,   -1,
    2113,   -1,   -1,   -1,   -1, 2114, 2115,   -1,
    2116,   -1,   -1,   -1,   -1, 2117,   -1, 2118,
      -1,   -1, 2119,   -1,   -1,   -1, 2120,   -1,
      -1,   -1,   -1,   -1, 2121,   -1, 2122,   -1,
      -1, 2123, 2124, 2125,   -1,   -1, 2126,   -1,
      -1,   -1,   -1,   -1,   -1, 2127,   -1, 2128,
    2129,   -1, 2130,   -1,   -1,   -1,   -1, 2131,
      -1,   -1, 2132,   -1,   -1,   -1,   -1,   -1,
      -1, 2133,   -1, 2134, 2135,   -1, 2136,   -1,
      -1, 2137, 2138, 2139,   -1,   -1, 2140,   -1,
    2141,   -1,   -1, 2142,   -1, 2143,   -1,   -1,
      -1,   -1, 2144,   -1,   -1, 2145,   -1,   -1,
      -1,   -1, 2146,   -1, 2147,   -1,   -1, 2148,
      -1, 2149,   -1,   -1,   -1,   -1, 2150,   -1,
      -1,   -1,   -1, 2151,   -1,   -1, 2152,   -1,
    2153,   -1,   -1, 2154,   -1,   -1,   -1,   -1,
    2155,   -1, 2156,   -1,   -1,   -1, 2157, 2158,
      -1,   -1, 2159,   -1, 2160,   -1,   -1, 2161,
      -1, 2162,   -1,   -1, 2163,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2164,   -1,
      -1,   -1,   -1, 2165,   -1,   -1,   -1,   -1,
    2166,   -1,   -1,   -1,   -1,   -1,   -1, 2167,
      -1,   -1, 2168,   -1, 2169,   -1,   -1, 2170,
      -1, 2171,   -1,   -1, 2172,   -1,   -1,   -1,
      -1, 2173, 2174,   -1,   -1,   -1, 2175,   -1,
    2176,   -1,   -1, 2177,   -1, 2178,   -1,   -1,
    2179,   -1, 2180,   -1,   -1,   -1,   -1, 2181,
      -1,   -1, 2182,   -1,   -1,   -1,   -1, 2183,
      -1, 2184,   -1,   -1, 2185,   -1, 2186,   -1,
      -1,   -1,   -1, 2187,   -1,   -1,   -1,   -1,
    2188,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2189,   -1, 2190,
      -1,   -1, 2191,   -1, 2192,   -1,   -1, 2193,
      -1,   -1,   -1,   -1, 2194,   -1, 2195,   -1,
      -1,   -1,   -1, 2196,   -1,   -1, 2197,   -1,
    2198,   -1,   -1,   -1,   -1, 2199,   -1,   -1,
    2200,   -1, 2201,   -1,   -1, 2202,   -1,   -1,
      -1,   -1, 2203,   -1, 2204,   -1,   -1, 2205,
      -1, 2206,   -1,   -1, 2207,   -1, 2208,   -1,
      -1, 2209,   -1, 2210,   -1,   -1, 2211,   -1,
    2212,   -1,   -1,   -1,   -1, 2213,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2214,   -1, 2215,
      -1, 2216, 2217,   -1,   -1,   -1,   -1, 2218,
      -1,   -1,   -1,   -1, 2219,   -1, 2220,   -1,
      -1, 2221,   -1, 2222,   -1,   -1, 2223,   -1,
    2224,   -1,   -1, 2225,   -1, 2226,   -1,   -1,
    2227,   -1, 2228,   -1,   -1, 2229,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2230,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2231, 2232,   -1, 2233,   -1,   -1,   -1,   -1,
    2234,   -1,   -1, 2235,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2236,   -1, 2237,
      -1, 2238, 2239,   -1, 2240, 2241,   -1, 2242,
      -1,   -1,   -1,   -1, 2243,   -1, 2244,   -1,
      -1,   -1,   -1, 2245,   -1,   -1, 2246,   -1,
    2247,   -1,   -1,   -1,   -1, 2248,   -1,   -1,
    2249,   -1, 2250,   -1,   -1, 2251,   -1, 2252,
      -1,   -1,   -1,   -1, 2253,   -1,   -1,   -1,
      -1, 2254,   -1,   -1, 2255,   -1, 2256,   -1,
      -1, 2257,   -1, 2258,   -1,   -1, 2259,   -1,
      -1,   -1,   -1, 2260,   -1, 2261,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2262,   -1, 2263,
      -1,   -1, 2264,   -1, 2265,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2266,   -1,
    2267,   -1,   -1, 2268, 2269,   -1, 2270,   -1,
    2271,   -1,   -1,   -1, 2272, 2273,   -1,   -1,
    2274,   -1, 2275,   -1,   -1, 2276,   -1, 2277,
      -1,   -1, 2278,   -1,   -1,   -1,   -1, 2279,
      -1, 2280,   -1,   -1, 2281,   -1, 2282,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2283,   -1,
    2284,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2285,   -1, 2286,   -1, 2287, 2288,   -1,   -1,
      -1, 2289,   -1,   -1,   -1,   -1,   -1, 2290,
      -1, 2291,   -1,   -1,   -1,   -1, 2292,   -1,
      -1, 2293,   -1, 2294, 2295,   -1, 2296,   -1,
    2297,   -1,   -1, 2298,   -1, 2299,   -1,   -1,
    2300,   -1, 2301, 2302,   -1, 2303,   -1, 2304,
      -1,   -1, 2305,   -1,   -1,   -1, 2306, 2307,
      -1, 2308,   -1,   -1, 2309,   -1,   -1,   -1,
    2310,   -1,   -1, 2311,   -1,   -1,   -1,   -1,
    2312,   -1,   -1, 2313,   -1, 2314,   -1,   -1,
      -1,   -1, 2315, 2316,   -1,   -1,   -1,   -1,
      -1,   -1, 2317,   -1, 2318,   -1,   -1, 2319,
      -1, 2320,   -1,   -1, 2321,   -1, 2322,   -1,
      -1,   -1, 2323, 2324,   -1,   -1,   -1,   -1,
    2325,   -1,   -1,   -1,   -1, 2326,   -1,   -1,
      -1,   -1, 2327,   -1,   -1,   -1,   -1, 2328,
      -1,   -1, 2329,   -1, 2330,   -1,   -1, 2331,
      -1, 2332,   -1,   -1, 2333,   -1,   -1,   -1,
      -1,   -1,   -1, 2334,   -1,   -1, 2335,   -1,
      -1,   -1, 2336, 2337,   -1, 2338,   -1,   -1,
    2339,   -1, 2340,   -1,   -1, 2341,   -1, 2342,
      -1,   -1,   -1,   -1, 2343,   -1,   -1, 2344,
      -1, 2345,   -1, 2346, 2347,   -1, 2348,   -1,
      -1, 2349,   -1,   -1,   -1,   -1,   -1,   -1,
    2350,   -1,   -1, 2351,   -1,   -1,   -1,   -1,
    2352,   -1, 2353,   -1,   -1, 2354,   -1, 2355,
      -1,   -1, 2356,   -1, 2357,   -1,   -1,   -1,
      -1, 2358, 2359,   -1,   -1,   -1, 2360,   -1,
      -1, 2361,   -1, 2362,   -1,   -1, 2363,   -1,
    2364,   -1,   -1, 2365,   -1, 2366,   -1,   -1,
    2367,   -1, 2368,   -1,   -1, 2369,   -1, 2370,
      -1,   -1, 2371,   -1, 2372,   -1,   -1,   -1,
      -1, 2373,   -1,   -1, 2374,   -1,   -1,   -1,
      -1,   -1,   -1, 2375,   -1,   -1, 2376,   -1,
      -1,   -1,   -1, 2377,   -1, 2378,   -1,   -1,
    2379,   -1, 2380,   -1,   -1, 2381,   -1,   -1,
      -1,   -1, 2382,   -1, 2383,   -1,   -1, 2384,
      -1, 2385,   -1,   -1, 2386,   -1, 2387,   -1,
      -1, 2388,   -1, 2389,   -1,   -1, 2390,   -1,
    2391,   -1,   -1, 2392,   -1, 2393,   -1,   -1,
    2394,   -1,   -1,   -1,   -1, 2395,   -1, 2396,
      -1,   -1, 2397,   -1, 2398,   -1,   -1, 2399,
      -1, 2400,   -1,   -1, 2401,   -1, 2402, 2403,
      -1, 2404, 2405, 2406,   -1,   -1,   -1,   -1,
    2407,   -1,   -1, 2408,   -1, 2409,   -1,   -1,
    2410,   -1, 2411,   -1,   -1,   -1,   -1, 2412,
      -1,   -1, 2413,   -1, 2414,   -1,   -1,   -1,
    2415, 2416,   -1, 2417, 2418,   -1,   -1,   -1,
      -1,   -1,   -1, 2419,   -1,   -1, 2420,   -1,
    2421,   -1,   -1, 2422,   -1,   -1,   -1,   -1,
    2423, 2424, 2425,   -1,   -1, 2426,   -1, 2427,
      -1,   -1,   -1,   -1, 2428,   -1,   -1,   -1,
      -1, 2429,   -1,   -1, 2430,   -1,   -1,   -1,
      -1, 2431,   -1, 2432,   -1,   -1,   -1,   -1,
    2433,   -1,   -1, 2434,   -1, 2435,   -1,   -1,
    2436,   -1, 2437,   -1,   -1, 2438,   -1, 2439,
      -1,   -1, 2440,   -1,   -1,   -1,   -1, 2441,
      -1, 2442,   -1,   -1,   -1,   -1, 2443,   -1,
    2444,   -1,   -1,   -1,   -1,   -1, 2445,   -1,
      -1, 2446,   -1, 2447,   -1, 2448,   -1,   -1,
    2449,   -1, 2450,   -1,   -1, 2451,   -1, 2452,
      -1,   -1,   -1,   -1, 2453,   -1,   -1, 2454,
      -1, 2455,   -1,   -1, 2456,   -1, 2457,   -1,
      -1,   -1,   -1, 2458,   -1,   -1, 2459,   -1,
    2460,   -1,   -1, 2461,   -1, 2462,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2463,   -1, 2464,
      -1,   -1, 2465,   -1, 2466,   -1,   -1, 2467,
      -1,   -1,   -1,   -1, 2468,   -1, 2469,   -1,
      -1,   -1,   -1, 2470,   -1,   -1, 2471,   -1,
    2472,   -1,   -1,   -1, 2473, 2474,   -1,   -1,
    2475,   -1,   -1,   -1,   -1, 2476,   -1, 2477,
      -1,   -1, 2478,   -1, 2479,   -1,   -1, 2480,
      -1, 2481,   -1, 2482, 2483, 2484, 2485,   -1,
      -1, 2486,   -1, 2487,   -1,   -1, 2488,   -1,
    2489,   -1,   -1, 2490,   -1, 2491,   -1,   -1,
    2492,   -1, 2493,   -1,   -1,   -1,   -1, 2494,
      -1,   -1,   -1,   -1, 2495,   -1,   -1, 2496,
      -1, 2497,   -1,   -1, 2498,   -1, 2499,   -1,
      -1, 2500,   -1,   -1,   -1,   -1, 2501, 2502,
    2503,   -1,   -1, 2504,   -1, 2505,   -1,   -1,
      -1,   -1, 2506,   -1,   -1,   -1,   -1, 2507,
      -1,   -1, 2508,   -1, 2509,   -1,   -1, 2510,
      -1, 2511,   -1,   -1, 2512,   -1, 2513,   -1,
      -1,   -1,   -1, 2514,   -1,   -1, 2515,   -1,
    2516,   -1,   -1, 2517,   -1, 2518,   -1,   -1,
    2519, 2520, 2521,   -1,   -1, 2522, 2523, 2524,
      -1,   -1, 2525,   -1, 2526,   -1,   -1, 2527,
      -1, 2528,   -1,   -1, 2529,   -1, 2530,   -1,
      -1, 2531,   -1, 2532,   -1,   -1, 2533,   -1,
    2534,   -1,   -1, 2535,   -1, 2536,   -1,   -1,
    2537,   -1,   -1,   -1,   -1, 2538,   -1, 2539,
      -1,   -1,   -1,   -1, 2540,   -1,   -1, 2541,
      -1, 2542,   -1,   -1, 2543,   -1, 2544,   -1,
      -1, 2545,   -1, 2546,   -1,   -1, 2547,   -1,
    2548,   -1,   -1, 2549,   -1, 2550,   -1,   -1,
    2551,   -1, 2552,   -1,   -1,   -1,   -1, 2553,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2554,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2555,   -1,   -1,
    2556,   -1, 2557,   -1,   -1, 2558,   -1,   -1,
      -1,   -1,   -1,   -1, 2559,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2560,   -1, 2561,   -1,
      -1, 2562,   -1,   -1,   -1,   -1,   -1,   -1,
    2563,   -1,   -1,   -1,   -1, 2564,   -1,   -1,
      -1,   -1, 2565,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2566,   -1,   -1, 2567,   -1, 2568,   -1,
      -1,   -1,   -1, 2569,   -1,   -1, 2570,   -1,
    2571,   -1,   -1, 2572,   -1, 2573,   -1,   -1,
    2574,   -1,   -1,   -1,   -1, 2575,   -1,   -1,
      -1,   -1, 2576,   -1,   -1,   -1,   -1,   -1,
      -1, 2577,   -1,   -1, 2578,   -1, 2579,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2580, 2581,   -1, 2582,   -1,   -1,   -1,   -1,
    2583,   -1, 2584,   -1,   -1,   -1,   -1, 2585,
      -1,   -1, 2586,   -1,   -1,   -1,   -1,   -1,
      -1, 2587,   -1,   -1, 2588,   -1, 2589,   -1,
      -1, 2590,   -1, 2591,   -1,   -1, 2592,   -1,
      -1,   -1,   -1,   -1,   -1, 2593,   -1,   -1,
    2594,   -1, 2595,   -1,   -1,   -1,   -1, 2596,
      -1,   -1, 2597,   -1, 2598,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2599,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2600,   -1,
      -1,   -1,   -1,   -1,   -1, 2601,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2602,
      -1,   -1, 2603,   -1, 2604,   -1,   -1,   -1,
      -1,   -1,   -1, 2605, 2606,   -1, 2607,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2608,   -1,
    2609,   -1,   -1, 2610,   -1, 2611,   -1,   -1,
    2612,   -1,   -1,   -1,   -1, 2613,   -1, 2614,
      -1,   -1, 2615,   -1, 2616,   -1,   -1,   -1,
      -1, 2617,   -1,   -1, 2618,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2619,   -1, 2620,
    2621,   -1, 2622,   -1,   -1,   -1,   -1, 2623,
      -1,   -1, 2624,   -1,   -1,   -1,   -1, 2625,
      -1, 2626,   -1,   -1,   -1,   -1, 2627,   -1,
      -1,   -1,   -1, 2628,   -1,   -1, 2629,   -1,
    2630,   -1,   -1, 2631,   -1,   -1,   -1,   -1,
    2632,   -1,   -1, 2633,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2634,   -1, 2635,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2636,   -1,
    2637,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2638,   -1,   -1,   -1,   -1, 2639,
      -1,   -1, 2640,   -1, 2641,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2642,   -1, 2643,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2644,   -1,   -1,
    2645,   -1, 2646,   -1,   -1,   -1,   -1, 2647,
      -1,   -1, 2648,   -1, 2649,   -1,   -1, 2650,
      -1, 2651,   -1,   -1,   -1,   -1, 2652,   -1,
      -1, 2653,   -1, 2654,   -1,   -1, 2655,   -1,
    2656,   -1, 2657,   -1,   -1,   -1,   -1,   -1,
    2658,   -1, 2659,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2660,   -1,   -1, 2661,
      -1,   -1,   -1,   -1, 2662,   -1, 2663,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2664,   -1,   -1,   -1,   -1, 2665,   -1,   -1,
    2666,   -1, 2667,   -1,   -1,   -1,   -1, 2668,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2669,   -1,   -1,   -1,   -1, 2670,   -1,
    2671,   -1,   -1, 2672,   -1,   -1,   -1,   -1,
    2673,   -1,   -1, 2674,   -1,   -1,   -1,   -1,
    2675,   -1, 2676,   -1,   -1, 2677,   -1, 2678,
      -1,   -1, 2679,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2680,   -1, 2681,   -1,
      -1, 2682,   -1, 2683,   -1,   -1, 2684,   -1,
    2685,   -1,   -1, 2686,   -1, 2687,   -1,   -1,
    2688,   -1,   -1,   -1,   -1,   -1,   -1, 2689,
      -1,   -1, 2690,   -1, 2691,   -1,   -1, 2692,
      -1,   -1,   -1,   -1, 2693,   -1, 2694,   -1,
      -1, 2695,   -1,   -1,   -1,   -1,   -1,   -1,
    2696,   -1,   -1,   -1,   -1, 2697,   -1,   -1,
      -1,   -1,   -1,   -1, 2698, 2699,   -1, 2700,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2701,   -1,   -1, 2702,   -1,   -1,   -1,
      -1, 2703,   -1,   -1,   -1, 2704,   -1,   -1,
    2705,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2706,   -1,   -1,   -1,   -1,   -1,   -1, 2707,
      -1,   -1, 2708,   -1, 2709,   -1,   -1, 2710,
      -1, 2711,   -1,   -1, 2712,   -1, 2713,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2714,   -1,
    2715,   -1,   -1, 2716,   -1, 2717,   -1,   -1,
    2718,   -1,   -1,   -1,   -1,   -1,   -1, 2719,
      -1,   -1, 2720,   -1, 2721,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2722,   -1,   -1,   -1,
      -1,   -1,   -1, 2723,   -1,   -1,   -1,   -1,
    2724,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2725,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2726,   -1,   -1,   -1,
      -1,   -1, 2727,   -1, 2728,   -1, 2729,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2730,   -1,
    2731,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2732,   -1, 2733,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2734,   -1, 2735,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2736,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2737,   -1,
    2738,   -1,   -1, 2739,   -1,   -1,   -1, 2740,
      -1,   -1, 2741,   -1,   -1, 2742,   -1,   -1,
      -1,   -1, 2743,   -1, 2744, 2745,   -1, 2746,
      -1,   -1,   -1,   -1,   -1,   -1, 2747,   -1,
      -1, 2748,   -1,   -1,   -1,   -1,   -1,   -1,
    2749,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2750,   -1,   -1,   -1,   -1,   -1,   -1, 2751,
      -1,   -1,   -1,   -1, 2752,   -1,   -1, 2753,
      -1,   -1,   -1,   -1, 2754,   -1, 2755,   -1,
      -1,   -1,   -1, 2756,   -1,   -1, 2757,   -1,
    2758,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2759,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2760,   -1, 2761,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2762, 2763,
      -1,   -1,   -1,   -1,   -1,   -1, 2764,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2765,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2766,   -1, 2767,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2768,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2769,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2770,   -1,
      -1,   -1,   -1, 2771,   -1,   -1,   -1,   -1,
    2772,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2773,   -1,   -1,   -1,   -1, 2774,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2775,   -1,   -1, 2776,   -1,
      -1,   -1,   -1, 2777,   -1,   -1, 2778,   -1,
    2779,   -1,   -1,   -1,   -1, 2780,   -1,   -1,
    2781,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2782,   -1, 2783,   -1,   -1,   -1,
      -1, 2784,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2785,   -1,   -1,   -1,   -1,   -1, 2786,   -1,
      -1,   -1, 2787,   -1,   -1,   -1,   -1, 2788,
      -1,   -1, 2789,   -1, 2790,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2791,   -1, 2792,   -1,   -1,   -1,   -1,   -1,
      -1, 2793,   -1,   -1, 2794,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2795,   -1, 2796,   -1,   -1,   -1,   -1,
    2797,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2798,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2799,   -1,   -1,   -1,
      -1,   -1,   -1, 2800,   -1,   -1,   -1,   -1,
    2801,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2802,   -1, 2803,   -1,   -1,   -1,   -1, 2804,
      -1,   -1, 2805,   -1, 2806,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2807,   -1, 2808,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2809,   -1,   -1, 2810,   -1,   -1,   -1,   -1,
    2811,   -1,   -1,   -1,   -1,   -1,   -1, 2812,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2813,
      -1,   -1,   -1,   -1,   -1,   -1, 2814,   -1,
      -1,   -1,   -1, 2815,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2816,   -1,   -1,   -1,   -1,
      -1,   -1, 2817,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2818,   -1, 2819,   -1,   -1,   -1,
      -1,   -1,   -1, 2820,   -1, 2821, 2822,   -1,
      -1,   -1,   -1, 2823,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2824,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2825,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2826,   -1,   -1,   -1,   -1, 2827,   -1,
      -1,   -1,   -1, 2828,   -1, 2829,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2830,   -1, 2831,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2832,   -1,   -1,   -1,   -1,
    2833,   -1,   -1,   -1,   -1, 2834,   -1,   -1,
      -1,   -1, 2835,   -1,   -1, 2836,   -1,   -1,
      -1,   -1,   -1,   -1, 2837,   -1, 2838,   -1,
      -1, 2839,   -1,   -1,   -1,   -1, 2840,   -1,
      -1,   -1,   -1, 2841,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2842,   -1, 2843,   -1,   -1,   -1,   -1, 2844,
    2845,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2846,   -1,   -1,   -1,   -1, 2847,   -1,
      -1,   -1,   -1, 2848,   -1,   -1, 2849,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2850,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2851,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2852,   -1,
      -1, 2853,   -1, 2854,   -1,   -1,   -1,   -1,
    2855,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2856,   -1,   -1, 2857,   -1,   -1,
      -1,   -1, 2858,   -1,   -1,   -1,   -1, 2859,
      -1,   -1,   -1,   -1,   -1, 2860, 2861,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2862,   -1,   -1,   -1,   -1, 2863,   -1,   -1,
      -1,   -1, 2864,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2865,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2866,   -1,   -1,
      -1, 2867,   -1,   -1,   -1, 2868,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2869,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2870,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2871,   -1,   -1,   -1,   -1,   -1,
      -1, 2872,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2873,   -1,   -1, 2874,
      -1,   -1,   -1,   -1, 2875,   -1, 2876,   -1,
      -1, 2877,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2878,   -1,   -1, 2879,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2880,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2881,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2882,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2883,   -1,   -1,   -1,   -1,   -1,   -1, 2884,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2885,   -1,   -1, 2886,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2887,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2888,   -1,   -1, 2889,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2890,   -1,   -1,
      -1,   -1, 2891,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2892,   -1, 2893,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2894,   -1, 2895,   -1,
      -1, 2896,   -1,   -1,   -1,   -1,   -1,   -1,
    2897,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2898,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2899,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2900,   -1,
    2901,   -1,   -1,   -1,   -1, 2902,   -1,   -1,
      -1,   -1, 2903,   -1,   -1, 2904,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2905,   -1,   -1, 2906,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2907,   -1, 2908,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2909,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2910,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2911,   -1, 2912,   -1,   -1,   -1,
      -1, 2913,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2914,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2915,   -1, 2916,
      -1,   -1,   -1,   -1, 2917,   -1,   -1, 2918,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2919,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2920,   -1, 2921,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2922,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2923,   -1, 2924,   -1,   -1, 2925,
      -1,   -1,   -1,   -1,   -1,   -1, 2926,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2927,   -1,   -1,   -1,
      -1, 2928,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2929,   -1,   -1,   -1,   -1, 2930,   -1,   -1,
      -1,   -1, 2931,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2932,   -1,
      -1, 2933,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2934,
      -1,   -1,   -1,   -1, 2935,   -1, 2936,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2937,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2938,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2939,   -1,   -1,   -1,   -1,   -1,   -1,
    2940,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2941,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2942,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2943,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2944,   -1, 2945,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1, 2946,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2947,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2948,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2949,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2950,   -1, 2951,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1, 2952,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2953,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2954,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2955,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2956,   -1,
      -1, 2957,   -1, 2958,   -1,   -1,   -1,   -1,
    2959,   -1,   -1,   -1,   -1, 2960,   -1,   -1,
      -1,   -1,   -1,   -1,   -1, 2961,   -1,   -1,
      -1,   -1, 2962,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2963,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2964,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2965,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2966,   -1,   -1,   -1,   -1,
    2967,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2968,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2969,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2970,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2971,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2972,   -1,   -1,   -1,   -1, 2973,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2974,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1, 2975,   -1,   -1,   -1,   -1, 2976,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2977,   -1,   -1,   -1,   -1, 2978,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2979,   -1,
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
      -1,   -1, 2980,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    2981,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
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
      -1,   -1, 2982,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1, 2983,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1, 2984,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
      -1,   -1,   -1,   -1,   -1,   -1, 2985,   -1,
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
    2986
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
        }
    }
  return 0;
}

#if defined(__i386__)
#include "char-map/simp2trad_x86.c"
#endif
#if defined(__ppc__) || defined(__POWERPC__)
#include "char-map/simp2trad.c"
#endif

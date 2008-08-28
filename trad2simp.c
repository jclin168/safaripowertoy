#if defined(__i386__)
#include "char-map/trad2simp_x86.c"
#endif
#if defined(__ppc__) || defined(__POWERPC__)
#include "char-map/trad2simp.c"
#endif

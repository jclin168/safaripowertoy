#ifndef _CHAR_MAP_H_
#define _CHAR_MAP_H_

#ifdef __cplusplus
extern "C" {
#endif

struct char_map_s {
  char * src;
  char * dst;
};

const struct char_map_s *
simp2trad_lookup (register const char *str, register unsigned int len);

const struct char_map_s *
trad2simp_lookup (register const char *str, register unsigned int len);

#ifdef __cplusplus
}
#endif

#endif

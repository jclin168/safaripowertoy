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
	simp2trad_x86_lookup (register const char *str, register unsigned int len) ;
	
	const struct char_map_s *
	trad2simp_x86_lookup (register const char *str, register unsigned int len) ;
	
	const struct char_map_s *
	simp2trad_lookup (register const char *str, register unsigned int len) ;
	
	const struct char_map_s *
	trad2simp_lookup (register const char *str, register unsigned int len) ;
	
	inline
	static const struct char_map_s *
	simp2trad_lookup_all(register const char *str, unsigned int* len, register unsigned int remain_len)
	{
		const struct char_map_s * ch_map = NULL;
		register unsigned int i;
		for(i=2;i<=8;i+=2) {
			if( i <= remain_len ) {
#if defined(__ppc__) || defined(__POWERPC__)
				ch_map = simp2trad_lookup( str, i );
#endif
#if defined(__i386__)
				ch_map = simp2trad_x86_lookup( str, i );
#endif
				if(ch_map) {
					*len = i;
					return ch_map;
				}
			}
			else break;
		}
		*len = 0;
		return NULL;
	}
	
	inline
	static const struct char_map_s *
	trad2simp_lookup_all(register const char *str, unsigned int* len, register unsigned int remain_len)
	{
		const struct char_map_s * ch_map = NULL;
		register unsigned int i;
		for(i=2;i<=8;i+=2) {
			if( i <= remain_len ) {
#if defined(__ppc__) || defined(__POWERPC__)
				ch_map = trad2simp_lookup( str, i );
#endif
#if defined(__i386__)
				ch_map = trad2simp_x86_lookup( str, i );
#endif
				if(ch_map) {
					*len = i;
					return ch_map;
				}
			}
			else break;
		}
		*len = 0;
		return NULL;
	}
	

#ifdef __cplusplus
}
#endif

#endif

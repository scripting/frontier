
/*	$Id: buildflags.h 355 2005-01-11 22:48:55Z andreradke $    */

#ifdef __powerc

	#include <MacHeadersPPC>

#else

	#include <MacHeaders68K>

#endif

#define name_of_IOA_setup_routine setupgizmo
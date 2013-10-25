
/*	$Id: carbonheaders.h 355 2005-01-11 22:48:55Z andreradke $    */

/*
 *	MacHeaders.h
 *
 *	Processor independant interface to the MacHeaders<xxx> files ...
 */

#ifdef __cplusplus

#if __POWERPC__
	#include "shellheadersPPC++"
#elif __CFM68K__
	#include "shellheadersCFM68K++"
#else
	#include "shellheaders68K++"
#endif

#else

#if __POWERPC__
	#include "carbonheadersPPC"
#else
	"Error, no 68k code for MacOS X"
#endif

#endif

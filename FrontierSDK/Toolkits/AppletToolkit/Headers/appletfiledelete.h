
/*	$Id: appletfiledelete.h 355 2005-01-11 22:48:55Z andreradke $    */

/*© copyright 1991-96 UserLand Software, Inc. All Rights Reserved.*/


#define appletfiledeleteinclude


#ifndef filesinclude

	#include "appletfiles.h"
	
#endif


boolean filedeletevisit (bigstring, tyfileinfo *, long);

boolean filedelete (ptrfilespec);



/*	$Id: appletops.h 355 2005-01-11 22:48:55Z andreradke $    */

/*© copyright 1991-96 UserLand Software, Inc. All Rights Reserved.*/


#define opsinclude


#ifndef appletdefsinclude

	#include "appletdefs.h"
	
#endif


short minint (short, short);

boolean cometofront (void);

void delayticks (short);

void delayseconds (short);

void timestamp (unsigned long *);

boolean getstringlist (short, short, bigstring);

boolean initmacintosh (void);


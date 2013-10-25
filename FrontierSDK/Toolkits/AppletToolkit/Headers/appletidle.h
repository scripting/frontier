
/*	$Id: appletidle.h 355 2005-01-11 22:48:55Z andreradke $    */

/*© copyright 1991-96 UserLand Software, Inc. All Rights Reserved.*/


#define appletidleinclude


#ifndef appletinclude

	#include "applet.h"
	
#endif


boolean getidletime (long *);

void appresetsystemidle (EventRecord *ev);

boolean appuseractive (void);

void appsystemidle (void);

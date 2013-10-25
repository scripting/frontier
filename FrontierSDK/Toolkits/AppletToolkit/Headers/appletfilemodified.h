
/*	$Id: appletfilemodified.h 355 2005-01-11 22:48:55Z andreradke $    */

/*© copyright 1991-96 UserLand Software, Inc. All Rights Reserved.*/


#define appletfilemodifiedinclude


#ifndef filesinclude

	#include "appletfiles.h"
	
#endif


boolean filegetmodified (ptrfilespec, long *);

boolean filetouchparentfolder (ptrfilespec);

boolean filesetmodified (ptrfilespec, long);

boolean filetouchallparentfolders (ptrfilespec);


/*	$Id: appletfilemove.c 355 2005-01-11 22:48:55Z andreradke $    */

/*© copyright 1991-96 UserLand Software, Inc. All Rights Reserved.*/


#include "appletfiles.h"
#include "appletfilesinternal.h"
#include "appletfilemove.h"



boolean filemove (FSSpec *fssource, FSSpec *fsdestfolder) {

	OSErr ec;
	
	ec = FSpCatMove (fssource, fsdestfolder);
	
	return (!fileerror (fssource, ec));
	} /*filemove*/


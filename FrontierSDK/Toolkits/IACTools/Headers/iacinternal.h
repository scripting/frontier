
/*	$Id: iacinternal.h 355 2005-01-11 22:48:55Z andreradke $    */

/*© copyright 1991-96 UserLand Software, Inc. All Rights Reserved.*/


#define iacinternalinclude /*routines used internally to implementation of IAC Tools*/

#include "iac.h"



void IACcopystring (void *, void *);

Boolean IACpushstring (void *, void *);

Boolean IACgetlongattr (AppleEvent *, AEKeyword, DescType, long *);

Boolean IACbreakembrace (void);
	

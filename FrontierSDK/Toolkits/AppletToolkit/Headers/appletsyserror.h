
/*	$Id: appletsyserror.h 355 2005-01-11 22:48:55Z andreradke $    */

/*© copyright 1991-96 UserLand Software, Inc. All Rights Reserved.*/


#define appletsyserrorinclude


void setsyserrorparam (bigstring);

boolean syserror (OSErr);

boolean sysmemoryerror (void);

boolean initsyserror (void);

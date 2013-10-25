
/*	$Id: appletwires.h 355 2005-01-11 22:48:55Z andreradke $    */

/*© copyright 1991-96 UserLand Software, Inc. All Rights Reserved.*/


#define appletwiresinclude

extern bigstring bstargetwindowname; /*title of window that IAC verbs apply to*/



boolean initappletwires (void);

pascal short appwaitroutine (EventRecord *);

boolean settargetglobals (void);

boolean appruncard (Handle);


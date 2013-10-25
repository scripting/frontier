
/*	$Id: ioaedittext.h 355 2005-01-11 22:48:55Z andreradke $    */

/*© copyright 1991-96 UserLand Software, Inc. All Rights Reserved.*/


#define ioaedittextinclude


typedef struct tytextdata {
	
	boolean bullets; /*for passwords*/
	
	boolean numericonly; /*for entering numbers*/
	
	Handle hrealtext; /*if bullets are on, this is where we store the text*/
	} tytextdata, **hdltextdata;
	
	
boolean gettextbehindbullets (hdlobject, bigstring);

boolean emptytextbehindbullets (hdlobject);

boolean settextbehindbullets (hdlobject, void *);

/*	$Id: ioacolorpopup.h 355 2005-01-11 22:48:55Z andreradke $    */

/*© copyright 1991-96 UserLand Software, Inc. All Rights Reserved.*/


#define ioacolorpopupinclude


typedef struct tycolordata {

	short versionnumber;
	
	RGBColor rgb;
	
	char waste [10];
	} tycolordata, **hdlcolordata;
	




/*	$Id: syslargestblock.c 355 2005-01-11 22:48:55Z andreradke $    */

/*© copyright 1991-96 UserLand Software, Inc. All Rights Reserved.*/


#include <HyperXCmd.h>


pascal void main (XCmdPtr paramPtr) {
	
	/*
	This XFCN returns the size of the largest block of system memory 
	that's free. 
	
	It should be the same number that's displayed as the "Largest 
	Unused Block" by the Finder's "About this Macintosh" command.
	*/
	
	Str255 s;
	long growBytes;
		
	NumToString (TempMaxMem (&growBytes), s);
	
	paramPtr->returnValue = PasToZero (paramPtr, s);
	} /*main*/
	
	


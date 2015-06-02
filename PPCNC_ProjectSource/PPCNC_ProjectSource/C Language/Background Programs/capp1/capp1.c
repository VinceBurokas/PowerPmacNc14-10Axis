#include <gplib.h>   // Global Gp Shared memory pointer
//----------------------------------------------------------------------------------
// pp_proj.h is the C header for accessing PMAC Global, CSGlobal, Ptr vars
// _PPScriptMode_ for Pmac Script like access global & csglobal
// global Mypvar - access with "Mypvar"
// global Myparray(32) - access with "Myparray(i)"
// csglobal Myqvar - access with "Myqvar(i)" where "i" is Coord #
// csglobal Myqarray(16) - access with "Myqvar(i,j)" where "j" is index
// _EnumMode_ for Pmac enum data type checking on Set & Get global functions
// Example
// global Mypvar
// csglobal Myqvar
// "SetGlobalVar(Myqvar, data)" will give a compile error because its a csglobal var.
// "SetCSGlobalVar(Mypvar, data)" will give a compile error because its a global var.
//------------------------------------------------------------------------------------
// #define _PPScriptMode_	// uncomment for Pmac Script type access
// #define _EnumMode_			// uncomment for Pmac enum data type checking on Set & Get global functions		// uncomment for Pmac Script type access


//----------------------------------------------------------------------------------
// To use the functions defined in the Libraries, create a prototype of the function 
// in this file or in a header file that is included in this file.
// For Example:
// If a Library project has been created with the following function and you intend to use 
// that function in this C file:
// int MyFunction(int MyVar)
// {
//	return MyVar*10;
// }
// Then a prototype of this function must be created in this c file or in a
// header file that is being included in this file. The prototype is the following:
// int MyFunction(int);
//------------------------------------------------------------------------------------

#include "../../Include/pp_proj.h"

int main(void) 
{
	InitLibrary();
	//Put your code here
	CloseLibrary();	
	return 0;
}


// =================================================================================
// TOPIC: C++  Global Variables, Variable Scope and Constants
// =================================================================================
// NOTES : * Global Variables, Variable Scope and Constants in C++
//
//         * C++ CPP GLOBAL VARIABLES:
//             Global variables should be declared outside any function and can be
//             accessed by any function within the program.
//
//         * C++ CPP LOCAL VARIABLES:
//             Local Variables are the variables that are declared inside a function.
//
//         * C++ CPP Constants
//             Constants are variables whose values remain same and are unchangable
//
// =================================================================================
//
// FILE-NAME : 003_cpp_variables_constants.cpp
//
// FILES NEEDED TO RUN THIS PROGRAM
//           : N/A
//
// AUTHOR    : tinitiate.com / Venkata Bhattaram
//             (c) 2014
//
// =================================================================================

#include <iostream>
#include <string>

using namespace std;


// -----------------------------------
// CONSTANTS in C++ using the #define
// -----------------------------------
//Define constants using the define keyword.
#define WEBSUTE = "TINITIATE";

// -------------------------
// C++ CPP GLOBAL VARIABLES
// -------------------------

// This is a GLOBAL VARIABLE, It can accessed by any function in this program.
int gVar      = 100;
int tinitiate = 2;

// The main() is the entry point to the program, Return Type is "int"
int main()
{
   // ---------------
   // LOCAL VARIABLE
   // ---------------
   int lVar = 200;

   // Use the global variable gVar
   cout << gVar << endl;

   // When Globla and Local variables names are same then, Local Variable will
   // take preference over the Global variable
   int tinitiate = 999;

   // print the variable
   cout << tinitiate << endl;   // This will print 999, Instead of 100

   // --------------------------------------------
   // CONSTANTS in C++, Using the "const" keyword
   // --------------------------------------------
   const int YEAR = 2014;


   // ----------------------------------------------------------------------------
   // Integer Return value as the "main() function has a "int" in front of it
   // mentioning that, this program returns an integer, hence using ZERO
   return 0;
}

// =================================================================================
// TAGS: CPP C++ VC++ Variables Datatypes C++ int unsigned signed int boolean bool
// CPP C++ VC++ Variables Datatypes char character
// =================================================================================

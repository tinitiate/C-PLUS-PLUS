// =================================================================================
// TOPIC: C++ CPP FUNCTIONS
// =================================================================================
//
// NOTES : * C++ CPP Functions
//         * Functions are set of C++ which becomes a valid syntax when put together.
//         * Functions may return a value, each value is associated with
//           a datatype.
//         * A Function may NOT return a value, where the return type is void.
//         * Functions with parameters, Parameters are inputs to functions.
//         * Function return values
//         * Function Overloading is the process of having Same function name but
//           different input parameters and return type
//
// =================================================================================
//
// FILE-NAME : 010_cpp_functions.cpp
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

// ===========================
// FUNCTION RETURINING A VALUE
// ===========================

// This function returns an INTEGER value
int myFunction()  // RETURN Type is INT
{
   return 99;     // RETURN Keyword is used to
   cout << endl;
}


// =================================
// FUNCTION NOT RETURINING ANY VALUE
// =================================

// This function Does not returns any value
void voidFunction()  // RETURN Type is VOID
{
   cout << "Function myFunction: doesnt return any value." << endl;
}


// ========================
// FUNCTION with Parameters
// ========================

// The below function takes in 2 parameters A and B
int sumFunction(int A, int B)
{
    return A + B;  // Use the parameters
}


// =====================
// FUNCTION OVERLOADING
// =====================

int OverLoadedFunc(int a)
{
   return a + 10;
}

// Another function with the same name as OverLoadedFunc
// but DataType of input parameter is different so is the function return type
char OverLoadedFunc(char a)
{
   return a;
}


// Main Function returning INT
int main ()
{

   // Call the FUNCTIONS from the MAIN function
   voidFunction();

   // Capture the return value
   int i = myFunction();
   cout << i << endl;

   int j = sumFunction(12, 14);
   cout << j << endl;

   // OVERLOADED Function calls
   int k = OverLoadedFunc(10);
   cout << k << endl;

   // OVERLOADED Function calls
   char p = OverLoadedFunc(10);
   cout << p << endl;

   // ----------------------------------------------------------------------------
   // Integer Return value as the "main() function has a "int" in front of it
   // mentioning that, this program returns an integer, hence using ZERO
   // ----------------------------------------------------------------------------
   return 0;
}

// =================================================================================
// TAGS: CPP C++ VC++ Functions function parameters
// =================================================================================

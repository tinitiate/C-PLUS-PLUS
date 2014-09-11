// =================================================================================
// TOPIC: C++ CPP PASS BY VALUE, PASS BY REFERENCE, PASS BY POINTER
// =================================================================================
//
// NOTES : * C++ CPP PASS BY VALUE
//         * C++ CPP PASS BY REFERENCE
//         * C++ CPP PASS BY POINTER
//
// =================================================================================
//
// FILE-NAME : 014_cpp_pass_by_value_reference_pointer.cpp
//
// OTHER FILES NEEDED TO RUN THIS PROGRAM
//           : N/A
//
// AUTHOR    : tinitiate.com / Venkata Bhattaram
//             (c) 2014
//
// =================================================================================

#include <stdio.h>
#include <iostream>

using namespace std;

// Create a function to print a value passed to it.
// The variable is "passValue"
int printMe(int passValue)
{
   cout << passValue << endl;

   // return some value
   return 0;
}

// Create a function to accept a Pointer Variable
int printPointerVar(int *passValue) // The parameter is accepted as a pointer value
{
   // Print the value of the pointer
   cout << *passValue << endl;

   // return some value
   return 0;
}

// The main() is the entry point to the program
int main()
{
   // ======================
   // C++ CPP PASS BY VALUE
   // ======================

   // Create a value
   int passValue1 = 100;

   // Call the function, by passing the pass by value, The variable itself
   // Copy of the parameter is passed to the function printMe
   printMe(passValue1);


   // ==========================
   // C++ CPP PASS BY REFERENCE
   // ==========================

   // Create a value
   int passValue2 = 200;

   // Create a reference
   int& passRef = passValue2;

   // Call the function, by passing the reference, of the variable passVariable2
   printMe(passRef);


   // ========================
   // C++ CPP PASS BY POINTER
   // ========================

   // Create a Pointer variable
   int passValue3 = 300;

   // Pass the address of the variable  "&passValue3"
   printPointerVar(&passValue3);

   // ----------------------------------------------------------------------------
   // Integer Return value as the "main() function has a "int" in front of it
   // mentioning that, this program returns an integer, hence using ZERO
   return 0;
}

// =================================================================================
// TAGS: C++ CPP PASS BY VALUE, PASS BY REFERENCE, PASS BY POINTER
// =================================================================================

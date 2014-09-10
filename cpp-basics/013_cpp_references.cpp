// =================================================================================
// TOPIC: C++  CPP REFERENCES
// =================================================================================
//
// NOTES : * References in C++/CPP are type of variables which are
//           alias to another already existing variable.
//         * There are no NULL references, they must always be declared
//           against an existing variable.
//         * When a  reference is declared against a variable it cannot be changed
//           to refer to another variable.
//
// =================================================================================
//
// FILE-NAME : 013_cpp_references.cpp
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

// The main() is the entry point to the program
int main()
{
   // Create a variable "a"
   int a  = 10;

   // Create an reference of variable "a"
   // the reference "x" indicated by the AMPERSAND "&"
   int& x = a;

   // Print the variable
   cout << "The variable 'a' :" << a << endl;
   cout << "The reference 'x' to the variable 'a':" << x << endl;

   // Change the value of variable 'a'
   a = 100;

   // Print the variable
   cout << "The variable 'a' :" << a << endl;
   cout << "The reference 'x' to the variable 'a':" << x << endl;


   // ----------------------------------------------------------------------------
   // Integer Return value as the "main() function has a "int" in front of it
   // mentioning that, this program returns an integer, hence using ZERO
   return 0;
}

// =================================================================================
// TAGS: CPP C++ VC++ references
// =================================================================================

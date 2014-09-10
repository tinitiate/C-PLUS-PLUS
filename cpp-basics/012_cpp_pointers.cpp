// =================================================================================
// TOPIC: C++  CPP POINTERS
// =================================================================================
//
// NOTES : * A pointer is a variable that holds the address of another variable.
//         * The size of the POINTER on a 32 bit machine is 4 bytes and on a 64 bit
//           system is 8 bytes.
//         * address-of operator (&)  : Prints the Address of a Variable
//         * dereference operator (*) : Prints the CONTENTS of a POINTER
//         * NULL pointer is a pointer with null value and it does
//           not point anywhere.
//         * ARRAY POINTERS, Array indexes are infact a set of pointers, to values
//           of the Arrays
//
// =================================================================================
//
// FILE-NAME : 012_cpp_pointers.cpp
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

   // Create a Variable
   int var1 = 20;

   //=================================
   // address-of operator (&)
   // Prints the Address of a Variable
   //=================================
   cout << var1  << endl;   // This prints the value
   cout << &var1 << endl;   // The AMPERSAD prints the ADDRESS of the VARIABLE var1


   //=================================
   // dereference operator (*)
   // Prints the CONTENTS of a POINTER
   //=================================
   int *ptr = &var1;        // Captures the address of the variable var1


   cout << *ptr << endl;    // This prints the value


   // Now Printing all the pointers and variables

   cout << *ptr << var1  << endl;
   cout << ptr  << &var1 << endl;

   // ptr  is same as &var1
   // *ptr is same as var1

   //===============
   // NULL Pointer
   //===============
   int      *SomePtr;         // Declare a POINTER "ptr"
   SomePtr  = 0;              // assign address 0 to "ptr"

   cout << SomePtr << endl;

   //===============
   // Array Pointers
   //===============
   int TinArray[3] = { 99,88, 77 };

   // *TinArray points to the values of the first element of the array
   cout << *TinArray << endl;

   // *(TinArray+1) points to the values of the address of
   // second element of the array
   cout << *(TinArray+1) << endl;

   // ----------------------------------------------------------------------------
   // Integer Return value as the "main() function has a "int" in front of it
   // mentioning that, this program returns an integer, hence using ZERO
   return 0;
}

// =================================================================================
// TAGS: CPP C++ VC++ pointers NULL Pointers, Array Pointers Tutorials Tinitiate
// dereference operator (*) address-of operator (&)
// =================================================================================

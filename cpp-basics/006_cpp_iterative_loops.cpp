// =================================================================================
// TOPIC: C++  Iterative Statements
// =================================================================================
//
// NOTES : * C++ CPP Iterative Statements
//         * To execute a piece of code repeatedly, LOOP construct is used.
//
//         * All Loops have the three basic components :
//             - Loop Variable initialization;
//             - condition;
//             - increment;
//
//         * FOR LOOP, Execution iterates over a piece of code,
//           for a specified number of times driven by a "loop variable"
//
//         * WHILE LOOP, Iterate as long as a condition is true and exit
//           when the condition is false.
//
//         * Do .. WHILE LOOP, Iterate as long as a condition is true and exit
//           when the condition is false. But this executes at-least once.
//
// =================================================================================
//
// FILE-NAME : 006_cpp_iterative_loops.cpp
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

// Main Function returning INT
int main ()
{
   // ================
   // C++ CPP FOR LOOP
   // ================

   // For loop constructs
   // for (Loop Variable initialization; condition; increment)
   for (int i = 1; i <= 5; i++)
   {
      cout << "Iteration #: " << i << endl;
   }

   // ==================
   // C++ CPP While Loop
   // ==================

   // Loop Variable initialization
   int j = 1;

   // While loop
   while (j < 6) // condition
   {
      cout << "Iteration #: " << j << endl;
      j++;       // increment
   }


   // ========================
   // C++ CPP Do .. While Loop
   // ========================

   // Loop Variable initialization
   int k = 1;

   // do loop execution
   do
   {
       cout << "Iteration #: " << k << endl;
       k++;
   } while(k < 6);


   // ----------------------------------------------------------------------------
   // Integer Return value as the "main() function has a "int" in front of it
   // mentioning that, this program returns an integer, hence using ZERO
   return 0;
}

// =================================================================================
// TAGS: CPP C++ VC++ Iterative Statements Loops for loop while loop
//       CPP C++ do while loop
// =================================================================================

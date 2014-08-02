// =================================================================================
// TOPIC: C++  Iterative Control Statements
// =================================================================================
//
// NOTES : * C++ CPP Iterative Control Statements
//         * These are used to control the Iterative statements
//
//         * BREAK; Statement:
//           - This statement is used to abruptly exit the LOOP
//
//         * CONTINUE; Statement:
//           - This statement skips an iteration of a loop,
//             But other iterations before and after a specified iteration
//             still execute.
//
// =================================================================================
//
// FILE-NAME : 007_cpp_iterative_control.cpp
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
   // C++ CPP BREAK;
   // ================

   // C++ CPP break; in For loop constructs
   for (int i = 1; i <= 5; i++)
   {
      cout << "Iteration #: " << i << endl;

      // Break statement will cause the loop to exit immediately
      break;
   }

   // Loop Variable initialization
   int j = 1;

   // C++ CPP break; in While loop
   while (j < 6) // condition
   {
      cout << "Iteration #: " << j << endl;
      break;     // LOOP CONTROL
      j++;       // increment
   }

   // C++ CPP break in do .. while Loop
   // loop Variable initialization
   int k = 1;

   // break in do loop execution
   do
   {
       cout << "Iteration #: " << k << endl;
       k++;
       break;
   } while(k < 6);


   // ==================
   // C++ CPP CONTINUE;
   // ==================

   // C++ CPP continue; in For loop constructs
   for (int x = 1; x <= 5; x++)
   {

      // Continue statement will cause this iteration of the
      // loop to exit.
      if (x == 3)
      {
         continue; // This will SKIP the iteration # 3
      }
      // Print a message
      cout << "for loop Iteration #: " << x << endl;
   }


   // Loop Variable initialization
   int y = 0;

   // break; in While loop
   while (y < 6) // condition
   {
      y++;       // increment
      cout << "While loop Iteration #: " << y << endl;
      if (y == 3)
      {
         continue; // This will SKIP the iteration # 3
      }

   }

   // do .. while Loop Variable initialization
   int z = 0;

   // break in do loop execution
   do
   {
      z++;
      cout << "Do While Iteration #: " << z << endl;

      if (z == 3)
      {
         continue; // This will SKIP the iteration # 3
      }

   } while(z < 6);



   // ----------------------------------------------------------------------------
   // Integer Return value as the "main() function has a "int" in front of it
   // mentioning that, this program returns an integer, hence using ZERO
   return 0;
}

// =================================================================================
// TAGS: CPP C++ VC++ Iterative Statements Loops break; continue; statements
// =================================================================================

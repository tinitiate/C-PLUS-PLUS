// =================================================================================
// TOPIC: C++  GOTO Label Statements
// =================================================================================
//
// NOTES : * C++ CPP GOTO Statement Label
//         * GOTO statement is used to "transfer execution control" to any point
//           in the code. The point to which the "execution control" must be
//           transfered must be identified by a "LABEL"
//         * GOTO,transfers control to a LABEL
//         * Using GOTO is discouraged as execution control is skewed and
//           is not linear.
//
// =================================================================================
//
// FILE-NAME : 008_cpp_goto_label.cpp
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
   // C++ GOTO; LABEL
   // ================

   cout << "Step I" << endl;

   goto LABEL1;


   // This wont be executed
   cout << "Step II" << endl;

   LABEL1:
      cout << "This is Label1" << endl;


   goto LABEL2;

   // This wont be executed
   cout << "Step III" << endl;

   LABEL2:
      cout << "This is Label2" << endl;

   // ----------------------------------------------------------------------------
   // Integer Return value as the "main() function has a "int" in front of it
   // mentioning that, this program returns an integer, hence using ZERO
   return 0;
}

// =================================================================================
// TAGS: CPP C++ VC++  GOTO Label Statements
// =================================================================================

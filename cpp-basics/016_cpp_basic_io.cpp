// =================================================================================
// TOPIC: C++ CPP BASIC IO
// =================================================================================
//
// NOTES : * C++ CPP Reading Input from Keyboard, using "cin"
//           this is part of the "iostream" header
//         * C++ CPP Sending Standard Error to screen / Console
//         * C++ CPP Sending Standard Log to screen / Console
//         * Usage of Standard Error, Standard Log is done at the Operating System
//           level, where the CPP program can interact with various files to handle
//           various type of messages from the program
//             For example
//             Redirect All error messages from "cerr" to a error.log file
//             $mycpp_program 2> error.log
//             In the above statement the "2>" 2 is standard error and
//              ">" is redirect to the error.log file.
//             or
//             Redirect All log messages from "clog" to info.log file
//             $mycpp_program 1> info.log
//
// =================================================================================
//
// FILE-NAME : 016_cpp_basic_io.cpp
//
// FILES NEEDED TO RUN THIS PROGRAM
//           : N/A
//
// AUTHOR    : tinitiate.com / Venkata Bhattaram
//             (c) 2014
//
// =================================================================================

#include <iostream>
#include <cstring>

using namespace std;

// The starting point of this program
int main ()
{

   //=============================
   // Reading Input from Keyboard
   //=============================

   // Create a Variable to store the input information
   char value[50];
   cout << "Enter a Value: ";

   // "cin" is used to capture user input
   cin >> value ;

   // Print the value entered that was entered
   cout << "Value Entered: " << value << endl;


   //===============================================================
   // Printing Standard Error to Screen / Console, Using the "cerr"
   //===============================================================

   // Create an error message
   string errm = "This is an error message";
   cerr << "Error Message: " << errm << endl;


   //=============================================================
   // Printing Standard LOG to Screen / Console, Using the "clog"
   //=============================================================

   // Create an error message
   string log_msg = "This is an log message";
   clog << "Log Message: " << log_msg << endl ;


   // ----------------------------------------------------------------------------
   // Integer Return value as the "main() function has a "int" in front of it
   // mentioning that, this program returns an integer, hence using ZERO
   return 0;
}

// =================================================================================
// TAGS: CPP C++ VC++ Reading Input Printing Output Standard Error Standard Log
//       CPP C++ VC++ cin cout cerr
// =================================================================================

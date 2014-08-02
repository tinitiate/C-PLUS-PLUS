// =================================================================================
// TOPIC: C++  Conditional Statements
// =================================================================================
//
// NOTES : * C++ CPP Conditional Statements
//         * CPP C++ if Statement
//         * CPP C++ if else Statement
//         * CPP C++ if .. else if .. else Statement, Chaining if else
//         * CPP C++ Nested if else
//         * CPP C++ Switch Statement
//         * CPP C++ Ternary Operator
//
// =================================================================================
//
// FILE-NAME : 005_cpp_conditional_statements.cpp
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
   // ============================
   // if statement in CPP C++
   // ============================
   // With integers
   if ( 2 > 1 )  // Use with some comparison operator
   {
      cout << "2 is Greater than 1" << endl;
   }

   // With String
   if ( "This" < "THIS" )
   {
      cout << "this" << endl;
   }

   // ============================
   // if else statement in CPP C++
   // ============================

   if ( 1 > 2 )
   {
      cout << "1 is GREATER than 2" << endl;
   }
   else {
      cout << "2 is GREATER than 1" << endl;
   }

   // ==========================
   // Chaining IF ELSE Statement
   // ==========================

   int var1 = 10;
   if (var1 == 1) {
      cout << "var1 is 1" << endl;
   }
   else if ( var1 == 9 ) {
      cout << "var1 is 9" << endl;
   }
   else if ( var1 == 10 ) {
      cout << "var1 is 10" << endl;
   }
   else {
      cout << "var1 is something else" << endl;
   }

   // ========================
   // Nested if else statement
   // ========================
   var1 = 10;

   if ( var1 > 5 ) {
      // Nested if else
      if ( var1 == 1 ) {
         cout << "var1 is 1" << endl;
      }
      else if ( var1 == 10 ) {
         cout << "var1 is 10" << endl;
      }
   }
   else {
      cout << "var1 is something else" << endl;
   }

   // ====================================
   // CPP C++ Switch Statement
   // ------------------------
   // * SWITCH searches for a specific CASE
   // * Break Exits the case and the switch
   // * default is the "Other Than the
   //   above all the cases"
   // * SWITCH Statements works ONLY with
   //   Native DataTypes (INT, CHAR)
   // ====================================

   // Switch With INT
   // ----------------

   int website_option = 1;

   switch(website_option)
   {
      case 1 :
         cout << "Tutorials WebSite" << endl;
         break;
      case 2 :
         cout << "Search Engine" << endl;
         break;
      case 3 :
         cout << "eMail" << endl;
         break;
      default :
         cout << "Other Category WebSite" << endl;
   }
   cout << "Website Option Mentioned is " << website_option << endl;


   // Switch With CHAR
   // ----------------

   char website_selection = 'S';

   switch (website_selection)
   {
      case 'T' :
         cout << "Tutorials WebSite" << endl;
         break;
      case 'S' :
         cout << "Search Engine" << endl;
         break;
      case 'E' :
         cout << "eMail" << endl;
         break;
      default :
         cout << "Other Category WebSite" << endl;
   }
   cout << "Website Selection Mentioned is " << website_selection << endl;


   // =========================
   // CPP C++ Ternary Operator
   // =========================

   // USAGE: variable = condition ? value_if_true : value_if_false

   int i = ( 4 > 2 ) ? 4 : 2 ;

   cout << i << endl;  // OUTPUT: 4


   // ----------------------------------------------------------------------------
   // Integer Return value as the "main() function has a "int" in front of it
   // mentioning that, this program returns an integer, hence using ZERO
   return 0;
}

// =================================================================================
// TAGS: CPP C++ VC++ Conditional Statements if else
// =================================================================================

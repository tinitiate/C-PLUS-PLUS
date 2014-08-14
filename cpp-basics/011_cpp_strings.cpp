// =================================================================================
// TOPIC: C++ CPP Arrays
// =================================================================================
//
// NOTES : * C++ CPP Strings
//         * Strings is string is actually a one-dimensional array of characters
//         * C++ standard library has the string class that supports the STRING TYPE
//         * Comparing String and CHAR array
//         * STRING Functions, Uses CHAR Array as inputs NOT STRINGS !!
//             - strcpy(str1, str2);
//                  Copies string str2 into string str1.
//             - strcat(str1, str2);
//                  appends / concatenates string str2 after string str1.
//             - strlen(str1);
//                  Returns the length of string str1.
//             - strcmp(str1, str2);
//                  Returns 0 if str1 and str2 are same
//                  Returns less than 0 if str1 < str2
//                  Returns greater than 0 if str1 > str2.
//
// =================================================================================
//
// FILE-NAME : 011_cpp_strings.cpp
//
// FILES NEEDED TO RUN THIS PROGRAM
//           : N/A
//
// AUTHOR    : tinitiate.com / Venkata Bhattaram
//             (c) 2014
//
// =================================================================================

#include <cstring>
#include <iostream>

using namespace std;

// Main Function returning INT
int main ()
{
   // ================================
   // C++ CPP STRING with a CHAR array
   // ================================

   char string1[14] = "TINITIATE.COM";

   string string2   = "TINITIATE.COM";

   cout << string1 << endl;
   cout << string2 << endl;

   // =========================
   // C++ CPP STRING Functions
   // =========================

   char str1[15] = "Technical";
   char str2[15] = "Initiate";
   char str3[15];


   // ===========================================
   // strcpy: Copies string str2 into string str3
   // ===========================================

   cout << "Before STRCPY: " << str3 << endl;

   strcpy(str3, str2);

   cout << "After STRCPY: " << str3 << endl;


   // ============================================================
   // strcat: appends / concatenates string str2 after string str1
   // ============================================================

   cout << strcat(str1, str2) << endl;


   // =========================================
   // strlen: returns the length of the string
   // =========================================

   cout << strlen(str1) << endl;


   // ===========================================
   //   strcmp(str1, str2);
   //    - Returns 0 if str1 and str2 are same
   //    - Returns less than 0 if str1 < str2
   //    - Returns greater than 0 if str1 > str2
   // ===========================================

   cout << strcmp(str1, str2) << endl;


   // ----------------------------------------------------------------------------
   // Integer Return value as the "main() function has a "int" in front of it
   // mentioning that, this program returns an integer, hence using ZERO
   return 0;
}

// =================================================================================
// TAGS: CPP C++ VC++ STRINGS
// =================================================================================

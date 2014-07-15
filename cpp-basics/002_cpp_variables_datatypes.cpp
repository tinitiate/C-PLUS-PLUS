// =================================================================================
// TOPIC: C++  Variables and Datatypes
// =================================================================================
// NOTES : * Variables in C++
//         * C++ CPP Basic Native Data-types explained
//         * C++ CPP Character
//         * C++ CPP Number
//         * C++ CPP Floating point, Double
//         * C++ CPP Boolean
// =================================================================================
//
// FILE-NAME : 002_cpp_variables_datatypes.cpp
//
// FILES NEEDED TO RUN THIS PROGRAM
//           : N/A
//
// AUTHOR    : tinitiate.com / Venkata Bhattaram
//             (c) 2014
//
// =================================================================================

#include <iostream>
#include <cstdio>     // Use for printf
#include <string>
#include <locale>     // Use for non-english characters

using namespace std;

// The main() is the entry point to the program, Return Type is "int"
int main()
{
   // ---------------------------------------------
   // C++ CPP DataType: INTEGERS or SIGNED INTEGERS
   // ---------------------------------------------
   // Value Range : -2147483648 to 2147483647
   // Size        : 4 bytes

   // Declaration and Usage examples
   int var_int1  = -2;
   int var_int2  = 2000;

   // Printing an Integer using COUT and PRINTF
   cout << var_int1 << " " << var_int2 << endl;
   printf("Integers: %i %i ", var_int1, var_int2);


   // ----------------------------------
   // C++ CPP DataType: UNSIGNED INTEGER
   // ----------------------------------
   // Value Range : 0 to 4294967295
   // Size        : 4 bytes

   // Declaration and Usage examples
   unsigned int var_usg_int1  = 0;
   unsigned int var_usg_int2  = 50;

   // Printing an Integer using COUT and PRINTF
   cout << var_usg_int1 << " " << var_usg_int2 << endl;
   printf("Unsigned Integers: %u and %u ", var_usg_int1, var_usg_int2);


   // -----------------------------------------------------
   // C++ CPP DataType: SIGNED SHORT INTEGER, SHORT INTEGER
   // -----------------------------------------------------
   // Value Range : -32768 to 32767
   // Size        : 2 bytes

   // ----------------------------------------
   // C++ CPP DataType: UNSIGNED SHORT INTEGER
   // ----------------------------------------
   // Value Range : 0 to 65535
   // Size        : 2 bytes

   // Declaration and Usage examples
   signed short int   var_sg_int1    = -190;
   short int          var_sg_int2    = 50;
   // Un-Signed
   unsigned short int var_unsg_int1  = 250;

   // Printing an Integer using COUT and PRINTF
   cout << var_sg_int1 << " " << var_sg_int2 << " " << var_unsg_int1 << endl;
   printf("Signed and Unsigned short Integers: %i and %i and %u ",
          var_sg_int1, var_sg_int2, var_unsg_int1);


   // -----------------------------------------------------
   // C++ CPP DataType: SIGNED LONG INTEGER, LONG INTEGER
   // -----------------------------------------------------
   // Value Range : -2147483647 to 2147483646
   // Size        : 4 bytes

   // ----------------------------------------
   // C++ CPP DataType: UNSIGNED LONG INTEGER
   // ----------------------------------------
   // Value Range : 0 to 4294967295
   // Size        : 4 bytes

   // Declaration and Usage examples
   signed long int   var_lg_int1    = -1999990;
   long int          var_lg_int2    = 5000400;
   // Un-Signed
   unsigned long int var_unlg_int1  = 25099999;

   // Printing an Integer using COUT and PRINTF
   cout << var_lg_int1 << " " << var_lg_int2 << " " << var_unlg_int1 << endl;
   printf("Signed and Unsigned long Integers: %i and %i and %u ",
          var_lg_int1, var_lg_int2, var_unlg_int1);


   // ------------------------
   // C++ CPP DataType: FLOAT
   // ------------------------
   // Value Range : 1.8E-38 to 3.4E+38
   // Size        : 4 bytes

   // Declaration and Usage examples
   float   var_float1 = -190.345;
   float   var_float2 = 50.33;

   // Printing an Integer using COUT and PRINTF
   cout << var_float1 << " " << var_float2 << endl;
   printf("Float Values: %4.3f and %2.2f ", var_float1, var_float2);


   // ------------------------
   // C++ CPP DataType: DOUBLE
   // ------------------------
   // Value Range : 2.2E-308 to 1.8E+308
   // Size        : 8 bytes

   // Declaration and Usage examples
   double   var_double1 = -1990.345;
   double   var_double2 = 500.33;

   // Printing an Integer using COUT and PRINTF
   cout << var_double1 << " " << var_double2 << endl;
   printf("Double Values: %4.3f and %3.2f ", var_double1, var_double2);


   // -----------------------------
   // C++ CPP DataType: LONG DOUBLE
   // -----------------------------
   // Value Range : 2.2E-308 to 1.8E+308
   // Size        : 8 bytes

   // Declaration and Usage examples
   long double   var_lg_double1 = -1990.345;
   long double   var_lg_double2 = 500.33;

   // Printing an Integer using COUT and PRINTF
   cout << var_lg_double1 << " " << var_lg_double2 << endl;
   printf("Long Double Values: %4.3f and %3.2f ", var_lg_double1, var_lg_double2);


   // -----------------------------------------------------
   // C++ CPP DataType: CHAR, UNSIGNED CHAR, SIGNED CHAR
   // -----------------------------------------------------
   // Char Value Range          : -127 to 127 or 0 to 255
   // Unsigned Char Value Range : 0 to 255
   // signed Char Value Range   : -127 to 127
   // Size                      : 1 bytes

   // Declaration and Usage examples
   char            var_char1     = 'A';
   signed char     var_sg_char1  = -123;
   unsigned char   var_usg_char1 = 225;

   // Printing an Integer using COUT and PRINTF
   cout << var_char1 << " " << var_sg_char1 << " " << var_usg_char1 << endl;
   printf("Character Values: %c , %c and %c "
          , var_char1, var_sg_char1, var_usg_char1);


   // -----------------------------------------------------
   // C++ CPP DataType: BOOLEAN
   // -----------------------------------------------------
   // boolean : TRUE / FALSE

   bool var_true  = true;   // true  = 1
   bool var_false = false;  // false = 0

   // usage
   cout << boolalpha << var_true << endl;
   cout << boolalpha << var_false << endl;


   // ----------------------------------------------------------------------------
   // Integer Return value as the "main() function has a "int" in front of it
   // mentioning that, this program returns an integer, hence using ZERO
   return 0;
}

// =================================================================================
// TAGS: CPP C++ VC++ Variables Datatypes C++ int unsigned signed int boolean bool
// CPP C++ VC++ Variables Datatypes char character
// =================================================================================

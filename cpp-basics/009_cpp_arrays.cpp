// =================================================================================
// TOPIC: C++ CPP Arrays
// =================================================================================
//
// NOTES : * C++ CPP Arrays
//           - Arrays are sequential collection or list of values of the datatype.
//           - The list of values are called as Array Elements.
//           - The size of the array is fixed.
//           - int a = 10;                 // This is a simple datatype "int"
//           - int[3] = {10, 20, 30, 40};  // This is an Array of "Int"
//           - The array "INDEX" or the position of array elements, Starts from ZERO.
//
//         * Looping through an Array
//
//         * Change an Array elements value
//
//         * C++ CPP Multidimensional Arrays
//           - Multidimensional array is one which contain one or more arrays
//
// =================================================================================
//
// FILE-NAME : 009_cpp_arrays.cpp
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
   // C++ CPP ARRAYS
   // ================

   // Simple Variable of int
   int x_var = 10;

   cout << x_var << endl;

   // Array of int of size 5 (Index starts from ZERO to FOUR)
   // position of array elements starts as 0, 1, 2, 3, 4
   int x_array[5] = {1, 2, 3, 4, 5};

   cout << x_array[0] << endl;
   cout << x_array[1] << endl;
   cout << x_array[2] << endl;
   cout << x_array[3] << endl;
   cout << x_array[4] << endl;


   // Array of CHAR of size 3 (Index starts from ZERO to TWO)
   // position of array elements starts as 0, 1, 2
   char c_array[3] = {'A', 'B', 'C'};

   cout << c_array[0] << endl;
   cout << c_array[1] << endl;
   cout << c_array[2] << endl;


   // =======================
   // Looping Through a Array
   // =======================

   for (int lp = 0; lp<=3; lp++)
   {
      cout << c_array[lp] << endl;
   }

   // We can get the size of array using the sizeof() function
   // This prints the Size of both the arrays
   int SizeOf_c_array;
   int SizeOf_x_array;

   SizeOf_c_array = sizeof(c_array);
   SizeOf_x_array = sizeof(x_array);

   // Output
   cout << SizeOf_c_array << endl;
   cout << SizeOf_x_array << endl;

   // ===============================
   // Change an Array elements value
   // ===============================

   // Update Array elements using the Assignment Operator

   // Value Before Update
   cout << c_array[1] << endl;

   c_array[1] = 'X';

   // Value After Update
   cout << c_array[1] << endl;


   // ================================
   // C++ CPP MULTI DIMENSIONAL ARRAYS
   // ================================

   // Tabular Representation
   int m2DArray[3][3];

   // The above is a 3 X 3 Matrix representation

   // POSITIONS
   //  00   01   02
   //  10   11   12
   //  20   21   22

   // Row 1
   m2DArray[0][0] = 1;
   m2DArray[0][1] = 2;
   m2DArray[0][2] = 3;

   // Row2
   m2DArray[1][0] = 4;
   m2DArray[1][1] = 5;
   m2DArray[1][2] = 6;

   // Row2
   m2DArray[2][0] = 7;
   m2DArray[2][1] = 8;
   m2DArray[2][2] = 9;

   // Printing The matrix
   cout << m2DArray[0][0] << "   " << m2DArray[0][1] << "   " << m2DArray[0][2] << endl;
   cout << m2DArray[1][0] << "   " << m2DArray[1][1] << "   " << m2DArray[1][2] << endl;
   cout << m2DArray[2][0] << "   " << m2DArray[2][1] << "   " << m2DArray[2][2] << endl;

   // ----------------------------------------------------------------------------
   // Integer Return value as the "main() function has a "int" in front of it
   // mentioning that, this program returns an integer, hence using ZERO
   return 0;
}

// =================================================================================
// TAGS: CPP C++ VC++ Arrays, Looping through an Array
//       C++ CPP VC++ Change an Array elements value  Multidimensional Arrays
// =================================================================================

// =================================================================================
// TOPIC: C++  Operators
// =================================================================================
//
// NOTES : * C++ CPP OPERATORS
//         * Arithmetic operators
//         * Relational operators
//         * Increment/decrement operators
//         * Logical operators
//         * Sizeof, comma and arithmetic if operators
//         * Bitwise operators
//
// =================================================================================
//
// FILE-NAME : 004_cpp_operators.cpp
//
// FILES NEEDED TO RUN THIS PROGRAM
//           : N/A
//
// AUTHOR    : tinitiate.com / Venkata Bhattaram
//             (c) 2014
//
// =================================================================================

#include <iostream>

using namespace std;

int main ()
{
   // ~~~~~~~~~~~~~~~~~~
   // C++ CPP OPERATORS
   // ~~~~~~~~~~~~~~~~~~

   // ====================
   // Arithmetic operators
   // ====================

   int Ans = 0;
   int num1 = 10, num2 = 5;

   // ADDITION or + operator
   // ----------------------
   Ans = num1 + num2;
   cout << Ans << endl;  // OUTPUT: 15

   // SUBSTRACION or - operator
   // ----------------------
   Ans = num1 - num2;
   cout << Ans << endl;  // OUTPUT: 5

   // MULTIPLICATION or * operator
   // ----------------------
   Ans = num1 * num2;
   cout << Ans << endl;  // OUTPUT: 50

   // DIVISION or / operator
   // ----------------------
   Ans = num1 / num2;
   cout << Ans << endl;  // OUTPUT: 2


   // ===============================
   // Arithmetic assignment operators
   // ===============================
   int VarInt = 20;

   VarInt += 5; // This is Add 5 to VarInt, or "VarInt + 5" and assign back to VarInt
   cout << VarInt << endl;  // OUTPUT: 25

   // Similarly
   // VarInt -= 5; // This is Subtract 5 from VarInt,
                   // or "VarInt - 5" and assign back to VarInt

   // VarInt *= 5; // This is Multiply 5 with VarInt,
                   // or "VarInt * 5" and assign back to VarInt

   // VarInt /= 5; // This is Divide VarInt by 5,
                   // or "VarInt / 5" and assign back to VarInt

   // VarInt %= 5; // This is Modulus VarInt by 5,
                   // or "VarInt % 5" and assign back to VarInt


   // =================================
   // Increment and Decrement Operators
   // =================================

   // Pre-increment  : Increase by ONE before variable usage by
   // Post-increment : Increase by ONE after variable usage
   // Pre-decrement  : Decrease by ONE before variable usage by
   // Post-decrement : Decrease by ONE after variable usage

   int A = 7, B = 7;

   cout << A   << " " << B   << endl;  // OUTOUT: 7 7
   cout << ++A << " " << --B << endl;  // OUTOUT: 8 6  (Before Usage Values Changed)

   cout << A   << " " << B   << endl;  // OUTOUT: 8 6  (CURRENT VALUES)

   cout << A++ << " " << B-- << endl;  // OUTOUT: 8 6  (No Value Change Before Use)
   cout << A   << " " << B   << endl;  // OUTOUT: 9 5  (Values Changed After Usage)


   // ===========================================
   // Relational operators (Comparison Operators)
   // ===========================================
   int X = 10, Y = 20, Z = 10;

   // EQUALS Operator ==
   if ( X == Z )
   { cout << "'X' EQUALS TO 'Z'" << endl; }
   else { cout << "'X' NOT EQUALS TO 'Z'" << endl; }

   // NOT EQUALS Operator <>
   if ( X != Y )
   { cout << "'X' NOT EQUALS TO 'Y'" << endl; }
   else { cout << "'X' EQUALS TO 'Y'" << endl; }

   // LESS THAN
   if ( X < Y )     { cout << "'X' LESS THAN 'Y'" << endl; }
   // GREATER THAN
   else if (X > Y)  { cout << "'X' GREATER THAN 'Y'" << endl; }
   // EQUAL TO
   else if (X == Y) { cout << "'X' EQUAL TO 'Y'" << endl; }

   // >=  Greater than Equal To
   // <=  Greater than Equal To

   // =================
   // Logical operators
   // =================

   // OR Operator : ||
   int D = 10, E = 15;

   if (D == 10 || D == 15)
   {
      cout << "True " << endl;
   }

   // AND Operator : &&
   if (D == 10 && E == 15)
   {
      cout << "True " << endl;
   }

   // NOT Operator : !
   // Use this for Boolean Values or Relational operators
   if (!(D == 5))
   {
      cout << "True " << endl;
   }

   bool R = false;

   if (!R)
   {
      cout << "True " << endl;
   }

   // ----------------------------------------------------------------------------
   // Integer Return value as the "main() function has a "int" in front of it
   // mentioning that, this program returns an integer, hence using ZERO
   return 0;
}

// =================================================================================
// TAGS: CPP C++ VC++ Variables Datatypes C++ int unsigned signed int boolean bool
// CPP C++ VC++ Variables Datatypes char character
// =================================================================================

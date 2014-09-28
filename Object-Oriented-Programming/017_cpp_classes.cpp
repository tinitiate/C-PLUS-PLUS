// =================================================================================
// TOPIC: C++ CPP Object Oriented Programming Class
// =================================================================================
//
// NOTES : * C++ CPP Object Oriented Programming
//         * Class is a collection of FUNCTIONS and Variables
//         * Objects are instantiation of classes (reference of a class instance)
//           Class are used as objects, where a copy of the class
//         * Class creation and usage
//         * Class vs Struct
//
// =================================================================================
//
// FILE-NAME : 017_cpp_classes.cpp
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

// Create a Class
// A Class is a collection of Variables and Functions
class Calculator {

   // Create Member Variables
   int Number1;
   int Number2;

   // Create a Member Function
   int add(int num1, int num2) {

      return num1 + num2
   }

   // Create one more function
   int product(int num1, int num2) {

      return num1 * num2;
   }
};

// The starting point of this program
int main ()
{

   // Create an Instance of Class as an Object
   // Objects instances of a Class or a copy of a class
   Calculator objectCalc;


   // Access the Class Members, using object(dot)member name
   // Here members are class variables and functions

   // Assign a value to Number1, which is a member variable of the
   // class calculator
   objectCalc.Number1 = 10;

   // Assign a value to Number2, which is a member variable of the
   // class calculator
   objectCalc.Number2 = 30;


   // Access a member function "add" of the class calculator
   cout << objectCalc.add(objectCalc.Number1, objectCalc.Number2) << endl;


   // Access a member function "product" of the class calculator
   cout << objectCalc.product(objectCalc.Number1, objectCalc.Number2) << endl;


   // ----------------------------------------------------------------------------
   // Integer Return value as the "main() function has a "int" in front of it
   // mentioning that, this program returns an integer, hence using ZERO
   return 0;
}

// =================================================================================
// TAGS: CPP C++ VC++ Object Oriented Programming Class
// =================================================================================

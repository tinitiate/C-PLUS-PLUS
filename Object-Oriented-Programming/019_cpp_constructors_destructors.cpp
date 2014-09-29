// =================================================================================
// TOPIC: C++ CPP Object Oriented Programming Constructors and Destructors
// =================================================================================
//
// NOTES : * C++ CPP Object Oriented Programming
//         * Constructors:
//              - Is a Member function that is executed when an object of that
//                class is instantiated.
//              - Name of the Constructor must be named as same as the class name.
//
//         * Types of Constructor
//              - Default Constructor:
//                    This type of constructor does not accept any parameters.
//              - Parameterized Constructor:
//                    This type of constructor accepts input parameters/arguments
//              - Copy Constructor:
//                    This type of constructor initializes an object using values
//                    from another object passed to it as a parameter.
//
//         * Destructors:
//              - Destructor is a member function having same name as its class
//                but starts with a ~(tilde) sign, this function destroys objects
//                that are created.
//
// =================================================================================
//
// FILE-NAME : 019_cpp_constructors_destructors.cpp
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

// Create a Class named consdesDemo
class consdesDemo {

   public:
      // Create Public Variables
      int var1;
      int var2;
      // Declare Public Functions
      int add();
      // -- Default Constructor --
      // Declare and Implement the constructor, Simple default parameters
      consdesDemo() {
         cout << "Message: This is Default Constructor." << endl;
      }
      // -- Parameterized Constructor --
      // Declare and Implement the constructor, with parameters
      consdesDemo(int v1, int v2) {
         cout << "Message: This is Constructor with parameters." << endl;
         var1 = v1;
         var2 = v2;
      }
      // -- Copy Constructor --
      // Declare and Implement the constructor, the copy constructor
      consdesDemo(const consdesDemo& Obj) {
         cout << "Message: This is Copy Constructor." << endl;
         var1 = Obj.var1;
         var2 = Obj.var2;
      }

      // Destructor
      ~consdesDemo() {
      };

}; // End Class Code for  consdesDemo


// Implement the Declared functions in the "consdesDemo" Class
int consdesDemo::add() {

   return var1 + var2;

}

// The starting point of this program
int main ()
{
   // ========================================================
   //  Create a object from default Constructor "consdesDemo"
   // ========================================================

   // Create an Object of the class "consdesDemo"
   consdesDemo ObjDefconsdesDemo;

   // Assign Values to the  variables
   ObjDefconsdesDemo.var1 = 1;
   ObjDefconsdesDemo.var2 = 2;

   // Call the add() method of the class
   cout << ObjDefconsdesDemo.add() << endl;


   // ==============================================================
   //  Create a object from Parameterized Constructor "consdesDemo"
   // ==============================================================

   // Create an Object of the class "consdesDemo"
   consdesDemo ObjPrmconsdesDemo(1, 2);

   // Call the add() method of the class
   cout << ObjPrmconsdesDemo.add() << endl;


   // =====================================================
   //  Create a object from Copy Constructor "consdesDemo"
   // =====================================================

   // Create an Object of the class "consdesDemo"
   consdesDemo ObjCpyconsdesDemo(ObjPrmconsdesDemo);
   // use the parameters from the "ObjPrmconsdesDemo" Object

   // Call the add() method of the class
   cout << ObjCpyconsdesDemo.add() << endl;


   // ----------------------------------------------------------------------------
   // Integer Return value as the "main() function has a "int" in front of it
   // mentioning that, this program returns an integer, hence using ZERO
   return 0;
}

// =================================================================================
// TAGS: CPP C++ VC++ Object Oriented Programming Constructors and Destructors
// =================================================================================

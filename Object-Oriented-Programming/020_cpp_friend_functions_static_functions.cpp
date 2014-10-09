// =================================================================================
// TOPIC: C++ CPP Object Oriented Programming Friend Functions and Static Functions
// =================================================================================
//
// NOTES : * C++ CPP Object Oriented Programming
//         * Friend Functions
//             - Friend Functions are used to access private variables of a Class
//             - These are functions that do not belong to any class
//         * Static Functions
//             - Static functions only access data with a class scoped.
//             - They may be called without creating an object of the class.
//             - Static functions are useful in situations where we want all instances
//               of a class to behave similarly.
//
// =================================================================================
//
// FILE-NAME : 020_cpp_friend_functions_static_functions.cpp
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

// =============================================
// FRIEND FUNCIONS and STATIC FUNCTIONS EXAMPLE
// =============================================

// Create a Class with Private Variable
// and the friend function public declaration
class SecretClass {


   public:
      // ===========================================
      // Specify a FRIEND FUNCTION in Public domain
      // ===========================================
      friend void ReadSecretClassFunc(SecretClass objSecretClass);


      // =================
      // STATIC FUNCTION
      // =================
      static void StaticSecretClassFunc() {

         cout << "This is a Message from the Static Function" <<endl;
      }


      // =================================================
      // Parametrized Constructor to initialize the class
      // =================================================
      SecretClass(int passcd) {

         cout <<"CONSTRUCTOR: Setting Private Variable as " <<  passcd << endl;

         passcode = passcd;
         // passcode(passcd); // Another Syntax for Assignment
      }

   // ================
   // private members
   // ================
   private:
      int passcode;

};

// Create a Friend Function reading the class
// This is not a "SecretClass" member
void ReadSecretClassFunc(SecretClass objSecretClass) {

   // Extract the PRIVATE member "passcode" of the class "SecretClass"
   cout << "Private Variable Value from the FRIEND Function is: " << objSecretClass.passcode << endl;
}


// The starting point of this program
int main ()
{

   // Initiate the Class
   SecretClass Obj_SecretClass(10);

   // Call the CLASS Friend Function
   ReadSecretClassFunc(Obj_SecretClass);

   // Call the CLASS Static Function
   SecretClass::StaticSecretClassFunc();

   // ----------------------------------------------------------------------------
   // Integer Return value as the "main() function has a "int" in front of it
   // mentioning that, this program returns an integer, hence using ZERO
   return 0;
}

// =================================================================================
// TAGS: CPP C++ VC++ Object Oriented Programming Friend Function Static Function
// =================================================================================

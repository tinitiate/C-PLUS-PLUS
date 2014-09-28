// =================================================================================
// TOPIC: C++ CPP Object Oriented Programming Class Access Modifiers
// =================================================================================
//
// NOTES : * C++ CPP Object Oriented Programming
//         * Access Modifiers
//         * public: All variables declared under the public access modifier
//                 can be accessed from outside the class directly, without a
//                 get/set function calling them.
//
//         * private: All variables declared under the private access modifiers
//                 cannot be accessed from outside the class directly
//                 To access private variables a public getter/setter
//                 function is needed.
//
//         * protected: All variables declared under the protected access modifier
//                 work same as private member variables (cannot be accessed
//                 outside the class, but through public setters/getters)
//                 but the difference is they can be accessed from an inherited class
//
// =================================================================================
//
// FILE-NAME : 018_cpp_access_modifiers.cpp
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

// Create a Class named accessDemo
// The following Class is a collection of Public Private Protected
// Variables and Functions

class accessDemo {

   // PUBLIC Access Modifier:
   //    All variables declared under the public access modifier
   //    can be accessed from outside the class directly, without a
   //    get/set function calling them.
   public:

      // Public Variables
      string CountryName;
      string CountryPopulation;

      // Public Functions in public access modifier
      string getCountrySecrets(void);
      void setCountrySecrets(string CountrySecrets);
      string getCountryWealth(void);
      void setCountryWealth(string CountryWealth);


   // PRIVATE Access Modifier:
   //    All variables declared under the private access modifiers
   //    cannot be accessed from outside the class directly
   //    To access private variables a public gette/setter function is needed
   private:
      string CountrySecrets;


   // PROTECTED Access Modifier:
   //    All variables declared under the protected access modifier
   //    work same as private member variables (cannot be accessed
   //    outside the class, but through public setters/getters)
   //    but the difference is they can be accessed from an inherited class
   protected:
      string CountryWealth;

}; //  End of Class


// ==================================
// Declare all  the Member Functions
// ==================================

// Getter function return the Value of the private variable
// from outside of the class, by the class object, which makes a call to
// this function.
string accessDemo::getCountrySecrets(void) {

   return CountrySecrets;

}


// Setter Function, This sets the value of a variable of the Class
// from outside of the class, by the class object, which makes a call to
// this function.
void accessDemo::setCountrySecrets(string CtrySecrets) {

   CountrySecrets = CtrySecrets;

}


// Get the Value of the protected variable from outside of the class,
// by the class object, which makes a call to this function.
string accessDemo::getCountryWealth(void) {

   return CountryWealth;

}


// Setter Function, This sets the value of a variable of the Class
// from outside of the class, by the class object, which makes a call to
// this function.
void accessDemo::setCountryWealth(string CtryWealth) {

   CountryWealth = CtryWealth;

}


// Create another protected


// The starting point of this program
int main ()
{

   // ====================================
   // Working with PUBLIC Access Modifier
   // ====================================

   // Create an Object of the Class "accessDemo"
   accessDemo ObjectAccessDemo;


   // Access the Public Member Variable of the class "accessDemo"
   // set the values directly accessing the variables
   ObjectAccessDemo.CountryName       = "USA";
   ObjectAccessDemo.CountryPopulation = "300 Million";

   cout << "Public Variables: " << ObjectAccessDemo.CountryName << endl;
   cout << ObjectAccessDemo.CountryPopulation << endl;


   // =====================================
   // Working with PRIVATE Access Modifier
   // =====================================

   // Access the Private Member Variable of the class "accessDemo"
   // Assign a value to the Private Member "CountrySecrets"
   // using the public setter method "setCountrySecrets()"
   ObjectAccessDemo.setCountrySecrets("We Have Cool Stuff");

   // Print the value of the Private Member "CountrySecrets"
   // using the public setter method "getCountrySecrets()"
   cout << ObjectAccessDemo.getCountrySecrets() << endl;


   // Directly accessing a Private Variable will result in a compile error
   // Below line is commented, uncommenting this and running it will raise
   // a compile error.
   // ObjectAccessDemo.CountrySecrets = "Our Secret Stuff";


   // ----------------------------------------------------------------------------
   // Integer Return value as the "main() function has a "int" in front of it
   // mentioning that, this program returns an integer, hence using ZERO
   return 0;
}


// =================================================================================
// TAGS: CPP C++ VC++ Object Oriented Programming Class Access Modifiers
//       CPP C++ VC++ Class PRIVATE PUBLIC PROTECTED
// =================================================================================

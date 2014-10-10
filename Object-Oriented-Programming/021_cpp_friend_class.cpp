// =================================================================================
// TOPIC: C++ CPP Object Oriented Programming Friend Class
// =================================================================================
//
// NOTES : * C++ CPP Object Oriented Programming
//         * Friend Class
//             - When a Class has a forward declaration of a "Friend Class" the
//               friend class can access the member functions of the class.
//
// =================================================================================
//
// FILE-NAME : 021_cpp_friend_class.cpp
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

// Some Class with a friend class forward declaration
class OurClass
{
   // ======================================
	// Forward Declaration of a friend class
	// ======================================
	friend class OurFriendClass;

   private:
      int MyData = 99;  // Assign a value to the Private member

	public:
		void printMyData(void)
		{
			cout << MyData << endl;
		}

};

// ============================
// Friend Class Implementation
// ============================
class OurFriendClass
{
	public:
	   // Create a function that accepts the "OurClass" object class
	   // as the parameter and using that object we can access the private variable
	   // of that class from this* (OurFriendClass) class
		void GetOurClassDetails(OurClass inClass)
		{
		   // Call the inClass (Object of "OurClass" class) Method: "printMyData"
			inClass.printMyData();
		}
};


// The starting point of this program
int main ()
{

   // Create an object of the "OurClass"
   OurClass objOurClass;


   // Create an object of the "OurFriendClass"
   OurFriendClass objOurFriendClass;


   // Print the member variables of "OurClass"
   // using the object of its friend "OurFriendClass"
   objOurFriendClass.GetOurClassDetails(objOurClass);


   // ----------------------------------------------------------------------------
   // Integer Return value as the "main() function has a "int" in front of it
   // mentioning that, this program returns an integer, hence using ZERO
   return 0;
}

// =================================================================================
// TAGS: CPP C++ VC++ Object Oriented Programming Friend Class
// =================================================================================

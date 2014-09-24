// =================================================================================
// TOPIC: C++  STRUCT (Data Structure)
// =================================================================================
//
// NOTES : * C++ CPP DATA STRUCTURE
//         * Combine several data elements into a group called a structure
//         * Structs very useful whenever a lot of data needs to be grouped together
//         * It acts as a used defined datatype
//         * Passing a Struct as an function argument
//
// =================================================================================
//
// FILE-NAME : 015_cpp_data_structure.cpp
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


// Create a Struct
struct tinitiate_education {

   int    course_number;
   string programming_subject;
   string course_duration;

};


// Function to accept struct as a parameter
void printStruct(struct tinitiate_education param1)
{
   // Print values of a variable
   cout << param1.course_number       << endl;
   cout << param1.programming_subject << endl;
   cout << param1.course_duration     << endl;
}


// Function to accept pointer to structure as a parameter.
void printStructPointer(struct tinitiate_education *param_ptr)
{
   // Print values of a variable
   cout << param_ptr -> course_number       << endl;
   cout << param_ptr -> programming_subject << endl;
   cout << param_ptr -> course_duration     << endl;
}

//
int main ()
{

   // Declare a struct variables
   struct tinitiate_education course1;
   struct tinitiate_education course2;

   // Provide struct specification, define values
   course1.course_number        = 1;
   course1.programming_subject  = "CPP";
   course1.course_duration      = "60 Days";


   // Provide struct specification, define values
   course2.course_number        = 2;
   course2.programming_subject  = "Mysql";
   course2.course_duration      = "30 Days";


   // Print values of a variable
   cout << course1.course_number << endl;
   cout << course1.programming_subject << endl;
   cout << course1.course_duration << endl;


   // Call the function, which accepts struct as a parameter
   printStruct(course2);

   // Call the function, which accepts struct as a pointer parameter
   printStructPointer(&course1);


   // ----------------------------------------------------------------------------
   // Integer Return value as the "main() function has a "int" in front of it
   // mentioning that, this program returns an integer, hence using ZERO
   return 0;
}

// =================================================================================
// TAGS: CPP C++ VC++ struct data structure function accepting struct param
// function accepting struct param as pointer
// =================================================================================

/*
Goals: (A) Learn how to use array for storing objects
 (B) Learn how to use array for storing pointers
 (C) Compare the differences of these two methods
Requirements:
Follow the guidelines intertwined with the code to complete the works.
Write comments on the top of the program to answer these questions:

(1) Should we delete the data stored in studArr1? Why?
- -  The dynamically allocated array has to be deleted. we can to release the entire array at a time. It help to avoid a memory leak.

(2) Should we delete the data stored in studArr2? Why? When we delete the
pointers, do we actually release the memory which was allocated for (1) the
studArr2 array, (2) the pointer stored in the array, or (3) the student objects
pointed by the pointers?
- - We have to de-allocate (release) the dynamically allocated memory and reset studArr2 back to nullptr again.
Memory leak occur when new memory is allocated dynamically and never deallocated. It checks if the value of every array element is NULL. 
If it is not , the system knows that it linksto an integer box and hence deletes it.
*/


#include <iostream>

using namespace std;

struct Student
{
    int ID = 0;
    string name = "";
    long long phone = 0;
    string addr = "";
};


int main()
{
    //Data
    const int SIZE = 10;
    Student *studArr1 = nullptr;
    int i = 0;


    /// Check the size of the array
    cout << "The size of the studArr1: " << sizeof(studArr1) << endl;

    /// TO DO: Hard-code some data for two 
    /// Populate the 4 fields of studArr1[0] with the data: 12345, Amy, 9256776789,
    //"123 Main St, Livermore, CA, 94550"
    //new the entire array at once
    studArr1 = new Student[SIZE];

    studArr1[0].ID = 12345;
    studArr1[0].name = " Amy ";
    studArr1[0].phone = 9256776789;
    studArr1[0].addr = " 123 Main St, Livermore, CA, 94550 ";

    /// Populate the 4 fields of studArr1[3] with the data: 12666, Bill, 9256776000,
    //"29 Johnson Dr, Livermore, CA, 94550"
    studArr1[3].ID = 12666;
    studArr1[3].name = " Bill ";
    studArr1[3].phone = 9256776000;
    studArr1[3].addr = "29 Johnson Dr, Livermore, CA, 94550";

    cout << "Display the data in studArr1" << endl;
    /// TO DO: Use a for loop to display the data of studArr1[0] and studArr1[3]
    /// Use one line to display the information of a person
    for(i = 0; i < SIZE; i++)
    {
        if(studArr1[i].ID)
            cout << studArr1[i].ID << studArr1[i].name << studArr1[i].phone << studArr1[i].addr << endl;
    }

    //release data studArr1
    delete [] studArr1;

    /// TO DO: Declare a student pointer array (Type 2 in the document) here. How
    //can we initialize the pointer with nullptr? -Yes
    Student *studArr2[SIZE];

    for(i = 0; i < SIZE; i++)
    {
        studArr2[i] = nullptr;
    }

    /// Check the size of the 
    cout << endl;
    cout << "The size of the studArr2: " << sizeof(studArr2) << endl;

    /// TO DO: Hard-code some data for two students
    /// Populate the 4 fields of studArr2[0] with the data: 12345, Amy, 9256776789,
    //123 Main St, Livermore, CA, 94550"
    studArr2[0] = new Student;
    studArr2[0]->ID = 12345;
    studArr2[0]->name = " Amy ";
    studArr2[0]->phone = 9256776789;
    studArr2[0]->addr = " 123 Main St, Livermore, CA, 94550 ";


    /// Populate the 4 fields of studArr2[3] with the data: 12666, Bill, 9256776000,
   // 29 Johnson Dr, Livermore, CA, 94550"
    studArr2[3] = new Student;
    studArr2[3]->ID = 12666;
    studArr2[3]->name = " Bill ";
    studArr2[3]->phone = 9256776000;
    studArr2[3]->addr = " 29 Johnson Dr, Livermore, CA, 94550";

    
    /// TO DO: Use a for loop to display the data of studArr2[0] and studArr2[3]
    /// Use one line to display the information of a person
    cout << "Display the data in studArr2" << endl;
    for (i = 0; i < SIZE; i++)
    {
        if(studArr2[i] != nullptr)
            cout << studArr2[i]->ID << studArr2[i]->name << studArr2[i]->phone << studArr2[i]->addr << endl; 
    }

    /// TO DO: Release data in studArr2, if needed. Answer the #2 question above.
    for (i = 0; i < SIZE; i++)
    {
        if(studArr2[i] != nullptr)
            delete studArr2[i];
    }

    return 0;
}    

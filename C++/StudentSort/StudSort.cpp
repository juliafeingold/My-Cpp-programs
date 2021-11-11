/*
Goal: The program intends to load the student information and store them in the array.
The records are sorted by the sortStud() function and the GPAs are reset to 0.0 by
resetGPA() function.

The code demonstrates an incorrect way of storing objects in the array. The array is able
to store the pointers of the objects. However, if we use debugger to program, we can see
that in the second iteration of the while loop, the first object is lost. In the third
iteration, the first two objects are lost. And so on.

Could you point out why the objects are not correctly stored in the array. How can the
problem be fixed.

*/
#include <string>
#include <iomanip>
#include <fstream>
#include <iostream>

using namespace std;

struct studentInfo
{
    int ID;
    string firstName;
    string lastName;
    double GPA;
};

const int SIZE = 100;
void display(studentInfo *arr[]);
void resetGPA(/* parameters */);
void sortStud(/* parameters */);

int main()
{
    int counter = 0;
    int ID;
    string firstName;
    string lastName;
    double GPA;

    /// creating array for dynamically allocated studentInfo objects.
    studentInfo *arrStud[SIZE];
    for(int i = 0; i < SIZE; i++)
    {
        arrStud[i]= nullptr;
    }

    ifstream inputFile;

    inputFile.open("StudentInfo.txt");
    if (inputFile.is_open())
    {

        while(!inputFile.eof())
        {
            inputFile >> ID >> firstName >> lastName >> GPA;
            arrStud[counter] = new studentInfo;

            arrStud[counter]->ID = ID;
            arrStud[counter]->firstName = firstName;
            arrStud[counter]->lastName = lastName;
            arrStud[counter]->GPA = GPA;

            //arrStud[counter] = &si; //arr linked to the object

            //cout << "ID " << arrStud[counter].ID << endl;
            counter++;
        }

        for (int i = 0; i < counter; i++)
        {

        }
        {
            cout << arrStud[i]->ID;
            cout << " " << arrStud[i]->firstName;
            cout << " " << arrStud[i]->lastName;
            cout << " " << arrStud[i]->GPA << endl;
        }
        inputFile.close();
    }
    else
        cout << "File cannot be opened.";
    inputFile.close();


    display(arrStud);
    cout << endl;
    cout << "Sorting students by ID..." << endl;
    cout << endl;
    sortStud();
    display();
    cout << endl;
    cout << "Resetting GPA data..." << endl;
    cout << endl;
    resetGPA();
    display();

    release the memory!!!!

    /// How should the pointers in the array be deleted?
}

void display(studentInfo *arr[])
{

    for(int i =0; i < SIZE; i++)
    {
        if (arr[i] != nullptr)
        {
            cout << fixed << setprecision(2) << arr[i];
        }
    }
}

void resetGPA()
{

}

void sortStud()
{

}


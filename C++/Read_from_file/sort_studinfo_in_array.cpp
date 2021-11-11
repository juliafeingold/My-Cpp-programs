#include <string>
#include <iomanip>
#include <fstream>
#include <iostream>

using namespace std;

//Programmer defined data types
struct studentInfo
{
    int ID;
    string firstName;
    string lastName;
    double GPA;
};

//Programmer defined functions
void display(studentInfo **arr, int counter);
void resetGPA(studentInfo **stud, int counter);
void sortStud(studentInfo **arr, int counter);

//main program
int main()
{
    //Data
    const int SIZE = 100;
    int counter = 0;
    int ID;
    string firstName;
    string lastName;
    double GPA;
    int i = 0;
    studentInfo *arrStud[SIZE];

    //creating array for dynamically allocated studentInfo objects. 
    for(i = 0; i < SIZE; i++)
    {
        arrStud[i] = nullptr;
    }

    ifstream inputFile;

    //open the file and get the data from the file
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
            counter++;
        }

        inputFile.close();
    }
    else
        cout << "File cannot be opened.";
    inputFile.close();

    //call the function to displays the student information
    display(arrStud, counter);
    cout << endl;

    //call the function to displays the student information sorted
    cout << "Sorting students by ID..." << endl;
    cout << endl;
    sortStud(arrStud, counter);
    display(arrStud, counter);
    cout << endl;

    //call the function to reset GPA
    cout << "Resetting GPA data..." << endl;
    cout << endl;
    resetGPA(arrStud, counter);
    display(arrStud, counter);

    //release the memory
    for(i = 0; i < counter; i++)
    {
        if(arrStud[i] != nullptr)
            delete arrStud[i];
    }
}

//function to displays the student information in four columns
void display(studentInfo **arr, int counter)
{
    //Data
    int i;

    for (i = 0; i < counter; i++)
    {
        cout << arr[i]->ID << " " << arr[i]->firstName << " " << arr[i]->lastName << " " << fixed << setprecision(1) << arr[i]->GPA << endl;
    }
    cout << endl;
}

//function to resets the GPAs of all students to 0.0.
void resetGPA(studentInfo **stud, int counter)
{
    //Data
    double t = 0.0;
    int i;

    for(i = 0; i < counter; i++)
    {
        stud[i]->GPA = t;
    }
}

///Sorts the student records in the array in the sequence of ascending student IDs. 
void sortStud(studentInfo **arr, int counter)
{
    //Data
    studentInfo *temp;
    int i;
    int j;

    for(i = 0; i < counter; i++)
    {
        for(j = i + 1; j < counter; j++)
        {
            if(arr[i]->ID > arr[j]->ID)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    } 
}



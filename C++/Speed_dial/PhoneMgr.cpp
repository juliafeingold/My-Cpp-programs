#include "PhoneMgr.h"
#include <iostream>  // for using cin and cout
#include <cstdlib>   // for using atoi()
#include <ctime> //for random 
#include <fstream>   // for processing input files

using namespace std;
PhoneMgr::PhoneMgr()
{
    fstream inputFile;
    long long number;
    string firstName, lastName, temp;
    string fileName = "phonenumbers.txt";
    inputFile.open(fileName);
    int i = 0;
    


/// The array is already initialized with nullptr.
/// TO DO:
/// Populate the array by "newing" phone objects and save their pointers
/// in the array, and get the total record count of the input file.
    while (!inputFile.eof()){
        inputFile >> number;
        inputFile >> firstName;
        inputFile >> lastName;
        arrPhone[recordCount] = new Phone(firstName, lastName, number);
        recordCount++;
    }

/// Close input file to avoid memory leak.
inputFile.close();

}

PhoneMgr::~PhoneMgr()
{
    /// TO DO:
    /// Delete all pointers in the array to avoid memory leak.
    for(int i = 0; i < SIZE; i++)
    {
        if(arrPhone[i]!=nullptr)
            delete arrPhone[i];
    }
}

void PhoneMgr::Display()
{
    /// TO DO:
    /// Display all phone numbers, first names and last names in three columns.
    for(int i = 0; i < recordCount; i++)
    {
        cout << arrPhone[i]->getPhoneNumber() << "  " << arrPhone[i]->getFirstName() << " " << arrPhone[i]->getLastName() << endl;
    }
}

void PhoneMgr::Random()
{
    /// TO DO:
    /// Randomly display a phone number, its corresponding first name and last
    /// name in three columns
    srand(time(0));
    int randNum = 0;

    randNum = rand() % recordCount;

    cout <<  arrPhone[randNum]->getPhoneNumber() << "  " << arrPhone[randNum]->getFirstName() << "  " << arrPhone[randNum]->getLastName() << endl;
    
}

void PhoneMgr::Dial(int i)
{
    /// TO DO:
    /// Get a number i from the user and display the phone number at the ith
    /// position, its corresponding first name and last name in three columns
    /// To the user, the first position is 1, not 0.
    /// You may have to add a parameter to the function.
    i--;
    cout <<  arrPhone[i]->getPhoneNumber() << "  " << arrPhone[i]->getFirstName() << "  " << arrPhone[i]->getLastName() << endl;
}

int PhoneMgr::getRecordCount() const
{
    return recordCount;
}
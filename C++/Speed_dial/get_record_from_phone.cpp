/// How does the use of the Manager class avoid memory leak?
/// Write your answer here.
//We call the destructor before the object is destructed. 
//Inside the destructor we delete all pointers in the array to avoid memory leak.
//We also need to close input file to avoid memory leak.


#include <iostream>
#include "PhoneMgr.h"
#include <stdlib.h>   /// For using atoi()
#include <sstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    string input;
    PhoneMgr pm;
    int recordCount = 0;

    /// TO DO: Get the record count of the phone system
    do
    {

        cout << "Enter D for listing, R for random choice, Q for quit, or an index number." << endl;
        cin >> input;
        if (input == "D" || input == "d")
            pm.Display();
        else if (input == "R" || input == "r")
            pm.Random();
        else if (input == "Q" || input == "q")
        {}
         
        else
        {
            /// TO DO:  Convert the string to an int and check if is in the range.
            /// If it is, call Dial() function of PhoneMgr class.
            /// You may have to pass the converted int to the function.
            int i;

            i = stoi(input);
            if(i >= 1 && i <= 15)
            {
                pm.Dial(i);
            }
            else
            {
                cout << "Out of range" << endl;
            }
        }
    }while(input != "Q" && input != "q");

    return 0;
}
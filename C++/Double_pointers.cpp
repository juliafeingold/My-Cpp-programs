#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>

using namespace std;

//Global variable
const int SIZE = 10;

//function to populate the array with 10 random numbers
int ** getRandomInt()
{
    //Data
    int **returnPtr = new int*[SIZE];
    int i;
    srand(time(NULL));

    //generate 10random numbers
    for (i = 0; i < SIZE; i++)
    {
        returnPtr[i] = new int;
        *returnPtr[i] = rand() % 10;
    }

    return returnPtr;

}

//function to display the 10 random numbers in the array
void displayInt(int ** pp)
{

    for(int i = 0; i < SIZE; i++)
    {
        if(pp[i] != NULL)
            cout << *pp[i] << endl;
    }

}

//function to release dynamically allocated memory
void deleteInt(int ** pp)
{
    for(int i = 0; i < SIZE; i++)
    {
        if(pp[i] != nullptr)
            delete pp[i];
    }
    delepe []pp;
}

int main()
{

    int ** pp = getRandomInt();
    displayInt(pp);
    deleteInt(pp);

    return 0;

}

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>
#include <sstream>
#include <string>

using namespace std;
#include "Rectangle.h"

const int SIZE = 21;

void display(Rectangle *[]);

int main()
{
    //Data
    srand(time(0));
    int i;
    Rectangle * arrRect[SIZE];

    //initialized the array to NULL
    for(i = 0; i < SIZE; i++)
    {
        arrRect[i] = NULL;
    }

    //memory block located
    for (i=0; i < SIZE; i++)
    {
         arrRect[i] = new Rectangle((1 + (rand() % 7)), (1 + (rand() % 7))); //construct the object
         arrRect[i]->setSerialNumber("R000" + to_string(i + 1));
    }

    display(arrRect);//we don't need & because arrRect already a pointer which has an address


    delete arrRect[0];

    return 0;
}

void display(Rectangle * arr[])
{
    //Data
    int count = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] -> getHeight() == arr[i] -> getWidth())
        {
            cout << endl;
            cout << "Square" << endl;
            cout << endl;
            cout << "==================" << endl;
            cout << "Label    Width    Height" << endl;

        }

        else if (arr[i] -> getHeight() < arr[i] -> getWidth())
        {
            cout << endl;
            cout << "Horizontal Rectangle" << endl;
            cout << endl;
            cout << "==================" << endl;
            cout << "Label    Width    Height" << endl;
        }

        else
        {
            cout << endl;
            cout << "Vertical Rectangle" << endl;
            cout << endl;
            cout << "==================" << endl;
            cout << "Label    Width    Height" << endl;
        }
        cout <<  arr[i]-> getSerialNumber() << "         " << arr[i]->getWidth() << "         " << arr[i]-> getHeight() <<  endl;
        cout << endl;
    }

}


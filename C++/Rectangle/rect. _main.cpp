/*Question#1: (5%) Why “ifndef RECTANGLE_H”, “define RECTANGLE_H” and “endif” have to be added to the .h file?   
    - #ifndef  #define  #endif preprocessor definitions allow it to be used multiple times. The "#" symbol indicated that 
    these are preprocessor directives, meaning that they affect the program before it is compiled.  It tells the compiler to ignore what
    follows if it has already seen this stuff before. This says if “RECTANGLE_H” is not defined, then define it. 
    "ifndef RECTANGLE_H" is an include guard that checks to see if the constant RECTANGLE_H has been defined yet. If it has not yet been defined, 
    the preprocessor goes to the next line, defining the term RECTANGLE_H and proceeds to include the rest of the .h file in the
    program. If the program then tries to include the rectangle.h file again, the preprocessor will see that
    RECTANGLE_H has already been defined and thus, will skip to the "#endif" statement; this prevents the .h file from being included multiple times.


Question#2:(5%) Why the size of the array, i.e. 21, must be a const?   
    -The size of the array must be a const value because it is a static array. Since the computer needs to know
    how much memory to allocate for the array when compiling the program, we cannot declare the array to be of
    variable size. While the pointers stored in the array point to objects that are dynamically allocated, the
    array itself is created in the stack instead of the heap. In order to use non const values for the size of
    the array, the entire array would have to be dynamically allocated.


Question#3: (10%) Why we prefer to have pointers to Rectangle, instead of Rectangle objects, in the array?
    1) An array of pointers enables the use of runtime Polymorphism. Only 
    the use of array pointers can enable us to conduct runtime Polymorphism. 
    2) Use less memory. An array of pointers is generally smaller than an array of objects and thus will be more efficient to pass
    and manipulate; each object will be equal in size to the sum of the size of each attribute while a pointer
    will be limited to the size of the pointer. 
    */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>
#include <iomanip>
#include <sstream>
#include <string>
#include "Rectangle.h"

using namespace std;

const int SIZE = 21;

void display(Rectangle * arr[]);

int Rectangle::squareCount = 0;
int Rectangle::verticalCount = 0;
int Rectangle::horizontalCount = 0;

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
        //construct the object
        arrRect[i] = new Rectangle((1 + (rand() % 7)), (1 + (rand() % 7))); 

        if(i < 9)
        { 
            arrRect[i]->setSerialNumber("R000" + to_string(i + 1));
        }
        else
            arrRect[i]->setSerialNumber("R00" + to_string(i + 1)); 
    }

    display(arrRect);

    //delete the pointers
    for (i = 0; i < SIZE; i++)
        delete arrRect[i];

    return 0;
}

void display(Rectangle * arr[])
{

    // Display All Squares
    cout << endl;
    cout << "Square" << endl;
    cout << endl;
    cout << "==================" << endl;
    cout << "Label    Width    Height" << endl;
    
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] -> getHeight() == arr[i] -> getWidth())
        {
            cout <<  arr[i]-> getSerialNumber() << "        " << arr[i]->getWidth() << "         " << arr[i]-> getHeight() <<  endl;
        }
    }
    //output total squares
    cout << "========================" << endl;
    cout << "Total" << setw(19) << Rectangle::squareCount << endl;

    // Display all Horizontal Rectangles
    cout << endl;
    cout << "Horizontal Rectangle" << endl;
    cout << endl;
    cout << "==================" << endl;
    cout << "Label    Width    Height" << endl;

    for(int i = 0; i < SIZE; i++)
    {
        
        if (arr[i] -> getHeight() < arr[i] -> getWidth())
        {
            cout <<  arr[i]-> getSerialNumber() << "        " << arr[i]->getWidth() << "         " << arr[i]-> getHeight() <<  endl;
        }
    }
    //output total horizontal
    cout << "========================" << endl;
    cout << "Total" << setw(19) << Rectangle::horizontalCount << endl;


    // Display all Horizontal Rectangles
    cout << endl;
    cout << "Vertical Rectangle" << endl;
    cout << endl;
    cout << "==================" << endl;
    cout << "Label    Width    Height" << endl;

    for(int i = 0; i < SIZE; i++)
    {
        if (arr[i] -> getHeight() > arr[i] -> getWidth())
        {
            cout <<  arr[i]-> getSerialNumber() << "        " << arr[i]->getWidth() << "         " << arr[i]-> getHeight() <<  endl;
        }
    }
    //output total vertical
    cout << "=========================" << endl;
    cout << "Total" << setw(19) << Rectangle::verticalCount << endl;
}


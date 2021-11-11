//Objective:  This program simulates a car odometer
//Name: Julia Feingold
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iomanip>
#include <iostream>
using namespace std;

//Programmer defined data types
//NONE

//Special compiler dependent definitions
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

//global constants/variables
//NONE

//Programmer defined functions
//NONE

//main program
int main()
{ 
  //Data
  int hundredThousands; //hundreds of thousands of miles  in the car odometer
  int tenThousands; //ten of thousands of miles  in the car odometer
  int thousands; //thousands of miles  in the car odometer
  int hundreds; //hundreds of miles in the car odometer
  int tens; //tens of miles  in the car odometer
  int ones; //ones of miles  in the car odometer
  int tenths; //tenths of miles  in the car odometer

  // output my name and objective and program information
  cout << "Objective: This program simulates a car odometer.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  
 

  //odometer simulation
  for (hundredThousands = 0; hundredThousands < 10; hundredThousands++)
  { 
    for (tenThousands = 0; tenThousands < 10; tenThousands++)
    {
      for (thousands = 0; thousands < 10; thousands++)
      {
        for (hundreds = 0; hundreds < 10; hundreds++)
        {  
          for (tens = 0; tens < 10; tens++)
          {
            for (ones = 0; ones < 10; ones++)
            {
              for (tenths = 0; tenths < 10; tenths++)
              {
                //output digital odometer with 1 digit
                cout << setw(1) << hundredThousands;
                cout << setw(1) << tenThousands;
                cout << setw(1) << thousands;
                cout << setw(1) << hundreds;
                cout << setw(1) << tens;
                cout << setw(1) << ones << ".";
                cout << setw(1) << tenths;
                cout.flush();

                ////pause for 1 second depending on operating system
                #ifdef _WIN32
                Sleep(1000); //one thousand milliseconds
                #else
                sleep(1); //one second
                #endif
                ////return to beginning of the line
                cout << '\r'; //carriage return 
              }// for tenths
            }//for ones
          }//for tens
        }//for hundreds
      }//for thousands
    }//for tenThousands
  }//for hundredThousands
 
}//main
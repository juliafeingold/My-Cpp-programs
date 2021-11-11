//Objective:  calculate how far away a boat can see a lighthouse at sea

//Name: Julia Feingold
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iomanip>
#include <iostream>
using namespace std;
#include <cmath>

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
//NONE

//main program
int main()
{
  //Data
  int height = 100; //a height of the lighthouse in feet
  double distance = 0.0;

  // output my name and objective and program information
  cout << "Objective: Calculate how far away a boat can see a lighthouse at sea.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //calculate the distance
  distance = sqrt(0.8 * double(height)); //measured in miles, formatted to 0 decimal digits rounded up

  //output the formatted results
  cout.setf(ios::fixed);  //formatted: 0 decimal digits rounded up
  cout << setprecision(0);
  cout << "A " << height << " foot tall lighthouse can be seen from " << distance << " miles away" << endl;



}//main
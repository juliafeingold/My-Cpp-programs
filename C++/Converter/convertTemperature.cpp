//Objective: convert temperature
//Name: Julia Feingold
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
using namespace std;

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
  double c; //degrees Celsius
  double f; //degrees Fahrenheit

  // introduction
  cout << "Objective: This program will serve as a template for all programs\n written in this course.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  
  //ask uder to enter Fahrenheit
  cout << " Enter the temperature in degrees Fahrenheit: ";
  cin >> f;

  //convert temperature
  c = 5.0 * (f - 32.0) / 9.0;

  //output results
  cout << " That's " << c << " degrees Celsius! " << endl;

}//main
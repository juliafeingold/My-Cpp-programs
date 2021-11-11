//Objective:  convert from Celsius to Fahrenheit
//Name: Julia Feingold
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iomanip>
#include <iostream>
#include <string>
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
  //code block to read a double value from the keyboard
  double Celsius; //temperature in Celsius 
  cout << "What's the temperature in Celsius? "; //prompt the user to enter a temperature in degrees Celsius, allowing any number of decimal digits 
  cin >> Celsius;
  cin.ignore(1000, 10);

  // output my name and objective and program information
  cout << "Objective: Convert from Celsius to Fahrenheit.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //convert from Celsius to Fahrenheit
  double Fahrenheit = (Celsius * 9.0) / 5.0 + 32;

  //output the input value unformatted 
  cout << "What's the temperature in Celsius? " << endl;
  cout << Celsius << " Celsius ";

  //output formatted result, set to 1 digits after the decimal
  cout.setf(ios::fixed|ios::showpoint); 
  cout << setprecision (1); //applies until set to something else
  cout << "equals " << Fahrenheit << " Fahrenheit" << endl;

}//main
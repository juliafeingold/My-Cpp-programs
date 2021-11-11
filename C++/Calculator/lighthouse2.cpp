//Objective:  calculate how far away a boat can see a lighthouse at sea

//Name: Julia Feingold
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
#include <iomanip>
using namespace std;
#include <cmath>
#include <string>

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
  //Prompt the user to enter the height of the lighthouse
  double height;  
  cout << "What's the lighthouse height in feet?" << endl; //in feet, with any number of decimal digits 
  cin >> height;
  cin.ignore(1000, 10);

  //calculate the distance in miles
  double distance = (sqrt(0.8 * height));


  // output my name and objective and program information
  cout << "Objective: Calculate how far away a boat can see a lighthouse at sea.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //output the input value of the height, without formatting
  cout << "A " << height << " foot tall lighthouse can be seen from ";

  //output the result with formatting for 0 decimal digits 
  cout.setf(ios::fixed);
  cout << setprecision(0);
  cout << distance << " miles away" << endl;
}//main
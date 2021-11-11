//Objective:  calculate area
//Name: Julia Feingold
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
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
  double r;  
  double area;  
  double pi = 4 * atan(1.0); // 4 times the angle whose tangent is 1

  // introduction
  cout << "Objective: This program will serve as a template for all programs\n written in this course.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //ask user to enter a circle's radius  
  cout << "Enter the radius of a circle: ";  
  cin >> r;  

  //count area
  area = pi * r * r;

  //output results
  cout << " The area is " << area << endl;

}//main
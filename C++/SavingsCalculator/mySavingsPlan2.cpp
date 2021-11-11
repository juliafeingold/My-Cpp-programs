//Objective:  my personal savings plan
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
  double D = 100; //amount of deposit I will add to my savings account every month in $
  double rate = 3; //annual interest rate in %
  int years = 40;  //how many more years I have until I retire in years
  double s = 0; //my personal savings


  // output my name and objective and program information
  cout << "Objective: My personal savings plan.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  
    //calculate the monthly interest rate
  double r = rate / (100 * 12);

  //calculate the period in months
  int T = years * 12;  

  //calculate my personal savings
  s = D * ((pow(1 + r, T) - 1) / r);

   //output  unformatted results
  cout << "In " << years << " years "; 
  cout << "at " << rate << "%";  
  cout << " $" << D << " deposited per month";  

  //set to 2 digits after the decimal
  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(2);

  //output  formatted results
  cout << " will grow to $" << s << "." << endl; 

}//main

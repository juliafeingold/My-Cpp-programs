//Objective:  Calculate the monthly payment on borrowed amount of money to be paid back over 30 years. 
//Name: Julia Feingold
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
#include <iomanip>
#include <string>
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
  int years = 30;

  // output my name and objective and program information
  cout << "Objective: Calculate the monthly payment on borrowed amount of money to be paid back over 30 years..\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  
  //Prompt the user to enter the dollar amount borrowed as a whole number 
  int p;
  cout << "What is the ammount borrowed?" << endl;
  cin >> p;
  cin.ignore(1000, 10);

  //Prompt the user to enter the annual percent interest rate, with any number of decimal digits 
  double r;
  cout << "What is the annual interest rate?" << endl;
  cin >> r;
  cin.ignore(1000, 10);

  //calculate the monthly interest rate
  r = r / (100 * 12);

  //calculate the payback period in months
  int n = years * 12;

  //calculate my personal savings
  double s = (p * (pow(1 + r, n)) * r) / ((pow(1 + r, n)) -1);

  //output an echo of the input amount borrowed,unformatted
  cout << "Amount borrowed = $" << p << endl;

  //calculate annual interest rate
  r = (r * 100) * 12;

  //output an echo of the input the annual percent interest rate (without formatting) and the payback period (in years)
  cout << "Annual interest rate = " << r << "%" << endl;
  cout << "Payback period = " << years << " Years" << endl; 

  //formatting output
  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(2);

  //output the calculated monthly payment, formatted to show two decimal places 
  cout << "Monthly payment = $" << s << endl;

}//main
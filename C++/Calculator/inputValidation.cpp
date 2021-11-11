//Objective:  Calculate the monthly payment on borrowed amount of money to be paid back over 30 years. 
//Name: Julia Feingold
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iomanip>
#include <iostream>
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
  int p = 270000;  //amount borrowed 
  double rate = 5.125;  //annual interest rate
  int years = 30;  //payback period in years
  double s = 0;  //total monthly payment
  double r;  //the monthly interest rate
  int n;  //the payback period in months
  string password; // input password which user will enter
  string realPassword = "hello"; // real password to match

  
  // output my name and objective and program information
  cout << "Objective: Calculate the monthly payment on borrowed amount of money to be paid.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  cout << "Enter your password: ";
  getline(cin, password);

  while (password != realPassword)
  {
    cout << "Enter your password: ";
    getline(cin, password);
  } //while

  //calculate the monthly interest rate
  r = rate / (100 * 12);

  //calculate the payback period in months
  n = years * 12;  //the number of monthly payments in the payback period

  //calculate monthly payment
  s = (p * (pow(1 + r, n)) * r) / ((pow(1 + r, n)) -1);
  
  //echoing input values, unformatted
  cout << "Amount borrowed = $" << p << endl;
  cout << "Annual interest rate = " << rate << "%" << endl;
  cout << "Payback period = " << years << " Years" << endl; 

  //formatting output
  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(2);
  cout << "Monthly payment = $" << s << endl;

}//main

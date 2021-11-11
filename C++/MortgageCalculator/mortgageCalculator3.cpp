//Objective:  Calculate the monthly payment on borrowed amount of money to be paid back over some period of years. 
//Name: Julia Feingold
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <fstream> //file IO
#include <iomanip> //formatting
#include <iostream>//console IO
using namespace std;
#include <cmath>


//Programmer defined data types
struct Mortgage
{
  int p;// amount borrowed 
  float r;// monthly interest rate
  int n;//payback period in month
}; //Mortgage

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string obj); //program introduction
void inputValue(Mortgage* r);//input information from the file mort.txt
void getInfo

//main program
int main()
{
  //Data
  string objective = "Calculate the monthly payment on borrowed amount of money to be paid back over some period of years. ";
  //double s = 0;  //total monthly payment



  //calculate monthly payment
  //s = (p * (pow(1 + r, n)) * r) / ((pow(1 + r, n)) -1);

  
  //echoing input values, unformatted
  //cout << "Amount borrowed = $" << p << endl;
  //cout << "Annual interest rate = " << rate << "%" << endl;
  //cout << "Payback period = " << years << " Years" << endl; 

  //formatting output
  //cout.setf(ios::fixed|ios::showpoint);
  //cout << setprecision(2);
  //cout << "Monthly payment = $" << s << endl;

}//main


//program introduction
void introduction(string obj)
{
  //Data
  //obj = the program objective (text)

  // output my name and objective and program information
  cout << "Objective: This program "; 
  cout << obj << endl;
  cout << "Programmer: Teacher\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
}//introduction

//input information from the file mort.txt
void inputValue(Mortgage* r)
{
  //Data
  //r is the table of information to calculate the monthly payment
  ifstream fin;//represents the input file mort.txt
  int rNum = 0;//record number
  
  //input information to calculate the monthly payment
  fin.open("mort.txt");
  if (!fin.good()) throw "I/O error";
  while (fin.good())
  {
    fin.ignore(1000, 10);
    fin >> r[rNum].n;
    fin.ignore(1000, 10);
    rNum = rNum + 1;
  }//while

  cout << "DEBUG!!!!!!!!!!!!" << r[rNum].n; 

}//inputValue





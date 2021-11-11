//Objective:  Calculate the average of the numbers which user will input
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
//NONE

//global constants/variables
//NONE

//Programmer defined functions
//get userinput
double calAverage(int a, int b, int c) //the same data type as response
{
  //data
  double average = 0.0;//average of value a and b and c
  //a is first number from main
  //b is second number from main
  //c is third number from main

  //calculate average
  average = (a + b + c) / 3.0;
  return average;
}//calAverage

//main program
int main()
{
  //Data
  int n1;// first number
  int n2;//second number
  int n3;//third number
  double avg;//average n1 and n2 and n3



  // output my name and objective and program information
  cout << "Objective: Calculate the average of the numbers which user will input.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  
  //input user's numbers
  cout << "Enter the first whole number: ";
  cin >> n1;
  cin.ignore(1000, 10);
  cout << "Enter the first whole number: ";
  cin >> n2;
  cin.ignore(1000, 10);
  cout << "Enter the first whole number: ";
  cin >> n3;
  cin.ignore(1000, 10);

  //calculate average n1 and n2 and n3
  avg = calAverage(n1, n2, n3);

  //output result
  cout << fixed << setprecision(2);
  cout << "The average of " << n1 << " and " << n2 << " and " << n3 << " is " << avg << endl << endl; 
}//main
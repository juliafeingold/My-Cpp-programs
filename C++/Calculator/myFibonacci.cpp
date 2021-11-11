//Objective: calculate a value in the "Fibonacci number" series. This series is: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,.., where 0 is the zeroth number in the series, 1 is the first, 1 is the second, and so on  
//Name: Julia Feingold
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
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
void introduction(string obj); //program introduction
int fibonacci(int x);// calculate fibonacci number

//main program
int main()
{
  //Data
  string objective = "calculate a value in the Fibonacci number series. This series is: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,.., where 0 is the zeroth number in the series, 1 is the first, 1 is the second, and so on.\n";
  int n;//the number which user will enter
  int i;//loop index 

  //program introduction
  introduction(objective);

  //output prompt to ask user to enter the number
  cout << "Enter an index [0 or greater]: ";
  cin >> n;
  
  //output fibonacci sequence
  for(i = 0; i < n; i++)
  { 
    cout << fibonacci(i) << " ";
  }//for
  cout << endl;
 
  //output calculated fibonacci of the user number 
  cout << "The Fibonacci number at index " << n << " is " << fibonacci(n) << endl;

}//main

//program introduction
void introduction(string obj)
{
  //Data
  //obj = the program objective (text)

  // output my name and objective and program information
  cout << "Objective: This program "; 
  cout << obj << endl;
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
}//introduction

//calculate fibonacci of the user number
int fibonacci(int x)
{ 
  //x is a number which user will pick
  if (x == 0 || x == 1)
    return x;
  else
  {
    return(fibonacci(x - 1) + fibonacci (x - 2));
  }//else

}//fibonacci
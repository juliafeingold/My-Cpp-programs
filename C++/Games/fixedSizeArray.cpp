//Objective:  Prompt the user to input 4 numbers between 0 and 100, and calculate the average of those 4 numbers, and how many of those 4 numbers are above the average.
//Name: Teacher
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
void introduction(string obj); //program introduction

//main program
int main()
{
  //Data
  string objective = "You will be prompted for 4 numbers to get the average and how many of those numbers are above the average.";
  int Numbers[4];//stores 4 input values from the user 
  double average = 0.0; //calculated average of 4 values input 
  int nGreater = 0; //calculated number of input values that are greater than the calculated average 
  float sum = 0.0; //sum of input values 
  int count = 0; //count input values 
  int i = 0;//loop iteration index
  
  //program introduction
  introduction(objective);
  
  //input 4 numbers
  while (count < 4)
  {
    cout << "Please enter a number [0-100]: ";
    cin >> Numbers[count];
    cin.ignore(1000, 10);
    
    if (Numbers[count] >= 0 || Numbers[count] <= 100)
    {
      sum = sum + Numbers[count];
      count = count + 1;
    }//if  
  }//while
  
  //calculate average
  if ( count > 0)
  {
    average = sum / count;
  }//if
  
  //calculate the number of input values that are greater than the average
  for (i = 0; i < 4; i++)
  {
    if (average < Numbers[i]) nGreater=nGreater + 1;
  }//for i
  
  //output results
  cout << "The average of " << count;
  cout.setf(ios::fixed);
  cout << setprecision(1) << " numbers is " << average << ". " << endl;
  cout << nGreater << " numbers are greater than the average." << endl;

 
}//main

//program introduction
void introduction(string obj)
{
  //Data
  //obj = the program objective (text)

  // output my name and objective and program information
  cout << "Objective: "; 
  cout << obj << endl;
  cout << "Programmer: Teacher\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
}//introduction
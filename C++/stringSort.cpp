//Objective:  template for C++ programs and to test code
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

//main program
int main()
{
  //Data
  string objective = "template for C++ programs and to test code";
  const int SIZE = 7; //size of array day
  string day[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"}; //days of a week
  int i; // outter loop index value
  int j;//inner loop index
  string temp;//used for sort swap 

  //program introduction
  introduction(objective);

  // output contents of the array, in original order
  cout << "Unsorted: "; 
  for (i = 0; i < SIZE; i++) 
    cout << day[i] << ' '; 
  cout << endl; 
  
  //sorting the array
  for (i = 0; i < SIZE; i++) 
  {
    for (j = i + 1; j < SIZE; j++) 
    { 
      if (day[i] > day[j]) 
      { 
        // swap code 
        temp = day[i]; 
        day[i] = day[j];   
        day[j] = temp; 
      }// if 
    }// for j
  }// for i
  
  // output array in alphabetical order
  cout << "Sorted: "; 
  for (i = 0; i < SIZE; i++) 
    cout << day[i] << ' '; 
  cout << endl; 
}// main 


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
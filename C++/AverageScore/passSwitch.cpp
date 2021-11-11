//Objective:  Check the user's grade
//Name: Julia Feingold
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
using namespace std;

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
  char grade; //grade which user gets
  
  // output my name and objective and program information
  cout << "Objective: Check the user's grade.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  
  // input a grade from the keyboard
  cout << "What is your grade? [A, B, C, D, or F]: ";
  cin >> grade;
  cin.ignore(1000, 10);

  // check for passing grade
  switch (grade)
  {
    case 'A':
    case 'a':
    case 'B':
    case 'b':    
    case 'C':
    case 'c':
      cout << "You pass" << endl;
      break;
    case 'D':
    case 'F':
    case 'd':
    case 'f':
      cout << "You do NOT pass" << endl;
      break; 
    default:
      cout << "Invalid entry" << grade << endl;
  }//switch
  
}//main
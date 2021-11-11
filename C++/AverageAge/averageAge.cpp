//Objective:  The average age, rounded to two decimal digits.
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
//NONE

//main program
int main()
{
  //Data
  int age1 = 19; //age of the first person
  int age2 = 21; //age of the second person
  int age3 = 30; //age of the third person
  int count = 3; //number of people in the room
  double averageAge = 0;
  double sum = 0;

  // output my name and objective and program information
  cout << "The average age, rounded to two decimal digits..\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //calculate  total age
  sum = age1 + age2 + age3;

  //calculate average age
  averageAge = sum / count;
  
  //output formatted results
  cout.setf(ios::fixed);
  cout << setprecision(2);
  cout << "The average age is " << averageAge << endl;

}//main
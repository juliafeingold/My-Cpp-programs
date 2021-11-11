//Objective:  Output 4 pieces of information about me
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
  int luckyNumber = 3; //my favorite number
  double amountEarned = 90000.0; //how much money I want to save
  string favMovie = "Beasts of No Nation"; //my favorite movie
  char initial = 'J'; // my initial to represent my first name

  // introduction
  cout << "Objective: Output 4 pieces of information about me.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  // output result
  cout << "My lucky number is " << luckyNumber << endl;
  cout << "Amount of money I want to save for the rest of my life is $" << amountEarned << endl;
  cout << "My favorite movie is " << favMovie << endl;
  cout << "My first name initial is  " << initial << endl;

}//main
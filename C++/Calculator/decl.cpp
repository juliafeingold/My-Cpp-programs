//Objective:  information about you
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
//NONE

//main program
int main()
{
  //Data
  int luckyNumber; //persons lucky number [whole number only] 
  string favMovie; //persons favorite movie [name of the movie]
  double age; //persons age [0.0-100.0]
  char firstLetter; //persons first letter in name in the alphabet [A-Z or a-z]


  // output my name and objective and program information
  cout << "Objective: information about you.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //user input 4 values: integer, text, decimal, and a character
  cout << "Please enter your lucky number [whole positive numbers only]: ";
  cin >> luckyNumber;
  cin.ignore(1000, 10);
  cout << "Please enter your favorite movie [for example: Beauty]: ";
  getline(cin, favMovie);
  cout << "Please enter your age [for example: 21.7]: ";
  cin >> age;
  cin.ignore(1000, 10);
  cout << "Please enter your first letter in your name [A-Z or a-z]: ";
  cin >> firstLetter;
  cin.ignore(1000, 10);

  //output user input
  cout << "Your lucky number: " << luckyNumber << "," << " your favorite movie is: " << favMovie << "," << " your age: " << age  << "," << " your first letter in your name: " << firstLetter << endl;

}//main
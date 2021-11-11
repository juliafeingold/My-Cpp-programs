//Objective:   Learn why we use cin.ignore and getline in console input
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
  //code block to read an int value from the keyboard
  int age;  //how old you are right now
  cout << "Enter your age: " << endl;
  cin >> age;
  cin.ignore (1000, 10);
 
  //code block to read a string value from the keyboard
  string name;  //your name is
  cout << "Enter your name: " << endl;
  getline(cin, name);

  //code block to read a double value from the keyboard
  double temperature;  //the temperature right now in the city where you are in right now
  cout << "Enter the temperature outside right now (degrees F): " << endl;
  cin >> temperature;
  cin.ignore(1000, 10);

  //code block to read a string value from the keyboard
  string city;  //the name of the city where you are in right now
  cout << "What city are you in right now? " << endl;
  getline(cin, city);


  // output my name and objective and program information
  cout << "Objective:  Learn why we use cin.ignore and getline in console input.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  
  //code block to echo the name
  cout << name << " is ";

  //code block to echo the age 
  cout << age << " years old." << endl;

  //code block to echo the temperature
  cout << "It's " << temperature << " degrees F ";

  //code block to echo the city
  cout << "in " << city << "." << endl;


}//main
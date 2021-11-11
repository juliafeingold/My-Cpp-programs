//Objective:  Please input temperature in Celcium in the text file. Each Celsius/Fahrenheit pair should be on its own single line of screen output. The program should end when a sentinel value of -999 is entered from the file as the input temperature, or if the end-of-file is reached. 
//Name: Teacher
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <fstream>
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
  string objective = " Please input temperature in Celcium in the text file. Each Celsius/Fahrenheit pair should be on its own single line of screen output. The program should end when a sentinel value of -999 is entered from the file as the input temperature, or if the end-of-file is reached./n";
  double F; // temperature in Fahrenheit
  double C; //temperature in Celcium
  ifstream fin;//read text file
  int sentinel = -999;//sentinel value to exit the program

  //program introduction
  introduction(objective);
  cin.ignore(1000, 10);

  //open the file for input
  fin.open("temps.txt");
  if (!fin.good()) throw "I/O error";

  while (fin.good())
  {
    if (C == sentinel) break;
    F = 9.0/5.0 * C + 32;
    cout << C << " Celsius equals " << F << " Fahrenheit " << endl;
  }//while

  

  

//close text file
fin.close();  
}//main

//program introduction
void introduction(string obj)
{
  //Data
  //obj = the program objective (text)

  // output my name and objective and program information
  cout << "Objective: This program convert Celcium to Fahrenheit. "; 
  cout << obj << endl;
  cout << "Programmer: Teacher\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
}//introduction
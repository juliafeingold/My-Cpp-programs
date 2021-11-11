//Objective: output math problems for user to solve
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
// output my name and objective and program information
void introduction(string obj)
{
  //data
  //obj is program objective
  cout << "Objective: This program will "; 
  cout << obj << endl;
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
}//introduction

void additionProblem(int topNumber, int bottomNumber)
{
  //data
  //topNumber is 1st number in addition problem
  //bottomNumber is 2nd number in addition problem
  int userAnswer;//user's answer to addition math problem
  int theAnswer = topNumber + bottomNumber;//the correct solution to addition math problem

  //output problem
  cout << "\n\n\n" << topNumber << " + " << bottomNumber << " = ";
  cin >> userAnswer;
  cin.ignore(1000, 10);

  //provide user feedback
  if (theAnswer = userAnswer) cout << "Correct!" << endl;
  else cout << " a better answer is  " << theAnswer << endl;

}//additionProblem

//main program
int main()
{

  //Data
  string objective = "output math problems for user to solve"; //program objective

  
  //program introduction
  introduction(objective);

  //output math problems and provide user feedback
  additionProblem(6, 2);
  additionProblem(4, 8);
  additionProblem(5, 2);
  additionProblem(11, 2);



}//main
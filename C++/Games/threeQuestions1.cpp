//Objective: Three addition problems.
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
  int answer1;  //numeric answer in response on the prompt problem
  int answer2;  //numeric answer in response on the prompt problem
  int answer3;  //numeric answer in response on the prompt problem


  // introduction
  cout << "Objective: Three addition problems.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  
  //prompt the user with addition questions and read answer from the keyboard
  cout << "Three addition problems:" << endl;
  cout << "\n";
  cout << "25 + 15 = ";
  cin >> answer1;
  cin.ignore(1000, 10);

  if (answer1 == 40)
  {
    cout << "Good work – your answer is correct!" << endl;
  } //if
  else
  {
    cout << "Nice job, but a better answer is 40" << endl;
  } //else

  cout << "5 + 2 = ";
  cin >> answer2;
  cin.ignore(1000, 10);

  if (answer2 == 7)
  {
    cout << "Good work – your answer is correct!" << endl; 
  } //if
  else
  {  
    cout << "Nice job, but a better answer is 7" << endl;
  } //else
  
  cout << "80 + 2 = ";
  cin >> answer3;
  cin.ignore(1000, 10);

  if (answer3 == 82)
  {
    cout << "Good work – your answer is correct!" << endl; 
  } //if
  else
  {  
    cout << "Nice job, but a better answer is 82" << endl;
  } //else

}//main
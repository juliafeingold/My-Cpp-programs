//Objective:  Output 5 addition problems and let the user to input his answer
//Name: Julia Feingold
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries

#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>


//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void additionProblem(int topNumber, int bottomNumber)
{ 
  int userAnswer;
  cout << topNumber << " + " << bottomNumber << " = ";
  cin >> userAnswer;
  cin.ignore(1000, 10);

  int corrAnswer = topNumber + bottomNumber;
  if (corrAnswer == userAnswer) 
  {
    cout << "Correct!" << endl; 
  }
  else 
  {
    cout << "Very good, but a better answer is " << corrAnswer << endl; 
  }
}//additionProblem

//main program
int main()
{
  //Data
  srand(time(0));
  int n1;//first random number between 0 to 10
  int n2;//second random number between 0 to 10
  int i = 0;//initialize a loop counter

  // output my name and objective and program information
  cout << "Objective: Output 5 addition problems and let the user to input his answer.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  
  while (i != 5)//then number of correct/incorrect responses should be no more then 5 times 
  {
    //generate 2 random numbers
    n1 = 1 + (rand() % 10);
    n2 = 1 + (rand() % 10);
    additionProblem(n1, n2); 
    i = i + 1;
  }//while
}//main
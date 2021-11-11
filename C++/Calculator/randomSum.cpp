//Objective: This program will generate 3 random numbers, calculate their sum, output the value and the sum of those 3 random numbers.
//Name: Julia Feingold
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
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
  srand(time(0)); rand(); // "seed" the random number generator
  int randNumber1; //random number between 1 and 10
  int randNumber2; //random number between 1 and 10
  int randNumber3; //random number between 1 and 10
  int sum; //the result (sum of 3 random numbers)

  // output my name and objective and program information
  cout << "Objective: This program will generate 3 random numbers, calculate their sum, output the value and the sum of those 3 random numbers.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  
  //generate 3 random numbers between 1 to 10
  randNumber1 = 1 + (rand() % 10);
  randNumber2 = 1 + (rand() % 10);
  randNumber3 = 1 + (rand() % 10);
  
  //calculate the sum of 3 random numbers
  sum = randNumber1 + randNumber2 + randNumber3;

  //output results
  cout << "Random number one is  " << randNumber1 << endl;
  cout << "Random number two is  " << randNumber2 << endl;
  cout << "Random number three is  " << randNumber3 << endl;
  cout << "The sum of 3 random numbers is  " << sum << endl;
}//main
//Objective:  Coin tosses 
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
  int randNum; //random number between 0 and 1
  int tosses; //the number of coin tosses to perform
  int i = 0; //zero cycles counter

  // output my name and objective and program information
  cout << "Objective: Coin tosses .\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  cout << "Enter the number of tosses to perform: ";
  cin >> tosses;
  cin.ignore(1000, 10);
  
  while (true)
  {
    if (i == tosses) break;

    randNum = rand() % 2;
    if (randNum == 0)
    {
      cout << "Heads\n";
    }
    if (randNum == 1)
    {
      cout << "Tails\n";
    }
    i = i + 1;
  }//while
}//main
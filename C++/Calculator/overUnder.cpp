//Objective:  It's a game where the user guesses a number from 1 to 100
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
  int userGuess; //the user's guess number
  int randNumber; //random number from 1 to 100

  // output my name and objective and program information
  cout << "Objective: It's a game where the user guesses a number from 1 to 100.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //generate random number from 1 to 100
  randNumber = 1 + (rand() % 100);
  
  //read a number from the keyboard
  cout << "I'm thinking of a number from 1 to 100." << endl;
  cout << "What is your guess [1-100]?" << endl;


  //see if the guess is right
  while (true)  
  { 
    cin >> userGuess;
    cin.ignore(1000, 10);

    if (userGuess >=1 && userGuess <= 100)
    {
      if (userGuess > randNumber)
      {
        cout << "That's too high -- guess again: ";
      }
      
      if (userGuess < randNumber)
      {
        cout << "That's too low -- guess again: ";
      }

      if (userGuess == randNumber) break;
    }
    else
    {
      cout << "Invalid input -- guess again: ";
    }
  }//while
  cout << "That's right -- it's " << randNumber << endl;

}//main
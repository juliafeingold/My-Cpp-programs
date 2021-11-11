//Objective:  It's a game where the user guesses a number from 1 to 10
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
  int randNumber; //random number from 1 to 10

  // output my name and objective and program information
  cout << "Objective: It's a game where the user guesses a number from 1 to 10.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //generate random number from 1 to 10
  randNumber = 1 + (rand() % 10);
  
  //read a number from the keyboard
  cout << "I'm thinking of a number from 1 to 10." << endl;
  cout << "What is your guess [1-10]?" << endl;
  cin >> userGuess;
  cin.ignore(1000, 10); 

  //see if the guess is right
  while (true)  
  { 
    if (userGuess >=1 || userGuess <= 10) 
    if (userGuess == randNumber) break;
    if (userGuess < 1 || userGuess > 10)
    {
      cout << "Error" << endl;
      cout << "What is your guess [1-10]?" << endl;
      cin >> userGuess;
      cin.ignore(1000, 10); 
    }//if 
    if (userGuess != randNumber)
    {
      cout << "Try again..." << endl;
      cout << "What is your guess [1-10]?" << endl;
      cin >> userGuess;
      cin.ignore(1000, 10);       
    }//if
  }//while
  cout << "You guessed it!" << endl; 
}//main
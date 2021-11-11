//Objective:  The Rock-Scissors-Paper Game.
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
  srand(time(0)); // "seed" the random number generator
  char userChoice; //the computer's random number generator
  int compChoice; //numarical value of the computer card
  int humanWins = 0;//to track the numbers of  human wins 
  int compWins = 0; //to track the numbers of computer wins 

  // output my name and objective and program information
  cout << "The Rock-Scissors-Paper Game.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  
  //output prompt and input the user's choice
  cout << "Choose: [R for Rock,P for Paper, S for Scissors, Q for Quit]: ";
  cin >> userChoice;
  cin.ignore(1000, 10);


  while (userChoice != 'q' && userChoice != 'Q')
  {  
    //determine computer's choice 
    compChoice = 1 + rand() % 3;
    
    if (compChoice == 1)
    {
      cout << "Computer:R, ";
    }//if
    else if (compChoice == 2)
    {
      cout << "Computer:S, ";
    }//if
    else if (compChoice == 3)
    {
      cout << "Computer:P, ";
    }//if

    //output the user's choice
    switch (userChoice)
    {
      case 'R':
      case 'r':
        cout << "Human:R, \n";
        userChoice = 'R';
        break;
      case 'S':
      case 's':
        cout << "Human:S, \n";
        userChoice = 'S';
        break;  
      case 'P':
      case 'p':
        cout << "Human:P, \n";
        userChoice = 'P';
        break;  
      default:
        cout << "Invalid: \n" << userChoice;
    }//switch

    //check if the user wants to leave the game
    if (userChoice == 'q' || userChoice == 'Q') break;

    //output the winner
    if (compChoice == 1 && userChoice == 'P')
    {
      cout << "Human wins\n";
      humanWins++;
    }//if
    else if (compChoice == 1 && userChoice == 'S')
    {
      cout << "Computer wins\n";
      compWins++;
    }//else if
    else if (compChoice == 1 && userChoice == 'R')
    {
      cout << "It's a tie\n";
    }//else if
    else if (compChoice == 2 && userChoice == 'S')
    {
      cout << "It's a tie\n";
    }//else if
    else if (compChoice == 2 && userChoice == 'P')
    {
      cout << "Computer wins\n";
      compWins++;
    }//else if
    else if (compChoice == 2 && userChoice == 'R')
    {
      cout << "Human wins\n";
      humanWins++;
    }//else if
    else if (compChoice == 3 && userChoice == 'R')
    {
      cout << "Computer wins\n";
      compWins++;
    }//else if
    else if (compChoice == 3 && userChoice == 'S')
    {
      cout << "Human wins\n";
      humanWins++;
    }//else if
    else if (compChoice == 3 && userChoice == 'P')
    {
      cout << "It's a tie\n";
    }//else if
    cout << "Choose: [R for Rock,P for Paper, S for Scissors, Q for Quit]: ";
    cin >> userChoice;
    cin.ignore(1000, 10);
  }//while 

  //output the results
  cout << "Computer wins: " << compWins << endl;
  cout << "Human wins: " << humanWins << endl;
}//main
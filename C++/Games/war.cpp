//Objective:  The card game “war”
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
  int humanCard; //numarical value of the humans card
  int compCard; //numarical value of the computer card
  int compSuit; // computer's card's suit
  int humanSuit; //card's suit
  char replay = 'y'; //when user wants replay game

  // output my name and objective and program information
  cout << "Objective: The card game “war”.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
 
  while (replay == 'y' || replay == 'Y')
  { 
    //generate computer card's value from 2-14
    compCard = 2 + rand() % 13;
    cout << "Computer's card is a ";  
  
    if (compCard == 11)
    {
      cout << "Jack";
    }//if
    else if (compCard == 12)
    {
      cout << "Queen";
    }//if
    else if (compCard == 13)
    {
      cout << "King";
    }//if
    else if (compCard == 14)
    {
      cout << "Ace";
    }//if
    else
    {
      cout << compCard;
    }//if
  
    //generate  the random number to store the computer's card's suit (0-3) 
    compSuit = rand() % 4;
    cout << " of ";
  
    if (compSuit == 0)
    {
      cout << "Spades\n";
    } //if
    else if (compSuit == 1)
    {
      cout << "Diamonds\n";
    }//if
    else if (compSuit == 2)
    {
      cout << "Hearts\n";
    }//if
    else if (compSuit == 3)
    {
      cout << "Clubs\n";
    }//if
    
    //generate user's card's value
    humanCard = 2 + rand() % 13;
    cout << "Human's card is a ";  
  
    if (humanCard == 11)
    {
      cout << "Jack";
    }//if
    else if (humanCard == 12)
    {
      cout << "Queen";
    }//if
    else if (humanCard == 13)
    {
      cout << "King";
    }//if
    else if (humanCard == 14)
    {
      cout << "Ace";
    }//if
    else
    {
      cout << humanCard;
    }//if
  
    //generate  the random number to store the chuman's card's suit (0-3) 
    humanSuit = rand() % 4;
    cout << " of ";
  
    if (humanSuit == 0)
    {
      cout << "Sapdes\n";
    } //if
    else if (humanSuit == 1)
    {
      cout << "Diamonds\n";
    }//if
    else if (humanSuit == 2)
    {
      cout << "Hearts\n";
    }//if
    else if (humanSuit == 3)
    {
      cout << "Clubs\n";
    }//if
    
    //determine the winner
    if (compCard < humanCard)
    {
      cout << "Human wins!\n";
      cout << "Continue? [Y/N]: ";
      cin >> replay;
      cin.ignore(1000,10);
    }//if
    else if (compCard == humanCard)
    {
      cout << "It's a tie.\n\n";
      replay = 'y';
    }//if
      else if (compCard > humanCard)
    {
      cout << "Computer wins!\n";
      cout << "Continue? [Y/N]: ";
      cin >> replay;
      cin.ignore(1000,10);
    }//if
  }//while
}//main
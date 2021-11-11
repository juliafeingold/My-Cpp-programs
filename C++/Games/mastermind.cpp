//Objective:  This program creats the Mastermind Game, you should guess which colors computer pick.
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
  srand(time(0));// "seed" the random number generator 
  char c1;//computer choice
  char c2;//computer choice
  char c3;//computer choice
  char c4;//computer choice
  string userChoice;//user choice
  int corrColors = 0;//number of correct colors
  int corrPositions = 0;//number of correct positions
  int userRed = 0;//number of user's red colors 
  int userGreen = 0;//number of user's  green colors 
  int userBlue = 0;//number of user's  blue colors 
  int userYellow = 0;//number of user's  yellow colors 
  int compRed = 0;//number of red colors for computer
  int compGreen = 0;//number of user's  green colors for computer
  int compBlue = 0;//number of user's  blue colors for computer
  int compYellow = 0;//number of user's  yellow colors for computer
  int i;//count number of each user's color 
  int randResult;//generate random number  from 0 to 3

  // output my name and objective and program information
  cout << "Objective: This program creats the Mastermind Game, you should guess which colors computer pick.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  
  while (corrPositions != 4)
  { 
    //reset the count of correct colors
    userRed = 0;
    userGreen = 0;
    userBlue = 0;
    userYellow = 0;

    corrColors = 0;
    corrPositions = 0;

    //generate 4 random choices
    randResult = rand() % 4;
    if (randResult == 0) c1 = 'R';
    else if (randResult == 1) c1 = 'G';
    else if (randResult == 2) c1 = 'B';
    else if (randResult == 3) c1 = 'Y';
    
    randResult = rand() % 4;
    if (randResult == 0) c2 = 'R';
    else if (randResult == 1) c2 = 'G';
    else if (randResult == 2) c2 = 'B';
    else if (randResult == 3) c2 = 'Y';

    randResult = rand() % 4;
    if (randResult == 0) c3 = 'R';
    else if (randResult == 1) c3 = 'G';
    else if (randResult == 2) c3 = 'B';
    else if (randResult == 3) c3 = 'Y';

    randResult = rand() % 4;
    if (randResult == 0) c4 = 'R';
    else if (randResult == 1) c4 = 'G';
    else if (randResult == 2) c4 = 'B';
    else if (randResult == 3) c4 = 'Y';

    //count number of each computers color
    if (c1 == 'R') compRed++;
    if (c2 == 'R') compRed++;
    if (c3 == 'R') compRed++;
    if (c4 == 'R') compRed++;
    if (c1 == 'G') compGreen++;
    if (c2 == 'G') compGreen++;
    if (c3 == 'G') compGreen++;
    if (c4 == 'G') compGreen++;
    if (c1 == 'B') compBlue++;
    if (c2 == 'B') compBlue++;
    if (c3 == 'B') compBlue++;
    if (c4 == 'B') compBlue++;
    if (c1 == 'Y') compYellow++;
    if (c2 == 'Y') compYellow++;
    if (c3 == 'Y') compYellow++;
    if (c4 == 'Y') compYellow++;

    //prompt user to input his guess
    cout << "What is your guess? [R for Red, G for Green, Y for Yellow, B for Blue: ";
    getline(cin,userChoice);
    cout << "userChoice is: " << userChoice[0] << userChoice[1] << userChoice[2] << userChoice[3] << endl;
    //check if user choice of position is correct
    if (userChoice[0] == c1) corrPositions++;
    if (userChoice[1] == c2) corrPositions++;
    if (userChoice[2] == c3) corrPositions++;
    if (userChoice[3] == c4) corrPositions++;
    
    //count number of each user's color
    for (i = 0; i < 4; i++)
    {
      if (userChoice[i] == 'R' || userChoice[i] == 'r') userRed ++;
      if (userChoice[i] == 'G' || userChoice[i] == 'g') userGreen++;
      if (userChoice[i] == 'B' || userChoice[i] == 'b') userBlue++;
      if (userChoice[i] == 'Y' || userChoice[i] == 'y') userYellow++;
    }//for
  

    //check if user choice of color is correct
    if (userRed < compRed)  corrColors = corrColors + userRed;
    else corrColors = corrColors + compRed;
    if (userGreen < compGreen)  corrColors = corrColors + userGreen;
    else corrColors = corrColors + compGreen;
    if (userBlue < compBlue)  corrColors = corrColors + userBlue;
    else corrColors = corrColors + compBlue;
    if (userYellow < compYellow)  corrColors = corrColors + userYellow;
    else corrColors = corrColors + compYellow;  

    //output number of correct colors and number of correct positions
    cout << "Number of correct colors is " << corrColors;
    cout << " and number of correct positions is " << corrPositions << endl;


  }//while
  cout << "Done\n";
  return 0; 
}//main
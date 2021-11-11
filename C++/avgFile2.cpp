//Objective:  input scores from file 8Scores.txt and calculate the average and the number of scores greater then the average score
//Name: Julia Feingold
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <fstream>//file input and output
#include <iostream>//console input and output
#include <string>
using namespace std;

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string obj); //program introduction (function prototype)

//main program
int main()
{
  //Data
  string objective = "input scores from file 8Scores.txt and calculate the average and the number of scores greater then the average score";
  ifstream fin;//represent input file
  int scoreTotal = 0;//sum of all scores
  int i; // loop counter index
  int aScore;//each score from the input file
  double average;//average score
  int scores[8];//all the scores input from the file
  int nGreater = 0;//number of scores > average score

  //program introduction
  introduction(objective);

  //input the scores
  fin.open("8Scores.txt"); 
  if (!fin.good()) throw "I/O error"; 
  for (i = 0; i < 8; i++) 
  { 
    
    fin >> aScore; 
    fin.ignore(1000, 10);
    scores[i] = aScore; 
    scoreTotal += aScore; 
    cout << aScore << ".";
  } // for 
  fin.close();

  //calculate and output average score 
  average = scoreTotal / 8.0; 
  cout << endl << endl;
  cout << "The average of 8 numbers is " << average << endl; 

  //calculate the number of score > average score
  for (i = 0; i < 8; i++)
  {
    if (scores[i] > average) nGreater = nGreater + 1;
  }//for
  cout << "The number of scores is greater then average score " << nGreater << endl;

}//main

//program introduction
void introduction(string obj)
{
  //Data
  //obj = the program objective (text)

  // output my name and objective and program information
  cout << "Objective: This program "; 
  cout << obj << endl;
  cout << "Programmer: JuliaFeingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
}//introduction
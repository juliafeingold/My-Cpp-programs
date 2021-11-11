//Objective:  input scores from file 8Scores.txt and calculate the average
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
  string objective = "input scores from file 8Scores.txt and calculate the average";
  ifstream fin;//represent input file
  int scoreTotal = 0;//sum of all scores
  int i; // loop counter index
  int aScore;//each score from the input file
  double average;//average score


  //program introduction
  introduction(objective);

  //input the scores
  fin.open("8Scores.txt"); 
  if (!fin.good()) throw "I/O error"; 
  for (i = 0; i < 8; i++) 
  { 
    
    fin >> aScore; 
    fin.ignore(1000, 10); 
    scoreTotal += aScore; 
  } // for 
  fin.close();

  //calculate and output average score 
  average = scoreTotal / 8.0; 
  cout << "The average of 8 numbers is " << average << endl; 

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
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
const int SIZE = 8; //size of the array

//Programmer defined functions
void introduction(string obj); //program introduction (function prototype)
void readScores (int* s);//input scores from file
double calAverage (int* s);//calculate average score

//main program
int main()
{
  //Data
  string objective = "input scores from file 8Scores.txt and calculate the average and the number of scores greater then the average score";
  int i; // loop counter index
  int scoreTotal = 0; //sum of all scores
  double average;//average score
  int scores[SIZE]; //all the scores input from the file
  int nGreater = 0; //number of scores > average score

  //program introduction
  introduction(objective);

  //input scores from input file
  readScores(scores);
  
  //calculate and output average score 
  cout << endl << endl;
  cout << "The average of " << SIZE << " numbers is " << calAverage(scores) << endl; 

  //calculate and output average score 
  average = scoreTotal / double(SIZE); 
  cout << endl << endl;
  cout << "The average of " << SIZE << " numbers is " << average << endl; 

  //calculate the number of score > average score
  for (i = 0; i < SIZE; i++)
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

//input score from file
void readScores (int* s)
{  
  //Data
  int i; // loop counter index
  int aScore; //each score from the input file
  ifstream fin;//represent input file
  //s is an array of scores (passed from main)


  //input scores from input file
  fin.open("8Scores.txt"); 
  if (!fin.good()) throw "I/O error"; 
  for (i = 0; i < SIZE; i++) 
  { 
    
    fin >> aScore; 
    fin.ignore(1000, 10);
    s[i] = aScore; 
    cout << aScore << ".";
  } // for 
  fin.close();
}//readScores

//calculate average
double calAverage(int*s)
{  
  //Data
  double result;//average score
  //s array of scores from main
  int i;//loop index
  int scoreTotal = 0;//sum all the scores

  //sum all scores
  for (i = 0; i < SIZE; i++)
  {  
    scoreTotal = scoreTotal +s[i];
  }//for

  //calculate average score 
  result = scoreTotal / double(SIZE); 

}
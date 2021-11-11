//Objective:  read an input file of scores and find average score and number of scores greater than average
//Name: Teacher
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <fstream> //file IO
#include <iostream> //console IO
#include <string> //string functions
using namespace std;

//Programmer defined data types
struct Score
{
  int value; //each score
  Score* next; //the link
}; //struct

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string obj); //program introduction

//main program
int main()
{
  //Data
  string objective = "read an input file of scores and find average score and number of scores greater than average.";
  ifstream fin; //represents input file
  Student* start = 0;  //start points to the first node of the list, or is zero if empty linked list
  Student* p; //list pointer points to the current node used for traversing the list
  Student* next; //
  int count = 0; //to count the number of nodes in the list
  int sum = 0; //the total of all scores
  float average = 0;//score average
  int nGreater = 0; //number of scores > average

  //program introduction
  introduction(objective);

  // read each score from input file
  fin.open("score.txt");
  if (!fin.good()) throw "I/O error";
  
  //read and save the records
  while (fin.good()) 
  { 
    Score* aScore = new Score;//create tempory node for each score in input file
    fin >> aScore ->value; //input the score value
    fin.ignore(1000, 10);

    // add new node to the list
    aScore->next = start;
    start = aScore;
  } // while 
  fin.close(); //close the input file
 
  
  // find the average 
  for (p = start; p; p = p->next)
  {
    sum = sum + p->value;
    count++;
  }//for
  
  if (count > 0)
  {
    average = float(sum) / count;
    cout << "The average of " << count << " scores is " << average << endl;
  }//if
  else
    cout <<"No values were entered.\n";

  for (p = start; p; p = p->next)
  { 
    if (p->value > average) nGreater++;
  }//for

  cout << nGreater << number of scores higher than the average.";
  cout << endl;


  // release borrowed memory
  while(start)
  {
    next = start->next; 
    delete start;
    start = next;
  }// while
}//main

//program introduction
void introduction(string obj)
{
  //Data
  //obj = the program objective (text)

  // output my name and objective and program information
  cout << "Objective: This program "; 
  cout << obj << endl;
  cout << "Programmer: Teacher\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
}//introduction
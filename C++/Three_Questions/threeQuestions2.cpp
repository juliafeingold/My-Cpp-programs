//Objective:  This program will ask user to answer 3 questions and count how many answers are correct
//Name: Julia Feingold
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
#include <string>
using namespace std;

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string obj); //program introduction
bool doQuestion(string question, string corrAnswer); //provide user with 3 questions


//main program
int main()
{
  //Data
  string objective = " will ask user to answer 3 questions and count how many answers are correct";
  string question1 = "Who is the owner of facebook? ";//question one
  string question2 = "Who was the 1st president of the United States? ";//question two
  string question3 = "What holiday people in the US are celebrating on 4th of July? ";//question three
  string answer1 = "Mark Zuckerberg";//answer1 in response on the prompt question
  string answer2 = "George Washington";//answer2 in response on the prompt question
  string answer3 = "Independence Day";//answer3 in response on the prompt question
  int correct = 0;//count correct answers
  
  //program introduction
  introduction(objective);

  //provide 3 questions and count how many answers are correct
  if (doQuestion(question1, answer1)) correct++;
  if (doQuestion(question2, answer2)) correct++;
  if (doQuestion(question3, answer3)) correct++;

  //output final score  
  cout << "That's " << correct << " correct out of 3 questions asked.\n";
}//main

//program introduction
void introduction(string obj)
{
  //Data
  //obj = the program objective (text)
  // output my name and objective and program information
  cout << "Objective: This program "; 
  cout << obj << endl;
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
}//introduction

// provides user with question
bool doQuestion(string question, string corrAnswer)
{ 
  //Data
  bool answer = false;//assume answer is wrong
  string userAnswer;//user response
  string theAnswer = corrAnswer;//correct answer
  //question is the question which the user will be asked
  //corrAnswer is the correct answer

  //output question
  cout << question;
  getline(cin, userAnswer);

  if (theAnswer == userAnswer)
  {
    cout << "Correct!\n";
    answer = true;//answer is right
  }//if
  else
    cout << "Incorrect!\n";

  return answer;
}//doQuestion


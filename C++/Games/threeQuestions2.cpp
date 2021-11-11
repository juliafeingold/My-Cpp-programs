//Objective: Three addition problems.
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
void doQuestion(string question, string answer);
void doQuestion(string question, string answer1, string answer2);

//main program
int main()
{ 
  //Data
  string question1 = "Who is the owner of facebook? ";//question one
  string question2 = "Who was the 1st president of the United States? ";//question two
  string question3 = "What holiday people in the US are celebrating on 4th of July? ";//question three
  string answer1 = "Mark Zuckerberg";//answer1 in response on the prompt question
  string answer2 = "George Washington";//answer2 in response on the prompt question
  string answer3 = "Independence Day";//answer3 in response on the prompt question


  // introduction
  cout << "Objective: Three addition problems.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  
  doQuestion(question1, answer1, "Zuckerberg");
  doQuestion(question2, answer2, "Washington");
  doQuestion(question3, answer3);

}//main

void doQuestion(string question, string answer)
{ 
  string userAnswer;//user answer
  cout << question;
  getline(cin, userAnswer);

  if (answer == userAnswer )
    cout << "Correct\n";
  else
    cout << "Incorrect\n";
}//doQuestion

void doQuestion(string question, string answer1, string answer2)
{ 
  string userAnswer;//user answer
  cout << question;
  getline(cin, userAnswer);

  if (answer1 == userAnswer || answer2 == userAnswer )
    cout << "Correct\n";
  else
    cout << "Incorrect\n";
}//doQuestion
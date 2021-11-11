//Objective: The program should prompt the user for the input and output filenames, and output the user's choices
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

//main program
int main()
{
  //Data
  string objective = " should prompt the user for the input and output filenames, and output the user's choices";
  string dFileName = "fileContainingEmails.txt";//the default file name
  string iFileName; //is the input file name
  string oFileName;//is the output file name
  bool enterKey = false;//check is the user pressed enter key
  string userAnswer;//check the user choice to continue

  //program introduction
  introduction(objective);


  //output a prompt1 to the console using dFileName
  cout << "Enter input filename [default: fileContainingEmails.txt]: ";
  getline(cin, iFileName);
    
  if (iFileName.length() == 0) 
    enterKey = true;

  if (enterKey == true)
  {
    iFileName = dFileName;
    dFileName = "copyPasteMyEmails.txt";
  }//if
  else 
  {
    dFileName = iFileName;
  }//else
  
  cout << "Enter output filename [default: copyPasteMyEmails.txt]: "; 
  getline(cin, oFileName);

  enterKey = false;
  
  if (oFileName.length() == 0) 
    enterKey = true;

  if (enterKey == true)
  {
    oFileName = dFileName;  
  }//

  //output the results
  cout << "Input file: " << iFileName << endl;
  cout << "Output file: " << oFileName << endl;

  //ask user to continue
  cout << "press ENTER key to continue: ";
  getline(cin, userAnswer);
  

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
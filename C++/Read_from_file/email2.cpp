//Objective: This program opens and reads a text file and writes in another text file line with '@' character.
//Name: Julia Feingold
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <fstream> //work with file
#include <iostream> //console I/O
#include <string> //using string
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
  ifstream fin;//input file
  string objective = "  opens and reads a text file and writes in another text file line with '@' character.";
  string dFileName = "fileContainingEmails.txt";//the default file name
  string iFileName; //is the input file name
  string oFileName;//is the output file name
  bool enterKey = false;//check is the user pressed enter key
  string userAnswer;//check the user choice to continue
  string readLines;//read the input file
  int i = 0;//loop index
  bool isAt = false;//chech if there is @
  
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
  
  cout << "Enter output filename [default: x.txt]: "; 
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

  //open and read the file
  fin.open(iFileName.c_str());
  if(!fin.good()) throw "I/O error";

  //read line by line and check the lines that contain the character @
  while (fin.good())
  {
    getline(fin, readLines);
    for (i = 0; i < readLines.length(); i++)
    {
      if(readLines[i] == '@')
      {
        isAt = true;
      }//if  
    }//for
  
    if (isAt)
    {
      cout << readLines << endl;
    }//if
    isAt = false;
  }//while

  fin.close();
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
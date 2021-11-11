//Objective: The program should prompt the user for the input and output filenames, open and read the input file, and output to the console the valid email addresses as they are found.
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
bool isValidEmailCharacter (char c);//returns true if valid, false if not valid email address character

//main program
int main()
{
  //Data
  ifstream fin;//input file
  string objective = " should prompt the user for the input and output filenames, open and read the input file, and output to the console the valid email addresses as they are found.";
  string dFileName = "fileContainingEmails.txt";//the default file name
  string iFileName; //is the input file name
  string oFileName;//is the output file name
  bool enterKey = false;//check is the user pressed enter key
  string userAnswer;//check the user choice to continue
  string readLines;//read the input file
  int i;//looking for @
  bool isAt = false;//chech if there is @
  int s;//looking for first not valid email character
  int e;//
  bool hasDot;//check for dot
  string anEmail;//
  int dotPos;//
  
  
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

//chaeck is email address character is valid or not, true if valid, false if not valid 
bool isValidEmailCharacter (char c)
{
  //Data
  //c characters from emails
  bool result = false;//true if valid, false if not valid 

  //check email address character
  if (c >= 'A' && c <= 'Z')
    result = true;
  if (c >= 'a' && c <= 'z')
   result = true;
  if (c >= '0' && c <= '9')
    result = true;
  if (c == '_' || c == '.' || c == '+' || c == '-')
    result = true;
  else 
    result = false;

  return result;
}//isValidEmailCharacter

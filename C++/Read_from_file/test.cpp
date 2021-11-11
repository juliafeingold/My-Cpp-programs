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
string getFileName (string iFileName, string oFileName);//gets one filename input or output using appropriate variable prompt default filename depending on user selection
bool isValidEmailCharacter (char c);//returns true if valid, false if not valid email address character

//main program
int main()
{
  //Data
  ifstream fin;//input file
  string objective = " should prompt the user for the input and output filenames, open and read the input file, and output to the console the valid email addresses as they are found.";
  string dFileName;//the default file name
  string iFileName; //is the input file name
  string oFileName;//is the output file name
  bool enterKey = false;//check is the user pressed enter key
  string userAnswer;//check the user choice to continue
  string readLines;//read the input file
  int i;//looking for @
  bool isAt = false;//chech if there is @
  int s;//looking for first not valid email character before @
  int e;//looking for first not valid email character after @
  bool hasDot;//check for dot
  string anEmail;//
  int dotPos;//
  
  getFileName();
}//main

string getFileName (string iFileName, string oFileName)
{
  //Data
  ifstream fin;//input file
  string dFileName = "fileContainingEmails.txt";//the default file name
  //iFileName; //is the input file name
  //oFileName;//is the output file name
  string enterKey = "false";//check is the user pressed enter key
  
  //output a prompt1 to the console using dFileName
  cout << "Enter input filename [default: fileContainingEmails.txt]: ";
  getline(cin, iFileName);
    
  if (iFileName.length() == 0) 
    enterKey = "true";

  if (enterKey == "true")
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

  enterKey = "false";
  
  if (oFileName.length() == 0) 
    enterKey = "true";

  if (enterKey == "true")
  {
    oFileName = dFileName;  
  }//
  

  return enterKey;
}//getFileName

bool isValidEmailCharacter (char c)
{
  //Data
  //c characters from emails
  bool result = false;//false is not valid email address character, true valid

  //check valid characters
  if (c >= 'A' || c <= 'Z')
    result = true;
  if (c >= 'a' || c <= 'z')
   result = true;
  if (c >= '0' || c <= '9')
    result = true;
  if (c == '_' || c == '.' || c == '+' || c == '-')
    result = true;
  else 
    result = false;

  return result;
}//isValidEmailCharacter


  
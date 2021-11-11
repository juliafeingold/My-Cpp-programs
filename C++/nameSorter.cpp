//Objective:  read names in a text file, sort them alphabetically, and output them to the screen
//Name: Julia Feingold
//Course: COMSC-110-8269
//Compiler: MinGW
//Editor: MS NotePad

//libraries
#include <algorithm>
#include <fstream> //file IO
#include <iomanip> //formatting
#include <iostream> //console IO
#include <string> //string functions
using namespace std;
#include <cctype>

//Programmer defined data types
struct Names
{
  string name; //all names
};

//Special compiler dependent definitions
//NONE

//global constants/variables

class toUpper {public: char operator() (char c) const {return toupper(c);}}; //required for conversion to uppercase

//Programmer defined functions
void introduction(string obj);
void outputNames(Names* name, int nNames); //output names


//main program
int main()
{
  //data
  ifstream fin; //represents input file
  int i; //loop index variable
  int j; //loop index variable

  bool isDup = false; // isDuplicate flag

  int nNames = 0;  //number of values on array based list
  const int MAX_NAMES = 5; //capacity of array based list
  Names names[MAX_NAMES]; //array based list of values
  Names aName; //each name read from input file
  Names temp; //holds names temporarily during swap
  string fileName;//file name which use wants to open
  string ncName;//to convert to uppercase
  string nciName;
  string ncjName;
  string objective = "read names in a text file, sort them alphabetically, and output them to the screen"; //program objective

  //program introduction
  introduction(objective); 


  //output prompt for file
  cout << "What file do you want to use for input? ";
  getline(cin, fileName);
  fin.open(fileName.c_str());
  if (!fin.good()) throw "I/O error";

  // Get list of names
  while (fin.good())
  { 
    // Reset duplicate flag
    isDup = false;
    // Get name from file
    fin >> aName.name;
    fin.ignore(1000,10);

    cout << "Checking for name: " << aName.name << endl;
    // Check if the name already exists
    for (i = 0; i < nNames; i++)
    {
 
      cout << "names[" << i << "] :" << names[i].name << endl;


      if (names[i].name == aName.name)
      {
        cout << "found duplicate\n";
        isDup = true;
      }//if
    }//for

    cout << "And now isDup is: " << isDup << endl;

    if (nNames < MAX_NAMES && !isDup)
    {
      names[nNames] = aName;
      nNames++;
    }
    if (aName.name == "") continue; //skip blank line
  }//while not EOF
  fin.close(); //close input file

  //output names in alphabetical order
  for (i = 0; i < nNames; i++)
  { 
    for (j = i + 1; j < nNames; j++)
    {

      // Convert names temporarily to uppercase 
      nciName = names[i].name;
      transform(nciName.begin(), nciName.end(), nciName.begin(), toUpper());

      ncjName = names[j].name;
      transform(ncjName.begin(), ncjName.end(), ncjName.begin(), toUpper());

      // -- Equiv to names[i].name > names[j].name but with uppercase
      if (nciName > ncjName)
      {
        temp = names[i];
        names[i] = names[j];
        names[j] = temp;
      }//if
    }//for j
  }//for i
  
  outputNames(names, nNames);//output list


} //main

void introduction(string obj)
{
  // output my name and objective and program information
  cout << "Objective: This program ";
  cout << obj << ".\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
} // introduction

//output list of names
void outputNames(Names* s, int n)
{
  //Data
  int i;// loop index
  //n is numbers of names in the array
  //list of names
  
  //traverse array based list and output each record
  for (i = 0; i < n; i++)
  {
    cout << "" << left << setw(1) << s[i].name;
    cout.fill(' ');
    cout << endl;
  }//for
}//outputNames

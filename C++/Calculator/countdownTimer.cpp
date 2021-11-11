//Objective:  This program will count down from 10 to 0
//Name: Julia Feingold
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iomanip>
#include <iostream>
using namespace std;

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif 

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
//NONE

//main program
int main()
{ 
  //Data
  int num = 10;//a number where reverse-counting starts
  
  // output my name and objective and program information
  cout << "Objective: This program will count down from 10 to 0.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  
 

  //count down from 10 to 0
  for (int i = 0; i < 11; i++)
  { 
    if (num == 0)
    {
      cout << setw(2) << num << " blast off!\n"; 
      break;
    }
    else
    {
      cout << setw(2) << num;
    }
      cout.flush();
    num--; //becomes next lower number

    #ifdef _WIN32
    Sleep(1000); //one thousand milliseconds
    #else
    sleep(1); //one second
    #endif
    
    cout << '\r'; //carriage return   
    
  }//for
 
}//main
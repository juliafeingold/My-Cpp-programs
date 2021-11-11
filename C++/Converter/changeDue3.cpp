//Objective: This program will calculate change due in all specified U.S. bills after you enter the value of the amount owed and the cash paid in the file named change.txt.
//Name: Julia Feingold
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <fstream>
#include <iostream>
using namespace std;

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

  // introduction
  cout << "Objective: This program will calculate change due in all specified U.S. bills.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  
  //Data
  int amountOwed;  //amount owed
  int cashPaid;  //amount paid
  int changeDue;  //calculate change due
  ifstream fin; //represent the input file
  
  cout << "The program execution will be paused until you hit the enter key to check that the file change.txt has amount owed on line 1 and cash paid on line 2.\n";
  fin.ignore (1000, 10);
  
  
  //open change.txt for input
  fin.open ("change.txt");
  if (!fin.good()) throw "I/O error";
 
  //read an amount owned from one line of an input file
  fin >> amountOwed;
  fin.ignore (1000, 10);
  cout << "Amount owed: " << amountOwed << endl;
  
  //read a cash paid from one line of an input file
  fin >> cashPaid;
  fin.ignore (1000, 10);
  cout << "Cash paid: " << cashPaid << endl;

  //output the change due result
  changeDue = cashPaid - amountOwed;
  cout << "Change paid: " << changeDue << endl;

  int hundredThousands = changeDue / 100000;  //number of $100,000 bills
  changeDue = changeDue % 100000;  
  int tenThousands = changeDue / 10000;  //number of $10,000 bills
  changeDue = changeDue % 10000;
  int fiveThousands = changeDue / 5000;  //number of $5,000 bills
  changeDue = changeDue % 5000;
  int thousands = changeDue / 1000;  //number of $1,000 bills
  changeDue = changeDue % 1000;
  int fiveHundreds = changeDue / 500;  //number of $500 bills
  changeDue = changeDue % 500;  
  int hundreds = changeDue / 100;  //number of $100 bills
  changeDue = changeDue % 100;
  int fifties = changeDue / 50;  //number of $50 bills
  changeDue = changeDue % 50;
  int twenties = changeDue / 20;   //number of $20 bills
  changeDue = changeDue % 20;
  int tens = changeDue / 10;  //number of $10 bills
  changeDue = changeDue % 10;
  int fives = changeDue / 5;  //number of $5 bills
  changeDue = changeDue % 5;
  int twos = changeDue / 2;  //number of $2 bills
  changeDue = changeDue % 2;
  int ones = changeDue / 1;  //number of $1 bills
  changeDue = changeDue % 1;

  //output calculated change due for each kind of monetary demonination
  cout << " this many hundred thousand dollar bills: " << hundredThousands << endl;
  cout << " this many ten thousand  bills: " << tenThousands  << endl; 
  cout << " this many five thousand dollar bills: " << fiveThousands << endl;
  cout << " this many thousand dollar bills: " << thousands << endl; 
  cout << " this many five hundred dollar bills: " << fiveHundreds << endl;
  cout << " this many hundred dollar bills: " << hundreds << endl; 
  cout << " this many fifty dollar bills: " << fifties << endl;
  cout << " this many twenty dollar bills: " << twenties << endl; 
  cout << " this many five dollar bills: " << fives << endl;
  cout << " this many two dollar bills: " << twos << endl;
  cout << " this many one dollar bills: " << ones << endl; 
  
  //close the file
  fin.close();
}//main
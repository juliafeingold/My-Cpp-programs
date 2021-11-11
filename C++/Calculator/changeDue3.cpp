//Objective: Calculate change due in a transaction using U.S. bills – no cents
//Name: Julia Feingold
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
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
  //Data
  int amountOwed = 45000;  //amount owed 
  int cashPaid = 100000;  //amount paid
  int changeDue; //change due
  int hundredThousands; //number of $100,000 bills
  int tenThousands; //number of $10,000 bills
  int fiveThousands; //number of $5,000 bills
  int thousands;  //number of $1,000 bills
  int fiveHundreds;  //number of $500 bills
  int hundreds;  //number of $100 bills
  int fifties; //number of $50 bills
  int twenties;  //number of $20 bills
  int tens; //number of $10 bills
  int fives;  //number of $5 bills
  int twos;  //number of $2 bills
  int ones;  //number of $1 bills

  // introduction
  cout << "Objective: Calculate change due in a transaction using U.S. bills – no cents.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  

  amountOwed  <= cashPaid;  //input “amountOwed” to be less than or equal to the amount “cashPaid”
  amountOwed > 0;  // input “amountOwed” to not be zero or negative

  //calculate change due
  changeDue = cashPaid - amountOwed;  
   
  //output amount owed, cash paid, change due and change paid 
  cout << "Amount owed: " << amountOwed << endl;
  cout << "Cash paid: " << cashPaid << endl;
  cout << "Change Due: " << changeDue << endl;
  cout << "" << endl;
  cout << "Change paid: " << changeDue << endl;

  hundredThousands = changeDue / 100000; 
  changeDue = changeDue % 100000;
  if (hundredThousands > 0)
  {
    cout << " this many hundred thousand dollar bills: " << hundredThousands << endl;
  } //if  

  tenThousands = changeDue / 10000; 
  changeDue = changeDue % 10000;
  if (tenThousands > 0)
  { 
    cout << " this many ten thousand  bills: " << tenThousands  << endl;  
  }//if  

  fiveThousands = changeDue / 5000;  
  changeDue = changeDue % 5000;
  if (fiveThousands > 0)
  {
    cout << " this many five thousand dollar bills: " << fiveThousands << endl;
  }//if  

  thousands = changeDue / 1000;  
  changeDue = changeDue % 1000;
  if (thousands > 0)
  {
    cout << " this many thousand dollar bills: " << thousands << endl; 
  }//if  

  fiveHundreds = changeDue / 500;  
  changeDue = changeDue % 500; 
  if (fiveHundreds > 0)
  { 
    cout << " this many five hundred dollar bills: " << fiveHundreds << endl;
  }//if
  
  hundreds = changeDue / 100;  
  changeDue = changeDue % 100;
  if (hundreds > 0)
  {
    cout << " this many hundred dollar bills: " << hundreds << endl; 
  }//if  

  fifties = changeDue / 50; 
  changeDue = changeDue % 50;
  if (fifties > 0)
  {
    cout << " this many fifty dollar bills: " << fifties << endl;
  }//if

  twenties = changeDue / 20;
  changeDue = changeDue % 20;
  if (twenties > 0)
  {
    cout << " this many twenty dollar bills: " << twenties << endl; 
  }//if 

  tens = changeDue / 10;  
  changeDue = changeDue % 10;
  if (tens > 0)
  {
    cout << " this many ten dollar bills: " << tens << endl;
  }//if  

  fives = changeDue / 5;  
  changeDue = changeDue % 5;
  if (fives > 0)
  {
    cout << " this many five dollar bills: " << fives << endl;
  }//if  

  twos = changeDue / 2; 
  changeDue = changeDue % 2;
  if (twos > 0)
  {
    cout << " this many two dollar bills: " << twos << endl; 
  }//if  

  ones = changeDue / 1;  
  changeDue = changeDue % 1;
  if (ones > 0)
  {
    cout << " this many one dollar bills: " << ones << endl; 
  }//if
}//main
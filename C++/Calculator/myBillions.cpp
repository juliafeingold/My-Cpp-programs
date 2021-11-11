//Objective:  Calculate when I become a thousandaire, millionaire, billionaire if I will put nickel per week
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
int findWeeks(double coin, double naire);//calculate savings


//main program
int main()
{
  //Data
  string objective = "calculate when I become a millionaire if I will put nickel per week";
  double nickle = 0.05;//the amount of money I will put per week
  int weeks;// how many weeks

  //program introduction
  introduction(objective);

  //find the amount of week to become a thousandaire
  weeks = findWeeks(nickle, 1000);
  cout << "In " << weeks << " weeks, I will be a thousandaire!\n";
  
  //find the amount of week to become a millionaire  
  weeks = findWeeks(nickle, 1000000);
  cout << "In " << weeks << " weeks, I will be a millionaire!\n";

  //find the amount of week to become a billionaire
  weeks = findWeeks(nickle, 1000000000);
  cout << "In " << weeks << " weeks, I will be a billionaire!\n";
}//main

//program introduction
void introduction(string obj)
{
  //Data
  //obj = the program objective (text)
  // output my name and objective and program information
  cout << "Objective: This program "; 
  cout << obj << endl;
  cout << "Programmer: Teacher\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
}//introduction

//calculate savings
int findWeeks(double coin, double naire)
{
  //Data
  int weeks = 0;//how many weeks we need to become a "naire"
  double runTotal = 0.00;//running total amount of money 
  //coin is the amount we will put each week
  //naire is how rich we can be in NNN amount of weeks

  while (runTotal <= naire)
  {
    weeks = weeks + 1;
    runTotal = runTotal + coin; 
    coin = 2 * coin;

    // cout << "During the week: " << weeks <<  " we are at coin: " << coin << " and running total is: " << runTotal << endl;
  }//while
  return weeks;
}//addTotal

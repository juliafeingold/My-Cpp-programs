//Objective:  calculate how many days old I will be by the due date of this assigment
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
  int myAge = 21; //the number of years in which I lived, including my birth year and the current year
  int leapYears = 5; //the number of leap  in my life
  int inDaysBeForBD = 150; // the number of days in my birth year before I was born, including my day of birth
  int inDaysAfterDueDate = 103; //the number of days remaining in the current year after the due date for this lab, excluding that
  int days = 0; //number of days old I am
  string DOB = "May 31, 1993"; //my date of birth
  string Due = "Sept 20, 2014"; //due date of the assignment

  // introduction
  cout << "Objective: This program will serve as a template for all programs\n written in this course.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //calculate the number of days old I am
  days = days + ( 365 * myAge);
  days = days + leapYears;
  days = days - inDaysBeForBD; 
  days = days - inDaysAfterDueDate;

  //output
  cout << " DOB: " << DOB << endl;
  cout << " Due: " << Due <<  endl;
  cout << " Age: " << days << endl;

}//main
//Objective:  Calculate the average height in centimetres of everyone in the classroom.
//Name: Julia Feingold
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iomanip>
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
  int height; //height >= 0 and height <=300 in centimetres 
  int sum = 0; //sum of each person's height 
  int count = 0;//count number of people in the classroom
  double averageHeight = 0; //average height of all people in the classroom

  // output my name and objective and program information
  cout << "Calculate the average height in centimetres of everyone in the classroom.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //output the prompt and input each person's  height in the classroom to calculate average height
  while (true)  
  {  
    cout << "How tall are you [0-300 in centimetres]? ";
    cin >> height;
    cin.ignore(1000, 10);
    
    //check if height is valid and count the number of people in the classroom 
    if (height < -1 || height >=301) 
      cout << "Invalid height.Try again.";
    else if (height == -1)
      break; 
    else
    {
     sum = sum + height;
     count = count + 1;
    }//else  
  }//while
  
  //check user doesn't devide by 0
  if (count == 0) 
    cout << "There are no people in the classroom.\n"; 

  //calculate the average height
  else
  {
    averageHeight = sum / count;

    //output the formated results of the average height
    cout.setf(ios::fixed);
    cout << setprecision(2);
    cout << "The average height is " << averageHeight << endl;
  }//else
}//main
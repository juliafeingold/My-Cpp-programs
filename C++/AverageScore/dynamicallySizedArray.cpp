//Objective:  input number of scores to be input, then input that many scores, calculate the maximum score, average score, minimum score, and how many A grade scores.
//Name: Teacher
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iomanip>
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


//main program
int main()
{
  //Data
  string objective = "input number of scores to be input, then input that many scores, calculate the maximum score, average score, minimum score, and how many A grade scores."; //program objective
  int size; //the number of values to be input 
 
  int max = 0; //maximum value of inputed values 
  int min = 100; //minimum value of inputed values 
  int sum = 0; //total of inputed values 
  double average = 0; //average value of inputed values 
  int nGradeA = 0; //number of scores that are A grade
  int temp = 0; //used for temporarily storing one of the values in the array in the swapping process to sort 
  int i = 0; //outer loop index for sorting 
  int j = 0; //inner loop index for sorting 

  
  //program introduction
  introduction(objective);
  
  //input size
  cout << "How many scores? ";
  cin >> size;
  cin.ignore(1000, 10);
  int scores[size]; //dynamically defined for SIZE number of values

  //input scores (each score between 0-100)
  for (i = 0; i < size; i++)
  {
    cout << "Enter a score [0-100]:";
    cin >> scores[i];
    cin.ignore(1000, 10);
  }//for

  //sort the scores from low to high
  for (i = 0; i < size; i++)
  {
    for (j = i + 1; j < size; j++)
    {
      if (scores[i] > scores[j])
      {
        //swap code
        temp = scores[i];
        scores[i] = scores[j];
        scores[j] = temp;
      } //if 
    }//for
  }//for
  
  //output sorted results
  cout << "Sorted: ";
  for (i = 0; i < size;i++)
    cout << scores[i] << " ";
  cout << endl;

  //calculate the maximum, minimum, and average score, and the number scores that are an A grade
  for (i = 0; i < size; i++)
  {
    if (max < scores[i]) max = scores[i];
    if (min > scores[i]) min = scores[i];
    
    sum = sum + scores[i];
    average = sum / size;

    if (scores[i] > 90) nGradeA= nGradeA + 1;
  }//for

  cout << "Minimum: " << min << endl;
  cout << "Maximum: " << max << endl;
  cout << "Average: " << average << endl;
  cout << nGradeA << " 'A' grade(s) entered" << endl;

}//main

//program introduction
void introduction(string obj)
{
  //Data
  //obj = the program objective (text)

  // output my name and objective and program information
  cout << "Objective: "; 
  cout << obj << endl;
  cout << "Programmer: Teacher\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
}//introduction
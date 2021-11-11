//Objective:  Calculator
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
  char operation; //1= addition  2= subtraction  3= multiplcation  4= division  0=Exit
  int a; //first user's number 
  int b; //secont user's number 
  

  // output my name and objective and program information
  cout << "Objective: Calculator.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  
  while (true)
  {
    //ask user to pick operator
    cout << "Please enter operator [1= addition  2= subtraction  3= multiplcation  4= division  0=Exit]: ";
    cin >> operation;
    cin.ignore(1000, 10);
    if (operation == '0')
      break;

    //ask user to enter to numbers
    cout << "Please enter first number: ";
    cin >> a;
    cin.ignore(1000, 10);
    cout << "Please enter second number: ";
    cin >> b;
    cin.ignore(1000, 10);
  
    //calculate user input
    switch (operation)
    {
      case '1':
        cout << a << '+' << b << "=" << a + b << endl;
        break;
      case '2':
        cout << a << '-' << b << "=" <<a - b << endl;
        break;  
      case '3':
        cout << a << '*' << b << "=" << a * b << endl;
        break;
      case '4':
        cout << a << '/' << b << "=" <<a / b << endl;
        break;
      case '0':
        break;
      //// If the operation is other than +, -, * or /, output error message  
      default:
        cout << "Invalid operation. Please use + - / *.\n";
        break;
    }//switch
  }//while
  cout << "Thanks for using the calculator!\n";
  return 0;
}//main
//Objective: Calculate mile per gallon and the range possible with the remaining fuel of the vehicle
//Name: Julia Feingold
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iomanip>
#include <iostream>
using namespace std;
#include <cmath>

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
  double tankCapacity; //the fuel tank capacity of the vehicle with the full tank
  double miles; //the distance in miles user traveled in the vehicle
  double gallonsUsed; //the number of gallons used on trip
  double range; //possible range the vehicle can drive 
  double remainingFuel; //the remaining fuel of the vehicle
  double MPG; //miles per gallon of the vehicle

  // output my name and objective and program information
  cout << "Objective: Calculate mile per gallon and the range possible with the remaining fuel of the vehicle.\n"; 
  cout << "Programmer: Julia Feingold\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //user input 3 double values
  cout << "Please enter the capacity of your fuel tank in gallons: ";
  cin >> tankCapacity;
  cin.ignore(1000, 10);
  cout << "Please enter the distance in miles you traveled in your vehicle:  ";
  cin >> miles;
  cin.ignore(1000, 10);
  cout << "Please eneter the number of gallons used on trip: ";
  cin >> gallonsUsed;
  cin.ignore(1000, 10);

  //calculate MPG of the vehicle
  MPG = miles/gallonsUsed;

  //calculate the remaining fuel of the vehicle
  remainingFuel = tankCapacity - gallonsUsed;
 
  //calculate possible range the vehicle can drive 
  range = remainingFuel * MPG;

  //output formatted results (1 decimal digits rounded up)
  cout.setf(ios::fixed);
  cout << setprecision(1);
  cout << "Your vehicle's MPG is  " << MPG << endl;
  cout << "Remaining fuel is " << remainingFuel << endl;
  cout << "The possible range is  " << range << endl;

}//main
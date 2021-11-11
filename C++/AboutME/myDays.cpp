#include <iostream> 
using namespace std; 

int main ()
{
  int days = 0;
  int leapDays = 8;

  days = days + ( 365 * 30 );
  days = days + leapDays;
  days = days - 172;
  days = days - 327;

  cout << "My date of Birth is June 22, 1987" << endl;
  cout << "Due: February 7, 2018" << endl;
  cout << "Age: " << days << " days" << endl;
}
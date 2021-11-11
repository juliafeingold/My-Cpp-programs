#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

bool isValidEmailCharacter(char c);

int main ()
{

  if (isValidEmailCharacter('A'))
  {
    cout << "it's valid" << endl;
  }

  return 0;
}

bool isValidEmailCharacter (char c)
{
  //Data
  //c characters from emails
  bool result = false;//true if valid, false if not valid 

  //check email address character
  if (c >= 'A' && c <= 'Z')
    result = true;
  else if (c >= 'a' && c <= 'z')
   result = true;
  else if (c >= '0' && c <= '9')
    result = true;
  else if (c == '_' || c == '.' || c == '+' || c == '-')
    result = true;
  else 
    result = false;

  return result;
}//isValidEmailCharacter
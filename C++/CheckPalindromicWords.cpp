//libraries
#include <iostream>
#include <cctype>
#include <string>
#include <fstream>

using namespace std;

//Programmer defined functions
bool isPalindromic (string s);

//required for converting to lowercase
class toLower {public: char operator() (char c) const {return tolower(c);}} ;

//main program
int main()
{
  //Data
  fstream inputFile;
  string fileName = "NotesBetweenTwoSisters.txt";
  string token;

  inputFile.open(fileName.c_str(), ios::in);
  if (inputFile.is_open())
  {
      while(!inputFile.eof())
      {
          inputFile >> token;
      }
      inputFile.close();
  }
  else
    cout << "File cannot be opened.";

  //output Palindromic words
  if (isPalindromic(token))
    cout << token << " is a palindromic word." << endl  << endl;
  else
      cout << token << " is not a palindromic word." << endl  << endl;

}

//check Palindromic
bool isPalindromic (string s)
{
  int i;

  for (i = 0; i <= s.length()-1; i++)
  {
     transform(s[i].begin(), s[i].end(), s[i].begin(), ::tolower);

     if(s[i]) != s[s.lenght()-1-i])
    {
      return false;
    }
  }
  return true;
}




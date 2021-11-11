//libraries
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

//Programmer defined functions
int myStrlen (char *s1);
void myStrcat (char *s1, char *s2);
void myStrcpy (char *s1, char *s2);
void myStrcat_BC (char *s1, char *s2, int SIZE);
bool isPalindromic (char *s1);

//main program
int main()
{
  //Data
  const int SIZE = 11;
  char s1[SIZE] = "Hello ";
  char s2[SIZE] = "World";

  //output the C string and the length of the C string
  cout << "s1: " << " " << s1 << endl;  /// Should display "Hello "
  cout << "The length of s1: " << myStrlen(s1) << endl << endl;

  //output the concatenation of the C-strings and the length of the C string
  cout << "Doing strcat(s1, s2) " << endl;
  myStrcat(s1, s2);
  cout << "s1: " << " " << s1 << endl;  /// Should display "Hello World"
  cout << "The length of s1: " << myStrlen(s1)  << endl << endl;

  //copy the content of the second string to the first
  cout << "Doing strcpy(s1, s2) " << endl;
  myStrcpy(s1, s2);  
  cout << "s2: " << " " << s1 << endl;  // Should display "World"
  cout << "The length of s1: " << myStrlen(s1) << endl << endl;

//  Test myStrcat_BC() and isPalindromic() in the following ways:

  // // myStrcat with bounds checking
  cout << "Doing myStrcat_BC(s1, s2, SIZE) " << endl;
  myStrcat_BC(s1, s2, SIZE);      /// Should display "WorldWorld"
  cout << "s1: " << " " << s1 << endl;  
  cout << "The length of s1: " << myStrlen(s1) << endl << endl;

  // // In case “out of bound” occurs, output an error message on computer screen
  cout << "Doing myStrcat_BC(s1, s2, SIZE) again" << endl;
  myStrcat_BC(s1, s2, SIZE);      /// Out of bound, prompt an error message
  cout << "s1: " << " " << s1 << endl;  
  cout << "The length of s1: " << myStrlen(s1) << endl << endl;

  char s3[SIZE] = "World";
  cout << "Doing isPalindromic(s3)" << endl;
  if (isPalindromic(s3))       
    cout << s3 << " is a palindromic word." << endl  << endl;  
  else
    cout << s3 << " is not a palindromic word." << endl  << endl;  


  char s4[SIZE] = "I";
  cout << "Doing isPalindromic(s4)" << endl;
  if (isPalindromic(s4))       
    cout << s4 << " is a palindromic word." << endl  << endl;  
  else
      cout << s4 << " is not a palindromic word." << endl  << endl;  


  char s5[SIZE] = "Radar";
  cout << "Doing isPalindromic(s5)" << endl;
  if (isPalindromic(s5))       
    cout << s5 << " is a palindromic word." << endl  << endl;  
  else
    cout << s5 << " is not a palindromic word." << endl  << endl;  


}//main

// Function to check the length of the C string
int myStrlen(char *s1)
{
  //Data
  int result = 0;//the length of the string

  //get length of the string
  while(*s1 != '\0')
  {
    result++;
    s1++;
  }//while
  *s1 = '\0';

  return result;
}//myStrlen

// Function to return the concatenation of C-strings
void myStrcat (char *s1, char *s2)
{
  //Data
  int i = 0; //index loop
  int j = 0; //index loop

  //concatenate C-strings
  for (i = 0; s1[i] != '\0'; i++)
  {
    i++;
  }//for

  // Remove null character
  i--;
  
  for (j = 0; s2[j] != '\0'; j++, i++)
  {
    s1[i] = s2[j];
  }//for
  
  //assign null char to the end of the C-string
  s1[i] = '\0';
}//myStrcat

// Function copy the content of the second string to the first
void myStrcpy (char *s1, char *s2)
{ 
  //Data
  int i = 0;//index loop

  //copy the content of the second string to the first
  for (i = 0; s1[i] != '\0'; i++)
  {
    s1[i] = s2[i];
  }//for
  
  //assign null char to the end of the C-string
  s1[i] = '\0';
}//myStrcpy 

void myStrcat_BC (char *s1, char *s2, int SIZE)
{
 
  //Data
  int i = 0; //index loop
  int j = 0; //index loop
  
  if ( (myStrlen(s1) + myStrlen(s2)) < SIZE ){


    //concatenate C-strings
    for (i = 0; s1[i] != '\0'; i++)
    {
      i++;
    }//for

    // Remove null character
    i--;

    for (j = 0; s2[j] != '\0'; j++, i++)
    {
      s1[i] = s2[j];
    }//for
    
    //assign null char to the end of the C-string
    s1[i] = '\0';


  }
  else {
    cout << "Error: Out of bounds" << endl;
  }
 
}

char toLower(char c)
{
  if(c >= 'A' && c <= 'Z')
  {
    return char(c + 32);
  }
  return c;
}


bool isPalindromic (char *s1)
{
  int i;
  int end;
  end = myStrlen(s1) - 1;
  for (i = 0; i < end; i++, end--)
  {
    if( toLower(s1[i]) != toLower(s1[end]) )
    {
      return false;
    }
    
  }
  return true;
}


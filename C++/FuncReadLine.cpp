// This program uses the getline function to read a line of
// data from the file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct shipRecord
{
    string name;
    etc...
};

void removeLeadingBlanks(string &s)
{
    //string t = s;
    while (s[0] == ' ')
    {
        s = s.substr(1); // Remove the "head" of the string, number 1 means index, starting from the second position to get string
    }

    return;
}

string get1stToken(string &s)
{
    const int SIZE = 10;
    shipRecord *shipArr[SIZE];
    string head = "";
    while (s[0] != ' ')//if it's not blank we add character to head
    {
        head = head + s.substr(0,1); // Append the "head" of the string, keep adding not blank characters
        s = s.substr(1);
    }

    return head;
}

int main()
{
   string input;		// To hold file input
   fstream nameFile;	// File stream object

MgrClass mc;//class


   // Open the file in input mode.
   nameFile.open("shipRecords.txt", ios::in);

   // If the file was successfully opened, continue.
   if (nameFile)
   {
       // Read an item from the file.
       getline(nameFile, input);

       // While the last read operation
       // was successful, continue.
       while (nameFile)
       {
          // Display the last item read.
          cout << input << endl;

          // Read the next item.
          getline(nameFile, input);
       }

       // Close the file.
       nameFile.close();
   }
   else
   {
      cout << "ERROR: Cannot open file.\n";
   }
   return 0;
}

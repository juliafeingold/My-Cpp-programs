/*
1.	What getline() functions can be used? (We might have more than one getline() functions. What are these functions?)
It is used to input a line from user or read a line from file.

2.	We need to use one or two functions to complete the works. What are the names of these functions? What are they for? Are they Call-By-Value or Call-By-Reference? Why?

We need to use string::find()function to find the position of the string delimiter, then use string::substr() to get a toke.
*/

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    string token1;
    string s1 = " ABC \"D. Trump\" E ";
    string delimiter1 = " ";
    string delimiter2 = "\"";

    size_t pos = 0;

    while((pos = s1.find(delimiter1)) != string::npos)
    {
        token1 = s1.substr(0, pos);
        cout << token1 << endl;
        s1.erase(0, pos + delimiter1.length());
    }
    cout << s1 << endl;


    return 0;
}

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

    void removeLeadingBlanks(string &s)
    {
        //string t = s;
        while (s[0] == ' ')
        {
            s = s.substr(1); // Remove the "head" of the string, number 1 means index, starting from the second position to get string
        }

        return;
    }

    string getQuotedToken(string &s)
    {
        string head = "";
        s.erase(0,1);
        removeLeadingBlanks(s);
        head = head + s.substr(0,1); // Append the "head" of the string, keep adding not blank characters
        s = s.substr(1);
        while (s[0] != '\"')//if it's not blank we add character to head
        {
            head = head + s.substr(0,1); // Append the "head" of the string, keep adding characters
            s = s.substr(1);
        }

        // head = head + s.substr(0,1); // Append the "head" of the string, keep adding not blank characters
        s = s.substr(1);

        return head;
    }

    string get1stToken(string &s)
    {
        string head = "";
        if (s[0] == '\"'){
            return getQuotedToken(s);
        }
        else if (s[0] == '\0'){
            return s;
        }
        else
        {
            while (s[0] != ' ')//if it's not blank we add character to head
            {
                head = head + s.substr(0,1); // Append the "head" of the string, keep adding not blank characters
                s = s.substr(1);
            }

            return head;
        }
    }


    void parseString(string s)
    {
        while (s[0] != '\0'){
            removeLeadingBlanks(s);
            cout << get1stToken(s);
            if (s[0] != '\0'){
                cout << endl;
            }
        }

    }


int main()
{
    string str1 = " \"Royal Caribbean International \" \" Jurre Van Wouw\" 1987 \"For Sale\" ";
    parseString(str1);
    /// The function parseString() will display four tokens:
    /// Royal Caribbean International
    /// Jurre Van Wouw
    /// 1987
    /// For Sale
    string str2 = " \" Royal Caribbean International \" \" Jurre Van Wouw\" 1987 \"For Sale\" \\10\\02\\2009 ";
    parseString(str2);
    /// The function parseString() will display five tokens:
    /// Royal Caribbean International
    /// Jurre Van Wouw
    /// 1987
    /// For Sale
    /// 10\02\2009
    string str3 = "\" Royal Caribbean International \"\" Jurre Van Wouw\" 1987 ";
    parseString(str3);
    /// The function parseString() will display three tokens:
    /// Royal Caribbean International
    /// Jurre Van Wouw
    /// 1987

    return 0;
}
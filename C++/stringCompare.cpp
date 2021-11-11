//libraries
#include <iostream>
#include <cstring>
#include <string>


using namespace std;


int main()
{
    string str1 = "Hellonnnnnn";
    string str2 = "Hello";
    string empty = "";

    if(str1.compare(str2) == 0)
    {

        cout << " Two string are the same " << str1 << " and " << str2 << endl;

    }
    else
        cout << "They are not the same " << str1 << " and " << str2 << endl;

    // if(str1 == str2)
    cout << "length: " << str1.length() << endl;
    cout << str1.at(0) << endl;
    cout << "size: " << str1.size() << endl;
    cout << "size of: " << sizeof(str1) << endl;

    return 0;
}


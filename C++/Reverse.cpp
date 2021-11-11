#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int getFact(int n);
string revString(string &s);

int main()
{
    int number = 3;
    string s = "abcde";

    //output factorial
    cout << number << " factorial: " << getFact(number) << endl;

    //reverse the string
    cout << endl;
    cout << "Reversed string: " << revString(s) << endl;


    return 0;
}

int getFact(int n)
{
    if(n <= 1)
        return 1;
    else
    {
        return n * getFact(n - 1);
    }
}

string revString(string &s)
{
    string b(s);	//copy s to b
	reverse_copy(s.begin(),s.end(),b.begin());

	return b;
}

/*string revString (string str)






*/

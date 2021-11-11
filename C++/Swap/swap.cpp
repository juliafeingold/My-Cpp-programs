#include <fstream>
#include <iostream>
using namespace std;


void myPassByRef1(int &Sum2);
void myPassByRef2(int *SumPtr);
void mySwap(int &n1,int &n2);

int main()
{
     int sum = 0, n1 = 1, n2 =2;

     cout << "Before -- n1: " << n1 << "; n2: " << n2 << endl;
     mySwap(n1, n2);
     cout << "After -- n1: " << n1 << "; n2: " << n2 << endl;

     myPassByRef1(sum);
     cout << "The sum of the integers are: " << sum << endl;

     sum = 0;
     myPassByRef2(&sum);
     cout << "The sum of the integers are: " << sum << endl;
     return 0;
}

// Enter your code for mySwap() function here

void myPassByRef1(int &Sum2)
{
    ifstream inputFile;
    int iToken = 0;

    inputFile.open("integers.txt");
    while (inputFile >> iToken)
    {
        Sum2 = Sum2 + iToken;
    }
    inputFile.close();
}


void mySwap(int &n1,int &n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

void myPassByRef2(int *SumPtr)
{
    ifstream inputFile;
    int iToken = 0;

    inputFile.open("integers.txt");
    while (inputFile >> iToken)
    {
        *SumPtr = *SumPtr + iToken;
    }
    inputFile.close();
}

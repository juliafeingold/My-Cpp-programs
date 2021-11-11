#include <fstream>
#include <iostream>

using namespace std;

void mySwap(int &, int &);
void myPassByRef1(int &);
void myPassByRef2(int *);

int main()
{
    int sum = 0;
    int n1 = 1;
    int n2 = 2;


    cout << "Before -- n1: " << n1 << "; n2: " << n2 << endl;
    mySwap(n1, n2);
    cout << "After -- n1: " << n1 << "; n2: " << n2 << endl;
    myPassByRef1(sum);
    cout << "The sum of the integers in pass by Ref1 are: " << sum << endl;
    sum = 0;
    myPassByRef2(&sum);
    cout << "The sum of the integers in pass by Ref2 are: " << sum << endl;
    return 0;
}


///*********************************************
void mySwap(int &a, int &b)
{
        int temp;
        temp = a;
        a = b;
        b = temp;
}


///*******************************************
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


///********************************************
void myPassByRef2(int *Sum3)
{
 ifstream inputFile;
 int iToken = 0;
 inputFile.open("integers.txt");

 while (inputFile >> iToken)
 {
    *Sum3 = *Sum3 + iToken;
 }
 inputFile.close();
}

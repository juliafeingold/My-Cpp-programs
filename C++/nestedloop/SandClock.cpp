#include <iostream>

using namespace std;

int main()
{
    const int SIZE  = 9;
    char arr[SIZE][SIZE];


    /// Display the content of the array
    for (int row=0; row < SIZE; row++)
    {
        for (int col=0; col < SIZE; col++)
        {
            if(row + col < SIZE - 1 && row > col
               || row + col > SIZE - 1 && row < col)
                cout << '*';
            else
                cout << ' ';
        }
        cout << endl;
    }
    return 0;
}

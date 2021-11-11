#include <iostream>

using namespace std;

int main()
{
    const int SIZE  = 9;
    char arr[SIZE][SIZE];

    /// Initialize the array with blanks
    for (int row=0; row < SIZE; row++)
    {
        for (int col=0; col < SIZE; col++)
        {
                arr[row][col] = ' ';
        }
    }

    /// Draw the diagonal line from top left corner to bottom right corner
    for (int row=0; row < SIZE; row++)
    {
        for (int col=0; col < SIZE; col++)
        {
            if (row < col)
                arr[row][col] = '*';
        }
    }

    /// Display the content of the array
    for (int row=0; row < SIZE; row++)
    {
        for (int col=0; col < SIZE; col++)
        {
            cout << arr[row][col];
        }
        cout << endl;
    }
    return 0;
}

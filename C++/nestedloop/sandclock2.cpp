#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 9;
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            if((row + col) % 2 != 1)
                cout << '*';
            else
                cout << '-';
        }
        cout << endl;
    }

}

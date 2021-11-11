#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const int SIZE = 41;
    int r;

    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            r = sqrt(pow((row - 20), 2) + pow((col - 20), 2));
            if (r < 20)
                cout << '*';
            else
                cout << ' ';
        }
        cout << endl;
    }

}




#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const int SIZE = 100;
    int r;

    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            r = sqrt(pow((row - 10), 2) + pow((col - 10), 2));
            if (r < 5)
                cout << '*';
            else
                cout << ' ';
        }
        cout << endl;
    }

}




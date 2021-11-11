#include <ctime>
#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    srand(time(0));
    const int SIZE = 41;
    int r;
    int ran;

    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            r = sqrt(pow((row - 20), 2) + pow((col - 20), 2));
            if (r < 20)
            {
                ran = rand() % 1;
                if(ran == 1)
                {
                    cout << '*';
                }
                else
                    cout << ' ';
            }
            else
                cout << ' ';
        }
        cout << endl;
    }

}




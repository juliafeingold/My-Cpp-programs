#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const int SIZE = 100;
    int r;
    int maxR = 25;
    float chanceR;

    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            r = sqrt(pow((row - 50), 2) + pow((col - 50), 2));
            chanceR = (float) r / (float) maxR;
        
            if (r < maxR)
                if((rand() % 100) > (chanceR * 100))
                    cout << '*';
                else
                    cout << ' ';    
            else
                cout << ' ';
        }
        cout << endl;
    }

}




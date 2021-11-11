#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const int SIZE = 40;
    int r;

    //Display a square
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {

            if(col == 0 || col == SIZE - 1|| row == 0 || row == SIZE - 1)
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }
    cout << endl << endl << endl;

    //Display Pyramid
    for (int row=0; row < SIZE; row++)
    {
        for (int col=0; col < SIZE; col++)
        {
            if(row + col >= SIZE - 1 && col <= row)
                cout << '*';
            else
                cout << ' ';
        }
        cout << endl;
    }

    cout << endl << endl << endl;

    //Display BMW logo

    int H = 20;
    int K = 20;

    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            r = sqrt(pow((row - K), 2) + pow((col - H), 2));
            if (r < 10) 
            {
                if (col > H && row > K){
                    cout << '*';
                }
                else if (col < H && row < K){
                    cout << '*';
                }
                else if (r == 9)
                    cout << '*';
                else
                    cout << ' ';
            }
            else
                cout << ' ';
        }
        cout << endl;
    }

    //target
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            r = sqrt(pow((row - K), 2) + pow((col - H), 2));
            if (r < 10) 
            {
                if(r == 9)
                    cout << '*';
                else if(r < 3)
                    cout << '*';
                else 
                    cout << ' ';    
            }
            else
                cout << ' ';
        }
        cout << endl;
    }

    //donut
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            r = sqrt(pow((row - K), 2) + pow((col - H), 2));
            if (r < 10) 
            {
                if(r < 7)
                    cout << ' ';
                else 
                    cout << '*';    
            }
            else
                cout << ' ';
        }
        cout << endl;
    }

    //donut
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            r = sqrt(pow((row - K), 2) + pow((col - H), 2));
            if (r < 10) 
            {
                if(r < 4)
                    cout << '*';
                else if (r >= 7)    
                    cout << '*';
                else 
                    cout << ' ';    
            }
            else
                cout << ' ';
        }
        cout << endl;
    }

    //Display a square *+
    bool plus = false;

    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {

            if(col <= SIZE || row <= SIZE)
            {
                if(plus)
                {
                    cout << " + ";
                    plus = false;
                } 
                else
                {
                    cout << " * ";
                    plus = true;
                }
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
        plus = false;
    }
    cout << endl << endl << endl;



}







 
       

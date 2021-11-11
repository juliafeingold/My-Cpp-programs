#include <iostream>
using namespace std;
/// The getMax() function returns the maximum
/// integer in the sequence of n integers pointed
/// by p.
int getMax(int *p, int n)
{
    int maxInt = 0;
    int i;

    maxInt = p[0];
    for(i = 0; i < n; i++)
    {
        if(p[i] > maxInt)
            maxInt = p[i];
    }

    return maxInt;
}
int main()
{
    const int SIZE = 6;
    int arr[SIZE] = {3, 5, 9, 2, 6, 8};
    cout << getMax(arr, SIZE);
return 0;
}

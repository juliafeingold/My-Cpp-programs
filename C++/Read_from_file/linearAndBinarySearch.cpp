/*
Step 1:
    Complete the linearSearch() function.

Step 2:
     do a binary search on the array.

*/
#include <iostream>

using namespace std;

int linearSearch(int arr[], int SIZE, int target);
int binarySearch(int arr[], int l, int r, int target);

int main()
{
    int const SIZE = 10;
    int target = -1;
    int arr[SIZE] = {5, 6, 2, 9, 0, 1, 8, 7, 3, 4};

    target = 7;
    int pos = linearSearch(arr, SIZE, target);
    if ( pos >= 0)
        cout << "The target " << target << " is at position " << pos << "." << endl;
    else
        cout << "The target " << target << " cannot be found. " << endl;

    target = 17;
    pos = linearSearch(arr, SIZE, target);
    if ( pos >= 0)
        cout << "The target " << target << " is at position " << pos << "." << endl;
    else
        cout << "The target " << target << " cannot be found. " << endl;

    int arr2[SIZE] = {10, 11, 12, 29, 30, 41, 78, 97, 103, 154};

    target = 97;
    pos = binarySearch(arr2, 0, SIZE - 1, target);
    if ( pos >= 0)
        cout << "The target " << target << " is at position " << pos << "." << endl;
    else
        cout << "The target " << target << " cannot be found. " << endl;

    target = 27;
    pos = binarySearch(arr2, 0, SIZE - 1, target);
    if ( pos >= 0)
        cout << "The target " << target << " is at position " << pos << "." << endl;
    else
        cout << "The target " << target << " cannot be found. " << endl;



    return 0;
}

int linearSearch(int arr[], int SIZE, int target)
{
    //Data
    int i;

    //go throw the array to find a target
    for(i = 0; i < SIZE; i++)
    {
        if(arr[i] == target)
            return i;
    }
    return -1;
}


int binarySearch(int arr[], int l, int r, int target)
{
    while (l <= r)
    {
        int m = l + (r-l)/2;

        // Check if targer is present at middle
        if (arr[m] == target)
            return m;

        // If target greater, ignore left half
        if (arr[m] < target)
            l = m + 1;

        // If target is smaller, ignore right half
        else
            r = m - 1;
    }

    return -1;
}

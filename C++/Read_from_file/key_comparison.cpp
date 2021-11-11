#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>
#include <iomanip>
#include <sstream>
#include <string>



using namespace std;


int linearSearch(int arr[], int SIZE, int target, bool &notFound);
void selectSort(int arr[], int SIZE);
int binarySearch(int arr[], int l, int r, int target, bool &notFound);
int getMedian(int arr1[],  int arr2[], int n);
int median(int arr[], int n);



int main()
{
    //Data
    srand(time(0));
    int const SIZE = 1000;
    int const TARGETSIZE = 5;
    int maxRandNum = 2001; //max number from range of 0 to 2000
    int target = -1;
    int arr1[SIZE];
    int targArr[TARGETSIZE];
    int pos;
    int i;
    int count = 1;
    bool notFound = false;
    int average = 0;
    int arr2[SIZE];
    int n1 = sizeof(arr1) /  sizeof(arr1[0]); 
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // //generte 5 random numbers from 0 to 2000
    cout << endl;
    cout << setw(6) << " " << "Target Number " << setw(20) << " " << "# of Key Comparison" << endl << endl;

    // Generate random numbersarr1
    for (i = 0; i < SIZE; i++)
    {
        arr1[i] = (rand() % maxRandNum);
        // cout << arr1[i] << " ";

    }

    cout << endl;

    //generate random target numbers
    for (i = 0; i < TARGETSIZE; i++)
    {
        targArr[i] = (rand() % maxRandNum);

    }

    //output linear search formatted target numbers
    for( i = 0; i < TARGETSIZE; i++)
    {
        cout << count << setw(5) << "\t" << targArr[i];
        count++;
        pos = linearSearch(arr1, SIZE , targArr[i], notFound);

        //add all key comparisons
        average += pos;

        //output key comparison
        if(notFound) 
        {
            cout << "\t" << setw(32) << "(Not Found)";
            cout << right << setw(10) << pos  << endl;

        }
        else
        {
            cout << "\t" << right << setw(41) << pos << endl;
        }
        // cout << right << setw(32) << pos  << endl;
        notFound = false;
    }

    //find average
    average = average / TARGETSIZE;
    cout << endl;
    cout << "\t" << "Average" << " " << right << setw(42) << average << endl;
    cout << endl << endl << endl;

    selectSort(arr1, SIZE);
    count = 1;
    //binary search output
    for( i = 0; i < TARGETSIZE; i++)
    {   
        cout << count << setw(5) << "\t" << targArr[i];
        count++;
        pos = binarySearch(arr1, 0, SIZE - 1, targArr[i], notFound);

        //add all key comparisons
        average += pos;

        //output key comparison
        if(notFound) 
        {
            cout << "\t" << setw(32) << "(Not Found)";
            cout << right << setw(10) << pos  << endl;

        }
        else
        {
            cout << "\t" << right << setw(41) << pos << endl;
        }
        // cout << right << setw(32) << pos  << endl;
        notFound = false;
    }

    //find average
    average = average / TARGETSIZE;
    cout << endl;
    cout << "\t" << "Average" << " " << right << setw(42) << average << endl;

    cout << endl;
    //output median number
    if (n1 == n2) 
        cout << "\t" << "Median is " << getMedian(arr1, arr2, n1) << endl; 
    else
        cout << "Doesn't work for arrays " << "of unequal size"; 

    return 0;
}

int linearSearch(int arr[], int SIZE, int target, bool &notFound)
{
    //Data
    int i;
    int comparison = 0;

    //go throw the array to find a target
    for(i = 0; i < SIZE; i++)
    {
        comparison++;
        if(arr[i] == target)
        {
            return comparison;
        }
            
    }
    notFound = true;
    return comparison;
}

void selectSort(int arr[], int SIZE) 
{

    //Data
    int i = 0; // start scan
    int j = 0; //index
    int minIndex;
    int minValue;

    for (i = 0; i < (SIZE - 1); i++) 
    {
        minIndex = i;
        minValue = arr[i];
        for (j = i + 1; j < SIZE; j++) 
        {
            if (arr[j] < minValue)
            {
                minValue = arr[j];
                minIndex = j;
            }
        }
        arr[minIndex] = arr[i];
        arr[i] = minValue;  
    } 
}

int binarySearch(int arr[], int l, int r, int target, bool &notFound)
{
    //Data
    int comparison = 0;
    notFound = false;
    int m;

    while (l <= r)
    {
        m = l + (r-l)/2;
        comparison++;
        // Check if targer is present at middle
        if (arr[m] == target)
            return comparison;

        // If target greater, ignore left half
        if (arr[m] < target)
            l = m + 1;

        // If target is smaller, ignore right half
        else 
            r = m - 1;
    }
    notFound = true;
    return comparison;
}

int getMedian(int arr1[],  int arr2[], int n) 
{ 
    //Data
    int m1 = median(arr1, n);  
    int m2 = median(arr2, n); 

    if (n <= 0) 
        return -1; 
    if (n == 1) 
        return (arr1[0] +  arr2[0]) / 2; 
    if (n == 2) 
        return (max(arr1[0], arr2[0]) +  min(arr1[1], arr2[1])) / 2; 
    
    if (m1 == m2) 
        return m1; 
  
    if (m1 < m2) 
    { 
        if (n % 2 == 0) 
            return getMedian(arr1 + n / 2 - 1,  arr2, n - n / 2 + 1); 
        return getMedian(arr1 + n / 2, arr2, n - n / 2); 
    } 
  
    if (n % 2 == 0) 
        return getMedian(arr2 + n / 2 - 1, arr1, n - n / 2 + 1); 
    return getMedian(arr2 + n / 2, arr1, n - n / 2); 
} 
  
int median(int arr[], int n) 
{ 
    if (n % 2 == 0) 
        return (arr[n / 2] +  arr[n / 2 - 1]) / 2; 
    else
        return arr[n / 2]; 
} 
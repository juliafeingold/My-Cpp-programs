// This program demonstrates how to initialize a vector and display the values in the vector.
/*
    1. Complete the function getMax()

    2. Could you list the points which vector is the same with array?

    3. What is the size() function for? Why when using array, there is no such function available
       for us?

    4. In what ways vector is different from array?

*/
#include <iostream>
#include <vector>
 using namespace std;

int getMax(vector<int> vet)
{
    int maxNo = 0;

    for (int i = 0; i < vet.size(); i++)
    {
        if (maxNo < vet[i])
            maxNo = vet[i];
    }
    return maxNo;
}

int main()
{
   // Define and initialize a vector.
   vector<int> numbers { 10, 20, 30, 50, 40 };

   // Display the vector elements.
   for (int i = 0; i < numbers.size(); i++)
      cout << numbers[i] << endl;

   cout << "Maximum value:" <<  getMax(numbers);

   return 0;
}

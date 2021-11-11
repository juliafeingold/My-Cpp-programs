#include <iostream>

using namespace std;

int main()
{
const int SIZE = 5;
int arr[SIZE] = {11, 22, 33, 44, 55};
int * p = nullptr;


/// Part 1 -- This part is correct
cout << "Part 1: Display the values in the array" << endl;
cout << endl;
for (int i = 0; i < SIZE; i++) {
    cout << arr[i] << " ";
} 
cout << endl << endl << endl;

/// Part 2 -- Need your 

cout << "Part 2: Display the address of each element of the array" << endl;
cout << endl;

for (int i = 0; i < SIZE; i++) {
    cout << &arr[i] << " ";
}
cout << endl << endl << endl;;

/// Part 3 -- Need your work
cout << "Part 3: Display the address of each element of the array using pointer arithmetic" << endl;
cout << endl;

p = arr;
for (int i = 0; i < SIZE; i++) {
    cout << p + i << " ";
}
cout << endl << endl << endl;

/// Part 4 -- Need your work
cout << "Part 4: Display the int value of each element of the array using pointer arithmetic" << endl;
cout << endl;

for (int i = 0; i < SIZE; i++){
    cout << *(arr + i) << " ";
}    
cout << endl << endl << endl;

return 0;
}
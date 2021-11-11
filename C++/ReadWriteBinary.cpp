#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    const int iSize = 4;
    char charArr1[iSize] = {'A', 'B', 'C', 'D'};
    char charArr2[iSize];
    fstream dataFile;

    /// Step 1
    //open  the binary file and indicate for output
    dataFile.open("test.dat", ios::out|ios::binary);
    cout << "Writing the characters in charArr1 to the file.\n";
    dataFile.write(charArr1, sizeof(charArr1)); // get characters from the array and write them in dataFile , 4 bytes
    dataFile.close();

    /// Step 2
    //open output dataFile , ios::app
    dataFile.open("test.dat", ios::out|ios::app|ios::binary);
    dataFile.write(charArr1, sizeof(charArr1));
    dataFile.close();

    /// Step 3
    //open input file, and read from the dataFile and write to charArr2
    dataFile.open("test.dat", ios::in|ios::binary);
    cout << "Reading the characters from the file into charArr2.\n";
    dataFile.read(charArr2, sizeof(charArr2));
    dataFile.close();

    /// Step 4
    for (int i = 0; i < iSize*5 ; i++)
        cout << charArr2[i] << " ";

     return 0;
}


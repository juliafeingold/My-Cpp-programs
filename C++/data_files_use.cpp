#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char char1;
    char char2;
    fstream dataFile;
    fstream dataFile1;
    fstream dataFile2;

    /// Step 1
    dataFile.open("NotesBetweenTwoSisters1.txt", ios::out|ios::binary);
    dataFile.open("NotesBetweenTwoSisters2.txt", ios::out|ios::binary);
    dataFile.get(char1);
    dataFile.get(char2);
    dataFile1.close();
    dataFile2.close();


    dataFile.open("NotesBetweenTwoSisters1.txt",ios::in|ios::binary);
    dataFile.put(char2);
    dataFile.close();

    /// Step 3
    dataFile.open("NotesBetweenTwoSisters1.txt", ios::in|ios::binary);
    dataFile.get(char2);
    dataFile.close();

     return 0;
}



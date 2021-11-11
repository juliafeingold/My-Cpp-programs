#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

string removeSymbols(string w);
string lowerString(string w);


int main ()
{
    //Data
    ifstream nameFile;	
    string word;
    map<string, int> wordMap;
    map<string, int>::iterator iter;


    // Open the file and read the data from the file
    nameFile.open("NotesBetweenTwoSisters.txt");

    while(!nameFile.eof())
    {
        nameFile >> word;
        word = lowerString(word);
        word = removeSymbols(word);

        //find the words and insert them to the map
        iter = wordMap.find(word);
        if(iter == wordMap.end())
        {
            wordMap.insert(pair<string, int>(word, 1));
        }
        else
        {
            iter->second++;
        }
    }

    //print the map
    for(iter = wordMap.begin(); iter !=wordMap.end(); iter++)
    {
        cout << iter->first << "     " << iter->second << endl;
    }
    cout << endl;    

    // Close the file.
    nameFile.close();

   return 0;
}

//function to remove symbols
string removeSymbols(string w)
{
    w.erase(remove(w.begin(), w.end(), ','), w.end());
    w.erase(remove(w.begin(), w.end(), '.'), w.end());
    w.erase(remove(w.begin(), w.end(), '"'), w.end());

    return w;
}

//function to convert all to lower case
string lowerString(string w)
{

    //convert all words to lower case
    for(int i = 0; i < w.length();i++)
    {
        w[i]= tolower(w[i]);
    }
    return w;
}
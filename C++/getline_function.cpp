// This program uses the getline function to read a line of
// data from the file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct shipRecord
{
    int number;
    int type;
    string name;
    int year;
    int capacity;
    shipRecord * next;
};

class shipMng {
    private:
    // const int SIZE = 10;
    shipRecord record[10];


    public:
    int hash(int key){
        return (key % 10);
    }

    shipMng(string filename){
        string input;		// To hold file input
        fstream nameFile;	// File stream object
        shipRecord sr;
        int key;
        shipRecord * recHead;


        shipRecord test;
        test.number = 1;
        test.type = 1;
        test.next = nullptr;
        // recHead = test;
        // record[0] = recHead;

        // Open the file in input mode.
        nameFile.open(filename, ios::in);

        // If the file was successfully opened, continue.
        if (nameFile)
        {
            // Read an item from the file.
            getline(nameFile, input);

            // While the last read operation
            // was successful, continue.
            while (nameFile)
            {
                parseShipRecordLine(input, &sr);
                key = hash(sr.number);
                // Display the last item read.
                cout << "HASH  " << key << endl;

                record[key] = sr;

                cout << "GOT Record with value: " <<record[key].number << endl << endl;

                // Read the next item.
                getline(nameFile, input);
            }

            // Close the file.
            nameFile.close();
        }
        else
        {
            cout << "ERROR: Cannot open file.\n";
        }
    }

    void removeLeadingBlanks(string &s)
    {
        //string t = s;
        while (s[0] == ' ')
        {
            s = s.substr(1); // Remove the "head" of the string, number 1 means index, starting from the second position to get string
        }

        return;
    }

    string get1stToken(string &s)
    {
        const int SIZE = 10;
        shipRecord *shipArr[SIZE];
        string head = "";
        while (s[0] != ' ')//if it's not blank we add character to head
        {
            head = head + s.substr(0,1); // Append the "head" of the string, keep adding not blank characters
            s = s.substr(1);
        }

        return head;
    }

    string getQuotedToken(string &s)
    {
        string head = "";
        head = head + s.substr(0,1); // Append the "head" of the string, keep adding not blank characters
        s = s.substr(1);
        while (s[0] != '\"')//if it's not blank we add character to head
        {
            head = head + s.substr(0,1); // Append the "head" of the string, keep adding not blank characters
            s = s.substr(1);
        }

        head = head + s.substr(0,1); // Append the "head" of the string, keep adding not blank characters
        s = s.substr(1);

        return head;
    }

    void parseShipRecordLine(string line, shipRecord * record)
    {
        int number;
        number = stoi(get1stToken(line));
        record->number = number;
        removeLeadingBlanks(line);

        int type;
        type = stoi(get1stToken(line));
        record->type = type;
        removeLeadingBlanks(line);
        
        
        string name;
        name = getQuotedToken(line);
        record->name = name;
        removeLeadingBlanks(line);

        int year;
        year = stoi(get1stToken(line));
        record->year = year;
        removeLeadingBlanks(line);

        int capacity;
        capacity = stoi(line);
        record->capacity = capacity;

        cout << "DEBUG!!" << record->number << " " << record->type << " " << record->name << " " << record->year << " " << record->capacity << endl;
    }
};


int main()
{
    shipMng manager("shipRecords.txt");
    
   return 0;
}

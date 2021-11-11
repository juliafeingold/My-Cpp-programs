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

    shipRecord() : number(0), type(0), name(""), year(0), capacity(0), next(nullptr){}
};

class shipMng {
    private:
    // const int SIZE = 10;
    shipRecord *record[10];


    public:
    int hash(int key){
        return (key % 10);
    }

    shipMng(string filename){
        string input;		// To hold file input
        fstream nameFile;	// File stream object
        shipRecord *sr;
        shipRecord *tail;
        int key;
        shipRecord * recHead;


        // Initialize class record
        for (int i = 0; i < 10; i++){
            record[i] = NULL;
        }



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
                sr = new shipRecord();
                parseShipRecordLine(input, sr);
                key = hash(sr->number);

                if (record[key] == NULL)
                    record[key] = sr;
                else{
                    tail = record[key];
                    while (tail->next != NULL){
                        tail = tail->next;
                    }
                    tail->next = sr;
                }

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

    ~shipMng(){
        for (int i=0; i < 10; i++){
            delete record[i];
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

    }

    void DisplayOne(int number){
        int key;
        shipRecord *tail;
        key = hash(number);

        if (record[key] == NULL){
            cout << "Record " << number << "doesn't exist" << endl;
        }
        else {
            tail = record[key];
            while (tail->number != number && tail->next != NULL){
                tail = tail->next;
            }
            cout << "Ship Serial Number: " << tail->number << endl;
            
            if (tail->type == 1){
                cout << "Ship Type: Cruise Ship" << endl;
            }
            else{
                cout << "Ship Type: Cargo Ship" << endl;
            }

            cout << "Ship Name: " << tail->name << endl;
            cout << "Ship Year Built: " << tail->year << endl;
            cout << "Ship Capacity: " << tail->capacity << endl << endl;
        }



    }
};


int main()
{
    shipMng manager("shipRecords.txt");
    // Display All Ship Records
    manager.DisplayOne(1009);
    manager.DisplayOne(1010);
    manager.DisplayOne(1019);
    manager.DisplayOne(1029);
    manager.DisplayOne(1039);
    manager.DisplayOne(1014);
    
   return 0;
}

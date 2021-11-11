////The cin.clear() clears the error flag on cin (so that future I/O operations will work correctly), 
//and then cin.ignore(32768, '\n') skips to the next newline (to ignore anything else on the same line as the non-number so that it does not cause another parse failure). 
//It will only skip up to 32768 characters, so the code is assuming the user will not put in a very long, invalid line.


#include <iomanip>
#include <algorithm> 
#include <string>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

struct Student
{
    int ssn;
    string name;
    char gender;
};

void delLeadingBlanks(string &line);
string get1stToken(string &s);
Student parseString(string line, string &operation);
string getQuotedToken(string &s);
bool isStringDigit(string str);

class StudentMgr
{
    private:

    vector<Student> sList;
    void insertStudent(Student s);
    void updateStudent(int ssn, string name, char gender);
    void deleteStudent(int ssn);
    int findStudentIndex(int ssn); //binary search using SSN
    void sortBySSN();
    public:
    StudentMgr();
    ~StudentMgr();
    void displayStudent(int);
    void displayAll();
};

StudentMgr::StudentMgr()
{

    // 1. Use getline() to read one line of data in students.txt
    string input;		// To hold file input
    fstream nameFile;	// File stream object
    string operation;
    Student s;
    int i =0;
    bool tryAgain = true;

    // Open the file in input mode.
    nameFile.open("students_test.txt");

    // If the file was successfully opened, continue.
    if (nameFile)
    {
        // Read an item from the file.
        getline(nameFile, input);

        // While the last read operation
        // was successful, continue.
        while (nameFile)
        {
            tryAgain = true;
            while (tryAgain){
                tryAgain = false;
                try
                {
                    s = parseString(input, operation);

                }
                catch(string exceptionString)
                {
                    cout << exceptionString << endl;
                    // Get the next line to skip Insert/Update/Delete operations
                    getline(nameFile, input);
                    // Check for blank lines and remove them
                    while (input == "\n" || input == "\r" || input == "\0")
                    {
                        getline(nameFile, input);

                    }
                    tryAgain = true;
                }
            }
            //check if you need insert, delete or update the record
            if (operation == "I")
            {
                try
                {
                    insertStudent(s); 
                }
                catch(string exceptionString)
                {
                    cout << exceptionString << endl;
                }
                  
            }
            else if(operation == "U")
            {
                try
                {
                    updateStudent(s.ssn, s.name, s.gender);
                }
                catch(string exceptionString)
                {
                    cout << exceptionString << endl;
                }
                  
            }
            else if(operation == "D")
            {
                try
                {
                    deleteStudent (s.ssn);
                }
                catch(string exceptionString)
                {
                    cout << exceptionString << endl;
                }
            }
            
            // Read the next item.
            getline(nameFile, input);
            //  Remove newlines
            while (input == "\n" || input == "\r" || input == "\0")
            {
                getline(nameFile, input);
            }
        }

        // Close the file.
        nameFile.close();
    }
    else
    {
        cout << "ERROR: Cannot open file.\n";
    }
}
StudentMgr::~StudentMgr()
{
}

Student parseString(string line, string &operation)
{
    string token;
    Student s;
  
    delLeadingBlanks(line);  // Leading blanks are chopped off
    token = get1stToken(line); // The 1st token is chopped off
    operation = token;
    
    // Get Social Security Number
    delLeadingBlanks(line);  // Leading blanks are chopped off
    token = get1stToken(line); // The 1st token is chopped off

    //Exception
    if (!isStringDigit(token))
    {
        string exceptionString;
        exceptionString = "Error prompt, " + token + " is not an integer! ";
        throw exceptionString;
    }
    else
    {
        s.ssn = stoi(token);
    }
    
    // Get Name
    delLeadingBlanks(line);  // Leading blanks are chopped off
    token = getQuotedToken(line); // The 1st token is chopped off 
    s.name = token;

    // Get gender
    delLeadingBlanks(line);  // Leading blanks are chopped off
    token = get1stToken(line); // The 1st token is chopped off 
    s.gender = *token.c_str();

    return s;
    
}

void delLeadingBlanks(string &line) // Pass-by-reference
{
    while (line[0] == ' ') // while the first char is a blank
        line = line.substr(1); // Chop off the first char

}

string get1stToken(string &s)
{
    string head = "";
    while (s[0] != ' ' && s[0] != '\0')//if it's not blank we add character to head
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

void StudentMgr::insertStudent(Student s)
{
    int i = 0;
    i = findStudentIndex(s.ssn);

    if(i != -1)
    {
        string exceptionString;
        exceptionString = "Error prompt, " + to_string(s.ssn) + " record exist!";
        throw exceptionString;
    }
    else
    {
        sList.push_back(s);
        sortBySSN();
    }
}

bool compareStudents(Student a, Student b)
{
    return (a.ssn < b.ssn);
}

void StudentMgr::updateStudent (int ssn, string name, char gender)
{
    int i = 0;

    i = findStudentIndex(ssn);
    if(i == -1)
    {
        string exceptionString;
        exceptionString = "Error prompt, " + to_string(ssn) + " no such record!";
        throw exceptionString;
    }
    else
    {
        sList[i].ssn = ssn;
        sList[i].name = name;
        sList[i].gender = gender;
    }   
}

//Delete record
void StudentMgr::deleteStudent (int ssn)
{
    int i;
    i = findStudentIndex(ssn);

    if(i == -1)
    {
        string exceptionString;
        exceptionString = "Error prompt, " + to_string(ssn) + " no such record!";
        throw exceptionString;
    }
    else
    {
        sList.erase (sList.begin()+i);  
    }  
}

//display a single student's info
void StudentMgr::displayStudent(int ssn)
{
    //hold the index for the found student
    int i;

    //save the student found
    i = findStudentIndex(ssn);
    
    //display the student info
    cout << sList[i].ssn << " " << sList[i].name << " " << sList[i].gender << endl;
}

void StudentMgr::displayAll()
{
    for(vector<Student>::iterator it=sList.begin(); it!=sList.end(); ++it)
    {
        cout << it->ssn << " " << it->name << " " << it->gender << endl;
    }
}
int StudentMgr::findStudentIndex(int ssn)
{
    int l = 0;
    int r = sList.size()-1;

    /// If the record cannot be found, throw an integer -1 here to signal that
    /// an exception has occurred.
    while (l <= r)
    {
        int m = l + (r-l)/2;

        // Check if targer is present at middle
        if (sList[m].ssn == ssn)
            return m;

        // If ssn greater, ignore left half
        if (sList[m].ssn < ssn)
            l = m + 1;

        // If ssn is smaller, ignore right half
        else
            r = m - 1;
    }

    return -1;

}

void StudentMgr::sortBySSN()
{
    /// vector. After all records are appended, sort all of them at a time.
    sort(sList.begin(), sList.end(), compareStudents);
}

//check if the string is a digit
bool isStringDigit(string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (!isdigit(str.substr(i,1)[0]))
        return false;
    }
    return true;
}

int main() 
{
    StudentMgr sm;
    char input;

    while (input!='q') 
    {
        cout << endl << endl << "Select an option:" << endl;
        cout << "-----------------" << endl << endl;
        cout << "A. Display all student info" << endl;
        cout << "S. Display specific student" << endl;
        cout << "Q. Quit the program" << endl;
        cout << "--------------------------------" << endl;
        cout << "Enter selection: ";
        cin >> input;
        cin.clear();
        cin.ignore(32768, '\n');
        input = tolower(input);

        switch (input) 
        {
            case 'a':
            sm.displayAll();
                break;
            case 's':
            {
                cout << "Input SSN: ";int ssn;
                cin >> ssn;
                cin.clear();
                cin.ignore(32768,'\n');
                sm.displayStudent(ssn);
            }
        }
    }
    
return 0;
}
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

//Programmer defined data types
struct Student
{
    int ID;
    string Name;
    string Course;
    int Credit;
    int Score;
};

struct StudentRecord
{
    int ID;
    string Name;
    string Course;
    double GPA;
};

//Programmer defined functions
double getGrade(int score);
double getGpa(Student *stud, int ID, int count);


//main program
int main()
{
    const int SIZE = 999;
    fstream inputFile;
    string fileName = "StudentRecords.txt";
    string token;
    Student stud[SIZE];
    int count = 0;
    double GPA = 0;
    int i = 0;
    int j = 0;
    bool dup;

    inputFile.open(fileName.c_str(), ios::in);
    if (inputFile.is_open())
    {
        while(!inputFile.eof())
        {
            inputFile >> token;

            stud[count].ID = atoi(token.c_str());

            inputFile >> token;
            stud[count].Name = token;

            inputFile >> token;
            stud[count].Course = token;

            inputFile >> token;
            stud[count].Credit = atoi(token.c_str());

            inputFile >> token;
            stud[count].Score = atoi(token.c_str());

            count++;
        }
        inputFile.close();
    }
    else
    cout << "File cannot be opened.";

    // getGpa(stud, stud[count].ID, count);

    GPA = getGpa(stud, stud[count].ID, count);

    for (i = 0; i < count; i++)
    {
        for(j = 0; j < count; j++)
        {
            if(j != i);
            {
                if(stud[i].ID == stud[j].ID)
                {
                    dup = true;
                }
            }
            if(dup == true )
            {
                cout << stud[i].ID << "  " << stud[i].Name << endl;
                cout << "-------------" << endl << endl;
                cout << stud[i].Course << "  " << stud[i].Credit << "  " << stud[i].Score << endl;
                cout << "GPA: " << GPA << endl;
            }
        }
    }
    //     if(stud[i].ID == 12546 && i == 0)
    //     {
    //         cout << stud[i].ID << "  " << stud[i].Name << endl;
    //         cout << "-------------" << endl << endl;
    //     }
    //     i++;
    //     cout << stud[i].Course << " " << stud[i].Credit << " " << stud[i].Score << endl;?/
    //     //cout << "GPA: " << GPA << endl;
    // }


    //cout << "GPA: " << GPA << " of Amy" << endl;



    // cout << stud[0].ID << " " << stud[0].Name << " " << stud[0].Course << " " << stud[0].Credit << " " << stud[0].Score << endl;
    // cout << i << endl;

    return 0;
}

//function to get a range grade
double getGrade(int score)
{
    double gpa;

    if(score >= 90 && score <= 100)
    {
        gpa = 4.0;
    }
    else if(score >= 80 && score <= 89)
    {
        gpa = 3.0;
    }
    else if(score >= 70 && score <= 79)
    {
        gpa = 2.0;
    }
    else if(score >= 60 && score <= 69)
    {
       gpa = 1.0;
    }
    else if(score >=0 && score <=59)
    {
        gpa = 0.0;
    }
    else
        cout<< "Error invalid score" << endl;

    return gpa;
}

//calculate GPA
double getGpa(Student *stud, int ID, int count)
{
    double GPA = 0;
    double totalGrade = 0;
    int totalCredits = 0;
    int i = 0;

    //calculate range grade, total credits and GPA
    for(i = 0; i < count; i++)
    {
        if(stud[i].ID == ID)
        {
            totalGrade = totalGrade + getGrade(stud[i].Score) * stud[i].Credit;
            totalCredits =totalCredits + stud[i].Credit;
        }

        //calculate GPA
        GPA = totalGrade / totalCredits;
    }
    return GPA;
}

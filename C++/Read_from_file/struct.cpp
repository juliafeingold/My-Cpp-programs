#include <iostream>
using namespace std;

struct Student
{
    int Id;
    string Name, Course;
    int Credit, Score;
};

int main()
{
    Student st;
    cout << "Size of Student:" << sizeof(Student) << endl;
    cout << "Size of st:" << sizeof(st) << endl;
    cout << "Size of st.Id:" << sizeof(st.Id) << endl;
    cout << "Size of st.Name:" << sizeof(st.Name) << endl;
    return 0;
}

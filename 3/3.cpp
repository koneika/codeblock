#include <iostream>
using namespace std;
const int ask_times = 3;

struct student
{
    string name;
    string last_name;
    int age;
    float average_marks;
};

int main()
{

    student student[ask_times];

    //ask about data of students
    for(int i = 0; i < ask_times; i++)
    {
        cout << "student.name" << endl;
        cin >> student[i].name;
        cout << "student.last_name" << endl;
        cin >> student[i].last_name;
        cout << "student.age" << endl;
        cin >> student[i].age;
        cout << "student.average_marks" << endl;
        cin >> student[i].average_marks;
        system("cls");
    }

    // show about data of students
    for(int i = 0; i < ask_times; i++)
    {
        cout << "student.name and student.last_name " << student[i].name << " " << student[i].last_name << endl;
        cout << "student.age " << student[i].age << endl;
        cout << "student.average_marks " << student[i].average_marks << endl;
    }

    return 0;
}

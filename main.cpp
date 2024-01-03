#include <iostream>
using namespace std;
#include "Student.h"

int main()
{
    int students;
    cout << "STUDENTS REGISTERED: " << endl;

    Student *s1[students];

    for (int i = 0; i < students; i++)
    {
        int regis, age;
        string name;

        cout << "NAME: ";
        cin >> name;

        cout << "AGE: ";
        cin >> age;

        cout << "REGISTRATION: ";
        cin >> regis;

        s1[i] = new Student(name, age, regis);
    }
}
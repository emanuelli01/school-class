#include <iostream>
using namespace std;
#include "Student.h"

int main()
{
  int students;
  cout << "Students registered: ";
  cin >> students;
  
  Student *s1[students];
  
  for (int i = 0; i < students; i++)
  {
    string name;
    int age, regis;
    cout << "\n\n===== STUDENT REGISTRATION =====" << endl;
    
    cout << "Name: ";
    cin >> name;

    cout << "\nAge: ";
    cin >> age;

    cout << "\nRegistration: ";
    cin >> regis;

    s1[i] = new Student(name, age, regis);
  }
  for (int i = 0; i < 20; i++)
  {
    int option, reg;
    cout << "\n\nDo you want to check any student data?\n1-Yes\n2-List all\n3-Exit ... ";
    cin >> option;

    if (option == 1)
    {
      cout << "Type registration number: ";
      cin >> reg;
      for(int k = 0; k < students; k++)
      {
        if (reg == s1[k]->getRegistration())
        {
          cout << "\nName: " << s1[k]->getName() << "\nAge: " << s1[k]->getAge() << endl;
        }
      }
    } else if (option == 2) 
    {
      for (int k = 0; k < students; k++)
      {
        cout << "\nName: " << s1[k]->getName() << "\nAge: " << s1[k]->getAge() << endl;
      }
    } else if (option == 3)
    {
      return 0;
    }
  }
}
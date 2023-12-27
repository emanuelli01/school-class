#include <iostream>
using namespace std;
#include "Student.h"

int main()
{
    Student *s1 = new Student("Carlos", 25, 8963468);

    s1->setAge(27);

    cout << s1->getName() << endl;
    return 0;
}
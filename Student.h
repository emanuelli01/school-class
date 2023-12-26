#include <string>
using namespace std;

class Student
{
    public:
    void setName(string name)
    {
        name = name;
    }
    string getName() {return name;}

    void setAge(int age)
    {
        if (age > 4 && age < 50)
            age = age;
        else age = 0;
    }
    int getAge() {return age;}

    void setRegistration(int registration)
    {
        if (registration > 0 && registration < 999)
            registration = registration;
        else registration = 0;
    }
    int getRegistration(){return registration;}

    private:
    string name;
    int age;
    int registration;
};
#include <string>
using namespace std;

class Student
{
    public:
    Student(string name, int age, int registration);

    void setName(string name);
    string getName();

    void setAge(int age);
    int getAge();

    void setRegistration(int registration);
    int getRegistration();

    private:
    string name;
    int age;
    int registration;
};
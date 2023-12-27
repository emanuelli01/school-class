#include <iostream>
#include "Student.h"
using namespace std;

Student::Student(string name, int age, int registration)
{
    this->name = name;
    this->age = age;
    this->registration = registration;
}

void Student::setName(string name)
{
    this->name = name;
}
string Student::getName(){return name;}

void Student::setAge(int age)
{
    this->age = age;
}
int Student::getAge(){return age;}

void Student::setRegistration(int registration)
{
    this->registration = registration;
}

int Student::getRegistration(){return registration;}
#include <iostream>
#include "students.hpp"

using namespace std;

Students::Students(int pesel, string name, string surname, string sex, string address, double index)
{
    this->pesel=pesel;
    this->name=name;
    this->surname = surname;
    this->sex=sex;
    this->address = address;
    this->salaryIndex=index;
    this->isStudent=true;
}

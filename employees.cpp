#include <iostream>
#include "employees.hpp"

Employess::Employess(int pesel, std::string name, std::string surname, std::string sex, std::string address, double salary)
{
    this->pesel=pesel;
    this->name=name;
    this->surname = surname;
    this->sex=sex;
    this->address = address;
    this->salaryIndex=salary;
    this->isStudent=false;
}

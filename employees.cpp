#include <iostream>
#include "employees.hpp"

Employess::Employess(int pesel, std::string name, std::string surname, Sex sex, std::string address, double salary):
    Person(pesel, name,surname, sex,address)
{
    this->salary=salary;
}

void Employess::Show()
{
    std::cout << "Employess: " << salary;
    Person::Show();
}

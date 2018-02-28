#include "person.hpp"
#include <iostream>

Person::Person()
{}

Person::Person(int pesel, std::string name, std::string surname, Sex sex, std::string address)
{
    this->pesel=pesel;
    this->name=name;
    this->surname = surname;
    this->sex=sex;
    this->address = address;
}

string Person::showSex(Sex sex)
{
    switch(sex)
    {
        case male: return "male";
        case female: return "female";
    default: return "";
    }
}

void Person::Show()
{
    std::cout << " " << name << " " << surname << " " << showSex(sex) << " " << address << endl;
}

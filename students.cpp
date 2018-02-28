#include <iostream>
#include "students.hpp"


Students::Students(int pesel, std::string name, std::string surname, Sex sex, std::string address, int index):
    Person(pesel,name,surname,sex,address)
{
    this->index=index;
}

void Students::Show()
{
    std::cout << "Student: " << index;
    Person::Show();

}

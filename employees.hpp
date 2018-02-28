#ifndef employees_hpp
#define employees_hpp

#include "person.hpp"


class Employess : public Person
{
private:
    int salary;

public:
    Employess(int pesel, std::string name, std::string surname, Sex sex, std::string address,
             double salary);
    void Show();
};

#endif

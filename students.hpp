#ifndef students_hpp
#define students_hpp

#include "person.hpp"
#include <string>

class Students : public Person
{
public:
    Students(int pesel, std::string name, std::string surname, Sex sex, std::string address, int index);
    void Show() override;

private:
    int index;

};


#endif

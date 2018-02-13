#ifndef students_hpp
#define students_hpp

#include "users.hpp"
#include <string>

class Students : public Users
{
public:
    Students(int pesel, std::string name, std::string surname, Sex sex, std::string address,
             double index);

};


#endif

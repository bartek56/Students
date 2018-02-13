#ifndef employees_hpp
#define employees_hpp

#include "users.hpp"

class Employess : public Users
{
public:
    Employess(int pesel, std::string name, std::string surname, std::string sex, std::string address,
             double salary);
};

#endif

#ifndef users_hpp
#define users_hpp

#include <list>

class Users
{
public:
    int pesel;
    std::string name;
    std::string surname;
    std::string sex;
    std::string address;

    void add(Users user);
    void remove(int pesel);
    void showAllUsers();
    void sortUsers();

    std::list<Users> usersList;


};

#endif

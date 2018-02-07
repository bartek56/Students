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
    void findUserThroughtPesel (const int &pesel);
    void findUserThroughtSurname(const std::string &surname);
    std::list<Users> usersList;


};

#endif

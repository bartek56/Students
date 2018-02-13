#ifndef users_hpp
#define users_hpp

#include <list>
#include <string>

class Users
{
public:
    int pesel;
    std::string name;
    std::string surname;
    std::string sex;
    std::string address;
    bool isStudent;
    double salaryIndex;

    void add(Users user);
    void remove(int pesel);
    void showAllUsers();
    void sortUsersByPesel();
    void sortUsersBySalary();
    void sortUsersBySurname();
    void findUserThroughtPesel (const int &pesel);
    void findUserThroughtSurname(const std::string &surname);
    std::list<Users> usersList;
    void showAllStudents();
    void showAllEmployees();
};

#endif

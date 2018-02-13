#ifndef users_hpp
#define users_hpp

#include <list>
#include <string>

enum Sex
{
  female,
  male
};

class Users
{
public:
    int pesel;
    std::string name;
    std::string surname;
    Sex sex;
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

private:
    std::string showSex(Sex sex);
};

#endif

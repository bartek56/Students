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
    int RandomPesel () {return (std::rand()%1000000000);};
    int RandomIndex () {return (std::rand()%100000);};

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
    void generatePesel();
    void generateIndex();

private:
    std::string showSex(Sex sex);
};

#endif

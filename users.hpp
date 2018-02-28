#ifndef users_hpp
#define users_hpp

#include <list>
#include <string>
#include <cstdlib>
#include <deque>

#include "person.hpp"
#include "students.hpp"
#include "employees.hpp"
#include <memory>

class Users
{
public:
    deque<double> d{};
    int pesel;
    std::string name;
    std::string surname;
    Sex sex;
    std::string address;
    bool isStudent;
    double salaryIndex;
    int RandomPesel ();
    int RandomIndex ();

    void add(shared_ptr<Person> user);
    void remove(int pesel);
    void showAllUsers();
    void sortUsersByPesel();
    void sortUsersBySalary();
    void sortUsersBySurname();
    shared_ptr<Person> findUserThroughPesel (const int &pesel);
    shared_ptr<Person> findUserThroughSurname(const std::string &surname);
    std::list<shared_ptr<Person>> usersList;
    void showAllStudents();
    void showAllEmployees();
    void generatePesel();
    void generateIndex();

private:
    std::string showSex(Sex sex);
};

#endif

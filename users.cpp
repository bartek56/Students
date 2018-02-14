#include <iostream>
#include "users.hpp"
#include <algorithm>

using namespace std;

void Users::add(Users user)
{
    usersList.push_front(user);
}

void Users::remove(int pesel)
{
    for (list<Users>::iterator iter=usersList.begin(); iter != usersList.end();++iter)
    {
        if(iter->pesel == pesel)
        {
            iter = usersList.erase(iter);
            cout << "Usunięto użytkownika o peselu: " << pesel << endl;
            return;
        }
    }
    cout << "nie ma użytkownika o peselu " << pesel << endl;
}

void Users::generatePesel()
{
    for (list<Users>::iterator iter=usersList.begin(); iter != usersList.end();++iter)
    {
        iter->RandomPesel();
    }
}

void Users::generateIndex()
{
    for (list<Users>::iterator iter=usersList.begin(); iter != usersList.end();++iter)
    {
        iter->RandomIndex();
    }
}

void Users::showAllUsers()
{
    cout << "All users: " << endl;
    int i=0;
    for (list<Users>::iterator iter=usersList.begin(); iter != usersList.end();++iter)
    {
        cout << i << ": " << iter->name << " " << iter->surname << " " <<
        iter->pesel << " " << showSex(iter->sex) << endl;
        i++;
    }
}

void Users::showAllStudents()
{
    cout << "All students: " << endl;
    int i=0;
    for (list<Users>::iterator iter=usersList.begin(); iter != usersList.end();++iter)
    {
        if(iter->isStudent)
        {
            cout << i << ": " << iter->name << " " << iter->surname << " " <<
            iter->pesel << " " << showSex(iter->sex) << endl;
            i++;
        }
    }
}

void Users::showAllEmployees()
{
    cout << "All employees: " << endl;

    int i=0;
    for (list<Users>::iterator iter=usersList.begin(); iter != usersList.end();++iter)
    {
        if(!iter->isStudent)
        {
            cout << i << ": " << iter->name << " " << iter->surname << " " <<
            iter->pesel << " " << showSex(iter->sex) << endl;
            i++;
        }
    }
}

void Users::sortUsersByPesel()
{
    usersList.sort([&](const Users& first, const Users& second)
    { return (first.pesel < second.pesel); });
}

void Users::sortUsersBySalary()
{
    usersList.sort([&](const Users& first, const Users& second)
    { return (first.salaryIndex < second.salaryIndex); });
}

void Users::sortUsersBySurname()
{
    usersList.sort([&](const Users& first, const Users& second)
    { return (first.surname < second.surname); });
}

void Users::findUserThroughtPesel(const int &pesel)
{

    auto iter = std::find_if(usersList.begin(), usersList.end(), [&](const Users& user)
        { return user.pesel == pesel; });


    if(iter != std::end(usersList))
    {
        cout << "found user with pesel: " << pesel << endl;
        cout << iter->name << " " << iter->surname << " " <<
        iter->pesel << " " << showSex(iter->sex) << " " << iter->salaryIndex << endl;
    }
    else
    {
        cout << "didn't find user with pesel: " << pesel << endl;
    }

}

void Users::findUserThroughtSurname(const std::string  &surname)
{
    auto iter = std::find_if(usersList.begin(), usersList.end(), [&](const Users& user)
        { return user.surname == surname; });


    if(iter != std::end(usersList))
    {
        cout << "found user: " << surname << endl;
        cout << iter->name << " " << iter->surname << " " <<
        iter->pesel << " " << showSex(iter->sex) << " " << iter->salaryIndex << endl;
    }
    else
    {
        cout << "didn't find user with surname: " << surname << endl;
    }

}

string Users::showSex(Sex sex)
{
    switch(sex)
    {
        case male: return "male";
        case female: return "female";
    }
}

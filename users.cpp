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
            cout << "Removed user with national identification number: " << pesel << endl;
            return;
        }
    }
    cout << "not exists user with national identification number: " << pesel << endl;
}

int Users::RandomIndex()
{
	return (std::rand()%100000);
}

int Users::RandomPesel()
{
	return (std::rand()%100000000000);
}

void Users::generatePesel()
{
    for (list<Users>::iterator iter=usersList.begin(); iter != usersList.end();++iter)
    {
        double random = RandomPesel();
        cout << "random national identification number: " << random << endl;
        iter->pesel = random;
    }
}

void Users::generateIndex()
{
    for (list<Users>::iterator iter=usersList.begin(); iter != usersList.end();++iter)
    {
        double salaryIndex = RandomIndex();
        cout << "random salaryIndex: " << salaryIndex << endl;
        iter->salaryIndex = salaryIndex;
    }
}

void Users::showAllUsers()
{
    cout << "All users: " << endl;
    int i=0;
    for (list<Users>::iterator iter=usersList.begin(); iter != usersList.end();++iter)
    {
        cout << i << ": " << iter->name << " " << iter->surname << " " <<
        iter->pesel << " " << iter->salaryIndex << " " << showSex(iter->sex) << endl;
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

void Users::findUserThroughPesel(const int &pesel)
{

    auto iter = std::find_if(usersList.begin(), usersList.end(), [&](const Users& user)
        { return user.pesel == pesel; });


    if(iter != std::end(usersList))
    {
        cout << "found user with national identification number: " << pesel << endl;
        cout << iter->name << " " << iter->surname << " " <<
        iter->pesel << " " << showSex(iter->sex) << " " << iter->salaryIndex << endl;
    }
    else
    {
        cout << "didn't find user with national identification number: " << pesel << endl;
    }

}

void Users::findUserThroughSurname(const std::string  &surname)
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

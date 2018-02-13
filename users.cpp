#include <iostream>
#include "users.hpp"
#include "functions.hpp"
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

void Users::showAllUsers()
{
    int i=0;
    for (list<Users>::iterator iter=usersList.begin(); iter != usersList.end();++iter)
    {
        cout << i << ": " << iter->name << " " << iter->surname << " " <<
        iter->pesel << " " << iter->sex << endl;
        i++;
    }
}

void Users::showAllStudents()
{
    int i=0;
    for (list<Users>::iterator iter=usersList.begin(); iter != usersList.end();++iter)
    {
        if(iter->isStudent)
        {
            cout << i << ": " << iter->name << " " << iter->surname << " " <<
            iter->pesel << " " << iter->sex << endl;
            i++;
        }
    }
}

void Users::showAllEmployees()
{
    int i=0;
    for (list<Users>::iterator iter=usersList.begin(); iter != usersList.end();++iter)
    {
        if(!iter->isStudent)
        {
            cout << i << ": " << iter->name << " " << iter->surname << " " <<
            iter->pesel << " " << iter->sex << endl;
            i++;
        }

    }
}
void Users::sortUsers()
{
    usersList.sort(compare);
}
/*
void Users::findUserThroughtPesel(const int &pesel)
{

    auto iter = std::find_if(usersList.begin(), usersList.end(), [&](const Users& user)
        { return user.pesel == pesel; });


    if(iter != std::end(usersList))
    {
        cout << iter->name << " " << iter->surname << " " <<
        iter->pesel << " " << iter->sex << endl;
    }
    else
    {
        cout << "nie znaleziono użytkownika o peselu: " << pesel << endl;
    }

}

void Users::findUserThroughtSurname(const std::string  &surname)
{
    auto iter = std::find_if(usersList.begin(), usersList.end(), [&](const Users& user)
        { return user.surname == surname; });


    if(iter != std::end(usersList))
    {
        cout << iter->name << " " << iter->surname << " " <<
        iter->pesel << " " << iter->sex << endl;
    }
    else
    {
        cout << "nie znaleziono użytkownika o nazwisku " << surname << endl;
    }


}

*/

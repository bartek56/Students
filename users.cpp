#include <iostream>
#include "users.hpp"
#include "functions.hpp"

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

void Users::sortUsers()
{
    usersList.sort(compare);
}

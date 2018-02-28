#include <iostream>
#include "users.hpp"
#include <algorithm>
#include "employees.hpp"

using namespace std;

void Users::add(shared_ptr<Person>  user)
{
    usersList.push_front(move(user));
}

void Users::showAllUsers()
{
    cout << "All users: " << endl;

    for (shared_ptr<Person> person : usersList)
    {
        person->Show();
    }
}


void Users::remove(int pesel)
{
    for (list<shared_ptr<Person> >::iterator iter=usersList.begin(); iter != usersList.end();++iter)
    {
        shared_ptr<Person>  person = *iter;
        if(person->pesel == pesel)
        {
            usersList.erase(iter);
            cout << "Removed user with national identification number: " << pesel << endl;
            return;
        }
    }
    cout << "not exists user with national identification number: " << pesel << endl;
}

void Users::sortUsersByPesel()
{
<<<<<<< HEAD
    for (list<Users>::iterator iter=usersList.begin(); iter != usersList.end();++iter)
    {
        generate_n(back_inserter(d), 11, [](){ return rand(); });
        //iter->pesel = RandomPesel();
    }
=======
    usersList.sort([&](shared_ptr<Person>  first, shared_ptr<Person>  second)
    { return (first->pesel < second->pesel); });
>>>>>>> 98708a9832eeadb1023837456cfd9795f283d582
}

void Users::sortUsersBySurname()
{
<<<<<<< HEAD
    for (list<Users>::iterator iter=usersList.begin(); iter != usersList.end();++iter)
    {
        iter->pesel = RandomIndex();
    }
=======
    usersList.sort([&](shared_ptr<Person>  first, shared_ptr<Person>  second)
    { return (first->surname < second->surname); });
>>>>>>> 98708a9832eeadb1023837456cfd9795f283d582
}

// *************    RamzesIII       ***********

int Users::RandomIndex()
{
	return (std::srand(time(NULL))%100000);
}

int Users::RandomPesel()
{
	return (std::srand(time(NULL))%100000000000);
}

void Users::generatePesel()
{
    for (list<Person>::iterator iter=usersList.begin(); iter != usersList.end();++iter)
    {
        generate_n(back_inserter(d), 11, [](){ return srand(time(NULL)); });
        //double random = RandomPesel();
        //cout << "random national identification number: " << random << endl;
        //iter->pesel = random;
    }
}

void Users::generateIndex()
{
    for (list<Person>::iterator iter=usersList.begin(); iter != usersList.end();++iter)
    {
        generate_n(back_inserter(d), 6, [](){ return srand(time(NULL)); });
        //double salaryIndex = RandomIndex();
        //cout << "random salaryIndex: " << salaryIndex << endl;
        //iter->salaryIndex = salaryIndex;
    }
}

// ************      RamzesIII      *************

 shared_ptr<Person> Users::findUserThroughPesel(const int &pesel)
{

    auto iter = std::find_if(usersList.begin(), usersList.end(), [&](shared_ptr<Person>  user)
        { return user->pesel == pesel; });


    shared_ptr<Person>  person;

    if(iter != std::end(usersList))
    {

        cout << "found user with national identification number: " << pesel << endl;

        person = *iter;
    }
    else
    {
        cout << "didn't find user with national identification number: " << pesel << endl;
    }

    return person;
}


shared_ptr<Person> Users::findUserThroughSurname(const string  &surname)
{

    auto iter = std::find_if(usersList.begin(), usersList.end(), [&](shared_ptr<Person> user)
        { //return user->surname.compare(surname);
            return user->surname == surname;
});

    shared_ptr<Person> person;
    if(iter != std::end(usersList))
    {
        cout << "found user with surname: " << surname << endl;

        person = *iter;
        return person;
    }

    else
    {
        cout << "didn't find user with surname: " << surname << endl;
    }

    return person;

}


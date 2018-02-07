#include <iostream>
#include "students.hpp"
#include "employees.hpp"
#include "users.hpp"


int main()
{
    Users users;

    Students student1;
    student1.index=1;
    student1.name="Krzysztof";
    student1.surname = "Kowalczyk";
    student1.address = "Wroclaw";
    student1.pesel=644545343;
    student1.sex="man";

    Employess employess1;
    employess1.salary = 4000,00;
    employess1.name = "Jan";
    employess1.surname = "Nowak";
    employess1.address = "Warszawa";
    employess1.pesel = 456213545;
    employess1.sex="man";

    users.add(student1);
    users.add(employess1);

    users.showAllUsers();

    users.findUserThroughtPesel(644545343);
    users.findUserThroughtPesel(4684543);

    users.findUserThroughtSurname("Nowak");
    users.findUserThroughtSurname("Duda");

    return 0;
}


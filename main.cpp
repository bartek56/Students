#include <iostream>
#include "students.hpp"
#include "employees.hpp"
#include "users.hpp"

using namespace std;

int main()
{
    Users users;

    Students student1;
    student1.salaryIndex=1;
    student1.name="Krzysztof";
    student1.surname = "Kowalczyk";
    student1.address = "Wroclaw";
    student1.pesel=644545343;
    student1.sex="man";
    student1.isStudent=true;

    Employess employess1;
    employess1.salaryIndex = 4000,00;
    employess1.name = "Jan";
    employess1.surname = "Nowak";
    employess1.address = "Warszawa";
    employess1.pesel = 456213545;
    employess1.sex="man";
    employess1.isStudent=false;


    users.add(student1);
    users.add(employess1);

    cout << "All users: " << endl;
    users.showAllUsers();
    cout << "All students: " << endl;
    users.showAllStudents();
    cout << "All employees: " << endl;
    users.showAllEmployees();

    /*
    users.findUserThroughtPesel(644545343);
    users.findUserThroughtPesel(4684543);

    users.findUserThroughtSurname("Nowak");
    users.findUserThroughtSurname("Duda");
*/
    return 0;
}


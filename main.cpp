#include <iostream>
#include "students.hpp"
#include "employees.hpp"
#include "users.hpp"

using namespace std;

int main()
{
    /* task 1 */
    Users users;
    Students student1(1,"Krzysztof","Kowalczyk","men","Wroclaw",1354135.0);
    Employess employess1(561,"Jan", "Nowak", "men", "Warszawa", 4000.00);
    users.add(student1);
    users.add(employess1);

    /* task 2 */
    users.findUserThroughtPesel(644545343);
    users.findUserThroughtPesel(4684543);

    users.findUserThroughtSurname("Nowak");
    users.findUserThroughtSurname("Duda");

    /* task 3 */
    users.showAllUsers();
    users.showAllStudents();
    users.showAllEmployees();

    /* task 4 */
    users.sortUsersByPesel();
    users.showAllUsers();
    users.sortUsersBySurname();
    users.showAllUsers();

    return 0;
}


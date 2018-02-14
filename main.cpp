#include <iostream>
#include "students.hpp"
#include "employees.hpp"
#include "users.hpp"

using namespace std;

int main()
{
    /* task 1 */
    Users users;
    Students student1(644545343,"Krzysztof","Kowalczyk",male,"Wroclaw",13541);
    Employess employess1(644545,"Jan", "Nowak", male, "Warszawa", 4000.00);
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
    
    /* task 5 */
    users.generatePesel();
    users.generateIndex();
    users.showAllUsers();

    return 0;
}


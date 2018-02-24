#include <iostream>
#include "students.hpp"
#include "employees.hpp"
#include "users.hpp"
#include "pesel.hpp"

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
    users.findUserThroughPesel(644545343);
    users.findUserThroughPesel(4684543);

    users.findUserThroughSurname("Nowak");
    users.findUserThroughSurname("Duda");

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

    /* task 9 */
    Pesel pesel("8603145f341");
    Pesel pesel2("93081015907");
    Pesel pesel3("95121417312");
    pesel.isValid();
    pesel2.isValid();
    pesel3.isValid();

    return 0;
}


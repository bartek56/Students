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
    auto student1 = make_shared<Students>(644545343, "Krzysztof", "Kowalczyk", male, "Wroclaw", 13541);
    auto employee1 = make_shared<Employess>(644545, "Jan", "Nowak", male, "Warszawa", 4000.00);
    users.add(move(student1));
    users.add(move(employee1));

    users.showAllUsers();
    users.remove(644545343);
    users.showAllUsers();


    /* task 2 */
    //users.findUserThroughPesel(644545343);
    //users.findUserThroughPesel(4684543);

    users.showAllUsers();

    shared_ptr<Person> person = users.findUserThroughSurname("Nowak");
    shared_ptr<Person> person2 = users.findUserThroughSurname("Duda");


	
    /* task 4 */
    /*
    users.sortUsersByPesel();
    users.showAllUsers();
    users.sortUsersBySurname();
    users.showAllUsers();
    */
    /* task 5 */
//    users.generatePesel();
//    users.generateIndex();
//    users.showAllUsers();

    /* task 9 */
//    Pesel pesel("8603145f341");
//    Pesel pesel2("93081015907");
//    Pesel pesel3("95121417312");
//    pesel.isValid();
//    pesel2.isValid();
//    pesel3.isValid();

    return 0;
}


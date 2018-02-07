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

    Employess employess1;
    employess1.name = "Zygmunt";
    employess1.pesel = 456213545;

    users.add(student1);
    users.add(employess1);

    users.showAllUsers();
    /*
    Students students;
    Workers workers;

    //Student student2={7455,"Jan","Nowak"};
    //students.addStudent(student2);
    
    Students student3={123456, 96040812345, "Jan", "Natalis", "M", "ul. Powstańców Śląskich 23/5, Wrocław"};
    students.addStudent(student3);
    
    Workers worker1={72112354321, "Michał", "Górniak", "M", "ul. Grunwaldzka 98/2, Wrocław", 1200};
    workers.addWorkers(worker1);
    
    //Student student1={1454,"Krzysztof","Kowalczyk"};
    //students.addStudent(student1);

    students.ShowAllStudents();
    workers.ShowAllWorkers();
    //students.SortStudentsIndex();
    //students.ShowAllStudents();

    //students.removeStudent(7455);
    //students.removeStudent(48623);

    //students.ShowAllStudents();

    */
    return 0;
}


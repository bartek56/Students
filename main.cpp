#include <iostream>
#include "students.hpp"




int main()
{
    Students students;

    Student student2={7455,"Jan","Nowak"};
    students.addStudent(student2);

    Student student1={1454,"Krzysztof","Kowalczyk"};
    students.addStudent(student1);

    students.ShowAllStudents();
    students.SortStudentsIndex();
    students.ShowAllStudents();

    students.removeStudent(7455);
    students.removeStudent(48623);

    students.ShowAllStudents();

    return 0;
}


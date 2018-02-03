#ifndef students_hpp
#define students_hpp

#include <list>
#include <iostream>


struct Student
{
    int index;
    std::string name;
    std::string surname;
};

class Students
{
public:

    void addStudent(Student student);
    void removeStudent(int index);
    void SortStudentsIndex();
    void ShowAllStudents();

private:
    std::list<Student> studentsList;
};

#endif

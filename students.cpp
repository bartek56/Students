#include <iostream>
#include "functions.hpp"
#include "students.hpp"

using namespace std;

void Students::addStudent(Students student)
{
    studentsList.push_back(student);
}

void Workers::addWorker(Workers worker)
{
    workersList.push_back(worker);
}
/*
void Students::removeStudent(int index)
{
    for (Student const & student: studentsList) {
        if(student.index==index)
        {
            studentsList.remove(student);
            cout << "Usunięto studenta " << student.index <<" "<< student.name  << " " << student.surname << endl;
            return;
        }

    }
    cout << "nie ma studenta o indeksie " << index << endl;
}
*/

void Students::removeStudent(int index)
{
    for (list<Students>::iterator iter=studentsList.begin(); iter != studentsList.end();++iter)
    {
        if(iter->index == index)
        {
            iter = studentsList.erase(iter);
            cout << "Usunięto studenta " << index << endl;
            return;
        }
    }
    cout << "nie ma studenta o indeksie " << index << endl;
}



void Students::SortStudentsIndex()
{
    studentsList.sort(compare);
}

void Students::ShowAllStudents()
{
    int i=0;
    for (list<User>::iterator iter=studentsList.begin(); iter != studentsList.end();++iter)
    {
        cout << i << ": " << iter->name << " " << iter->surname << " " << iter->index << " " <<
        iter->pesel << " " << iter->sex << " " << iter-adress << endl;
        i++;
    }
}

void Workers::ShowAllWorkers()
{
    int i=0;
    for (list<User>::iterator iter=workersList.begin(); iter != workersList.end();++iter)
    {
        cout << i << ": " << iter->name << " " << iter->surname << " " << iter->pesel << " " <<
        iter->sex << " " << iter-adress << " " << iter->income << endl;
        i++;
    }
}

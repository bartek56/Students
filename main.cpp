#include <iostream>
#include <list>

using namespace std;
struct Student
{
    std::string name;
    std::string surname;
    int index;
};

class Students
{
public:
    void addStudent(Student student);
    void removeStudent(int index);
    void SortStudentsIndex();
    void ShowAllStudents();

    list<Student> studentsList;
};

void Students::addStudent(Student student)
{
    studentsList.push_back(student);
}
/*
void Students::removeStudent(int index)
{
    for (Student student: studentsList) {
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
    for (list<Student>::iterator iter=studentsList.begin(); iter != studentsList.end();++iter)
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
bool compare(const Student& first, const Student& second)
{
    return (first.index < second.index);
}

void Students::SortStudentsIndex()
{
    studentsList.sort(compare);
}

void Students::ShowAllStudents()
{
    int i=0;
    for (list<Student>::iterator iter=studentsList.begin(); iter != studentsList.end();++iter)
    {
        cout << i << ": " << iter->index << " " << iter->name << " " << iter->surname << endl;
        i++;
    }
}

int main()
{
    Students students;



    Student student2;
    student2.index=7455;
    student2.name="Jan";
    student2.surname="Nowak";
    students.addStudent(student2);


    Student student1;
    student1.index=1454;
    student1.name="Krzysztof";
    student1.surname="Kowalczyk";
    students.addStudent(student1);


    students.ShowAllStudents();

    students.SortStudentsIndex();

    students.ShowAllStudents();
//    students.removeStudent(7455);
//    students.removeStudent(48623);

    return 0;
}


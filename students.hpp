#ifndef students_hpp
#define students_hpp

#include <list>
#include <vector>
#include <iostream>

/*
struct User            //jedna kolekcja ma przechowywać studentów jak i pracowników
{
    int index;
    int pesel;
    std::string name;
    std::string surname;
    std::string sex;
    std::string adress; //nazwa ulicy
    int income;         //zarobki pracowników
};
 */

class Users
{
    public:
    
    int pesel;
    std::string name;
    std::string surname;
    std::string sex;
    std::string adress;
    
    /*
    void addStudent(User student);
    void addWorker(User worker);
    void removeStudent(int index);
    void SortStudentsIndex();
    void ShowAllStudents();
     */

private:
};

class Students : public Users
{
    int index;
    
public:
    
    void addStudent(Students student);
    void removeStudent(int index);
    void SortStudentsIndex();
    void ShowAllStudents();
    
private:
    std::list<Students> studentsList;
};

class Workers : public Users
{
    int income;
    
public:
    
    void addWorker(Workers worker);
    //void removeWorker(int index);
    //void SortWorkerIndex();
    void ShowAllWorkers();
    
private:
    std::list<Workers> workersList;
};

#endif

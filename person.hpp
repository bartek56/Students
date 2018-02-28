#ifndef person_hpp
#define person_hpp
#include <string>
enum Sex
{
  female,
  male
};
using namespace std;

class Person
{
public:
    Person(int pesel, std::string name, std::string surname, Sex sex, std::string address);
    Person();
    int pesel;
    std::string name;
    std::string surname;
    Sex sex;
    std::string address;
    virtual void Show();

private:
    std::string showSex(Sex sex);
};

#endif

#include<iostream>
#include<Windows.h>
using namespace std;

class Student
{
    char* name;
    char* surname;
    int age;
public:
    Student() 
    {
        name = nullptr;
        surname = nullptr;
        age = 0;
    }
    Student(const char* Name, const char* Surname, int Age)
    {
        name = new char[strlen(Name) + 1];
        strcpy_s(name, strlen(Name) + 1, Name);
        surname = new char[strlen(Surname) + 1];
        strcpy_s(surname, strlen(Surname) + 1, Surname);
        age = Age;
    }
    void Output()
    {
        cout << "Name: " << name << endl
             << "Surname: " << surname << endl << "Age: " << age << endl << endl;
    }
    ~Student()
    {
        delete[] name;
        delete[] surname;
        cout << "Destruct\n";
    }
};

int main()
{
    Student obj1("Oleg", "Popov", 21);
    obj1.Output();
}

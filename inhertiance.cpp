#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class Student : public Person
{
public:
    int rollno;

    Student(string name, int age, int rollno)
        : Person(name, age)   // calling parent constructor
    {
        this->rollno = rollno;
    }

    void getStudentInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
    }
};

// Multi-Level Inheritance
class GraduateStudent : public Student
{
public:

    string researchTopic;

    GraduateStudent(string name, int age, int rollno, string researchTopic)
        : Student(name, age, rollno)
    {
        this->researchTopic = researchTopic;
    }

    void getGraduateInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Research Topic: " << researchTopic << endl;
    }
};

int main()
{
    GraduateStudent g1("Amna", 23, 101, "Artificial Intelligence");

    g1.getGraduateInfo();

    return 0;
}
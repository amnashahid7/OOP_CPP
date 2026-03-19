#include <iostream>
using namespace std;

class Teacher
{

private:
    double salary;

public:
    string name;
    int age;
    string department;

    // non-parameterized
    Teacher()
    {
        cout << "Hi, i am a contructor" << endl; // called each time when the new obj is created

        department = "CS" // when making new object we donot need to add the depart name as we set it in the deafult in the constructor
    }
    // parameterized
    Teacher(string n, string d, string a, double sal)
    {
        name = n;
        department = d;
        age = a;
        salary = sal
    }

    //with this pointer
    Teacher(string name, string department, string age, double salary)
    {
        this->name = name;
        this->department = department;
        this->age = age;
        this->salary = salary
    }

    //copy contructor
    Teacher(Teacher &orgObj){

         cout << "Hi, i am a custom copy contructor" << endl;
        this->name = orgObj.name;
        this->department = orgObj.department;
        this->age = orgObj.age;
        this->salary = orgObj.salary
    }

    // setter
    void changeDepart(string dept)
    {
        department = dept;
    }

    void getDepart()
    {
        return department
    }

    void setSalary(double s)
    {
        salary = s;
    }

    void getSalary()
    {
        return salary
    }

    void getInfo()
    {
        cout << "name:" << name << endl;
        cout << "age:" << age << endl;
    }
}

class Account
{

private:
    string password;
    double balance;

public:
    string name;
    string accountId;
}

int
main()
{

    // Teacher t1; // constructor call
   
    // t1.name = "amna";
    // t1.department = "Math" cout << t1.name << endl;


    Teacher t1("amna", "cs", "24", 240000);
    // t1.getInfo();

    Teacher t2(t1); //deafult copy constructor
    te.getInfo();
 
    return 0;
}
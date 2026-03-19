#include <iostream>
using namespace std;

class Teacher {
public:
    string name;
    string dept;
    string subject;
    double salary;

    void changeDept(string newDept) {
        dept = newDept;
    }
};

int main() {
    Teacher t1;

    t1.name = "Amna";
    t1.dept = "Computer Science";
    t1.subject = "Programming";
    t1.salary = 50000;

    t1.changeDept("Software Engineering");

    cout << "Teacher Name: " << t1.name << endl;
    cout << "Department: " << t1.dept << endl;

    return 0;
}
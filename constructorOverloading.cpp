#include <iostream>
using namespace std;

class Student {
public:
    Student() {
        cout << "Default Constructor\n";
    }

    Student(string name) {
        cout << "Parameterized Constructor: " << name << endl;
    }
};

int main() {
    Student s1;
    Student s2("Amna");

    return 0;
}
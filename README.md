Object Oriented Programming (OOP) in C++

This document explains the basic Object-Oriented Programming (OOP) concepts in C++ with examples.
OOP helps organize programs using classes and objects, making code reusable, modular, and easier to maintain.

1. Classes & Objects
Object

An object is a real-world entity that contains properties (data) and behaviors (functions).

Example:

Teacher

Student

Car

Bank Account

Class

A class is a blueprint or template used to create objects.

It defines:

Properties (variables)

Methods (functions)


2. Access Modifiers

Access modifiers control where class members can be accessed from.

Modifier	Access Level
private	Accessible only inside the class
public	Accessible from anywhere
protected	Accessible inside class and derived classes

⚠️ If not specified, class members are private by default.


3. Core OOP Principles

OOP mainly consists of:

Encapsulation

Abstraction

Inheritance

Polymorphism

4. Encapsulation

Encapsulation means wrapping data and methods together into a single unit (class).

Benefits:

Data security

Data hiding

Better code control


5. Constructors

A constructor is a special function that is automatically called when an object is created.

Rules

Same name as the class

No return type

Automatically invoked

Used for initialization

6. Types of Constructors
1. Non-Parameterized Constructor
class Student {
public:
    string name;

    Student() {
        name = "Amna";
    }
};
2. Parameterized Constructor
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string n, int a) {
        name = n;
        age = a;
    }
};

int main() {
    Student s1("Ali", 22);

    cout << s1.name << " " << s1.age;
}
3. Copy Constructor

Copies data from one object to another.

#include <iostream>
using namespace std;

class Student {
public:
    string name;

    Student(string n) {
        name = n;
    }

    Student(const Student &obj) {
        name = obj.name;
    }
};

int main() {
    Student s1("Amna");

    Student s2 = s1;

    cout << s2.name;
}
7. Shallow Copy vs Deep Copy
Shallow Copy

Copies the pointer reference only.

Both objects point to the same memory.

Deep Copy

Copies the actual memory content, creating a separate copy.

8. Constructor Overloading

When multiple constructors exist with different parameters, it is called constructor overloading.

Example of compile-time polymorphism.

9. this Pointer

this is a special pointer in C++ that points to the current object.

this->property

is equivalent to

(*this).property
Example
#include <iostream>
using namespace std;

class Student {
public:
    string name;

    Student(string name) {
        this->name = name;
    }

    void display() {
        cout << this->name;
    }
};

int main() {
    Student s1("Amna");

    s1.display();
}
10. Destructor

A destructor is used to free memory when an object is destroyed.

Rules:

Same name as class

Starts with ~

No parameters

Automatically called

11. Inheritance

Inheritance allows a child class to acquire properties and methods of a parent class.

Benefits:

Code reuse

Hierarchical structure

Maintainability

Types of Inheritance
1. Single-Level Inheritance

One parent → one child

Person → Student
2. Multi-Level Inheritance

Parent → Child → Grandchild

Person → Student → GraduateStudent
Example

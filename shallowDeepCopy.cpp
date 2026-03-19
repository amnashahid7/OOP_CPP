#include <iostream>
using namespace std;

class Student
{

public:
    string name;
    double* cgpaPtr

    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr= new double;
        *cgpaPtr = cgpa;

    }

    Student(Student &obj){
           this->name = obj.name;
           cgpaPtr= new double;

           *cgpaPtr = obj.cgpaPtr;
     
    }

    ~Student(){
        cout << "hi , i delete everything\n ";
        delete cgpaPtr;
    }

    void getInfo()
    {
        cout << "name:" << name << endl;
        cout << "age:" <<  *cgpaPtr << endl;
    }
}

int main()
{
Student s1("Ali", 3.5);
s1.getInfo()
 
    return 0;
}




const car1={
    name: "honda",
    modal:"2003"
}


car2=car1
car2.modal = "2004"
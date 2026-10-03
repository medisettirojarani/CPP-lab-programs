#include <iostream>
using namespace std;

class Student
{
    int age;

public:
    Student()
    {
        age = 18;
    }

    Student(int a)
    {
        age = a;
    }

    void display()
    {
        cout << "Age = " << age << endl;
    }
};

int main()
{
    Student s1;
    Student s2(20);

    cout << "Default Constructor:" << endl;
    s1.display();

    cout << "Parameterized Constructor:" << endl;
    s2.display();

    return 0;
}
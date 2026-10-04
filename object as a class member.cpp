#include <iostream>
using namespace std;

class Address
{
public:
    void displayAddress()
    {
        cout << "Address: Kakinada" << endl;
    }
};

class Student
{
    Address addr;

public:
    void display()
    {
        cout << "Student Details" << endl;
        addr.displayAddress();
    }
};

int main()
{
    Student s;

    s.display();

    return 0;
}
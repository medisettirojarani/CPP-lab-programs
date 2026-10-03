#include <iostream>
using namespace std;

class Father
{
public:
    void father()
    {
        cout << "This is Father class" << endl;
    }
};

class Mother
{
public:
    void mother()
    {
        cout << "This is Mother class" << endl;
    }
};

class Child : public Father, public Mother
{
public:
    void child()
    {
        cout << "This is Child class" << endl;
    }
};

int main()
{
    Child c;

    c.father();
    c.mother();
    c.child();

    return 0;
}
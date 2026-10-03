#include <iostream>
using namespace std;

class Addition
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Addition obj;

    cout << "Sum of 2 integers = " << obj.add(10, 20) << endl;
    cout << "Sum of 3 integers = " << obj.add(10, 20, 30) << endl;
    cout << "Sum of 2 decimal numbers = " << obj.add(10.5, 20.5) << endl;

    return 0;
}
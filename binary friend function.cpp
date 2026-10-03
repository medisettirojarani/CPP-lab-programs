#include <iostream>
using namespace std;

class Number
{
    int n;

public:
    Number(int x)
    {
        n = x;
    }

    friend Number operator+(Number n1, Number n2);

    void display()
    {
        cout << "Sum = " << n << endl;
    }
};

Number operator+(Number n1, Number n2)
{
    return Number(n1.n + n2.n);
}

int main()
{
    Number n1(10);
    Number n2(20);

    Number n3 = n1 + n2;

    n3.display();

    return 0;
}
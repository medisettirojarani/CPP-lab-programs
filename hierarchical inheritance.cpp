#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Animal eats food" << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Cat meows" << endl;
    }
};

int main()
{
    Dog d;
    Cat c;

    cout << "Dog:" << endl;
    d.eat();
    d.bark();

    cout << endl;

    cout << "Cat:" << endl;
    c.eat();
    c.meow();

    return 0;
}
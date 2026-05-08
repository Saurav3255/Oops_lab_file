#include <iostream>
using namespace std;

// Base Class
class Animal
{
public:
    // Virtual function
    virtual void sound()
    {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived Class
class Dog : public Animal
{
public:
    // Function overriding
    void sound() override
    {
        cout << "Dog barks" << endl;
    }
};

// Another Derived Class
class Cat : public Animal
{
public:
    // Function overriding
    void sound() override
    {
        cout << "Cat meows" << endl;
    }
};

int main()
{
    Animal *ptr;

    Dog d;
    Cat c;

    // Runtime polymorphism
    ptr = &d;
    ptr->sound();

    ptr = &c;
    ptr->sound();

    return 0;
}
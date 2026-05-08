#include <iostream>
using namespace std;

// Abstract Base Class
class Shape
{
public:
    // Pure virtual function
    virtual void area() = 0;
};

// Derived Class - Rectangle
class Rectangle : public Shape
{
private:
    float length, breadth;

public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    void area() override
    {
        cout << "Area of Rectangle = "
             << length * breadth << endl;
    }
};

// Derived Class - Circle
class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    void area() override
    {
        cout << "Area of Circle = "
             << 3.14 * radius * radius << endl;
    }
};

int main()
{
    Shape *ptr;

    Rectangle r(5, 4);
    Circle c(3);

    // Runtime Polymorphism
    ptr = &r;
    ptr->area();

    ptr = &c;
    ptr->area();

    return 0;
}
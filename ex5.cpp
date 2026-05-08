#include <iostream>
using namespace std;

class Number
{
private:
    int x, y;

public:
    // Default Constructor
    Number()
    {
        x = 0;
        y = 0;
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    Number(int a, int b)
    {
        x = a;
        y = b;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Overloaded Constructor
    Number(int a)
    {
        x = a;
        y = 0;
        cout << "Overloaded Constructor Called" << endl;
    }

    // Copy Constructor
    Number(const Number &obj)
    {
        x = obj.x;
        y = obj.y;
        cout << "Copy Constructor Called" << endl;
    }

    // Display Function
    void display()
    {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main()
{
    // Default Constructor
    Number n1;
    n1.display();

    cout << endl;

    // Parameterized Constructor
    Number n2(10, 20);
    n2.display();

    cout << endl;

    // Overloaded Constructor
    Number n3(50);
    n3.display();

    cout << endl;

    // Copy Constructor
    Number n4(n2);
    n4.display();

    return 0;
}
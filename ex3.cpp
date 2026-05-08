#include <iostream>
using namespace std;

// Function Overloading for Sum
int calculate(int a, int b)
{
    return a + b;
}

// Function Overloading for Area of Rectangle
float calculate(float length, float breadth)
{
    return length * breadth;
}

// Function Overloading for Volume of Cube
int calculate(int side)
{
    return side * side * side;
}

int main()
{
    int x, y, side;
    float l, b;

    // Sum
    cout << "Enter two integers: ";
    cin >> x >> y;
    cout << "Sum = " << calculate(x, y) << endl;

    // Area
    cout << "\nEnter length and breadth of rectangle: ";
    cin >> l >> b;
    cout << "Area of Rectangle = " << calculate(l, b) << endl;

    // Volume
    cout << "\nEnter side of cube: ";
    cin >> side;
    cout << "Volume of Cube = " << calculate(side) << endl;

    return 0;
}
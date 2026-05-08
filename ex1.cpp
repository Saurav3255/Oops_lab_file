#include <iostream>
using namespace std;

// Inline functions
inline int add(int a, int b)
{
    return a + b;
}

inline int subtract(int a, int b)
{
    return a - b;
}

inline int multiply(int a, int b)
{
    return a * b;
}

inline float divide(int a, int b)
{
    return (float)a / b;
}

int main()
{
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Addition = " << add(x, y) << endl;
    cout << "Subtraction = " << subtract(x, y) << endl;
    cout << "Multiplication = " << multiply(x, y) << endl;

    if(y != 0)
        cout << "Division = " << divide(x, y) << endl;
    else
        cout << "Division by zero is not possible." << endl;

    return 0;
}
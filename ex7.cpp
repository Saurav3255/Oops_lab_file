#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    // Constructor
    Number(int v = 0)
    {
        value = v;
    }

    // Overloading + operator
    Number operator +(Number obj)
    {
        Number temp;
        temp.value = value + obj.value;
        return temp;
    }

    // Overloading - operator
    Number operator -(Number obj)
    {
        Number temp;
        temp.value = value - obj.value;
        return temp;
    }

    // Overloading ++ operator (Prefix)
    Number operator ++()
    {
        ++value;
        return *this;
    }

    // Overloading == operator
    bool operator ==(Number obj)
    {
        return (value == obj.value);
    }

    // Friend function for << operator
    friend ostream& operator <<(ostream &out, Number obj);
};

// Overloading << operator
ostream& operator <<(ostream &out, Number obj)
{
    out << obj.value;
    return out;
}

int main()
{
    Number n1(20), n2(10), n3;

    // + Operator
    n3 = n1 + n2;
    cout << "Addition = " << n3 << endl;

    // - Operator
    n3 = n1 - n2;
    cout << "Subtraction = " << n3 << endl;

    // ++ Operator
    ++n1;
    cout << "After Increment = " << n1 << endl;

    // == Operator
    if(n1 == n2)
        cout << "Both numbers are equal" << endl;
    else
        cout << "Numbers are not equal" << endl;

    return 0;
}
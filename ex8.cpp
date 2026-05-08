#include <iostream>
using namespace std;

// Base Class
class A
{
public:
    void showA()
    {
        cout << "Class A" << endl;
    }
};

// ---------------- SINGLE INHERITANCE ----------------
class B : public A
{
public:
    void showB()
    {
        cout << "Single Inheritance - Class B" << endl;
    }
};

// ---------------- MULTILEVEL INHERITANCE ----------------
class C : public B
{
public:
    void showC()
    {
        cout << "Multilevel Inheritance - Class C" << endl;
    }
};

// ---------------- HIERARCHICAL INHERITANCE ----------------
class D : public A
{
public:
    void showD()
    {
        cout << "Hierarchical Inheritance - Class D" << endl;
    }
};

// ---------------- MULTIPLE INHERITANCE ----------------
class X
{
public:
    void showX()
    {
        cout << "Class X" << endl;
    }
};

class Y
{
public:
    void showY()
    {
        cout << "Class Y" << endl;
    }
};

class Z : public X, public Y
{
public:
    void showZ()
    {
        cout << "Multiple Inheritance - Class Z" << endl;
    }
};

// ---------------- HYBRID INHERITANCE ----------------
class Hybrid : public C, public D
{
public:
    void showHybrid()
    {
        cout << "Hybrid Inheritance - Class Hybrid" << endl;
    }
};

int main()
{
    cout << "----- Single Inheritance -----" << endl;
    B obj1;
    obj1.showA();
    obj1.showB();

    cout << "\n----- Multilevel Inheritance -----" << endl;
    C obj2;
    obj2.showA();
    obj2.showB();
    obj2.showC();

    cout << "\n----- Hierarchical Inheritance -----" << endl;
    D obj3;
    obj3.showA();
    obj3.showD();

    cout << "\n----- Multiple Inheritance -----" << endl;
    Z obj4;
    obj4.showX();
    obj4.showY();
    obj4.showZ();

    cout << "\n----- Hybrid Inheritance -----" << endl;
    Hybrid obj5;

    // Accessing A through C path
    obj5.C::showA();

    // Accessing D function
    obj5.showD();

    // Accessing C function
    obj5.showC();

    obj5.showHybrid();

    return 0;
}
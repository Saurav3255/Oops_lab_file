#include <iostream>
using namespace std;

class Interest
{
private:
    float principal, rate, time, si;

public:
    // Constructor for dynamic initialization
    Interest(float p, float r, float t)
    {
        principal = p;
        rate = r;
        time = t;

        si = (principal * rate * time) / 100;
    }

    // Display function
    void display()
    {
        cout << "Principal Amount = " << principal << endl;
        cout << "Rate of Interest = " << rate << "%" << endl;
        cout << "Time = " << time << " years" << endl;
        cout << "Simple Interest = " << si << endl;
    }
};

int main()
{
    float p, r, t;

    cout << "Enter Principal Amount: ";
    cin >> p;

    cout << "Enter Rate of Interest: ";
    cin >> r;

    cout << "Enter Time (in years): ";
    cin >> t;

    // Dynamic initialization through constructor
    Interest obj(p, r, t);

    cout << "\nCalculated Details:" << endl;
    obj.display();

    return 0;
}
#include <iostream>
using namespace std;

// Function with default arguments
float simpleInterest(float p, float r = 5.0, float t = 2.0)
{
    return (p * r * t) / 100;
}

int main()
{
    float principal, si;

    cout << "Enter Principal Amount: ";
    cin >> principal;

    // Using default rate and time
    si = simpleInterest(principal);

    cout << "Simple Interest = " << si << endl;

    return 0;
}
#include <iostream>
using namespace std;

// Engine Class
class Engine
{
private:
    int horsepower;

public:
    Engine(int hp)
    {
        horsepower = hp;
    }

    void showEngine()
    {
        cout << "Engine Horsepower: " << horsepower << " HP" << endl;
    }
};

// Car Class contains Engine object
class Car
{
private:
    string brand;
    Engine engine;   // Containership

public:
    Car(string b, int hp) : engine(hp)
    {
        brand = b;
    }

    void showCar()
    {
        cout << "Car Brand: " << brand << endl;
        engine.showEngine();
    }
};

int main()
{
    Car c1("Toyota", 150);

    cout << "Car Details:" << endl;
    c1.showCar();

    return 0;
}
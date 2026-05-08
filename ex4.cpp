#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

    // Static data member
    static int count;

public:
    // Constructor
    Student(int r, string n)
    {
        rollNo = r;
        name = n;
        count++;
    }

    // Display student details
    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    // Static member function
    static void showCount()
    {
        cout << "Total Students = " << count << endl;
    }
};

// Definition of static data member
int Student::count = 0;

int main()
{
    Student s1(101, "Aman");
    Student s2(102, "Riya");
    Student s3(103, "Karan");

    cout << "Student 1 Details:" << endl;
    s1.display();

    cout << "\nStudent 2 Details:" << endl;
    s2.display();

    cout << "\nStudent 3 Details:" << endl;
    s3.display();

    // Calling static member function
    cout << endl;
    Student::showCount();

    return 0;
}
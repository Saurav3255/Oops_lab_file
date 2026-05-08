#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accNo;
    string name;
    float balance;

public:
    // Constructor
    BankAccount(int a, string n, float b)
    {
        accNo = a;
        name = n;
        balance = b;
    }

    // Deposit Function
    void deposit(float amount)
    {
        balance += amount;
        cout << "Amount Deposited Successfully!" << endl;
    }

    // Withdraw Function
    void withdraw(float amount)
    {
        if(amount <= balance)
        {
            balance -= amount;
            cout << "Amount Withdrawn Successfully!" << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    // Display Account Details
    void display()
    {
        cout << "\n----- Account Details -----" << endl;
        cout << "Account Number : " << accNo << endl;
        cout << "Account Holder : " << name << endl;
        cout << "Balance        : " << balance << endl;
    }
};

int main()
{
    int accNo;
    string name;
    float balance, amount;
    int choice;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cin.ignore();

    cout << "Enter Account Holder Name: ";
    getline(cin, name);

    cout << "Enter Initial Balance: ";
    cin >> balance;

    // Create object
    BankAccount account(accNo, name, balance);

    do
    {
        cout << "\n====== Bank Management System ======" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Display Account Details" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;

            case 3:
                account.display();
                break;

            case 4:
                cout << "Thank You for Using Bank System!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 4);

    return 0;
}